/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "MPUCZCollectionViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CADisplayLink, CAMediaTimingFunction, MPImageCache, MPUCZCollectionViewController, MPUCoverMaskView, MPUDataSource, NSIndexPath, UIPinchGestureRecognizer, UIView, UIViewController<MPUCoverZoomDetailViewControllerProtocol>;

@interface MPUCoverZoomViewController : UIViewController <MPUCZCollectionViewControllerDelegate, UIGestureRecognizerDelegate>
{
    MPUDataSource *_dataSource;
    id <MPUCoverZoomViewControllerDelegate> _delegate;
    UIViewController<MPUCoverZoomDetailViewControllerProtocol> *_detailViewController;
    double _animationStartTimeInterval;
    double _animationDuration;
    float _animationEndProgress;
    float _animationStartProgress;
    CADisplayLink *_animationTimer;
    MPUCZCollectionViewController *_collectionViewController;
    int _coverCountPerColumn;
    MPImageCache *_imageCache;
    MPUCoverMaskView *_maskView;
    float _pinchContentOffsetDelta;
    NSIndexPath *_pinchContentOffsetIndexPath;
    int _pinchDirection;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    BOOL _pinching;
    CAMediaTimingFunction *_timingFunction;
    UIView *_transformView;
    MPUCZCollectionViewController *_transitionCollectionViewController;
    int _transitionCoverCountPerColumn;
    struct CGSize _transitionEndItemSize;
    struct CGSize _transitionStartItemSize;
    float _transitionStartScale;
    struct CGAffineTransform _unzoomedAlbumViewTransform;
    BOOL _zoomed;
}

@property(nonatomic) __weak id <MPUCoverZoomViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateContentOffsetForCollectionView:(id)arg1;
- (void)_updateContentOffset;
- (void)_setTransitionProgress:(float)arg1;
- (void)_removeTransitionCollectionViewForEndProgress:(float)arg1;
- (unsigned int)_minimumNumberOfRows;
- (unsigned int)_maximumNumberOfRows;
- (void)_endTransitionAtProgress:(float)arg1 velocity:(float)arg2;
- (unsigned int)_defaultNumberOfRows;
- (float)_collectionViewHeightForItemSize:(struct CGSize)arg1 coverCountPerColumn:(unsigned int)arg2;
- (void)_beginTransitionForScale:(float)arg1;
- (void)_pinchAction:(id)arg1;
- (void)_displayLinkAction:(id)arg1;
- (id)imageRequestForEntity:(id)arg1;
- (float)imageAspectRatio;
- (void)collectionViewController:(id)arg1 didSelectCell:(id)arg2 atIndexPath:(id)arg3;
- (void)detailViewControllerRequestsExit:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;

@end

