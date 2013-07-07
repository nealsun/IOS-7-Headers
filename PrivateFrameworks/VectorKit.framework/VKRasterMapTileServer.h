/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, VKLRUCache;

@interface VKRasterMapTileServer : NSObject
{
    VKLRUCache *_superTileCache;
    NSMutableDictionary *_activeTileCreators;
    NSMutableDictionary *_pendingRequests;
    NSMutableSet *_tileCreators;
    unsigned int _superTileSize;
    BOOL _softwareRendering;
}

@property(readonly, nonatomic) unsigned int superTileSize; // @synthesize superTileSize=_superTileSize;
- (void)renderRequest:(id)arg1 completion:(id)arg2;
- (void)renderTile:(const struct VKRasterTileKey *)arg1 completion:(id)arg2;
- (id)detailedDescription;
- (void)dealloc;
- (id)initWithSuperTileSize:(unsigned int)arg1 cacheCapacity:(int)arg2 softwareRendering:(BOOL)arg3;
- (id)init;

@end

