/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADTableGrid : NSObject
{
    NSMutableArray *mColumns;
}

- (id)addColumn;
- (id)columnAtIndex:(unsigned int)arg1;
- (unsigned int)columnCount;
- (void)dealloc;
- (id)init;

@end

