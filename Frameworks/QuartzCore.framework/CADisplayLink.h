/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CADisplay;

@interface CADisplayLink : NSObject
{
    void *_impl;
}

+ (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
+ (id)displayLinkWithDisplay:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)invalidate;
@property(nonatomic) int frameInterval;
@property(nonatomic, getter=isPaused) BOOL paused;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double timestamp;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (void)dealloc;
- (id)_initWithDisplayLinkItem:(struct DisplayLinkItem *)arg1;
@property(retain, nonatomic) id userInfo;
@property(readonly, nonatomic) CADisplay *display;

@end

