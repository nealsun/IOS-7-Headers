/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MessageUI/MFAtomView.h>

@class MFComposeRecipient, UITextInputTraits;

@interface MFComposeRecipientAtom : MFAtomView
{
    id <_MFComposeRecipientAtomDelegate> _delegate;
    MFComposeRecipient *_recipient;
    UITextInputTraits *_traits;
    unsigned int _wasSelectedWhenTouchesBegan:1;
    unsigned int _touchesWereCancelled:1;
}

@property(nonatomic) id <_MFComposeRecipientAtomDelegate> delegate; // @synthesize delegate=_delegate;
- (void)moveRight:(id)arg1;
- (void)moveLeft:(id)arg1;
- (id)keyCommands;
- (void)handleTouchAndHold;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) MFComposeRecipient *recipient;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 recipient:(id)arg2 style:(int)arg3;
- (id)initWithFrame:(struct CGRect)arg1 recipient:(id)arg2;

@end

