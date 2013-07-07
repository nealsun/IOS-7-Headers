/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDSCore/IDSProfileMessage.h>

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface IDSProfileValidateInvitationContext : IDSProfileMessage <NSCopying>
{
    NSString *_basePhoneNumber;
    NSString *_regionID;
    NSString *_responseBasePhoneNumber;
    NSString *_responseRegionID;
    NSDictionary *_responseExtraInfo;
}

@property(copy) NSDictionary *responseExtraInfo; // @synthesize responseExtraInfo=_responseExtraInfo;
@property(copy) NSString *responseRegionID; // @synthesize responseRegionID=_responseRegionID;
@property(copy) NSString *responseBasePhoneNumber; // @synthesize responseBasePhoneNumber=_responseBasePhoneNumber;
@property(copy) NSString *regionID; // @synthesize regionID=_regionID;
@property(copy) NSString *basePhoneNumber; // @synthesize basePhoneNumber=_basePhoneNumber;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

