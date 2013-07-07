/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSString;

@interface GEOLocalizedName : PBCodable
{
    NSString *_languageCode;
    NSString *_name;
    unsigned int _nameRank;
    NSString *_nameType;
    NSString *_phoneticName;
    BOOL _isDefault;
    struct {
        unsigned int nameRank:1;
        unsigned int isDefault:1;
    } _has;
}

@property(retain, nonatomic) NSString *phoneticName; // @synthesize phoneticName=_phoneticName;
@property(nonatomic) unsigned int nameRank; // @synthesize nameRank=_nameRank;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *nameType; // @synthesize nameType=_nameType;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(nonatomic) BOOL isDefault; // @synthesize isDefault=_isDefault;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPhoneticName;
@property(nonatomic) BOOL hasNameRank;
@property(readonly, nonatomic) BOOL hasName;
@property(readonly, nonatomic) BOOL hasNameType;
@property(readonly, nonatomic) BOOL hasLanguageCode;
@property(nonatomic) BOOL hasIsDefault;
- (void)dealloc;

@end

