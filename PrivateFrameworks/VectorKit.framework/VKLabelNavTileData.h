/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMapTable, NSMutableArray, VKLabelTile;

__attribute__((visibility("hidden")))
@interface VKLabelNavTileData : NSObject
{
    VKLabelTile *_tile;
    NSMapTable *_geoJunctionToJunctionMap;
    NSMutableArray *_tileEdgeJunctions;
    BOOL _foundTileEdgeJunctions;
    BOOL _oppositeCarriagewayJunctionsValid;
    NSMutableArray *_oppositeCarriagewayJunctions;
    struct vector<LabelNavJunctionInfo, vk_allocator<LabelNavJunctionInfo>> _junctionInfos;
}

@property(readonly, nonatomic) NSMutableArray *oppositeCarriagewayJunctions; // @synthesize oppositeCarriagewayJunctions=_oppositeCarriagewayJunctions;
@property(nonatomic) BOOL oppositeCarriagewayJunctionsValid; // @synthesize oppositeCarriagewayJunctionsValid=_oppositeCarriagewayJunctionsValid;
@property(readonly, nonatomic) VKLabelTile *tile; // @synthesize tile=_tile;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)findOppositeCarriagewayJunctionsWithRouteFeatures:(unordered_map_ad9b4de7 *)arg1 distanceThreshold:(double)arg2;
- (void)appendNavJunctionsInWorldRect:(const BRectImp_d02b3a99 *)arg1 junctions:(id)arg2;
- (void)initializeJunctionInfos;
- (id)findTileEdgeJunctionAtCoordinate:(Vec2Imp_1782d7e3)arg1;
- (void)_findTileEdgeJunctions;
- (void)addJunction:(id)arg1;
- (id)junctionAtCoordinate:(Vec2Imp_1782d7e3)arg1;
- (id)junctionForGeoJunction:(CDStruct_dde70fb6 *)arg1;
- (void)dealloc;
- (id)initWithTile:(id)arg1;

@end

