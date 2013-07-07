/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class ADVideoAdOverlayView, AVPlayer, AVPlayerLayer;

@interface ADVideoAdView : UIView
{
    AVPlayerLayer *_playerLayer;
    ADVideoAdOverlayView *_overlayView;
}

@property(retain, nonatomic) ADVideoAdOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
- (void)layoutSublayersOfLayer:(id)arg1;
@property(retain, nonatomic) AVPlayer *player;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

