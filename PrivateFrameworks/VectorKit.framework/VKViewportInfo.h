/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary;

@interface VKViewportInfo : NSObject
{
    CDStruct_2c43369c _centerCoordinate;
    int _tileSize;
    float _zoomLevel;
    double _pitch;
    double _yaw;
}

@property(nonatomic) double yaw; // @synthesize yaw=_yaw;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic) float zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) int tileSize; // @synthesize tileSize=_tileSize;
@property(nonatomic) CDStruct_c3b9c2ee centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
- (id).cxx_construct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

