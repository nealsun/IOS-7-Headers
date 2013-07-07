/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@interface VKRasterMapTileRequest : NSObject <NSCopying>
{
    BOOL _localizeLabels;
    int _mapType;
    unsigned int _scale;
    struct VKRasterTileKey _tileKey;
}

@property(nonatomic) BOOL localizeLabels; // @synthesize localizeLabels=_localizeLabels;
@property(nonatomic) unsigned int scale; // @synthesize scale=_scale;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
@property(nonatomic) struct VKRasterTileKey tileKey; // @synthesize tileKey=_tileKey;
@property(readonly, nonatomic) struct VKCacheKey cacheKey;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
@property(readonly, nonatomic) struct VKTileKey tk;
@property(readonly, nonatomic) const struct VKRasterTileKey *tileKeyPtr;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

