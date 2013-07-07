/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSData, NSMutableArray;

@interface GEOETARoute : PBCodable
{
    CDStruct_084d6ede _trafficColorOffsets;
    CDStruct_084d6ede _trafficColors;
    unsigned int _historicTravelTime;
    NSMutableArray *_incidentsOffReRoutes;
    NSMutableArray *_incidentsOnETARoutes;
    NSMutableArray *_incidentsOnReRoutes;
    NSMutableArray *_invalidSectionZilchPoints;
    NSMutableArray *_reroutedRoutes;
    NSData *_routeID;
    NSMutableArray *_steps;
    NSData *_zilchPoints;
    BOOL _routeNoLongerValid;
    struct {
        unsigned int historicTravelTime:1;
        unsigned int routeNoLongerValid:1;
    } _has;
}

@property(nonatomic) unsigned int historicTravelTime; // @synthesize historicTravelTime=_historicTravelTime;
@property(retain, nonatomic) NSMutableArray *incidentsOffReRoutes; // @synthesize incidentsOffReRoutes=_incidentsOffReRoutes;
@property(retain, nonatomic) NSMutableArray *incidentsOnReRoutes; // @synthesize incidentsOnReRoutes=_incidentsOnReRoutes;
@property(retain, nonatomic) NSMutableArray *incidentsOnETARoutes; // @synthesize incidentsOnETARoutes=_incidentsOnETARoutes;
@property(retain, nonatomic) NSMutableArray *invalidSectionZilchPoints; // @synthesize invalidSectionZilchPoints=_invalidSectionZilchPoints;
@property(retain, nonatomic) NSMutableArray *reroutedRoutes; // @synthesize reroutedRoutes=_reroutedRoutes;
@property(nonatomic) BOOL routeNoLongerValid; // @synthesize routeNoLongerValid=_routeNoLongerValid;
@property(retain, nonatomic) NSData *zilchPoints; // @synthesize zilchPoints=_zilchPoints;
@property(retain, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;
@property(retain, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasHistoricTravelTime;
- (id)incidentsOffReRoutesAtIndex:(unsigned int)arg1;
- (unsigned int)incidentsOffReRoutesCount;
- (void)addIncidentsOffReRoutes:(id)arg1;
- (void)clearIncidentsOffReRoutes;
- (id)incidentsOnReRoutesAtIndex:(unsigned int)arg1;
- (unsigned int)incidentsOnReRoutesCount;
- (void)addIncidentsOnReRoutes:(id)arg1;
- (void)clearIncidentsOnReRoutes;
- (id)incidentsOnETARouteAtIndex:(unsigned int)arg1;
- (unsigned int)incidentsOnETARoutesCount;
- (void)addIncidentsOnETARoute:(id)arg1;
- (void)clearIncidentsOnETARoutes;
- (void)setTrafficColorOffsets:(unsigned int *)arg1 count:(unsigned int)arg2;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned int)arg1;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (void)clearTrafficColorOffsets;
@property(readonly, nonatomic) unsigned int *trafficColorOffsets;
@property(readonly, nonatomic) unsigned int trafficColorOffsetsCount;
- (void)setTrafficColors:(unsigned int *)arg1 count:(unsigned int)arg2;
- (unsigned int)trafficColorAtIndex:(unsigned int)arg1;
- (void)addTrafficColor:(unsigned int)arg1;
- (void)clearTrafficColors;
@property(readonly, nonatomic) unsigned int *trafficColors;
@property(readonly, nonatomic) unsigned int trafficColorsCount;
- (id)invalidSectionZilchPointsAtIndex:(unsigned int)arg1;
- (unsigned int)invalidSectionZilchPointsCount;
- (void)addInvalidSectionZilchPoints:(id)arg1;
- (void)clearInvalidSectionZilchPoints;
- (id)reroutedRouteAtIndex:(unsigned int)arg1;
- (unsigned int)reroutedRoutesCount;
- (void)addReroutedRoute:(id)arg1;
- (void)clearReroutedRoutes;
@property(nonatomic) BOOL hasRouteNoLongerValid;
@property(readonly, nonatomic) BOOL hasZilchPoints;
- (id)stepAtIndex:(unsigned int)arg1;
- (unsigned int)stepsCount;
- (void)addStep:(id)arg1;
- (void)clearSteps;
@property(readonly, nonatomic) BOOL hasRouteID;
- (void)dealloc;

@end

