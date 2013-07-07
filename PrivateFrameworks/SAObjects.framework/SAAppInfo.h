/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDictionary, NSString, SASiriSupport, SAStarkSupport;

@interface SAAppInfo : SADomainObject
{
}

+ (id)appInfoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)appInfo;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@property(copy, nonatomic) NSArray *supportedSchemes;
@property(copy, nonatomic) NSArray *supportedCommands;
@property(retain, nonatomic) SAStarkSupport *starkSupport;
@property(copy, nonatomic) NSDictionary *spotlightNameMap;
@property(copy, nonatomic) NSString *spotlightName;
@property(retain, nonatomic) SASiriSupport *siriSupport;
@property(copy, nonatomic) NSString *providerName;
@property(copy, nonatomic) NSDictionary *displayAppNameMap;
@property(copy, nonatomic) NSString *displayAppName;
@property(copy, nonatomic) NSString *authToken;
@property(copy, nonatomic) NSString *appVersion;
@property(copy, nonatomic) NSDictionary *appNameMap;
@property(copy, nonatomic) NSString *appName;
@property(copy, nonatomic) NSString *appId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

