/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding.h"

@class ACAccount, NSDate, NSMutableDictionary, NSMutableSet, NSString;

@interface ACAccountCredential : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_credentialItems;
    NSString *_credentialType;
    NSMutableSet *_dirtyProperties;
    ACAccount *_owningAccount;
    BOOL _dirty;
    BOOL _empty;
    NSString *_findMyiPhoneToken;
}

+ (id)nonPersistentKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2;
+ (id)supportedKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2;
+ (id)credentialWithPassword:(id)arg1;
+ (id)credentialWithOAuthToken:(id)arg1 tokenSecret:(id)arg2;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *findMyiPhoneToken; // @synthesize findMyiPhoneToken=_findMyiPhoneToken;
@property(nonatomic, getter=isEmpty) BOOL empty; // @synthesize empty=_empty;
@property(nonatomic, getter=isDirty) BOOL dirty; // @synthesize dirty=_dirty;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *credentialType;
@property(copy, nonatomic) NSString *password;
@property(retain, nonatomic) NSDate *expiryDate;
@property(copy, nonatomic) NSString *oauthRefreshToken;
@property(copy, nonatomic) NSString *oauthTokenSecret;
@property(copy, nonatomic) NSString *oauthToken;
@property(copy, nonatomic) NSString *token;
- (void)setCredentialItem:(id)arg1 forKey:(id)arg2;
- (id)credentialItemForKey:(id)arg1;
- (id)keysForCredentialItems;
- (id)credentialItems;
- (void)_clearDirtyProperties;
- (void)_markPropertyDirty:(id)arg1;
- (void)_setOwningAccount:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithPassword:(id)arg1;
- (id)initWithOAuthToken:(id)arg1 tokenSecret:(id)arg2;
- (id)initWithOAuth2Token:(id)arg1 refreshToken:(id)arg2 expiryDate:(id)arg3;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

