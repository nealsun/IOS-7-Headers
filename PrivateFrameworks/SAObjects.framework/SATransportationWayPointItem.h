/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSNumber, NSString, NSURL;

@interface SATransportationWayPointItem : AceObject <SAAceSerializable>
{
}

+ (id)wayPointItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)wayPointItem;
@property(copy, nonatomic) NSURL *mapIdentifier;
@property(copy, nonatomic) NSNumber *longitude;
@property(copy, nonatomic) NSNumber *latitude;
@property(copy, nonatomic) NSURL *iconIdentifier;
@property(copy, nonatomic) NSNumber *distance;
@property(copy, nonatomic) NSString *action;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

