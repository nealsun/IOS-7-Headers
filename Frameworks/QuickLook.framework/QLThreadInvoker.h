/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSError, NSURLConnection;

__attribute__((visibility("hidden")))
@interface QLThreadInvoker : NSObject
{
    NSURLConnection *_connection;
    NSData *_data;
    NSError *_error;
}

- (void)connectionDidFailWithError:(id)arg1;
- (void)connectionDidReceiveDataLengthReceived:(id)arg1;
- (void)connectionDidReceiveData:(id)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 data:(id)arg2 error:(id)arg3;

@end

