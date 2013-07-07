/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, _CSDBThreadObject;

@interface CSDBThreadedRecordStore : NSObject
{
    struct CSDBRecordStore *_recordStore;
    NSObject<OS_dispatch_queue> *_recordStoreQueue;
    NSString *_identifier;
    _CSDBThreadObject *_thread;
    BOOL _wantsRegister;
}

- (void)performBlock:(id)arg1 afterDelay:(void)arg2;
- (void)performBlock:(id)arg1 waitUntilDone:(void)arg2;
- (BOOL)ownsCurrentThreadOtherwiseAssert:(BOOL)arg1;
- (void)registerClass:(const CDStruct_2cac97d9 *)arg1;
- (void)teardownDatabase;
- (void)_teardownDatabaseOnQueue;
- (void)setupDatabaseWithAllowLocalMigration:(BOOL)arg1 pathBlock:(id)arg2 setupStoreHandler:(void)arg3 connectionInitializer:(void *)arg4 versionChecker:(void *)arg5 migrationHandler:(void *)arg6 schemaVersion:(void *)arg7 registerBlock:(int)arg8;
- (void)dealloc;
- (id)initWithIdentifier:(struct __CFString *)arg1;

@end

