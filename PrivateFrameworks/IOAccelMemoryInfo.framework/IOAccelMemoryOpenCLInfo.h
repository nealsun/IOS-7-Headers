/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface IOAccelMemoryOpenCLInfo : NSObject
{
    int pid;
    NSString *cl_context;
    unsigned long long cl_mem;
    NSString *objectType;
    NSString *objectDescription;
    id _expansionData;
}

@property(retain) NSString *objectDescription; // @synthesize objectDescription;
@property(retain) NSString *objectType; // @synthesize objectType;
@property unsigned long long cl_mem; // @synthesize cl_mem;
@property(retain) NSString *cl_context; // @synthesize cl_context;
@property int pid; // @synthesize pid;
- (void)dealloc;
- (id)description;

@end

