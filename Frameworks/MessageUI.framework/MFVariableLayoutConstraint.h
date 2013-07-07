/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface MFVariableLayoutConstraint : NSObject
{
    BOOL _cachedInterpolatedValueIsValid;
    float _cachedInterpolatedValue;
    float _medianValue;
    id _interpolationFormula;
}

+ (int)_medianContentSizeIndex;
+ (id)medianContentSizeCategory;
@property(nonatomic) id interpolationFormula; // @synthesize interpolationFormula=_interpolationFormula;
@property(nonatomic) float medianValue; // @synthesize medianValue=_medianValue;
- (void)_didReceiveContentSizeCategoryNameDidChageNotification:(id)arg1;
- (float)interpolatedValue;
- (id)initWithMedianConstraintValue:(float)arg1 interpolationFormula:(id)arg2;
- (void)dealloc;

@end

