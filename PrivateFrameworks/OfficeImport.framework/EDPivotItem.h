/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class EDCollection;

__attribute__((visibility("hidden")))
@interface EDPivotItem : NSObject
{
    unsigned int mRepeatedItemCounts;
    int mType;
    EDCollection *mItemIndexes;
}

+ (id)pivotItem;
- (id)itemIndexes;
- (void)setType:(int)arg1;
- (int)type;
- (void)setRepeatedItemCounts:(unsigned int)arg1;
- (unsigned int)repeatedItemCounts;
- (void)dealloc;
- (id)init;

@end

