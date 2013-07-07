/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSOperationQueue;

@interface ISOperationQueue : NSObject
{
    NSOperationQueue *_queue;
}

+ (id)mainQueue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setSuspended:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setMaxConcurrentOperationCount:(int)arg1;
@property BOOL adjustsMaxConcurrentOperationCount;
- (id)operations;
- (id)name;
- (int)maxConcurrentOperationCount;
- (int)operationCount;
- (void)cancelAllOperations;
- (void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2;
- (void)addOperation:(id)arg1;
- (void)dealloc;
- (id)init;

@end

