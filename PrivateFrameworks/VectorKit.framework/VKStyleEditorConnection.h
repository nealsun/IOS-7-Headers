/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class VKMapView;

__attribute__((visibility("hidden")))
@interface VKStyleEditorConnection : NSObject
{
    VKMapView *_mapView;
}

@property(retain, nonatomic) VKMapView *mapView; // @synthesize mapView=_mapView;
- (void)runServer;
- (id)messageReceived:(id)arg1 userInfo:(id)arg2;

@end

