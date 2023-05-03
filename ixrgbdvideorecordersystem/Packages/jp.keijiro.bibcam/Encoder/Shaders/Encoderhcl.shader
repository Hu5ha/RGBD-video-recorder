Shader "Hidden/Bibcam/Encoderhue"
{
    Properties
    {
        _textureY("", 2D) = "black" {}
        _textureCbCr("", 2D) = "black" {}
        _HumanStencil("", 2D) = "black" {}
        _EnvironmentDepth("", 2D) = "black" {}
    }

    CGINCLUDE

#include "UnityCG.cginc"
#include "Packages/jp.keijiro.bibcam/Common/Shaders/Common.hlsl"


//timestamp
uint _Code1;
uint _Code2;

// Uniforms from AR Foundation
sampler2D _textureY;
sampler2D _textureCbCr;
sampler2D _HumanStencil;
sampler2D _EnvironmentDepth;

// Additional camera parameters
float2 _DepthRange;
float _AspectFix;



// Metadata
StructuredBuffer<float> _Metadata;

//benchmark
float3 Colorspace(float h)
{
    h = frac(saturate(h)) * 6 - 2;
        float3 rgb = saturate(float3(abs(h - 1) - 1, 2 - abs(h), 2 - abs(h - 2)));
    #ifndef UNITY_COLORSPACE_GAMMA
        rgb = GammaToLinearSpace(rgb);
    #endif
        return rgb;
}

bool EncodeMetadata(float2 uv)
{
    uint2 tc = uv * BibcamFrameSize + 0.5 / BibcamFrameSize;
    tc /= 8;
    bool bit = (asint(_Metadata[min(tc.x, 20)]) >> tc.y) & 1;
    return bit && (tc.x < 20) && (tc.y < 32);
}

// Aspect ratio compensation & vertical flip
float2 UVFix(float2 uv)
{
    uv.y = (0.5 - uv.y) * _AspectFix + 0.5;
    return uv;
}

// Vertex shader
void Vertex(float4 position : POSITION,
            float2 texCoord : TEXCOORD,
            out float4 outPosition : SV_Position,
            out float2 outTexCoord : TEXCOORD)
{
    outPosition = UnityObjectToClipPos(position);
    outTexCoord = texCoord;
}

// Fragment shader
float4 Fragment(float4 position : SV_Position, float2 texCoord : TEXCOORD) : SV_Target
{
    // Metadata
    float m = EncodeMetadata(texCoord);


    //Timestamp
  
    uint bit = floor(texCoord.y * 64);

    bool lo = (_Code1 >> (bit     )) & 1;
    bool hi = (_Code2 >> (bit - 32)) & 1;

   // return bit < 32 ? lo : hi;
    // Color
    float2 uv_c = UVFix(UV_FullToColor(texCoord));
    float y = tex2D(_textureY, uv_c).x;
    float2 cbcr = tex2D(_textureCbCr, uv_c).xy;
    float3 c = YCbCrToSRGB(y, cbcr);

    // Hue-encoded depth
    float depth = tex2D(_EnvironmentDepth, UVFix(UV_FullToDepth(texCoord))).x;
    float3 z = EncodeDepth_hcl(depth, _DepthRange);

    // Human stencil
    //float s = tex2D(_HumanStencil, UVFix(UV_FullToStencil(texCoord))).x;

    //benchmark
    //Benchmark
   // float3 tmp1 = Colorspace(frac(texCoord.x*1.5)/0.98-0.01)*(texCoord.y*1.99+0.01);
        float3 b = float3(0, 0, 0);
    // Multiplexing
    float3 rgb = BibcamMux(texCoord, m, c, z, b);

    // Linear color support
    #ifndef UNITY_NO_LINEAR_COLORSPACE
    rgb = GammaToLinearSpace(rgb);
    #endif

    // Output
    return float4(rgb, 1);
}

    ENDCG

    SubShader
    {
        Pass
        {
            Cull Off ZTest Always ZWrite Off
            CGPROGRAM
            #pragma vertex Vertex
            #pragma fragment Fragment
            ENDCG
        }
    }
}
