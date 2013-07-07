/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UIGestureRecognizerDelegatePrivate.h"
#import "UIScrollViewDelegate.h"

@class SKUIClientContext, SKUISlideshowImageScrollView, UIImage, UIView;

@interface SKUISlideshowItemViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate>
{
    SKUIClientContext *_clientContext;
    UIView *_loadingView;
    BOOL _zoomingGestureThresholdBroken;
    struct CGPoint _lastContentOffset;
    float _lastZoomScale;
    id <SKUISlideshowItemViewControllerDelegate> _delegate;
    SKUISlideshowImageScrollView *_imageScrollView;
    int _indexInCollection;
}

@property(nonatomic) int indexInCollection; // @synthesize indexInCollection=_indexInCollection;
@property(readonly, nonatomic) SKUISlideshowImageScrollView *imageScrollView; // @synthesize imageScrollView=_imageScrollView;
@property(nonatomic) __weak id <SKUISlideshowItemViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_pinchGestureAction:(id)arg1;
- (id)_newLoadingView;
- (BOOL)_gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 canBePreventedByGestureRecognizer:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
@property(retain, nonatomic) UIImage *itemImage;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

