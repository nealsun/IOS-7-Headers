/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface CommunicationFilterItem : NSObject
{
    struct __CFPhoneNumber *_phoneNumber;
    NSString *_emailAddress;
}

@property(readonly, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly, nonatomic) struct __CFPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (id)dictionaryRepresentation;
- (id)_dictionaryRepresentationWithRedaction;
- (BOOL)matchesFilterItem:(id)arg1;
@property(readonly, nonatomic) NSString *unformattedID;
- (BOOL)isPhoneNumber;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)description;
- (BOOL)_acceptVersion:(id)arg1;
- (BOOL)_acceptItemType:(id)arg1;
- (void)dealloc;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithPhoneNumber:(struct __CFPhoneNumber *)arg1;

@end

