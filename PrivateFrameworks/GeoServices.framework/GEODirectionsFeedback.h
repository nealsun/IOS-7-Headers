/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSData, NSMutableArray;

@interface GEODirectionsFeedback : PBCodable
{
    CDStruct_7659fad3 *_stepFeedbacks;
    unsigned int _stepFeedbacksCount;
    unsigned int _stepFeedbacksSpace;
    NSData *_directionResponseID;
    NSMutableArray *_traversedRouteIDs;
}

@property(retain, nonatomic) NSMutableArray *traversedRouteIDs; // @synthesize traversedRouteIDs=_traversedRouteIDs;
@property(retain, nonatomic) NSData *directionResponseID; // @synthesize directionResponseID=_directionResponseID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setStepFeedbacks:(CDStruct_7659fad3 *)arg1 count:(unsigned int)arg2;
- (CDStruct_7659fad3)stepFeedbackAtIndex:(unsigned int)arg1;
- (void)addStepFeedback:(CDStruct_7659fad3)arg1;
- (void)clearStepFeedbacks;
@property(readonly, nonatomic) CDStruct_7659fad3 *stepFeedbacks;
@property(readonly, nonatomic) unsigned int stepFeedbacksCount;
- (id)traversedRouteIDsAtIndex:(unsigned int)arg1;
- (unsigned int)traversedRouteIDsCount;
- (void)addTraversedRouteIDs:(id)arg1;
- (void)clearTraversedRouteIDs;
@property(readonly, nonatomic) BOOL hasDirectionResponseID;
- (void)dealloc;

@end

