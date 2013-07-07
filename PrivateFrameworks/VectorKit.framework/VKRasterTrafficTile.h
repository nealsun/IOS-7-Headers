/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VKTile.h>

@class GEOVoltaireRasterTileTrafficData, NSArray, NSMutableArray, VKIntObjectMap;

__attribute__((visibility("hidden")))
@interface VKRasterTrafficTile : VKTile
{
    GEOVoltaireRasterTileTrafficData *_modelTile;
    VKIntObjectMap *_roadMeshes;
    VKIntObjectMap *_capMeshes;
    NSMutableArray *_incidents;
}

@property(readonly, nonatomic) NSArray *incidents; // @synthesize incidents=_incidents;
- (void)dealloc;
- (void)_buildIncidents;
- (void)_buildMeshes;
- (id)capMeshVendorForSpeed:(int)arg1;
- (id)roadMeshVendorForSpeed:(int)arg1;
- (id)initWithKey:(const struct VKTileKey *)arg1 downloadKey:(const struct _GEOTileKey *)arg2 trafficData:(id)arg3;

@end

