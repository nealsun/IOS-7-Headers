/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_xpc_object>, NSString;

@interface UserFSVolume : NSObject
{
    BOOL _isLocked;
    NSString *_deviceName;
    NSObject<OS_xpc_object> *_connection;
}

+ (BOOL)prepareToAccessDeviceName:(id)arg1 error:(id *)arg2;
+ (id)volumeWithDeviceName:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) BOOL isLocked; // @synthesize isLocked=_isLocked;
@property(readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void).cxx_destruct;
- (BOOL)closeAndReturnError:(id *)arg1;
- (BOOL)flushAndReturnError:(id *)arg1;
- (BOOL)deleteFiles:(id)arg1 error:(id *)arg2;
- (id)itemAtPath:(id)arg1 error:(id *)arg2;
- (id)rootDirectoryAndReturnError:(id *)arg1;
- (void)dealloc;
- (id)initWithDeviceName:(id)arg1 error:(id *)arg2;

@end

