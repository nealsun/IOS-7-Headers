/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSHashTable;

__attribute__((visibility("hidden")))
@interface NSKeyValueObservationInfo : NSObject
{
    int _retainCountMinusOne;
    NSArray *_observances;
    unsigned int _cachedHash;
    BOOL _cachedIsShareable;
    NSHashTable *_observables;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (id)_initWithObservances:(id *)arg1 count:(unsigned int)arg2;

@end

