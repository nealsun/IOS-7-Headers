/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"

@class NSConditionLock;

@interface AOSTransaction : NSObject <NSCoding>
{
    unsigned char didSucceed;
    unsigned char didFinish;
    void *result;
    struct __CFError *error;
    void *callbackFunction;
    id callbackBlock;
    struct dispatch_queue_s *callbackQueue;
    void *context;
    NSConditionLock *waitLock;
    void *contextRetain;
    void *contextRelease;
}

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)error;
- (id)result;
- (BOOL)isSuccessful;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

