/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@interface NSPointerFunctions : NSObject <NSCopying>
{
}

+ (id)pointerFunctionsWithOptions:(unsigned int)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property BOOL usesWeakReadAndWriteBarriers;
@property BOOL usesStrongWriteBarrier;
@property void *relinquishFunction;
@property void *acquireFunction;
@property void *descriptionFunction;
@property void *isEqualFunction;
@property void *hashFunction;
@property void *sizeFunction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(unsigned int)arg1;

@end

