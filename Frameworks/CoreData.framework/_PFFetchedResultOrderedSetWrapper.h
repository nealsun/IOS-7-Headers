/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSOrderedSet.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _PFFetchedResultOrderedSetWrapper : NSOrderedSet
{
    int _cd_rc;
    NSArray *_underlyingArray;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;
- (id)newArrayFromObjectIDs;
- (id)arrayFromObjectIDs;
- (unsigned int)indexOfManagedObjectForObjectID:(id)arg1;
- (id)managedObjectIDAtIndex:(unsigned int)arg1;
- (id)allObjects;
- (BOOL)containsObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToOrderedSet:(id)arg1;
- (Class)classForArchiver;
- (Class)classForCoder;
- (void)getObjects:(id *)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectEnumerator;
- (id)array;
- (id)sortedArrayWithOptions:(unsigned int)arg1 usingComparator:(id)arg2;
- (id)sortedArrayUsingComparator:(id)arg1;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)indexesOfObjectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (unsigned int)indexOfObjectAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (unsigned int)indexOfObjectWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (unsigned int)indexOfObject:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)willRead;
- (id)descriptionWithLocale:(id)arg1;
- (id)description;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (id)initWithArray:(id)arg1;

@end

