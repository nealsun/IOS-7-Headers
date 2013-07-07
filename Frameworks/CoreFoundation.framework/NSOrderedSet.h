/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"
#import "NSFastEnumeration.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@interface NSOrderedSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)orderedSetWithSet:(id)arg1;
+ (id)orderedSetWithSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1;
+ (id)orderedSetWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2 copyItems:(BOOL)arg3;
+ (id)orderedSetWithArray:(id)arg1;
+ (id)orderedSetWithArray:(id)arg1 copyItems:(BOOL)arg2;
+ (id)orderedSetWithArray:(id)arg1 range:(struct _NSRange)arg2;
+ (id)orderedSetWithArray:(id)arg1 range:(struct _NSRange)arg2 copyItems:(BOOL)arg3;
+ (id)orderedSetWithObjects:(id)arg1;
+ (id)newOrderedSetWithObjects:(const id *)arg1 count:(unsigned int)arg2;
+ (id)orderedSet;
+ (id)orderedSetWithObject:(id)arg1;
+ (id)orderedSetWithObjects:(const id *)arg1 count:(unsigned int)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSet:(id)arg1;
- (id)initWithSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithOrderedSet:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2 copyItems:(BOOL)arg3;
- (id)initWithArray:(id)arg1;
- (id)initWithArray:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange)arg2 copyItems:(BOOL)arg3;
- (id)initWithObjects:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned int)arg2;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned int)arg2;
- (id)sortedArrayUsingComparator:(id)arg1;
- (id)sortedArrayWithOptions:(unsigned int)arg1 usingComparator:(id)arg2;
- (id)sortedArrayFromRange:(struct _NSRange)arg1 options:(unsigned int)arg2 usingComparator:(id)arg3;
- (id)set;
- (id)array;
- (id)reversedOrderedSet;
- (id)reverseObjectEnumerator;
- (id)objectEnumerator;
- (id)objectsPassingTest:(id)arg1;
- (id)objectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)objectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectPassingTest:(id)arg1;
- (id)objectWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)objectAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)lastObject;
- (BOOL)isSubsetOfSet:(id)arg1;
- (BOOL)isSubsetOfOrderedSet:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToOrderedSet:(id)arg1;
- (BOOL)intersectsSet:(id)arg1;
- (BOOL)intersectsOrderedSet:(id)arg1;
- (id)indexesOfObjectsPassingTest:(id)arg1;
- (id)indexesOfObjectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (unsigned int)indexOfObjectPassingTest:(id)arg1;
- (unsigned int)indexOfObjectWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (unsigned int)indexOfObjectAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (unsigned int)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange)arg2 options:(unsigned int)arg3 usingComparator:(id)arg4;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned int)hash;
- (void)getObjects:(id *)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)firstObject;
- (void)enumerateObjectsUsingBlock:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (unsigned int)countForObject:(id)arg1;
- (unsigned int)countForObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (BOOL)containsObject:(id)arg1;
- (BOOL)containsObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)allObjects;
- (BOOL)isNSOrderedSet__;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfObject:(id)arg1;
- (unsigned int)count;

@end

