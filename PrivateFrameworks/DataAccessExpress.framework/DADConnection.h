/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface DADConnection : NSObject
{
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_dispatch_queue> *_muckingWithConn;
    NSMutableSet *_accountIdsWithAlreadyResetCerts;
    NSMutableSet *_accountIdsWithAlreadyResetThrottleTimers;
    id _statusReportBlock;
    NSMutableDictionary *_inFlightSearchQueries;
    NSMutableDictionary *_inFlightFolderChanges;
    NSMutableDictionary *_inFlightAttachmentDownloads;
    NSMutableDictionary *_inFlightShareRequests;
}

+ (void)setShouldIgnoreAccountChanges;
+ (id)sharedConnectionIfServerIsRunning;
+ (id)sharedConnection;
- (void)_dispatchMessage:(id)arg1;
- (void)_registerForAppResumedNotification;
- (void)resetTimersAndWarnings;
- (void)_resetThrottleTimersForAccountId:(id)arg1;
- (void)_resetCertWarningsForAccountId:(id)arg1 andDataclasses:(int)arg2 isUserRequested:(BOOL)arg3;
- (void)dealloc;
- (id)_init;
- (id)init;
- (void)fillOutCurrentEASTimeZoneInfo;
- (BOOL)registerForInterrogationWithBlock:(id)arg1;
- (void)_reallyRegisterForInterrogation;
- (id)statusReports;
- (BOOL)processFolderChange:(id)arg1 forAccountWithID:(id)arg2;
- (void)respondToSharedCalendarInvite:(int)arg1 forCalendarWithID:(id)arg2 accountID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (void)cancelDownloadingAttachmentWithDownloadID:(id)arg1 error:(id)arg2;
- (void)_cancelDownloadsWithIDs:(id)arg1 error:(id)arg2;
- (id)beginDownloadingAttachmentWithUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 progressBlock:(id)arg4 completionBlock:(void)arg5;
- (void)_sendSynchronousXPCMessageWithParameters:(id)arg1 handlerBlock:(id)arg2;
- (void)handleURL:(id)arg1;
- (void)reportFolderItemsSyncSuccess:(BOOL)arg1 forFolderWithID:(id)arg2 andAccountWithID:(id)arg3;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4;
- (BOOL)processMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5;
- (void)cancelServerContactsSearch:(id)arg1;
- (BOOL)performServerContactsSearch:(id)arg1 forAccountWithID:(id)arg2;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(int)arg2;
- (BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(int)arg3;
- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(int)arg2 isUserRequested:(BOOL)arg3;
- (BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(int)arg3 isUserRequested:(BOOL)arg4;
- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2 isUserRequested:(BOOL)arg3;
- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2 requireChangedFolders:(BOOL)arg3 isUserRequested:(BOOL)arg4;
- (void)requestDaemonShutdown;
- (void)removeStoresForAccountWithID:(id)arg1;
- (void)_requestDaemonStopMonitoringAgents_Sync;
- (void)requestDaemonStartMonitoringAgents_Sync;
- (void)requestDaemonStopMonitoringAgents;
- (void)requestDaemonStartMonitoringAgents;
- (void)_requestDaemonChangeAgentMonitoringStatus:(BOOL)arg1 waitForReply:(BOOL)arg2;
- (id)currentPolicyKeyForAccountID:(id)arg1;
- (BOOL)requestPolicyUpdateForAccountID:(id)arg1;
- (BOOL)stopWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)suspendWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)resumeWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (void)_shareResponseFinished:(id)arg1;
- (void)_downloadFinished:(id)arg1;
- (void)_downloadProgress:(id)arg1;
- (void)_getStatusReportsFromClient:(id)arg1;
- (void)_folderChangeFinished:(id)arg1;
- (void)_serverContactsSearchQueryFinished:(id)arg1;
- (void)_logDataAccessStatus:(id)arg1;
- (void)_foldersUpdated:(id)arg1;
- (void)_policyKeyChanged:(id)arg1;
- (id)decodedErrorFromData:(id)arg1;
- (id)_createReplyToRequest:(id)arg1 withProperties:(id)arg2;
- (id)_connection;
- (void)_serverDiedWithReason:(id)arg1;
- (void)_tearDownInFlightObjects;

@end

