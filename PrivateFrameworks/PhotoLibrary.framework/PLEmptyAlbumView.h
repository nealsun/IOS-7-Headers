/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSObject<PLAlbumProtocol>, NSString, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer;

@interface PLEmptyAlbumView : UIView
{
    UIImage *_image;
    UIImage *_landscapeImage;
    NSString *_title;
    NSString *_message;
    struct NSObject *_album;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UILongPressGestureRecognizer *_longPressRecognizer;
    int _filter;
    BOOL _isCameraAlbum;
    BOOL _useLargeImages;
    BOOL _filterInUse;
    int _currentOrientation;
    struct UIEdgeInsets _edgeInsets;
    BOOL _isSharedPhotoStreamList;
}

@property(retain, nonatomic) NSObject<PLAlbumProtocol> *album; // @synthesize album=_album;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) int filter; // @synthesize filter=_filter;
- (BOOL)canBecomeFirstResponder;
- (void)paste:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_longPressGesture:(id)arg1;
- (id)_newTextViewWithText:(id)arg1;
- (id)_newLabelWithText:(id)arg1;
- (id)_messageForAlbum:(struct NSObject *)arg1;
- (id)_titleForAlbum:(struct NSObject *)arg1;
- (id)_emptyRollImageForAlbum:(struct NSObject *)arg1 interfaceOrientation:(int)arg2;
- (void)_sizeLabelToFitView:(id)arg1;
- (void)layoutSubviews;
- (void)setIsSharedPhotoStreamList:(BOOL)arg1;
- (void)setIsCameraAlbum:(BOOL)arg1;
- (void)setPortraitImage:(id)arg1 landscapeImage:(id)arg2;
- (void)setImage:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 useLargeImages:(BOOL)arg2;

@end

