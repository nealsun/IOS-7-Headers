/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "SSXPCCoding.h"

@class NSDictionary, NSError, SSAccount;

@interface SSAuthenticateResponse : NSObject <SSXPCCoding>
{
    SSAccount *_authenticatedAccount;
    NSError *_error;
    NSDictionary *_responseDictionary;
    int _responseType;
}

@property(copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) int authenticateResponseType; // @synthesize authenticateResponseType=_responseType;
@property(retain, nonatomic) SSAccount *authenticatedAccount; // @synthesize authenticatedAccount=_authenticatedAccount;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)_setError:(id)arg1;
- (void)dealloc;

@end

