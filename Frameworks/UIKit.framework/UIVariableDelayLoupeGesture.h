/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UILongPressGestureRecognizer.h>

@class UIResponder<UITextInput>;

__attribute__((visibility("hidden")))
@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer
{
    UIResponder<UITextInput> *_textView;
}

@property UIResponder<UITextInput> *textView; // @synthesize textView=_textView;
- (void)startTimer;
- (BOOL)isCloseToCaret;
- (void)invalidate;

@end

