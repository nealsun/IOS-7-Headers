/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <StoreServices/SSSoftwareUpdatesContext.h>

#import "SSXPCCoding.h"

@class NSArray, NSString;

@interface SSMutableSoftwareUpdatesContext : SSSoftwareUpdatesContext <SSXPCCoding>
{
}

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
@property(copy, nonatomic) NSArray *softwareTypes; // @dynamic softwareTypes;
@property(nonatomic, getter=isForced) BOOL forced; // @dynamic forced;
@property(copy, nonatomic) NSString *clientIdentifierHeader; // @dynamic clientIdentifierHeader;

@end

