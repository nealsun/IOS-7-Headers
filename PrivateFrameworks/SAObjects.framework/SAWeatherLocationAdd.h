/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SADomainCommand.h>

@class SAWeatherLocation;

@interface SAWeatherLocationAdd : SADomainCommand
{
}

+ (id)locationAddWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationAdd;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SAWeatherLocation *weatherLocation;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

