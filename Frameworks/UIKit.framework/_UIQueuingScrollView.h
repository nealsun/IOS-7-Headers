/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIScrollView.h>

@class NSArray, NSMutableArray, UIView;

__attribute__((visibility("hidden")))
@interface _UIQueuingScrollView : UIScrollView
{
    id <_UIQueuingScrollViewDelegate> _qDelegate;
    id <_UIQueuingScrollViewDataSource> _qDataSource;
    int _navigationOrientation;
    NSArray *_views;
    NSArray *_wrapperViews;
    UIView *_pendingVisibleView;
    float _pageSpacing;
    NSMutableArray *_viewStateQueue;
    NSMutableArray *_completionStateQueue;
    BOOL _manualScrollInProgress;
    struct {
        unsigned int delegateInterestedInPendingScrolls:1;
        unsigned int delegateInterestedInCommittedScrolls:1;
        unsigned int delegateInterestedInCompletedScrolls:1;
        unsigned int delegateInterestedInBailedOutScrolls:1;
        unsigned int delegateInterestedFinishedScrolling:1;
        unsigned int delegateCanVetoSubviewLayout:1;
        unsigned int dataSourceSuppliesBeforeView:1;
        unsigned int dataSourceSuppliesAfterView:1;
        unsigned int dataSourceInterestedInFlushedViews:1;
    } _delegateFlags;
    struct CGRect _disabledScrollingRegion;
}

@property(nonatomic) struct CGRect disabledScrollingRegion; // @synthesize disabledScrollingRegion=_disabledScrollingRegion;
@property(nonatomic) float pageSpacing; // @synthesize pageSpacing=_pageSpacing;
@property(nonatomic) id <_UIQueuingScrollViewDataSource> qDataSource; // @synthesize qDataSource=_qDataSource;
@property(nonatomic) id <_UIQueuingScrollViewDelegate> qDelegate; // @synthesize qDelegate=_qDelegate;
- (void)_didEndProgrammaticScroll;
- (void)_didEndManualScroll;
- (void)_didEndScroll:(BOOL)arg1;
- (void)_didEndDraggingManualScroll;
- (void)_didScrollWithAnimation:(BOOL)arg1 force:(BOOL)arg2;
- (BOOL)_isScrollInProgress:(BOOL)arg1;
- (BOOL)_isDeceleratingInOppositionToNavigationDirection:(int)arg1;
- (void)_commitGestureDrivenScrollRevealingView:(id)arg1 concealingView:(id)arg2 inDirection:(int)arg3 canComplete:(BOOL)arg4;
- (void)_boundsDidChangeToSize:(struct CGSize)arg1;
- (void)_adjustContentInsets;
- (void)setView:(id)arg1 direction:(int)arg2 animated:(BOOL)arg3 completion:(id)arg4;
- (void)_notifyDelegateDidFinishScrolling;
- (void)_notifyDelegateDidBailoutOfScrollAndRevealedView:(id)arg1;
- (void)_notifyDelegateDidEndManualScroll:(BOOL)arg1 toRevealView:(id)arg2 direction:(int)arg3 animated:(BOOL)arg4 didFinish:(BOOL)arg5 didComplete:(BOOL)arg6;
- (void)_notifyDelegateDidCommitManualScroll:(BOOL)arg1 toRevealView:(id)arg2 concealView:(id)arg3 direction:(int)arg4 animated:(BOOL)arg5 canComplete:(BOOL)arg6;
- (void)_notifyDelegateWillManuallyScroll:(BOOL)arg1 toRevealView:(id)arg2 concealingView:(id)arg3 animated:(BOOL)arg4;
- (void)_enqueueAnimatedScrollInDirection:(int)arg1 withView:(id)arg2 completion:(id)arg3;
- (void)_cleanUpCompletionState:(id)arg1 didFinish:(BOOL)arg2 didComplete:(BOOL)arg3;
- (void)_enqueueCompletionState:(id)arg1;
- (int)_navigationDirectionFromCurrentOffset;
- (int)_navigationDirectionForActiveScroll:(BOOL)arg1;
- (BOOL)isManualScrollInProgress;
- (BOOL)isPreviousScrollCompatibleWithScrollInDirection:(int)arg1;
- (void)_invalidateOffscreenViews;
- (id)_viewAtIndex:(int)arg1 loadingIfNecessary:(BOOL)arg2 updatingContents:(BOOL)arg3 animated:(BOOL)arg4;
- (id)_dequeueViewForIndex:(int)arg1;
- (id)_requestViewForIndex:(int)arg1;
- (void)_replaceViews:(id)arg1 updatingContents:(BOOL)arg2 adjustContentInsets:(BOOL)arg3 animated:(BOOL)arg4;
- (void)_flushView:(id)arg1 animated:(BOOL)arg2;
- (id)_visibleView;
- (id)_viewAfterView:(id)arg1;
- (id)_viewBeforeView:(id)arg1;
- (id)_viewBefore:(BOOL)arg1 view:(id)arg2;
- (BOOL)_dataSourceProvidesViews;
- (void)_setWrappedViewAtIndex:(int)arg1 withView:(id)arg2;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (int)_abuttedPagingEdges;
- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2;
- (void)_scrollViewDidEndDecelerating;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_setFrameAndApplyPageSpacing:(struct CGRect)arg1;
@property(readonly, nonatomic) UIView *visibleView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 navigationOrientation:(int)arg2;

@end

