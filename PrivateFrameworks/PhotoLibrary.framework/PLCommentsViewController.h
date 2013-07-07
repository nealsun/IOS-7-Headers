/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PLCloudCommentsChangeObserver.h"
#import "PLDismissableViewController.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class CAGradientLayer, NSCache, PLCloudSharedComment, PLManagedAsset, PLPhotoCommentEntryView, UIBarButtonItem, UIImageView, UITableView, UIView;

@interface PLCommentsViewController : UIViewController <PLCloudCommentsChangeObserver, PLDismissableViewController, UITableViewDelegate, UITableViewDataSource, UITextViewDelegate>
{
    UITableView *_tableView;
    UIView *_tableContainerView;
    PLManagedAsset *_asset;
    CAGradientLayer *_maskLayer;
    PLPhotoCommentEntryView *_entryView;
    PLCloudSharedComment *_justInsertedComment;
    BOOL _justTappedSmileButton;
    BOOL _editMode;
    BOOL _temporaryKeyboardHideReshow;
    BOOL _shouldAdjustInitialScrollPosition;
    float _keyboardOverlap;
    id <PLCommentsViewControllerDelegate> _commentsControllerDelegate;
    UIView *_containerView;
    NSCache *_commentsHeightCache;
    UIImageView *_gradientView;
    BOOL _lastRowMasked;
}

@property(nonatomic) BOOL lastRowMasked; // @synthesize lastRowMasked=_lastRowMasked;
@property(nonatomic) BOOL editMode; // @synthesize editMode=_editMode;
@property(retain, nonatomic) PLCloudSharedComment *justInsertedComment; // @synthesize justInsertedComment=_justInsertedComment;
@property(retain, nonatomic) PLManagedAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) id <PLCommentsViewControllerDelegate> commentsControllerDelegate; // @synthesize commentsControllerDelegate=_commentsControllerDelegate;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_postCommentValidated:(id)arg1;
- (void)cancelCurrentAction:(id)arg1;
- (void)cancelDeleteMode:(id)arg1;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (void)cloudCommentsDidChange:(id)arg1;
- (void)_smileButtonTapped:(id)arg1;
- (BOOL)checkAndAlertMaxLikesReached;
- (void)_addCommentButtonTapped:(id)arg1;
- (BOOL)_checkAndAlertMaxCommentsReachedWhenFinalizing:(BOOL)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)scrollToComment:(id)arg1 animated:(BOOL)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)postCommentSection;
- (int)textCommentSection;
- (int)assetOwnerCommentSection;
- (int)smileCommentSection;
- (BOOL)shouldShowCommentPostingUI;
- (BOOL)showAssetOwnerSection;
- (void)textViewDidChange:(id)arg1;
- (BOOL)_adjustTextEntrySizeForOrientation:(int)arg1;
- (void)_adjustInitialScrollPosition:(BOOL)arg1;
- (id)_firstUnreadCloudComment;
- (void)_updatePostButtonAndPlaceholder;
- (void)setRasterization:(BOOL)arg1;
@property(readonly, nonatomic) UIBarButtonItem *cancelButton;
- (void)setBottomMaskEnabled:(BOOL)arg1;
- (id)_textInPostFieldTrimmingWhitespace;
- (void)updateViewLayoutWithDuration:(double)arg1 completion:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)_updateLayerMaskWithBoundsChange;
- (void)loadView;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (struct CGSize)_preferredViewSizeInContainerSize:(struct CGSize)arg1 forInterfaceOrientation:(int)arg2 tableViewSize:(struct CGSize *)arg3;
- (float)_tableViewHeightForWidth:(float)arg1 interfaceOrientation:(int)arg2;
- (float)_heightForComment:(id)arg1 forWidth:(float)arg2 forInterfaceOrientation:(int)arg3;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

