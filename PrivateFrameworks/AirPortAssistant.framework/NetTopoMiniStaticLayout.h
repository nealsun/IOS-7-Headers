/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CALayer, NSArray, NSMutableArray;

@interface NetTopoMiniStaticLayout : NSObject
{
    id _owningView;
    int _layoutOptions;
    CALayer *_containerLayer;
    NSMutableArray *_topoDeviceLayers;
    NSMutableArray *_connectionLayers;
    NSArray *_topoDevicesDescriptor;
}

@property(nonatomic) int layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(retain, nonatomic) NSArray *topoDevicesDescriptor; // @synthesize topoDevicesDescriptor=_topoDevicesDescriptor;
@property(readonly, nonatomic) NSArray *topoDeviceLayers; // @synthesize topoDeviceLayers=_topoDeviceLayers;
- (void)createLayoutForDevices:(id)arg1;
- (void)performLayout;
- (struct CGImage *)imageForDeviceSpec:(id)arg1 wantSmall:(BOOL)arg2 forContentsScale:(float)arg3;
@property(retain, nonatomic) id owningView;
@property(retain, nonatomic) CALayer *containerLayer; // @synthesize containerLayer=_containerLayer;
- (void)dealloc;
- (void)destroyDeviceLayers;
- (id)initWithContainerLayer:(id)arg1 andOptions:(int)arg2;

@end

