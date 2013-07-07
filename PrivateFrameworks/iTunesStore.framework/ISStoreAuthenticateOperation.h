/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStore/ISOperation.h>

#import "SSAuthenticateRequestDelegate.h"

@class NSNumber, SSAuthenticationContext, SSMutableAuthenticationContext;

@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate>
{
    NSNumber *_authenticatedDSID;
    SSMutableAuthenticationContext *_authenticationContext;
}

- (void)_setAuthenticatedDSID:(id)arg1;
- (void)_handleAuthenticateResponse:(id)arg1;
- (id)_authenticatedDSID;
- (id)uniqueKey;
- (void)run;
- (id)authenticatedAccountDSID;
@property(readonly) SSAuthenticationContext *authenticationContext;
- (void)dealloc;
- (id)initWithAuthenticationContext:(id)arg1;

@end

