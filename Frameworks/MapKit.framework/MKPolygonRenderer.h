/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MapKit/MKOverlayPathRenderer.h>

@class MKPolygon;

@interface MKPolygonRenderer : MKOverlayPathRenderer
{
}

- (void)fillPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)createPath;
@property(readonly, nonatomic) MKPolygon *polygon;
- (id)initWithPolygon:(id)arg1;

@end

