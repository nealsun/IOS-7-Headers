/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSData, NSDate, NSDictionary, NSString, _IDSAccount;

@interface IDSAccount : NSObject
{
    _IDSAccount *_internal;
}

- (void)deactivateAndPurgeIdentify;
- (void)_reregisterAndReidentify:(BOOL)arg1;
- (void)unregisterAccount;
- (void)registerAccount;
- (void)unvalidateAliases:(id)arg1;
- (void)validateAliases:(id)arg1;
- (void)removeAliases:(id)arg1;
- (void)addAliases:(id)arg1;
- (void)validateProfile;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)passwordUpdated;
- (void)authenticateAccount;
- (id)description;
- (void)removeRegistrationDelegate:(id)arg1;
- (void)addRegistrationDelegate:(id)arg1 queue:(id)arg2;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
@property(readonly, nonatomic) NSString *profileID;
@property(readonly, nonatomic) NSDictionary *regionServerContext;
@property(readonly, nonatomic) NSString *regionBasePhoneNumber;
@property(readonly, nonatomic) NSString *regionID;
@property(readonly, nonatomic) NSData *pushToken;
@property(readonly, nonatomic) NSData *registrationCertificate;
@property(readonly, nonatomic) NSArray *registeredURIs;
@property(readonly, nonatomic) NSDate *dateRegistered;
@property(readonly, nonatomic) NSDate *nextRegistrationDate;
@property(readonly, nonatomic) int registrationStatus;
- (void)updateAccountWithAccountInfo:(id)arg1;
@property(retain, nonatomic) NSDictionary *accountInfo;
- (void)_setIsEnabled:(BOOL)arg1;
- (BOOL)_isEnabled;
- (void)setAuthToken:(id)arg1;
- (void)setPassword:(id)arg1;
@property(readonly, nonatomic) NSArray *vettedAliases;
@property(readonly, nonatomic) NSArray *aliasStrings;
@property(readonly, nonatomic) NSArray *aliases;
@property(readonly, nonatomic) NSDictionary *profileInfo;
@property(readonly, nonatomic) NSArray *devices;
@property(readonly, nonatomic) BOOL canSend;
@property(readonly, nonatomic) BOOL isActive;
@property(readonly, nonatomic) int accountType;
@property(readonly, nonatomic) NSString *serviceName;
@property(retain, nonatomic) NSString *loginID;
@property(readonly, nonatomic) NSString *uniqueID;
- (id)_internal;
- (void)dealloc;
- (id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (id)_initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;

@end

