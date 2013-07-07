/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class GEOAddress, GEOPlace, GEOPlaceSearchRequest, NSMutableArray, NSString;

@interface GEOPlaceResult : PBCodable
{
    double _confidence;
    NSMutableArray *_additionalPlaces;
    NSMutableArray *_matchedTokens;
    NSMutableArray *_namedFeatures;
    GEOPlace *_place;
    NSString *_quad;
    GEOPlaceSearchRequest *_revgeoRequestTemplate;
    NSString *_suggestedQuery;
    GEOAddress *_tokenEntity;
    unsigned int _travelTime;
    NSMutableArray *_unmatchedStrings;
    struct {
        unsigned int confidence:1;
        unsigned int travelTime:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *matchedTokens; // @synthesize matchedTokens=_matchedTokens;
@property(retain, nonatomic) GEOPlaceSearchRequest *revgeoRequestTemplate; // @synthesize revgeoRequestTemplate=_revgeoRequestTemplate;
@property(retain, nonatomic) NSMutableArray *namedFeatures; // @synthesize namedFeatures=_namedFeatures;
@property(retain, nonatomic) NSMutableArray *unmatchedStrings; // @synthesize unmatchedStrings=_unmatchedStrings;
@property(retain, nonatomic) NSString *quad; // @synthesize quad=_quad;
@property(retain, nonatomic) GEOAddress *tokenEntity; // @synthesize tokenEntity=_tokenEntity;
@property(nonatomic) unsigned int travelTime; // @synthesize travelTime=_travelTime;
@property(retain, nonatomic) NSString *suggestedQuery; // @synthesize suggestedQuery=_suggestedQuery;
@property(retain, nonatomic) NSMutableArray *additionalPlaces; // @synthesize additionalPlaces=_additionalPlaces;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) GEOPlace *place; // @synthesize place=_place;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)matchedTokenAtIndex:(unsigned int)arg1;
- (unsigned int)matchedTokensCount;
- (void)addMatchedToken:(id)arg1;
- (void)clearMatchedTokens;
@property(readonly, nonatomic) BOOL hasRevgeoRequestTemplate;
- (id)namedFeatureAtIndex:(unsigned int)arg1;
- (unsigned int)namedFeaturesCount;
- (void)addNamedFeature:(id)arg1;
- (void)clearNamedFeatures;
- (id)unmatchedStringAtIndex:(unsigned int)arg1;
- (unsigned int)unmatchedStringsCount;
- (void)addUnmatchedString:(id)arg1;
- (void)clearUnmatchedStrings;
@property(readonly, nonatomic) BOOL hasQuad;
@property(readonly, nonatomic) BOOL hasTokenEntity;
@property(nonatomic) BOOL hasTravelTime;
@property(readonly, nonatomic) BOOL hasSuggestedQuery;
- (id)additionalPlaceAtIndex:(unsigned int)arg1;
- (unsigned int)additionalPlacesCount;
- (void)addAdditionalPlace:(id)arg1;
- (void)clearAdditionalPlaces;
@property(nonatomic) BOOL hasConfidence;
- (void)dealloc;

@end

