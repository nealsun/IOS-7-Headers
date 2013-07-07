/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSMutableArray;

@interface GEOPlaceSearchFeedbackCollection : PBCodable
{
    CDStruct_612aec5b _sessionID;
    unsigned long long _businessID;
    long long _placeID;
    NSMutableArray *_actionCaptures;
    int _localSearchProviderID;
    struct {
        unsigned int sessionID:1;
        unsigned int businessID:1;
        unsigned int placeID:1;
        unsigned int localSearchProviderID:1;
    } _has;
}

@property(nonatomic) int localSearchProviderID; // @synthesize localSearchProviderID=_localSearchProviderID;
@property(retain, nonatomic) NSMutableArray *actionCaptures; // @synthesize actionCaptures=_actionCaptures;
@property(nonatomic) long long placeID; // @synthesize placeID=_placeID;
@property(nonatomic) unsigned long long businessID; // @synthesize businessID=_businessID;
@property(nonatomic) CDStruct_612aec5b sessionID; // @synthesize sessionID=_sessionID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasLocalSearchProviderID;
- (id)actionCaptureAtIndex:(unsigned int)arg1;
- (unsigned int)actionCapturesCount;
- (void)addActionCapture:(id)arg1;
- (void)clearActionCaptures;
@property(nonatomic) BOOL hasPlaceID;
@property(nonatomic) BOOL hasBusinessID;
@property(nonatomic) BOOL hasSessionID;
- (void)dealloc;

@end

