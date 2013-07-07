/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "CAEAGLLayer.h"

__attribute__((visibility("hidden")))
@interface WebGLLayer : CAEAGLLayer
{
    struct GraphicsLayer *m_layerOwner;
    struct GraphicsContext3D *m_context;
}

- (void)display;
- (struct CGImage *)copyImageSnapshotWithColorSpace:(struct CGColorSpace *)arg1;
- (id)initWithGraphicsContext3D:(struct GraphicsContext3D *)arg1;
- (struct GraphicsLayer *)layerOwner;
- (void)setLayerOwner:(struct GraphicsLayer *)arg1;

@end

