/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, NSString;

__attribute__((visibility("hidden")))
@interface _NSSystemBehaviorSuspension : NSObject
{
    unsigned long long _behaviors;
    NSLock *_lock;
    BOOL _ended;
    NSString *_reason;
}

- (void)_end;
- (void)_begin;
- (id)debugDescription;
- (void)dealloc;
- (id)_initWithBehaviors:(unsigned long long)arg1 reason:(id)arg2;

@end

