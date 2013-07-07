/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VGLProgram.h>

__attribute__((visibility("hidden")))
@interface VGLSolidColorGroundCoverProgram : VGLProgram
{
    int _uVegetationAlpha;
    float _vegetationAlpha;
    int _uVegetationBrightness;
    float _vegetationBrightness;
    int _uVegetationSampler;
    int _vegetationSampler;
    int _uGroundColor;
    struct _VGLColor _groundColor;
}

+ (id)fragName;
+ (id)vertName;
@property(nonatomic) struct _VGLColor groundColor; // @synthesize groundColor=_groundColor;
@property(nonatomic) int vegetationSampler; // @synthesize vegetationSampler=_vegetationSampler;
@property(nonatomic) float vegetationBrightness; // @synthesize vegetationBrightness=_vegetationBrightness;
@property(nonatomic) float vegetationAlpha; // @synthesize vegetationAlpha=_vegetationAlpha;
- (id).cxx_construct;
- (void)setup;

@end

