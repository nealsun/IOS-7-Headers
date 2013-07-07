/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VKMapTileModel.h>

#import "VKMapLayer.h"

@class NSMutableArray, VGLRenderState, VGLTexture;

__attribute__((visibility("hidden")))
@interface VKRasterMapModel : VKMapTileModel <VKMapLayer>
{
    NSMutableArray *_sortedTiles;
    unsigned int _mapLayer;
    BOOL _rasterViewer;
    VGLRenderState *_renderState;
    VGLTexture *_clutTexture;
    BOOL _showingNoDataPlaceholders;
}

+ (BOOL)reloadOnStylesheetChange;
@property(readonly, getter=isShowingNoDataPlaceholders) BOOL showingNoDataPlaceholders; // @synthesize showingNoDataPlaceholders=_showingNoDataPlaceholders;
@property(nonatomic) BOOL rasterViewer; // @synthesize rasterViewer=_rasterViewer;
@property(nonatomic) unsigned int mapLayerPosition; // @synthesize mapLayerPosition=_mapLayer;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (id)_clutTextureForLevelOfDetail:(unsigned int)arg1 scale:(float)arg2;
- (void)stylesheetDidChange;
- (id)stylesheet;
- (void)reset;
- (void)dealloc;
- (id)init;
- (unsigned int)supportedRenderPasses;

@end

