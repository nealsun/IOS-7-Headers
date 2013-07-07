/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIControl.h"

#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class CNContact, UIImageView, UILabel;

@interface ABContactPhotoView : UIControl <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate>
{
    BOOL _editing;
    CNContact *_contact;
    id <ABPresenterDelegate> _delegate;
    UIImageView *_contactImageView;
    UILabel *_addPhotoLabel;
    UILabel *_editPhotoLabel;
    UIImageView *_attributionImageView;
}

+ (id)supportedPasteboardTypes;
@property(retain, nonatomic) UIImageView *attributionImageView; // @synthesize attributionImageView=_attributionImageView;
@property(retain, nonatomic) UILabel *editPhotoLabel; // @synthesize editPhotoLabel=_editPhotoLabel;
@property(retain, nonatomic) UILabel *addPhotoLabel; // @synthesize addPhotoLabel=_addPhotoLabel;
@property(retain, nonatomic) UIImageView *contactImageView; // @synthesize contactImageView=_contactImageView;
@property(nonatomic) id <ABPresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)_bounceSmallPhoto;
- (void)_dismissFullScreenPhoto:(id)arg1;
- (void)_presentFullScreenPhoto:(id)arg1;
- (void)_zoomContactPhoto;
- (id)_createImagePickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect)arg2;
- (id)_createImagePicker;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)_presentPhotoEditingSheet;
- (void)updateAttributionBadge;
- (void)updatePhotoWithImage:(id)arg1;
- (void)updatePhoto;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)menuWillHide:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)longPressGesture:(id)arg1;
- (void)tapGesture:(id)arg1;
- (void)setHighlightedFrame:(BOOL)arg1;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithContact:(id)arg1 frame:(struct CGRect)arg2;

@end

