/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ScreenReaderCore/SCRCMathExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathSubSuperscriptExpression : SCRCMathExpression
{
    SCRCMathExpression *_base;
    SCRCMathExpression *_subscript;
    SCRCMathExpression *_superscript;
}

@property(retain, nonatomic) SCRCMathExpression *base; // @synthesize base=_base;
@property(retain, nonatomic) SCRCMathExpression *superscript; // @synthesize superscript=_superscript;
@property(retain, nonatomic) SCRCMathExpression *subscript; // @synthesize subscript=_subscript;
- (id)latexMathModeDescription;
- (id)mathMLString;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg1 treePosition:(id)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned int)arg2 treePosition:(id)arg3;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;
- (id)_stringToAddForSuperscript:(id)arg1 withPriorDescription:(id)arg2 updatedDescription:(id *)arg3;
- (id)subExpressions;
- (unsigned int)fractionLevel;
- (BOOL)isNumber;
- (BOOL)isBaseSubSuperscript;
- (BOOL)isRangeSubSuperscript;
- (id)description;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

