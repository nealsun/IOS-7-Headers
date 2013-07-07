/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSHashTable, NSLock, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface _GEOResourceManifestTileGroupObserverProxy : NSObject
{
    NSHashTable *_observers;
    NSLock *_observersLock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (unsigned int)observersCount;
- (void)forEachObserver:(id)arg1 finished:(void)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

