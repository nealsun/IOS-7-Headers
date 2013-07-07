/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <EventKit/EKObject.h>

#import "NSCopying.h"

@class CLLocation, NSString;

@interface EKStructuredLocation : EKObject <NSCopying>
{
}

+ (id)locationWithTitle:(id)arg1;
- (void)updatePersistentObject;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *addressBookEntityID;
@property(nonatomic) double radius;
@property(retain, nonatomic) CLLocation *geoLocation;
@property(retain, nonatomic) NSString *title;
@property(readonly, nonatomic) BOOL isStructured;
- (id)_persistentLocation;
- (id)init;

@end

