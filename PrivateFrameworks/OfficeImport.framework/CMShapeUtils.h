/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface CMShapeUtils : NSObject
{
}

+ (long)radToFixedPointDeg:(double)arg1;
+ (double)fixedPointDegToRad:(long)arg1;
+ (float)fontSizeForText:(id)arg1 insideRectangle:(struct CGSize)arg2;
+ (float)intersectionAngleNextToAngle:(float)arg1 isAfter:(BOOL)arg2 nodeSize:(struct CGSize)arg3;
+ (double)getFormulaResultFromCustomGeometry:(id)arg1 atIndex:(unsigned int)arg2;
+ (double)mapFormulaOfType:(int)arg1 argValues:(double *)arg2 isEscher:(BOOL)arg3;
+ (double)mapAdjustCoord:(struct OADAdjustCoord)arg1 geometry:(id)arg2;
+ (id)transformedBoundsWithBounds:(id)arg1 transform:(id)arg2;
+ (id)relatvieBoundsWithAbsoluteInnerBounds:(id)arg1 parentBounds:(id)arg2;
+ (id)internalBoundsWithBounds:(id)arg1 scaleBounds:(struct CGRect)arg2;
+ (id)inscribedBoundsWithBounds:(id)arg1 logicalBounds:(struct CGRect)arg2;
+ (id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)arg1 parentOrientedBounds:(id)arg2 parentLogicalBounds:(struct CGRect)arg3;
+ (id)transformFromBounds:(struct CGRect)arg1 toOrientedBounds:(id)arg2;
+ (struct CGRect)transformRect:(struct CGRect)arg1 scale:(float)arg2 offsetX:(float)arg3 offsetY:(float)arg4;
+ (float)scaleFactorFromLength:(float)arg1 toLength:(float)arg2;
+ (void)setCoordSpaceForCustomeGeometry:(id)arg1 fromSize:(struct CGSize)arg2;
+ (BOOL)isShapeALine:(id)arg1;
+ (long)mapFormulaKeywordValue:(int)arg1 geometry:(id)arg2;
+ (float)normalizedAngle:(float)arg1;
+ (long)radToMilliMinutes:(double)arg1;
+ (double)milliMinutesToRad:(long)arg1;
+ (long)radToNativeAngle:(double)arg1 isEscher:(BOOL)arg2;
+ (double)nativeAngleToRad:(long)arg1 isEscher:(BOOL)arg2;

@end

