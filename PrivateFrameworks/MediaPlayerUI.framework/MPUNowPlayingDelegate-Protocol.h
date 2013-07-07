/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol MPUNowPlayingDelegate <NSObject>

@optional
- (void)nowPlayingController:(id)arg1 nowPlayingApplicationDidChange:(id)arg2;
- (void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2;
- (void)nowPlayingController:(id)arg1 playbackStateDidChange:(BOOL)arg2;
- (void)nowPlayingController:(id)arg1 nowPlayingInfoDidChange:(id)arg2;
- (void)nowPlayingControllerDidStopListeningForNotifications:(id)arg1;
- (void)nowPlayingControllerDidBeginListeningForNotifications:(id)arg1;
@end

