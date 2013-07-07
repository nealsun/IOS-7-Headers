/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, VGLMesh, VKRealisticPolygonMaker;

__attribute__((visibility("hidden")))
@interface VKRealisticRoadGroup : NSObject
{
    struct VKTileKey _tileKey;
    int _renderZ;
    NSMutableDictionary *_meshDict;
    VKRealisticPolygonMaker *_roadPolygonMaker;
    float _roadZ;
    float _casingHeight;
    float _casingWidth;
    float _casingTopLift;
    float _sidewalkShadowWidth;
    float _casingShadowWidth;
    float _casingShadowLift;
    float _roadShadowRamp;
    float _roadShadowWidth;
    float _roadShadowTaperLength;
    struct _VGLColor _casingColor;
    float _casingShadowRamp;
    struct _VGLColor _sidewalkColor;
    NSMutableArray *_roadMeshes;
    VGLMesh *_roadShadows;
    VGLMesh *_casingFacades;
    VGLMesh *_casingTops;
    VGLMesh *_casingShadows;
    VGLMesh *_sidewalkShadows;
}

@property(readonly, nonatomic) float casingShadowRamp; // @synthesize casingShadowRamp=_casingShadowRamp;
@property(readonly, nonatomic) struct _VGLColor casingColor; // @synthesize casingColor=_casingColor;
@property(readonly, nonatomic) float roadShadowTaperLength; // @synthesize roadShadowTaperLength=_roadShadowTaperLength;
@property(readonly, nonatomic) float roadShadowWidth; // @synthesize roadShadowWidth=_roadShadowWidth;
@property(readonly, nonatomic) float roadShadowRamp; // @synthesize roadShadowRamp=_roadShadowRamp;
@property(readonly, nonatomic) VGLMesh *sidewalkShadows; // @synthesize sidewalkShadows=_sidewalkShadows;
@property(readonly, nonatomic) VGLMesh *casingShadows; // @synthesize casingShadows=_casingShadows;
@property(readonly, nonatomic) VGLMesh *casingTops; // @synthesize casingTops=_casingTops;
@property(readonly, nonatomic) VGLMesh *casingFacades; // @synthesize casingFacades=_casingFacades;
@property(readonly, nonatomic) VGLMesh *roadShadows; // @synthesize roadShadows=_roadShadows;
@property(readonly, nonatomic) NSArray *roadMeshes; // @synthesize roadMeshes=_roadMeshes;
@property(nonatomic) int renderZ; // @synthesize renderZ=_renderZ;
- (id).cxx_construct;
- (unsigned int)triangleCount;
- (id)_meshForStyle:(id)arg1 tileKey:(struct VKTileKey)arg2 scale:(float)arg3;
- (void)updateComponentsWithModelViewProjectionMatrix:(CDUnion_f5b85e25)arg1 contentScale:(float)arg2;
- (void)addRoadForPolygon:(const Vec2Imp_1782d7e3 *)arg1 pointCount:(unsigned int)arg2 characteristicPoints:(const CDStruct_dab2d0bd *)arg3 characteristicPointCount:(unsigned int)arg4 withStyle:(id)arg5;
- (void)dealloc;
- (struct _VGLColor)casingColorVariantWithBlendingFactor:(float)arg1;
- (id)initWithTile:(id)arg1;

@end

