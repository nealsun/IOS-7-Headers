/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSError.h"

@class NSString, SBKTransaction;

__attribute__((visibility("hidden")))
@interface SBKStoreError : NSError
{
    SBKTransaction *_transaction;
}

+ (id)serverClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3;
+ (id)userClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3;
+ (id)delegateCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)transactionCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)transactionTimeoutErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)transactionCancelledErrorWithTransaction:(id)arg1 code:(int)arg2 underlyingError:(id)arg3;
+ (id)transactionMissingURLErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)transactionMissingDomainErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)storeAccountSessionExpiredWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)noStoreAccountErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)userEnteredWrongCredentialsErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)userCancelledSignInErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)storeValidationErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)storeGenericErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)storeAccountMismatchErrorWithPreviousStoreAccountName:(id)arg1 currentStoreAccountName:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4;
+ (id)storeLoggedOutErrorWithPreviousStoreAccountName:(id)arg1 transaction:(id)arg2 underlyingError:(id)arg3;
+ (id)killSwitchErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)networkingBlockedErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)keyValueStoreDisabledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)unknownErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)keyValueStoreErrorWithCode:(int)arg1 localizedDescription:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4;
@property(retain) SBKTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
@property(readonly) double retrySeconds;
@property(readonly) NSString *currentStoreAccountName;
@property(readonly) NSString *previousStoreAccountName;
@property(readonly) BOOL isTransactionMissingInformationError;
@property(readonly) BOOL isTransactionCancelledError;
@property(readonly) BOOL isClampError;
@property(readonly) BOOL isRecoverableError;
@property(readonly) BOOL isAccountsChangedError;
@property(readonly) BOOL isAuthenticationError;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

