/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SAEndpoint.h>

@class NSString;

@interface SAEndpointService : SAEndpoint
{
}

+ (id)endpointServiceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)endpointService;
@property(copy, nonatomic) NSString *serverUrl;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

