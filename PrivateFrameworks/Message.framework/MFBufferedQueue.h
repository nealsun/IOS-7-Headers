/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface MFBufferedQueue : NSObject
{
    unsigned int _maximumSize;
    double _maximumLatency;
    double _timeOfLastFlush;
    NSMutableArray *_queue;
    unsigned int _currentSize;
}

@property(nonatomic) double maximumLatency; // @synthesize maximumLatency=_maximumLatency;
@property(nonatomic) unsigned int maximumSize; // @synthesize maximumSize=_maximumSize;
@property(readonly, nonatomic) unsigned int size; // @synthesize size=_currentSize;
- (BOOL)handleItems:(id)arg1;
- (unsigned int)sizeForItem:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)flush;
- (void)removeAllObjects;
- (BOOL)addItem:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;

@end

