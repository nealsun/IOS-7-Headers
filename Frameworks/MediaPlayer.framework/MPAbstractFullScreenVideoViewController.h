/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MediaPlayer/MPVideoViewController.h>

#import "MPSwipableViewDelegate.h"

@interface MPAbstractFullScreenVideoViewController : MPVideoViewController <MPSwipableViewDelegate>
{
    unsigned int _requestExitAfterHidingControls:1;
    unsigned int _rotateAfterHidingControls:1;
    unsigned int _showControlsAfterRotate:1;
    unsigned int _autoHidingForItemChange:1;
    unsigned int _scheduledAutoHide:1;
    unsigned int _orientationForStatusBarOverrideActive:1;
    int _orientationForStatusBarOverride;
}

- (int)_validInterfaceOrientation;
- (void)_setStatusBarVisible:(BOOL)arg1 duration:(float)arg2;
- (int)statusBarStyle;
- (void)_hideOverlayWithAnimation:(BOOL)arg1 shouldUpdateAutohideFlag:(BOOL)arg2;
- (void)_hideOverlayWithAnimation:(BOOL)arg1;
- (void)_autohideControlsOverlay;
- (void)scheduleControlsOverlayAutohideAfterDelay:(double)arg1;
- (void)cancelControlsOverlayAutohide;
- (void)hideOverlayAnimated:(BOOL)arg1;
- (void)showOverlayAnimated:(BOOL)arg1;
- (void)transformVideoForInterfaceOrientation:(int)arg1 animate:(BOOL)arg2;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_resumedEventsOnlyNotification:(id)arg1;
- (void)videoView_playbackStateChangedNotification:(id)arg1;
- (void)videoView_bufferingStateChangedNotification:(id)arg1;
- (BOOL)transportControls:(id)arg1 releasedHeldButtonPart:(unsigned long long)arg2;
- (BOOL)transportControls:(id)arg1 heldButtonPart:(unsigned long long)arg2;
- (void)overlayDidEndScrubbing:(id)arg1;
- (void)overlayDidBeginScrubbing:(id)arg1;
- (void)swipableViewHadActivity:(id)arg1;
- (void)swipableView:(id)arg1 tappedWithCount:(unsigned int)arg2 atLocation:(struct CGPoint)arg3;
- (BOOL)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)setDisableControlsAutohide:(BOOL)arg1;
- (BOOL)canShowControlsOverlay;
- (void)setCanShowControlsOverlay:(BOOL)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
- (BOOL)controlsOverlayVisible;
- (BOOL)canHideOverlay:(BOOL)arg1;
- (void)displayVideoViewOnScreen;
- (id)newAlternateTracksTransition;
- (void)setPlayer:(id)arg1;
- (void)setOrientation:(int)arg1 animate:(BOOL)arg2;
- (int)orientationForStatusBar;
- (void)setItem:(id)arg1;
- (BOOL)canDisplayItem:(id)arg1 withInterfaceOrientation:(int)arg2;
- (BOOL)forceScaleToFitInPortrait;
- (void)setInhibitOverlay:(BOOL)arg1;
- (BOOL)inhibitOverlay;
- (void)showOverlayIfNecessary;
- (void)dealloc;
- (id)init;

@end

