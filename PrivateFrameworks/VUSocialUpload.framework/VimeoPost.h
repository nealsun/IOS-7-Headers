/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class ACAccount, ALAsset, ALAssetsLibrary, NSArray, NSData, NSString, NSURL;

@interface VimeoPost : NSObject
{
    NSURL *_baseURL;
    int _uploadState;
    NSString *_videoID;
    NSString *_ticketID;
    NSURL *_uploadEndpoint;
    BOOL _continuingUpload;
    unsigned int _lastByteStored;
    int _retryCount;
    ALAssetsLibrary *_assetsLibrary;
    id <VimeoPostDelegate> _delegate;
    NSString *_title;
    NSString *_description;
    NSArray *_tags;
    unsigned int _accessType;
    NSURL *_assetURL;
    ACAccount *_account;
    ALAsset *_asset;
    NSData *_assetData;
}

+ (id)dictionaryWithResponseData:(id)arg1 error:(id *)arg2;
+ (void)getAvailableQuotaForAccount:(id)arg1 completion:(id)arg2;
@property(retain, nonatomic) NSData *assetData; // @synthesize assetData=_assetData;
@property(retain, nonatomic) ALAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(nonatomic) unsigned int accessType; // @synthesize accessType=_accessType;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *description; // @synthesize description=_description;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) id <VimeoPostDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_errorWithCode:(int)arg1;
- (id)_tags;
- (void)_setTags;
- (void)_setDescription;
- (void)_setTitle;
- (void)_commit;
- (void)_verify;
- (void)_uploadData;
- (void)_getTicket;
- (void)_checkQuota;
- (unsigned long long)postSize;
- (void)uploadToAccount:(id)arg1;
- (id)serializedDictionary;
- (id)initWithDictionary:(id)arg1;
- (id)assetsLibrary;
- (void)dealloc;
- (id)initWithAssetURL:(id)arg1;

@end

