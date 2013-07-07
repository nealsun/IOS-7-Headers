/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDCollection : NSObject <NSCopying>
{
    NSMutableArray *mObjects;
}

+ (id)collectionWithObject:(id)arg1;
+ (id)collection;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfObject:(id)arg1;
- (unsigned int)addOrEquivalentObject:(id)arg1;
- (unsigned int)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (id)init;

@end

