/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSInvocation;

__attribute__((visibility("hidden")))
@interface UIKeyboardInputManagerClientRequest : NSObject
{
    NSInvocation *_invocation;
    unsigned int _errorCount;
}

@property(nonatomic) unsigned int errorCount; // @synthesize errorCount=_errorCount;
- (id)untargetedInvocationWithInvocation:(id)arg1;
@property(readonly, nonatomic) NSInvocation *invocation;
- (id)initWithInvocation:(id)arg1;
- (void)dealloc;

@end

