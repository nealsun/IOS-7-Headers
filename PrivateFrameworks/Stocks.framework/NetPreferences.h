/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, NSURL;

@interface NetPreferences : NSObject
{
    NSString *_buildVersion;
    NSString *_productVersion;
    NSString *_UUID;
    NSURL *_serviceURL;
    BOOL _serviceDebugging;
    BOOL _isNetworkReachable;
}

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;
- (void).cxx_destruct;
- (id)signedRequestForURL:(id)arg1 parameters:(id)arg2;
- (id)stocksYQLBaseURL;
- (id)stocksYQLEnvParameter;
- (id)serviceDebuggingPath;
- (BOOL)serviceDebugging;
- (id)logoBacksideImage;
- (id)logoButtonImage;
- (id)_cacheDirectoryPath;
- (id)backsideLogoURL;
- (id)fullQuoteURLOverrideForStock:(id)arg1;
- (id)newsServiceURLForStock:(id)arg1;
- (id)serviceURL;
- (id)_urlStringWithHost:(id)arg1;
- (id)UUID;
- (id)financeRequestAttributes;
- (void)addStocksHeadersToPostRequest:(id)arg1;
- (id)_stocksAcceptLanguage;
- (id)_stocksCountryCode;
- (id)_stocksUserAgent;
@property(nonatomic, getter=isNetworkReachable) BOOL networkReachable;
- (void)setupLogging;
- (id)init;

@end

