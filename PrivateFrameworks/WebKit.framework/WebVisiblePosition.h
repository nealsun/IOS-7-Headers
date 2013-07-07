/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface WebVisiblePosition : NSObject
{
    struct WebObjectInternal *_internal;
}

+ (id)_wrapVisiblePositionIfValid:(struct VisiblePosition)arg1;
+ (id)_wrapVisiblePosition:(struct VisiblePosition)arg1;
@property(nonatomic) int affinity;
- (id)enclosingRangeWithCorrectionIndicator;
- (id)enclosingRangeWithDictationPhraseAlternatives:(id *)arg1;
- (BOOL)atAlphaNumericBoundaryInDirection:(int)arg1;
- (BOOL)requiresContextForWordBoundary;
- (BOOL)isEditable;
- (id)positionAtStartOrEndOfWord;
- (id)enclosingTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2;
- (BOOL)withinTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2;
- (id)positionOfNextBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2;
- (BOOL)atBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2;
- (id)positionByMovingInDirection:(int)arg1 amount:(unsigned long)arg2;
- (id)positionByMovingInDirection:(int)arg1 amount:(unsigned long)arg2 withAffinityDownstream:(BOOL)arg3;
- (BOOL)directionIsDownstream:(int)arg1;
- (int)textDirection;
- (id)description;
- (int)distanceFromPosition:(id)arg1;
- (int)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (struct VisiblePosition)_visiblePosition;

@end

