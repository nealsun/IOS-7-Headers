/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SASettingGetNumberResponse.h>

@class SASettingEntity;

@interface SASettingGetFloatResponse : SASettingGetNumberResponse
{
}

+ (id)getFloatResponseWithSetting:(id)arg1;
+ (id)getFloatResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getFloatResponse;
@property(retain, nonatomic) SASettingEntity *setting;
- (id)initWithSetting:(id)arg1;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

