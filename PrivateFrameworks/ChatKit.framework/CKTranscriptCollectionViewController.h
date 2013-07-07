/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ChatKit/CKViewController.h>

#import "CKBalloonViewDelegate.h"
#import "CKTranscriptDataDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class CKConversation, CKDispatchQueue, CKTranscriptCollectionView, CKTranscriptData, NSIndexSet, NSObject<OS_dispatch_group>, UITapGestureRecognizer, UIView<CKGradientReferenceView>;

@interface CKTranscriptCollectionViewController : CKViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIAlertViewDelegate, CKTranscriptDataDelegate, CKBalloonViewDelegate>
{
    CKDispatchQueue *_transcriptDispatchQueue;
    CKConversation *_conversation;
    CKTranscriptData *_transcriptData;
    CKTranscriptCollectionView *_collectionView;
    id <CKTranscriptCollectionViewControllerDelegate> _delegate;
    UIView<CKGradientReferenceView> *_gradientReferenceView;
    NSObject<OS_dispatch_group> *_updateAnimationGroup;
    NSIndexSet *_hiddenItems;
    UITapGestureRecognizer *_loggingTapGestureRecognizer;
    id _alertHandler;
}

@property(copy, nonatomic) id alertHandler; // @synthesize alertHandler=_alertHandler;
@property(retain, nonatomic) UITapGestureRecognizer *loggingTapGestureRecognizer; // @synthesize loggingTapGestureRecognizer=_loggingTapGestureRecognizer;
@property(copy, nonatomic) NSIndexSet *hiddenItems; // @synthesize hiddenItems=_hiddenItems;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *updateAnimationGroup; // @synthesize updateAnimationGroup=_updateAnimationGroup;
@property(retain, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView; // @synthesize gradientReferenceView=_gradientReferenceView;
@property(nonatomic) id <CKTranscriptCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CKTranscriptCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) CKTranscriptData *transcriptData; // @synthesize transcriptData=_transcriptData;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
- (id)collectionViewLayout;
- (BOOL)_shouldShowSendAsSMSForMessage:(id)arg1;
@property(readonly, nonatomic) CKDispatchQueue *transcriptDispatchQueue; // @synthesize transcriptDispatchQueue=_transcriptDispatchQueue;
- (void)flushTranscriptDispatchQueue;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)addressBookChanged:(id)arg1;
- (void)localeDidChange:(id)arg1;
- (void)transferUpdated:(id)arg1;
- (void)previewDidChange:(id)arg1;
- (void)transferRestored:(id)arg1;
- (void)_resendMessageAtIndexPath:(id)arg1;
- (void)_downgradeMessageAtIndexPath:(id)arg1;
- (void)_downgradeMessage:(id)arg1 validateSend:(BOOL)arg2;
- (void)touchUpInsideHeaderCellLoadMoreButton:(id)arg1;
- (void)touchUpInsideMessageCellFailureButton:(id)arg1;
- (void)balloonView:(id)arg1 sendAsTextMessage:(id)arg2;
- (void)balloonView:(id)arg1 more:(id)arg2;
- (void)balloonView:(id)arg1 copy:(id)arg2;
- (id)messageForBalloonView:(id)arg1;
- (id)transcriptObjectForBalloonView:(id)arg1;
- (id)indexPathForBalloonView:(id)arg1;
- (void)updateTranscriptWithInsertedIndexes:(id)arg1 deletedIndexes:(id)arg2 reloadedIndexes:(id)arg3 frameIndexes:(id)arg4 tailedIndexes:(id)arg5 anchorIndex:(unsigned int)arg6 animated:(BOOL)arg7 completion:(id)arg8;
- (void)updateTranscriptWithInsertedIndexes:(id)arg1 deletedIndexes:(id)arg2 reloadedIndexes:(id)arg3 frameIndexes:(id)arg4 tailedIndexes:(id)arg5 animated:(BOOL)arg6 completion:(id)arg7;
- (void)configureCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)balloonViewWillResignFirstResponder:(id)arg1;
- (void)balloonViewTapped:(id)arg1 withEvent:(id)arg2;
- (void)balloonViewTouchedDown:(id)arg1 withEvent:(id)arg2;
- (BOOL)balloonView:(id)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3;
- (struct CGRect)calloutTargetRectForBalloonView:(id)arg1;
- (id)menuItemsForBalloonView:(id)arg1;
- (void)balloonViewDidFinishDataDetectorAction:(id)arg1;
- (void)transcriptDataDidUpdate:(id)arg1 inserted:(id)arg2 deleted:(id)arg3 reloaded:(id)arg4 frames:(id)arg5 tailed:(id)arg6;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 orientationForItemAtIndexPath:(id)arg3;
- (struct CGRect)collectionView:(id)arg1 layout:(id)arg2 frameForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)collectionViewDidInset:(id)arg1;
- (void)collectionViewWillInset:(id)arg1 targetContentInset:(inout struct UIEdgeInsets *)arg2;
- (BOOL)collectionView:(id)arg1 isEditableItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)reloadData;
- (void)setScrollAnchor:(float)arg1;
- (void)deleteSelectedItems:(id)arg1;
- (id)selectedItems;
- (id)initWithConversation:(id)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)performResumeDeferredSetup;
- (void)systemApplicationWillEnterForeground;
- (void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2;
- (void)prepareForSuspend;
- (void)significantTimeChange;
- (id)contentScrollView;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)_remoteLogDumpButtonTitle;
- (id)_localLogDumpButtonTitle;
- (void)_performRemoteLogDump;
- (void)_performLocalLogDump;
- (void)__handleLoggingTapped:(id)arg1;
- (void)_showLoggingAlertIfNecessary;
- (void)_tearDownLoggingTapGestureRecognizer;
- (void)_setupLoggingTapGestureRecognizer;
- (BOOL)_shouldShowInternalUILogging;
- (BOOL)_shouldShowUILogging;

@end

