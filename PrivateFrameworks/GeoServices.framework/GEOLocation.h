/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class GEOLatLng;

@interface GEOLocation : PBCodable
{
    double _course;
    double _heading;
    double _horizontalAccuracy;
    double _speed;
    double _timestamp;
    double _verticalAccuracy;
    int _altitude;
    GEOLatLng *_latLng;
    int _type;
    struct {
        unsigned int course:1;
        unsigned int heading:1;
        unsigned int horizontalAccuracy:1;
        unsigned int speed:1;
        unsigned int timestamp:1;
        unsigned int verticalAccuracy:1;
        unsigned int altitude:1;
        unsigned int type:1;
    } _has;
}

@property(nonatomic) double course; // @synthesize course=_course;
@property(nonatomic) double heading; // @synthesize heading=_heading;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) int altitude; // @synthesize altitude=_altitude;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) GEOLatLng *latLng; // @synthesize latLng=_latLng;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasCourse;
@property(nonatomic) BOOL hasHeading;
@property(nonatomic) BOOL hasSpeed;
@property(nonatomic) BOOL hasVerticalAccuracy;
@property(nonatomic) BOOL hasHorizontalAccuracy;
@property(nonatomic) BOOL hasAltitude;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) BOOL hasType;
- (void)dealloc;
- (id)initWithGEOCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithLocation:(id)arg1;

@end

