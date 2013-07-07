/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _PFTask : NSObject
{
    int _cd_rc;
    void *_task;
    void *arguments;
    struct _opaque_pthread_mutex_t lock;
    struct _opaque_pthread_cond_t {
        long __sig;
        char __opaque[24];
    } condition;
    int isFinishedFlag;
}

+ (unsigned long long)getPhysicalMemory;
+ (double)getProcessorSpeed;
+ (int)getNumActiveProcessors;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (void)finalize;
- (void)dealloc;
- (id)initWithFunction:(void *)arg1 withArgument:(void *)arg2 andPriority:(int)arg3;

@end

