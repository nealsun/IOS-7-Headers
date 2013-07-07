/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSMutableArray;

@interface GEORegionalResourceTile : PBCodable
{
    NSMutableArray *_attributions;
    NSMutableArray *_childrens;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
}

@property(retain, nonatomic) NSMutableArray *iconChecksums; // @synthesize iconChecksums=_iconChecksums;
@property(retain, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;
@property(retain, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSMutableArray *childrens; // @synthesize childrens=_childrens;
@property(nonatomic) unsigned int z; // @synthesize z=_z;
@property(nonatomic) unsigned int y; // @synthesize y=_y;
@property(nonatomic) unsigned int x; // @synthesize x=_x;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)iconChecksumAtIndex:(unsigned int)arg1;
- (unsigned int)iconChecksumsCount;
- (void)addIconChecksum:(id)arg1;
- (void)clearIconChecksums;
- (id)attributionAtIndex:(unsigned int)arg1;
- (unsigned int)attributionsCount;
- (void)addAttribution:(id)arg1;
- (void)clearAttributions;
- (id)iconAtIndex:(unsigned int)arg1;
- (unsigned int)iconsCount;
- (void)addIcon:(id)arg1;
- (void)clearIcons;
- (id)childrenAtIndex:(unsigned int)arg1;
- (unsigned int)childrensCount;
- (void)addChildren:(id)arg1;
- (void)clearChildrens;
- (void)dealloc;
- (BOOL)containsTileKey:(const struct _GEOTileKey *)arg1;

@end

