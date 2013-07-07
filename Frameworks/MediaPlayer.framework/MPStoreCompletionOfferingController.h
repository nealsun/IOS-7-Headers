/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MCProfileConnectionObserver.h"

@class NSCache, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface MPStoreCompletionOfferingController : NSObject <MCProfileConnectionObserver>
{
    NSCache *_offeringCache;
    NSMutableDictionary *_lookupItemsByStoreLookupID;
    NSMutableDictionary *_lookupItemsByTokenID;
    unsigned int _nextTokenID;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (BOOL)_isCmcEnabled;
+ (void)_getIsCMCDisabled:(char *)arg1 disabledReason:(id *)arg2;
+ (void)setWantsArtwork:(BOOL)arg1;
+ (id)storeOfferingController;
- (void).cxx_destruct;
- (void)_onQueueClearCache;
- (void)_onQueueSetCachedCompletionOffering:(id)arg1 forStoreLookupID:(id)arg2;
- (id)_onQueueCompletionOfferingForAlbumItemsQuery:(id)arg1;
- (id)_onQueueStartCompletionOfferingLookupForAlbumItemsQuery:(id)arg1 responseBlock:(id)arg2;
- (void)_lookupCompletedWithResponse:(id)arg1 lookupItem:(id)arg2 error:(id)arg3;
- (void)_onQueuePostLookupCompletedForLookupItem:(id)arg1 offering:(id)arg2 error:(id)arg3;
- (void)_onQueueCancelCompletionOfferingLookupTokenID:(unsigned int)arg1;
- (void)_onQueueRemoveLookupItemsForStoreLookupID:(id)arg1;
- (void)_onQueueRemoveLookupItem:(id)arg1;
- (id)_onQueueGetInsertedLookupItemForAlbumItemsQuery:(id)arg1 requestAlreadyIssued:(char *)arg2 responseBlock:(id)arg3;
- (void)_dumpCache;
- (unsigned int)startCompletionOfferingLookupForAlbumItemsQuery:(id)arg1 responseBlock:(id)arg2;
- (void)cancelCompletionOfferingLookup:(unsigned int)arg1;
- (id)completionOfferingForAlbumItemsQuery:(id)arg1;
- (id)_sanitizedQuery:(id)arg1;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_storeAccountsDidChangeNotification:(id)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

