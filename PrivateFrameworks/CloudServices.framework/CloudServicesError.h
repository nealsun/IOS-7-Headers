/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface CloudServicesError : NSObject
{
}

+ (id)errorForHTTPURLResponse:(id)arg1 error:(id)arg2;
+ (id)errorForNSError:(id)arg1 path:(id)arg2 format:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 format:(id)arg3;
+ (id)errorWithCode:(int)arg1 error:(id)arg2 URL:(id)arg3 format:(id)arg4;
+ (id)errorWithCode:(int)arg1 URL:(id)arg2 format:(id)arg3;
+ (id)errorWithCode:(int)arg1 error:(id)arg2 format:(id)arg3;
+ (id)errorWithCode:(int)arg1 format:(id)arg2;
+ (id)sanitizedError:(id)arg1;
+ (long)codeForErrno:(long)arg1;
+ (long)codeForNSError:(id)arg1;

@end

