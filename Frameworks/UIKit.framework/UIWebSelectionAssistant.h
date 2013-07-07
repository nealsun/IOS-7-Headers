/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class UILongPressGestureRecognizer, UITapAndAHalfRecognizer, UIWebDocumentView, UIWebSelection, UIWebSelectionView;

__attribute__((visibility("hidden")))
@interface UIWebSelectionAssistant : NSObject <UIGestureRecognizerDelegate>
{
    UIWebDocumentView *_webView;
    UIWebSelectionView *_selectionView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapAndAHalfRecognizer *_tapAndAHalfGestureRecognizer;
    BOOL _enabled;
}

- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
@property(nonatomic) BOOL enabled;
- (void)layoutChangedByScrolling:(BOOL)arg1;
- (void)hideCallout;
- (void)resignedFirstResponder;
- (void)didEndScrollingOverflow;
- (void)willStartScrollingOverflow;
- (void)didEndScrollingOrZoomingPage;
- (void)willStartScrollingOrZoomingPage;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 fromView:(id)arg3;
- (void)scaleChanged;
- (void)tap:(id)arg1;
- (void)makeWebSelection:(id)arg1;
@property(readonly, nonatomic) struct CGRect selectionFrame;
@property(readonly, nonatomic) UIWebSelectionView *selectionView;
@property(readonly, nonatomic) UIWebSelection *selection;
- (void)selectionChanged;
- (void)clearSelection;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)isSelectionGestureRecognizer:(id)arg1;
- (void)setGestureRecognizers;
- (void)dealloc;
- (id)initWithWebView:(id)arg1;

@end

