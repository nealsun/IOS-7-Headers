/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOVConnectivity : PBCodable
{
    NSMutableArray *_junctions;
}

@property(retain, nonatomic) NSMutableArray *junctions; // @synthesize junctions=_junctions;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)junctionAtIndex:(unsigned int)arg1;
- (unsigned int)junctionsCount;
- (void)addJunction:(id)arg1;
- (void)clearJunctions;
- (void)dealloc;

@end

