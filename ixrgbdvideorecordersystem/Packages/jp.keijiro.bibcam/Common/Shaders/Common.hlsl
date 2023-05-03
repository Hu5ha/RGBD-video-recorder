// Bibcam format configuration
static const uint2 BibcamFrameSize = uint2(1920, 1080);

// yCbCr decoding
float3 YCbCrToSRGB(float y, float2 cbcr)
{
    float b = y + cbcr.x * 1.772 - 0.886;
    float r = y + cbcr.y * 1.402 - 0.701;
    float g = y + dot(cbcr, float2(-0.3441, -0.7141)) + 0.5291;
    return float3(r, g, b);
}

//
// Depth hue encoding
//

static const float DepthHueMargin = 0.01;
static const float DepthHuePadding = 0.01;

float3 Hue2RGB(float hue)
{
    float h = hue * 6 - 2;
    float r = abs(h - 1) - 1;
    float g = 2 - abs(h);
    float b = 2 - abs(h - 2);
    return saturate(float3(r, g, b));
}

// All components are in the range [0?1], including hue.
float3 hsv2rgb(float3 c)
{
    float4 K = float4(1.0, 2.0 / 3.0, 1.0 / 3.0, 3.0);
    float3 p = abs(frac(c.xxx + K.xyz) * 6.0 - K.www);
    return c.z * lerp(K.xxx, clamp(p - K.xxx, 0.0, 1.0), c.y);
}
//HSL
float3 HSLtoRGB(float3 HSL)
  {
    float3 RGB = Hue2RGB(HSL.x);
    float C = (1 - abs(2 * HSL.z - 1)) * HSL.y;
    return (RGB - 0.5) * C + HSL.z;
  }
//HCY
static const float3 HCYwts = float3(0.299, 0.587, 0.114);
 
  float3 HCYtoRGB(float3 HCY)
  {
    float3 RGB = Hue2RGB(HCY.x);
    float Z = dot(RGB, HCYwts);
    if (HCY.z < Z)
    {
        HCY.y *= HCY.z / Z;
    }
    else if (Z < 1)
    {
        HCY.y *= (1 - HCY.z) / (1 - Z);
    }
    return (RGB - Z) * HCY.y + HCY.z;
  }
//HCL
  static const float HCLgamma = 3;
  static const float HCLy0 = 100;
  static const float HCLmaxL = 0.530454533953517; // == exp(HCLgamma / HCLy0) - 0.5
  static const float PI = 3.1415926536;
 
  float3 HCLtoRGB(float3 HCL)
  {
    float3 RGB = 0;
    if (HCL.z != 0)
    {
      float H = HCL.x;
      float C = HCL.y;
      float L = HCL.z * HCLmaxL;
      float Q = exp((1 - C / (2 * L)) * (HCLgamma / HCLy0));
      float U = (2 * L - C) / (2 * Q - 1);
      float V = C / Q;
      float A = (H + min(frac(2 * H) / 4, frac(-2 * H) / 8)) * PI * 2;
      float T;
      H *= 6;
      if (H <= 0.999)
      {
        T = tan(A);
        RGB.r = 1;
        RGB.g = T / (1 + T);
      }
      else if (H <= 1.001)
      {
        RGB.r = 1;
        RGB.g = 1;
      }
      else if (H <= 2)
      {
        T = tan(A);
        RGB.r = (1 + T) / T;
        RGB.g = 1;
      }
      else if (H <= 3)
      {
        T = tan(A);
        RGB.g = 1;
        RGB.b = 1 + T;
      }
      else if (H <= 3.999)
      {
        T = tan(A);
        RGB.g = 1 / (1 + T);
        RGB.b = 1;
      }
      else if (H <= 4.001)
      {
        RGB.g = 0;
        RGB.b = 1;
      }
      else if (H <= 5)
      {
        T = tan(A);
        RGB.r = -1 / T;
        RGB.b = 1;
      }
      else
      {
        T = tan(A);
        RGB.r = 1;
        RGB.b = -T;
      }
      RGB = RGB * V + U;
    }
    return RGB;
  }
float3 EncodeDepth_hsv(float depth, float2 range)
{
    // Depth range
    depth = (depth - range.x) / (range.y - range.x);
    // Padding
    depth = depth * (1 - DepthHuePadding * 2) + DepthHuePadding;
    // Margin
    depth = saturate(depth) * (1 - DepthHueMargin * 2) + DepthHueMargin;
    // Hue encoding
    return hsv2rgb(float3(depth, 1, 1));
        
}

float3 EncodeDepth_hsl(float depth, float2 range)
{
    // Depth range
    depth = (depth - range.x) / (range.y - range.x);
    // Padding
    depth = depth * (1 - DepthHuePadding * 2) + DepthHuePadding;
    // Margin
    depth = saturate(depth) * (1 - DepthHueMargin * 2) + DepthHueMargin;
    // Hue encoding
    return HSLtoRGB(float3(depth, 1, 1));
       
}

float3 EncodeDepth_hcy(float depth, float2 range)
{
    // Depth range
    depth = (depth - range.x) / (range.y - range.x);
    // Padding
    depth = depth * (1 - DepthHuePadding * 2) + DepthHuePadding;
    // Margin
    depth = saturate(depth) * (1 - DepthHueMargin * 2) + DepthHueMargin;
    // Hue encoding
    return HCYtoRGB(float3(depth, 1, 1));
        
}

float3 EncodeDepth_hcl(float depth, float2 range)
{
    // Depth range
    depth = (depth - range.x) / (range.y - range.x);
    // Padding
    depth = depth * (1 - DepthHuePadding * 2) + DepthHuePadding;
    // Margin
    depth = saturate(depth) * (1 - DepthHueMargin * 2) + DepthHueMargin;
    // Hue encoding
    return HCLtoRGB(float3(depth, 1, 1));
        
}

float3 EncodeDepth(float depth, float2 range)
{
    // Depth range
    depth = (depth - range.x) / (range.y - range.x);
    // Padding
    depth = depth * (1 - DepthHuePadding * 2) + DepthHuePadding;
    // Margin
    depth = saturate(depth) * (1 - DepthHueMargin * 2) + DepthHueMargin;
    // Hue encoding
    return Hue2RGB(depth);
}

float RGB2Hue(float3 c)
{
    float minc = min(min(c.r, c.g), c.b);
    float maxc = max(max(c.r, c.g), c.b);
    float div = 1 / (6 * max(maxc - minc, 1e-5));
    float r = (c.g - c.b) * div;
    float g = 1.0 / 3 + (c.b - c.r) * div;
    float b = 2.0 / 3 + (c.r - c.g) * div;
    float d = lerp(r, lerp(g, b, c.g < c.b), c.r < max(c.g, c.b));
    return frac(d + 1 - DepthHuePadding / 2) + DepthHuePadding / 2;
}

float Epsilon = 1e-10;
float3 rgb2hsv(float3 RGB)
{
    // Based on work by Sam Hocevar and Emil Persson
    float4 P = (RGB.g < RGB.b) ? float4(RGB.bg, -1.0, 2.0 / 3.0) : float4(RGB.gb, 0.0, -1.0 / 3.0);
    float4 Q = (RGB.r < P.x) ? float4(P.xyw, RGB.r) : float4(RGB.r, P.yzx);
    float C = Q.x - min(Q.w, Q.y);
    float H = abs((Q.w - Q.y) / (6 * C + Epsilon) + Q.z);
    return float3(H, C, Q.x);
}


  float3 RGBtoHCV( float3 RGB)
  {
    float3 HCV = RGB2Hue(RGB);
    float S = HCV.y / (HCV.z + Epsilon);
    return float3(HCV.x, S, HCV.z);
  }

float3 RGBtoHSL( float3 RGB)
  {
    float3 HCV = RGB2Hue(RGB);
    float L = HCV.z - HCV.y * 0.5;
    float S = HCV.y / (1 - abs(L * 2 - 1) + Epsilon);
    return float3(HCV.x, S, L);
  }

float3 RGBtoHCY( float3 RGB)
  {
    // Corrected by David Schaeffer
    float3 HCV = RGB2Hue(RGB);
    float Y = dot(RGB, HCYwts);
    float Z = dot(Hue2RGB(HCV.x), HCYwts);
    if (Y < Z)
    {
      HCV.y *= Z / (Epsilon + Y);
    }
    else
    {
      HCV.y *= (1 - Z) / (Epsilon + 1 - Y);
    }
    return float3(HCV.x, HCV.y, Y);
  }

float3 RGBtoHCL( float3 RGB)
  {
    float3 HCL;
    float H = 0;
    float U = min(RGB.r, min(RGB.g, RGB.b));
    float V = max(RGB.r, max(RGB.g, RGB.b));
    float Q = HCLgamma / HCLy0;
    HCL.y = V - U;
    if (HCL.y != 0)
    {
      H = atan2(RGB.g - RGB.b, RGB.r - RGB.g) / PI;
      Q *= U / V;
    }
    Q = exp(Q);
    HCL.x = frac(H / 2 - min(frac(H), frac(-H)) / 6);
    HCL.y *= Q;
    HCL.z = lerp(-U, V, Q) / (HCLmaxL * 2);
    return HCL;
  }


float DecodeDepth_hsv(float3 rgb, float2 range)
{
    // hsv decoding
    float depth = rgb2hsv(rgb).x;
    // Padding/margin
    depth = (depth - DepthHueMargin ) / (1 - DepthHueMargin  * 2);
    depth = (depth - DepthHuePadding) / (1 - DepthHuePadding * 2);
    // Depth range
    return lerp(range.x, range.y, depth);
}

float DecodeDepth(float3 rgb, float2 range)
{
    // Hue decoding
    float depth = RGB2Hue(rgb);
    // Padding/margin
    depth = (depth - DepthHueMargin ) / (1 - DepthHueMargin  * 2);
    depth = (depth - DepthHuePadding) / (1 - DepthHuePadding * 2);
    // Depth range
    return lerp(range.x, range.y, depth);
}

float DecodeDepth_hsl(float3 rgb, float2 range)
{
    // Hue decoding
    float depth = RGBtoHSL(rgb);
    // Padding/margin
    depth = (depth - DepthHueMargin ) / (1 - DepthHueMargin  * 2);
    depth = (depth - DepthHuePadding) / (1 - DepthHuePadding * 2);
    // Depth range
    return lerp(range.x, range.y, depth);
}

float DecodeDepth_hcy(float3 rgb, float2 range)
{
    // Hue decoding
    float depth = RGBtoHCY(rgb);
    // Padding/margin
    depth = (depth - DepthHueMargin ) / (1 - DepthHueMargin  * 2);
    depth = (depth - DepthHuePadding) / (1 - DepthHuePadding * 2);
    // Depth range
    return lerp(range.x, range.y, depth);
}

float DecodeDepth_hcl(float3 rgb, float2 range)
{
    // Hue decoding
    float depth = RGBtoHCL(rgb);
    // Padding/margin
    depth = (depth - DepthHueMargin ) / (1 - DepthHueMargin  * 2);
    depth = (depth - DepthHuePadding) / (1 - DepthHuePadding * 2);
    // Depth range
    return lerp(range.x, range.y, depth);
}

//
// +-----+-----+  C: Color
// |  Z  |  C  |  Z: Hue-encoded depth
// +-----+-----+  
// | M   |  B  |  M: Metadata
// +-----+-----+  B: Black
//

float2 UV_FullToDepth(float2 uv)
{
    uv *= 2;
    uv.y -= 1;
    return uv;
}

float2 UV_FullToColor(float2 uv)
{
    uv *= 2;
    uv.x -= 1;
    uv.y -= 1;
    return uv;
}

float2 UV_FullToMetadata(float2 uv)
{
    uv *= 2;
    return uv;
}

float2 UV_FullToBlack(float2 uv)
{
    uv *= 2;
    uv.x -= 1;
    return uv;
}

float2 UV_DepthToFull(float2 uv)  //Here is Z
{
    return uv * 0.5 + float2(0, 0.5);
}

float2 UV_ColorToFull(float2 uv)
{
    uv.x = lerp(0.5, 1, uv.x);
    uv.y = lerp(0.5, 1, uv.y);

    return uv;
}

float2 UV_MetadataToFull(float2 uv)
{
    return uv * 0.5;
}

float2 UV_BlackToFull(float2 uv)
{
    uv.x = lerp(0.5, 1, uv.x);
    uv.y = lerp(0, 0.5, uv.y);

    return uv;
}

// Multiplexer

float3 BibcamMux(float2 uv, float m, float3 c, float3 z, float3 b)
{
    return uv.x > 0.5 ? (uv.y >0.5? c :b) : (uv.y > 0.5 ? z : float3(0, 0, m));
   
}
