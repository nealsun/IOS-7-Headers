/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MapKit/MKUserLocationView.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface _MKGemUserLocationView : MKUserLocationView
{
    CALayer *_gemLayer;
}

- (void)_updateLayers;
- (struct UIImage *)staleImage;
- (struct UIImage *)normalImage;
- (id)_baseLayer;
- (void)_setupLayers;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

