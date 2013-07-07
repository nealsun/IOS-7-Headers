/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CAContext, CALayer;

@interface CARenderer : NSObject
{
    struct CARendererPriv *_priv;
}

+ (id)rendererWithEAGLContext:(id)arg1 options:(id)arg2;
- (void)endFrame;
- (void)render;
- (BOOL)hasMissingContent;
- (double)nextFrameTime;
- (void)addUpdateRect:(struct CGRect)arg1;
- (struct CGRect)updateBounds;
- (void)beginFrameAtTime:(double)arg1 timeStamp:(CDStruct_e50ab651 *)arg2;
@property struct CGRect bounds;
@property(retain) CALayer *layer;
- (void)dealloc;
- (id)_initWithEAGLContext:(id)arg1 options:(id)arg2;
- (id)_initWithOptions:(id)arg1;
@property id <CARendererDelegate> delegate;
@property(retain) CAContext *context;

@end

