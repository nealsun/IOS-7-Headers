/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SUClientController.h"

#import "MCProfileConnectionObserver.h"
#import "SSDownloadManagerObserver.h"

@class NSString, SUScriptInterface, UIImageView;

@interface IUStoreClientController : SUClientController <SSDownloadManagerObserver, MCProfileConnectionObserver>
{
    BOOL _isUsingNetwork;
    BOOL _hasContinueSearchCapability;
    UIImageView *_purchasedItemView;
    SUScriptInterface *_scriptInterface;
    NSString *_purchasedItemIdentifier;
}

+ (void)setSharedController:(id)arg1;
+ (id)sharedController;
+ (id)continueSearchingURForMediaType:(unsigned int)arg1 searchString:(id)arg2;
+ (id)musicStoreURLWithAction:(id)arg1;
- (void).cxx_destruct;
- (void)downloadManagerNetworkUsageDidChange:(id)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
@property(readonly, nonatomic, getter=isStoreRestricted) BOOL storeRestricted;
- (BOOL)loadHasContinueSearchCapabilityWithUpdateBlock:(id)arg1;
- (void)dealloc;
- (id)initWithClientIdentifier:(id)arg1;
- (id)init;

@end

