/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@protocol GEOTileServerProxyDelegate
- (void)proxy:(id)arg1 didShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2;
- (void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2;
- (void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3;
- (void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const struct _GEOTileKey *)arg3 info:(id)arg4;
@end

