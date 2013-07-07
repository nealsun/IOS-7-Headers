/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class ACAccount, DAStatusReport, DATaskManager, NSArray, NSData, NSMutableDictionary, NSString, NSURL;

@interface DAAccount : NSObject
{
    ACAccount *_backingAccountInfo;
    BOOL _hasInitted;
    BOOL _shouldPromptForPassword;
    BOOL _shouldUseOpportunisticSockets;
    NSMutableDictionary *_haveWarnedAboutCertDict;
    DAStatusReport *_statusReport;
    struct __CFDictionary *_consumers;
    struct __CFURLStorageSession *_storageSession;
    DATaskManager *_taskManager;
    BOOL _shouldFailAllTasks;
    BOOL _isValidating;
    int _dataclasses;
    int _daAccountVersion;
    NSArray *_appIdsForPasswordPrompt;
    NSMutableDictionary *_dataclassPropertyURLsByDataclass;
}

+ (id)daAccountSubclassWithBackingAccountInfo:(id)arg1;
+ (void)reacquireClientRestrictions:(id)arg1;
+ (id)oneshotListOfAccountIDs;
+ (id)_leafAccountTypes;
@property(retain, nonatomic) NSMutableDictionary *dataclassPropertyURLsByDataclass; // @synthesize dataclassPropertyURLsByDataclass=_dataclassPropertyURLsByDataclass;
@property(nonatomic) BOOL isValidating; // @synthesize isValidating=_isValidating;
@property(readonly) NSArray *appIdsForPasswordPrompt; // @synthesize appIdsForPasswordPrompt=_appIdsForPasswordPrompt;
@property(readonly, nonatomic) DATaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(setter=setDAAccountVersion:) int daAccountVersion; // @synthesize daAccountVersion=_daAccountVersion;
@property BOOL shouldUseOpportunisticSockets; // @synthesize shouldUseOpportunisticSockets=_shouldUseOpportunisticSockets;
@property(readonly) DAStatusReport *statusReport; // @synthesize statusReport=_statusReport;
@property(readonly) ACAccount *backingAccountInfo; // @synthesize backingAccountInfo=_backingAccountInfo;
@property BOOL shouldPromptForPassword; // @synthesize shouldPromptForPassword=_shouldPromptForPassword;
@property(readonly) int enabledDataclassesBitmask; // @synthesize enabledDataclassesBitmask=_dataclasses;
- (void)reload;
- (void)shutdown;
- (id)description;
- (struct __CFURLStorageSession *)copyStorageSession;
- (BOOL)isSubscribedCalendarAccount;
- (BOOL)isGoogleAccount;
- (BOOL)isHotmailAccount;
- (BOOL)isCalDAVChildAccount;
- (BOOL)isCardDAVAccount;
- (BOOL)isCalDAVAccount;
- (BOOL)isBookmarkDAVAccount;
- (BOOL)isLDAPAccount;
- (BOOL)isActiveSyncAccount;
- (BOOL)isEqualToAccount:(id)arg1;
@property(readonly, nonatomic) BOOL shouldFailAllTasks; // @synthesize shouldFailAllTasks=_shouldFailAllTasks;
- (void)resetStatusReport;
- (BOOL)resetCertWarnings;
- (void)setHaveWarnedAboutCert:(id)arg1 forHost:(id)arg2;
- (BOOL)haveWarnedAboutCert:(id)arg1 forHost:(id)arg2;
@property(readonly) BOOL isChildAccount;
- (void)cleanupAccountFiles;
- (void)setExceptions:(struct __CFData *)arg1 forDigest:(id)arg2;
- (struct __CFData *)exceptionsForDigest:(id)arg1;
- (id)_exceptionsDict;
- (BOOL)_isIdentityManagedByProfile;
- (void)setIdentityCertificatePersistentID:(id)arg1 managedByProfile:(BOOL)arg2;
@property(readonly) NSData *identityPersist;
- (id)addUsernameToURL:(id)arg1;
@property(readonly) int keychainAccessibilityType;
- (void)saveAccountProperties;
- (void)removeClientCertificateData;
- (id)defaultContainerIdentifierForDADataclass:(int)arg1;
- (void)stopMonitoringFolders;
- (void)stopMonitoringFoldersWithIDs:(id)arg1;
- (BOOL)monitorFolderWithID:(id)arg1;
- (BOOL)monitorFoldersWithIDs:(id)arg1;
- (void)tearDown;
- (id)oauthInfoProvider;
- (id)oauth2Token;
- (id)additionalHeaderValues;
@property BOOL shouldDoInitialAutodiscovery;
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)arg1;
- (void)discoverInitialPropertiesWithConsumer:(id)arg1;
- (void)checkValidityOnAccountStore:(id)arg1 withConsumer:(id)arg2;
@property(copy) NSURL *principalURL;
@property(readonly) NSString *scheme;
@property(copy) NSString *principalPath;
@property int port;
@property(retain) NSData *encryptionIdentityPersistentReference;
@property(retain) NSData *signingIdentityPersistentReference;
- (BOOL)accountContainsEmailAddress:(id)arg1;
@property(copy) NSArray *emailAddresses;
@property(copy) NSString *emailAddress;
@property BOOL useSSL;
@property(copy) NSString *host;
- (id)domainOnly;
- (id)usernameWithoutDomain;
- (int)portFromDataclassPropertiesForDataclass:(id)arg1;
- (BOOL)useSSLFromDataclassPropertiesForDataclass:(id)arg1;
- (id)hostFromDataclassPropertiesForDataclass:(id)arg1;
- (id)urlFromDataclassPropertiesForDataclass:(id)arg1;
@property(copy) NSString *password;
- (id)passwordWithExpected:(BOOL)arg1;
- (void)removeConsumerForTask:(id)arg1;
- (id)consumerForTask:(id)arg1;
- (void)setConsumer:(id)arg1 forTask:(id)arg2;
- (id)stateString;
- (void)stopMonitoringFolderWithID:(id)arg1;
- (void)suspendMonitoringFoldersWithIDs:(id)arg1;
- (void)resumeMonitoringFoldersWithIDs:(id)arg1;
- (void)setAccountIntProperty:(int)arg1 forKey:(id)arg2;
- (int)accountIntPropertyForKey:(id)arg1;
- (void)setAccountBoolProperty:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)accountBoolPropertyForKey:(id)arg1;
- (void)removeAccountPropertyForKey:(id)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (id)accountPropertyForKey:(id)arg1;
- (id)spinnerIdentifiers;
- (id)dataclassProperties;
- (void)setEnabled:(BOOL)arg1 forDADataclass:(int)arg2;
- (BOOL)enabledForDADataclass:(int)arg1;
- (BOOL)enabledForAnyDADataclasses:(int)arg1;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (BOOL)isDisabled;
@property(copy) NSString *user;
@property(copy) NSString *username;
- (id)displayName;
@property(copy) NSString *accountDescription;
- (void)_setPersistentUUID:(id)arg1;
@property(readonly) NSString *persistentUUID;
@property(readonly, nonatomic) NSString *scheduleIdentifier;
- (id)syncStoreIdentifier;
- (id)accountID;
- (void)resetAccountID;
- (void)ingestBackingAccountInfoProperties;
- (id)initWithBackingAccountInfo:(id)arg1;
- (void)dealloc;
- (BOOL)handleTrustChallenge:(id)arg1;
- (void)handleTrust:(struct __SecTrust *)arg1 forHost:(id)arg2 withCompletionBlock:(id)arg3;
- (id)_serverSuffixesToAlwaysFail;
- (int)_actionForTrust:(struct __SecTrust *)arg1 host:(id)arg2 service:(id)arg3;
- (void)dropAssertionsAndRenewCredentialsWithHandler:(id)arg1;
- (id)localizedInvalidPasswordMessage;
- (id)localizedIdenticalAccountFailureMessage;
- (void)cancelShareResponseInstance:(id)arg1 error:(id)arg2;
- (id)respondToShareRequestForCalendar:(id)arg1 withResponse:(int)arg2 consumer:(id)arg3;
- (void)cancelDownloadingInstance:(id)arg1 error:(id)arg2;
- (id)beginDownloadingAttachmentWithUUID:(id)arg1 consumer:(id)arg2;
- (BOOL)sendEmailsForCalEvents:(id)arg1 consumer:(id)arg2;
- (void)synchronizeEventsFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(CDStruct_a734b2e2 *)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 consumer:(id)arg7;
- (id)eventsFolders;
- (id)defaultEventsFolder;
- (void)synchronizeContactsFolder:(id)arg1 previousTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 highestIdContext:(CDStruct_1ef3fb1f *)arg5 isInitialUberSync:(BOOL)arg6 isResyncAfterConnectionFailed:(BOOL)arg7 previousTagIsSuspect:(BOOL)arg8 consumer:(id)arg9;
- (id)contactsFolders;
- (id)defaultContactsFolder;
- (id)draftsFolder;
- (id)deletedItemsFolder;
- (id)sentItemsFolder;
- (id)inboxFolder;
- (id)delegateeInvitationICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id *)arg3;
- (BOOL)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (int)supportsEmailFlagging;
- (int)supportsMailboxSearch;
- (BOOL)searchQueriesRunning;
- (void)cancelAllSearchQueries;
- (void)cancelSearchQuery:(id)arg1;
- (void)performSearchQuery:(id)arg1;
- (void)setToDosNumberOfPastDaysToSync:(int)arg1;
- (int)toDosNumberOfPastDaysToSync;
- (void)synchronizeToDosFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(CDStruct_a734b2e2 *)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 consumer:(id)arg7;
- (id)toDosFolders;
- (id)defaultToDosFolder;
- (void)synchronizeNotesFolder:(id)arg1 noteContext:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 changeSet:(id)arg5 notesToDeleteAfterSync:(id)arg6 isInitialUberSync:(BOOL)arg7 isResyncAfterConnectionFailed:(BOOL)arg8 consumer:(id)arg9;
- (id)notesFolders;
- (id)defaultNotesFolder;
- (void)synchronizeBookmarkTreeWithConsumer:(id)arg1 hasRemoteChanges:(BOOL)arg2;
- (void)getRootFolderWithConsumer:(id)arg1;

@end

