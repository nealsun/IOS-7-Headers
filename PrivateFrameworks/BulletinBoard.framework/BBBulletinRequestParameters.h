/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSSet;

@interface BBBulletinRequestParameters : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int _publisherDestination;
    int _maximumCount;
    NSSet *_enabledSectionIDs;
}

+ (BOOL)supportsSecureCoding;
+ (id)requestParametersForDestination:(unsigned int)arg1 withMaximumCount:(int)arg2 enabledSectionIDs:(id)arg3;
@property(readonly, nonatomic) unsigned int publisherDestination; // @synthesize publisherDestination=_publisherDestination;
- (id)description;
@property(readonly, nonatomic) NSSet *enabledSectionIDs;
@property(readonly, nonatomic) unsigned int maximumCount;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestination:(unsigned int)arg1 maximumCount:(int)arg2 enabledSectionIDs:(id)arg3;

@end
