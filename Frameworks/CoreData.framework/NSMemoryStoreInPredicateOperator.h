/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSInPredicateOperator.h"

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface NSMemoryStoreInPredicateOperator : NSInPredicateOperator
{
    NSManagedObjectContext *_context;
}

- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (void)dealloc;
- (void)setContext:(id)arg1;

@end

