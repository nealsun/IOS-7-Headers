/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VKTileSetBackedTileSource.h>

__attribute__((visibility("hidden")))
@interface VKRasterTrafficTileSource : VKTileSetBackedTileSource
{
}

- (unsigned int)mapLayerForZoomLevelRange;
- (BOOL)expires;
- (BOOL)minimumZoomLevelBoundsCamera;
- (BOOL)maximumZoomLevelBoundsCamera;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (id)init;

@end

