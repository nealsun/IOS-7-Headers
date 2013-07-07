/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class UIButton;

@interface CKTranscriptToolbarView : UIView
{
    UIButton *_editButton;
    UIButton *_contactButton;
    UIButton *_cancelButton;
    BOOL _hasContact;
    BOOL _isGroupMessage;
    BOOL _cancelButtonVisible;
    id <CKTranscriptHeaderViewDelegate> _delegate;
}

@property(nonatomic, getter=isCancelButtonVisible) BOOL cancelButtonVisible; // @synthesize cancelButtonVisible=_cancelButtonVisible;
@property(nonatomic) BOOL isGroupMessage; // @synthesize isGroupMessage=_isGroupMessage;
@property(nonatomic) BOOL hasContact; // @synthesize hasContact=_hasContact;
@property(nonatomic) id <CKTranscriptHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_buttonClicked:(id)arg1;
- (struct CGRect)frameForButton:(short)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)dealloc;
- (id)initAsGroupMessage:(BOOL)arg1 hasMessages:(BOOL)arg2;

@end

