/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VKTileSource.h>

@class GEOTileKeyMap;

__attribute__((visibility("hidden")))
@interface VKResourcesTileSource : VKTileSource
{
    GEOTileKeyMap *_keyToKeysMap;
}

- (void)cancelDownload:(const struct _GEOTileKey *)arg1;
- (void)performDownload:(const struct _GEOTileKey *)arg1;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (struct VKTileKey)sourceKeyForRenderKey:(const struct VKTileKey *)arg1;
- (BOOL)canFetchTileForKey:(const struct VKTileKey *)arg1;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (int)zEquivalenceClass;
- (int)maximumDownloadZoomLevel;
- (int)minimumDownloadZoomLevel;
- (int)tileSize;
- (BOOL)maximumZoomLevelBoundsCamera;
- (BOOL)minimumZoomLevelBoundsCamera;
- (void)dealloc;
- (id)init;

@end

