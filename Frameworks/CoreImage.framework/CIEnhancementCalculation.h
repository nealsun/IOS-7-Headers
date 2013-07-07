/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class EnhancementHistogram;

__attribute__((visibility("hidden")))
@interface CIEnhancementCalculation : NSObject
{
    CDStruct_e04e1a92 originalFaceColor;
    EnhancementHistogram *lumHist;
    EnhancementHistogram *rgbSumHist;
    EnhancementHistogram *satHist;
    EnhancementHistogram *borderHist;
    float exposureValue;
    float maxShadow;
    float minShadow;
    float exposureValueAtZeroShadow;
    float curvePercent;
    BOOL faceInputSet;
    float percentFaceChange;
}

+ (float)bestWarmthForI:(float)arg1 q:(float)arg2 percentChange:(float *)arg3;
@property(readonly) EnhancementHistogram *borderHist; // @synthesize borderHist;
@property(readonly) EnhancementHistogram *satHist; // @synthesize satHist;
@property(readonly) EnhancementHistogram *rgbSumHist; // @synthesize rgbSumHist;
@property(readonly) EnhancementHistogram *lumHist; // @synthesize lumHist;
- (void)printHistogramsDownsampledTo:(unsigned int)arg1;
- (void)printAnalysis;
- (void)printHistogram:(id)arg1 downsampledTo:(unsigned int)arg2;
- (void)downSampleHistogram:(id)arg1 to:(unsigned int)arg2 storeIn:(float *)arg3;
- (id)rawShadow;
- (id)shadow;
- (int)putShadowsAnalysisInto:(float *)arg1;
- (struct CGPoint)curvePointAtIndex:(unsigned long)arg1;
- (unsigned long)curveCount;
- (id)vibrance;
@property(readonly) CDStruct_e04e1a92 originalFaceColor; // @synthesize originalFaceColor;
- (id)faceBalanceWarmth;
- (id)faceBalanceStrength;
- (void)setShadowsMin:(float)arg1 max:(float)arg2 zeroExposure:(float)arg3;
- (void)setExposureValue:(float)arg1;
- (void)setupFaceColor:(id)arg1 redIndex:(int)arg2 greenIndex:(int)arg3 blueIndex:(int)arg4;
- (void)setFaceColorFromChromaI:(float)arg1 andChromaQ:(float)arg2;
- (void)setSaturationHistogram:(id)arg1;
- (void)setBorderHistogram:(id)arg1;
- (void)setRGBSumHistogram:(id)arg1;
- (void)setLuminanceHistogram:(id)arg1;
- (void)setCurvePercent:(float)arg1;
- (void)dealloc;
- (id)init;

@end

