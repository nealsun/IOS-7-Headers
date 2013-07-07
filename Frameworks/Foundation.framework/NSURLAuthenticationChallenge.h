/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSURLAuthenticationChallengeInternal;

@interface NSURLAuthenticationChallenge : NSObject <NSSecureCoding>
{
    NSURLAuthenticationChallengeInternal *_internal;
}

+ (BOOL)supportsSecureCoding;
+ (id)_createAuthenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge *)arg1 sender:(id)arg2;
+ (id)_authenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge *)arg1 sender:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)sender;
- (id)failureResponse;
- (id)error;
- (int)previousFailureCount;
- (id)proposedCredential;
- (id)protectionSpace;
- (void)dealloc;
- (id)_initWithCFAuthChallenge:(struct _CFURLAuthChallenge *)arg1 sender:(id)arg2;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2;
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(int)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;
- (id)init;
- (void)setSender:(id)arg1;
- (struct _CFURLAuthChallenge *)_createCFAuthChallenge;

@end

