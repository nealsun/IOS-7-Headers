/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class AXTimer;

@interface AXPostConnectionTask : NSObject
{
    BOOL _didTimeout;
    id _postConnectionBlock;
    AXTimer *_timeoutTimer;
}

@property(nonatomic) BOOL didTimeout; // @synthesize didTimeout=_didTimeout;
@property(retain, nonatomic) AXTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) id postConnectionBlock; // @synthesize postConnectionBlock=_postConnectionBlock;
- (void)_performTask;
- (void)performTask;
- (void)dealloc;
- (id)initWithConnectBlock:(id)arg1 timeout:(void)arg2 accessQueue:(double)arg3;

@end

