/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SABaseCommand.h>

#import "SAServerBoundCommand.h"

@class NSString, NSURL;

@interface SAPhoneCallStarted : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)callStartedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)callStarted;
@property(copy, nonatomic) NSURL *phoneLogId;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;

@end

