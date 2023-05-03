//
//  fragmentShader.metal
//  LiDARDepth
//
//  Created by hu on 03.05.23.
//  Copyright © 2023 Apple. All rights reserved.
//

#include <metal_stdlib>
using namespace metal;

struct VertexOut {
    float4 position [[position]];
    float2 texCoord;
};

vertex VertexOut vertexShader(constant float4 *vertexArray [[buffer(0)]], uint vertexID [[vertex_id]]) {
    VertexOut out;
    out.position = float4(vertexArray[vertexID].xy, 0, 1);
    out.texCoord = vertexArray[vertexID].zw;
        return out;
    }

    fragment float4 fragmentShader(VertexOut in [[stage_in]],
                                   texture2d<float> colorYTexture [[texture(0)]],
                                   texture2d<float> colorCbCrTexture [[texture(1)]]) {
        constexpr sampler colorSampler(mip_filter::linear, mag_filter::linear, min_filter::linear);

        float y = colorYTexture.sample(colorSampler, in.texCoord).r;
        float2 cbCr = colorCbCrTexture.sample(colorSampler, in.texCoord).rg;
        
        // Convert YCbCr to RGB
        float4 ycbcr = float4(y, cbCr, 1.0);
        float4 offset = float4(0.0, -0.5, -0.5, 0.0);
        float4x4 matrix = float4x4(
            1.164,  1.164,  1.164,  0.0,
            0.0,   -0.213,  2.112,  0.0,
            1.793, -0.533,  0.0,    0.0,
            0.0,    0.0,    0.0,    1.0
        );
        
        float4 rgb = matrix * (ycbcr + offset);
        return float4(rgb.rgb, 1.0);
    }

