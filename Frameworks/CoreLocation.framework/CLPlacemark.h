/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CLLocation, CLPlacemarkInternal, CLRegion, NSArray, NSDictionary, NSString;

@interface CLPlacemark : NSObject <NSCopying, NSSecureCoding>
{
    CLPlacemarkInternal *_internal;
}

+ (id)placemarkWithPlace:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id)description;
@property(readonly, nonatomic) NSString *ocean;
@property(readonly, nonatomic) NSString *inlandWater;
@property(readonly, nonatomic) NSArray *areasOfInterest;
- (id)formattedAddressLines;
- (id)fullThoroughfare;
@property(readonly, nonatomic) NSString *country;
@property(readonly, nonatomic) NSString *ISOcountryCode;
@property(readonly, nonatomic) NSString *postalCode;
@property(readonly, nonatomic) NSString *subAdministrativeArea;
@property(readonly, nonatomic) NSString *administrativeArea;
@property(readonly, nonatomic) NSString *subLocality;
@property(readonly, nonatomic) NSString *locality;
@property(readonly, nonatomic) NSString *subThoroughfare;
@property(readonly, nonatomic) NSString *thoroughfare;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSDictionary *addressDictionary;
@property(readonly, nonatomic) CLRegion *region;
@property(readonly, nonatomic) CLLocation *location;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4;

@end

