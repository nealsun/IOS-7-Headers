/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSArray, NSDictionary, NSMutableDictionary, UIMovieScrubberTrackOverlayView;

__attribute__((visibility("hidden")))
@interface UIMovieScrubberTrackView : UIView
{
    id <UIMovieScrubberTrackViewDataSource> _dataSource;
    id <UIMovieScrubberTrackViewDelegate> _delegate;
    NSArray *_summaryThumbnailViews;
    NSArray *_summaryThumbnailTimestamps;
    NSArray *_summaryThumbnailChildTimestamps;
    NSDictionary *_thumbnailStartXValues;
    NSDictionary *_childThumbnailViews;
    NSMutableDictionary *_thumbnailViews;
    NSArray *_timestamps;
    UIMovieScrubberTrackOverlayView *_overlayView;
    UIView *_maskContainerView;
    struct CGSize _thumbnailSize;
    float _zoomOriginXDelta;
    float _zoomWidthDelta;
    float _unclampedZoomWidthDelta;
    float _zoomAnimationDuration;
    double _duration;
    double _value;
    double _startValue;
    double _endValue;
    struct {
        unsigned int delegateSizeOriginDelta:1;
        unsigned int delegateDidExpand:1;
        unsigned int delegateDidCollapse:1;
        unsigned int delegateWillRequestThumbs:1;
        unsigned int delegateDidRequestThumbs:1;
        unsigned int delegateZoomAnimationDuration:1;
        unsigned int delegateZoomAnimationDelay:1;
        unsigned int needsReload:1;
        unsigned int editing:1;
        unsigned int editingHandle;
        unsigned int zoomIsDisabled:1;
    } _trackFlags;
}

- (void)_unzoomAnimation:(id)arg1 didFinish:(id)arg2 context:(id)arg3;
- (void)_zoomAnimation:(id)arg1 didFinish:(id)arg2 context:(id)arg3;
- (void)unzoom;
- (void)_setOverlayViewIsZoomed:(BOOL)arg1 minValue:(float)arg2 maxValue:(float)arg3;
- (BOOL)zoomAtPoint:(struct CGPoint)arg1;
- (double)zoomAnimationDuration;
- (void)setZoomAnimationDuration:(double)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)_reallyReloadData;
- (void)clear;
- (id)_createImageViewForTimestamp:(id)arg1;
- (void)setThumbnailImage:(struct CGImage *)arg1 forTimestamp:(id)arg2;
- (void)setEndValue:(double)arg1;
- (void)setStartValue:(double)arg1;
- (void)animateFillFramesAway;
- (void)setEditing:(BOOL)arg1;
- (void)setValue:(double)arg1;
@property(nonatomic) id <UIMovieScrubberTrackViewDelegate> delegate;
@property(nonatomic) id <UIMovieScrubberTrackViewDataSource> dataSource;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

