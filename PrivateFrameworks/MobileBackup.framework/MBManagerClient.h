/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MobileBackup/MBManager.h>

#import "MBConnectionHandler.h"

@class MBConnection, NSObject<OS_dispatch_queue>;

@interface MBManagerClient : MBManager <MBConnectionHandler>
{
    MBConnection *_conn;
    int _stateToken;
    NSObject<OS_dispatch_queue> *_eventQueue;
}

- (void)connectionWasInvalid:(id)arg1;
- (void)connectionWasInterrupted:(id)arg1;
- (void)connection:(id)arg1 didReceiveMessage:(id)arg2;
- (id)_sendRequest:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
- (id)_sendRequest:(id)arg1 arguments:(id)arg2;
- (void)_establishConnection;
- (void)repair;
- (void)rebootDevice;
- (BOOL)allowiTunesBackup;
- (void)setAllowiTunesBackup:(BOOL)arg1;
- (int)getLogLevel;
- (void)setLogLevel:(int)arg1;
- (id)restoreInfo;
- (id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)deleteItemFromBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2 domainName:(id)arg3 relativePath:(id)arg4 error:(id *)arg5;
- (BOOL)addFileToBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2 domainName:(id)arg3 relativePath:(id)arg4 fromPath:(id)arg5 error:(id *)arg6;
- (BOOL)extractItemFromBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2 domainName:(id)arg3 relativePath:(id)arg4 toPath:(id)arg5 error:(id *)arg6;
- (void)setBackupEnabled:(BOOL)arg1 forDomainName:(id)arg2;
- (BOOL)isBackupEnabledForDomainName:(id)arg1;
- (BOOL)removeDomainName:(id)arg1 error:(id *)arg2;
- (id)domainInfoList;
- (id)domainInfoForName:(id)arg1;
- (unsigned long long)nextBackupSize;
- (BOOL)startScanWithError:(id *)arg1;
- (BOOL)releaseLockWithBackupUDID:(id)arg1 owner:(id)arg2 error:(id *)arg3;
- (BOOL)acquireLockWithBackupUDID:(id)arg1 owner:(id)arg2 timeout:(double)arg3 error:(id *)arg4;
- (BOOL)deleteSnapshotID:(unsigned int)arg1 fromBackupUDID:(id)arg2 error:(id *)arg3;
- (BOOL)deleteBackupUDID:(id)arg1 error:(id *)arg2;
- (BOOL)deleteAccountWithError:(id *)arg1;
- (void)keyBagIsUnlocked;
- (void)keyBagIsLocking;
- (void)accountChanged;
- (void)wakeUp;
- (void)insufficientFreeSpaceToRestore;
- (void)finishRestore;
- (BOOL)cancelApplicationRestoreWithBundleID:(id)arg1 error:(id *)arg2;
- (BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 context:(id)arg3 error:(id *)arg4;
- (BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 error:(id *)arg3;
- (BOOL)restoreFileWithPath:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (BOOL)restoreFileWithPath:(id)arg1 error:(id *)arg2;
- (BOOL)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2 error:(id *)arg3;
- (id)dateOfNextScheduledBackup;
- (id)dateOfLastBackup;
- (unsigned int)countOfRestoreFailuresForDataclass:(id)arg1 assetType:(id)arg2;
- (id)restoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 range:(struct _NSRange)arg3;
- (BOOL)recordRestoreFailure:(id)arg1 error:(id *)arg2;
- (void)prioritizeRestoreFileWithPath:(id)arg1;
- (id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(BOOL)arg3 range:(struct _NSRange)arg4 error:(id *)arg5;
- (BOOL)restoreDataExistsForApplicationWithBundleID:(id)arg1 size:(unsigned long long *)arg2;
- (BOOL)restoreFileExistsWithPath:(id)arg1;
- (id)restoreState;
- (void)cancelRestore;
- (void)cancel;
- (BOOL)startBackupWithError:(id *)arg1;
- (id)backupState;
- (id)getBackupListWithFiltering:(BOOL)arg1 error:(id *)arg2;
- (id)getBackupListWithError:(id *)arg1;
- (void)syncBackupEnabled;
- (void)setBackupEnabled:(BOOL)arg1;
- (BOOL)isBackupEnabled;
- (BOOL)setupBackupWithPasscode:(id)arg1 error:(id *)arg2;
- (void)_backupDidBeginNotification;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)invalidate;
- (id)initWithDelegate:(id)arg1 eventQueue:(id)arg2;

@end

