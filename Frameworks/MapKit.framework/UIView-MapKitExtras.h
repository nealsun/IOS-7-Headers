/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class CALayer, MKMapView;

@interface UIView (MapKitExtras)
@property(readonly, nonatomic) struct CADoubleRect _mapkit_doubleFrame;
- (unsigned int)_mapkit_countOfSet:(id)arg1 minusSubset:(id)arg2;
@property(readonly, nonatomic) MKMapView *_mapKit_mapView;
@property(readonly, nonatomic) CALayer *_mapkit_currentLayer;
@end

