/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <TextInput/TIKeyboardOperation.h>

@class NSString;

@interface TIKeyboardOperationSetMarkedText : TIKeyboardOperation
{
    NSString *_markedText;
    NSString *_inputForMarkedText;
    struct _NSRange _selectedRange;
}

+ (id)operationWithMarkedTextBeforeSelection:(id)arg1 selectedText:(id)arg2 markedTextAfterSelection:(id)arg3 inputString:(id)arg4;
+ (id)operationWithMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 inputString:(id)arg3;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *inputForMarkedText; // @synthesize inputForMarkedText=_inputForMarkedText;
@property(readonly, nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange=_selectedRange;
@property(readonly, nonatomic) NSString *markedText; // @synthesize markedText=_markedText;
- (id)propertiesForDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 inputString:(id)arg3;
- (void)dealloc;

@end

