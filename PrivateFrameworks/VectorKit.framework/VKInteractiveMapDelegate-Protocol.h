/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol VKInteractiveMapDelegate <NSObject>
- (void)map:(id)arg1 willTransitionFrom:(int)arg2 to:(int)arg3 duration:(double)arg4;
- (void)map:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
- (void)map:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2;
- (void)map:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)map:(id)arg1 didBecomePitched:(BOOL)arg2;
- (id)map:(id)arg1 painterForOverlay:(id)arg2;
- (void)map:(id)arg1 didFinishAddingAnnotationMarkers:(id)arg2;
- (void)map:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2;
- (void)map:(id)arg1 willAnimateInAnnotationMarkers:(id)arg2;
- (void)map:(id)arg1 didAddAnnotationMarkers:(id)arg2;
- (id)map:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)mapDidStopRegionAnimation:(id)arg1 completed:(BOOL)arg2;
- (void)mapWillStartRegionAnimation:(id)arg1;
- (void)mapDidFinishChangingMapDisplayStyle:(int)arg1;
- (void)mapDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapDidFinishLoadingTiles:(id)arg1;
- (void)mapDidStartLoadingTiles:(id)arg1;
- (void)mapDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (void)mapDidBecomePartiallyDrawn:(id)arg1;
- (void)mapDidDraw:(id)arg1;
- (void)mapDidChangeVisibleRegion:(id)arg1;
@end

