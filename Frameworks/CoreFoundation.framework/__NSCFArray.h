/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreFoundation/NSMutableArray.h>

__attribute__((visibility("hidden")))
@interface __NSCFArray : NSMutableArray
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeLastObject;
- (void)addObject:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)classForCoder;
- (void)finalize;
- (unsigned int)retainCount;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (oneway void)release;
- (id)retain;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

