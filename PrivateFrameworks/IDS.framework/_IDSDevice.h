/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString;

@interface _IDSDevice : NSObject
{
    NSDictionary *_info;
}

- (void)_addIdentity:(id)arg1;
@property(readonly, nonatomic) NSArray *_identities;
@property(readonly, nonatomic) NSData *_pushToken;
- (id)description;
@property(readonly, nonatomic) NSString *service;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *modelIdentifier;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

