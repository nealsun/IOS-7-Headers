/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSError, NSMutableData, NSObject<OS_dispatch_semaphore>, NSString, NSURL, NSURLConnection;

@interface MCHTTPTransaction : NSObject
{
    NSURL *_requestURL;
    NSString *_method;
    double _timeout;
    NSString *_userAgent;
    NSString *_contentType;
    NSData *_data;
    struct __SecIdentity *_identity;
    NSString *_CMSSignatureHeaderName;
    NSURL *_currentURL;
    NSURL *_permanentlyRedirectedURL;
    BOOL _rememberData;
    NSMutableData *_responseData;
    int _statusCode;
    NSError *_error;
    NSURLConnection *_connection;
    NSObject<OS_dispatch_semaphore> *_doneSema;
}

+ (id)performRequestURL:(id)arg1 method:(id)arg2 timeout:(double)arg3 userAgent:(id)arg4 contentType:(id)arg5 data:(id)arg6 identity:(struct __SecIdentity *)arg7 outPermanentlyRedirectedURL:(id *)arg8 outError:(id *)arg9;
+ (id)transactionWithURL:(id)arg1 method:(id)arg2;
@property(readonly, nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) NSURL *permanentlyRedirectedURL; // @synthesize permanentlyRedirectedURL=_permanentlyRedirectedURL;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *CMSSignatureHeaderName; // @synthesize CMSSignatureHeaderName=_CMSSignatureHeaderName;
@property(readonly, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *method; // @synthesize method=_method;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_requestURL;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (BOOL)_shouldAllowTrust:(struct __SecTrust *)arg1 forHost:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)performCompletionBlock:(id)arg1;
- (void)performSynchronously;
- (void)_beginTransaction;
- (void)dealloc;
- (id)initWithURL:(id)arg1 method:(id)arg2;
- (void)setIdentity:(struct __SecIdentity *)arg1;
- (struct __SecIdentity *)copyIdentity;

@end

