/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface TIDocumentState : NSObject <NSSecureCoding>
{
    NSString *_contextBeforeInput;
    NSString *_markedText;
    NSString *_selectedText;
    NSString *_contextAfterInput;
    struct _NSRange _selectedRangeInMarkedText;
}

+ (id)documentStateWithContextBefore:(id)arg1 markedText:(id)arg2 selectedRange:(struct _NSRange)arg3 contextAfter:(id)arg4;
+ (id)documentStateWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3;
+ (BOOL)supportsSecureCoding;
+ (id)documentStateWithText:(id)arg1 selectedRange:(struct _NSRange)arg2;
@property(readonly, nonatomic) struct _NSRange selectedRangeInMarkedText; // @synthesize selectedRangeInMarkedText=_selectedRangeInMarkedText;
@property(readonly, nonatomic) NSString *contextAfterInput; // @synthesize contextAfterInput=_contextAfterInput;
@property(readonly, nonatomic) NSString *selectedText; // @synthesize selectedText=_selectedText;
@property(readonly, nonatomic) NSString *markedText; // @synthesize markedText=_markedText;
@property(readonly, nonatomic) NSString *contextBeforeInput; // @synthesize contextBeforeInput=_contextBeforeInput;
- (BOOL)matchesContextOfDocumentState:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (unsigned int)hashString:(id)arg1 intoHashValue:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)string:(id)arg1 matchesString:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextBefore:(id)arg1 markedText:(id)arg2 selectedText:(id)arg3 contextAfter:(id)arg4 selectedRangeInMarkedText:(struct _NSRange)arg5;
- (void)dealloc;
- (id)documentStateAfterCollapsingSelection;
- (id)documentStateAfterUnmarkingText;
- (id)documentStateAfterSettingMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (id)documentStateAfterDeletingForward;
- (id)documentStateAfterDeletingBackward;
- (id)documentStateAfterInsertingTextAfterSelection:(id)arg1;
- (id)documentStateAfterInsertingText:(id)arg1;
- (unsigned int)inputIndexWithTerminatorPredicate:(id)arg1;
- (id)inputStringWithTerminatorPredicate:(id)arg1;
- (id)inputStemWithTerminatorPredicate:(id)arg1;
- (id)wordPrefixOfString:(id)arg1 withTerminatorPredicate:(id)arg2 reverse:(void)arg3;
- (id)initWithText:(id)arg1 selectedRange:(struct _NSRange)arg2;

@end

