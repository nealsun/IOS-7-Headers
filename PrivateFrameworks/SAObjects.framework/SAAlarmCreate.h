/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SADomainCommand.h>

@class SAAlarmObject;

@interface SAAlarmCreate : SADomainCommand
{
}

+ (id)createWithDictionary:(id)arg1 context:(id)arg2;
+ (id)create;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SAAlarmObject *alarmToCreate;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

