/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString, SSItemImageCollection, SUClientInterface, UIImage;

@interface SUSectionsResponse : NSObject
{
    BOOL _cacheable;
    SUClientInterface *_clientInterface;
    UIImage *_moreListImage;
    UIImage *_moreListSelectedImage;
    NSMutableDictionary *_rawResponseDictionary;
    int _responseType;
    NSMutableDictionary *_sectionsCache;
    NSNumber *_shouldResetUserOrdering;
    NSArray *_sections;
}

+ (void)setLastCachedVersionIdentifier:(id)arg1;
+ (id)sectionsCacheDirectory;
+ (id)lastCachedVersionIdentifier;
@property(readonly, nonatomic) int responseType; // @synthesize responseType=_responseType;
@property(readonly, nonatomic) NSDictionary *rawResponseDictionary; // @synthesize rawResponseDictionary=_rawResponseDictionary;
@property(retain, nonatomic) UIImage *moreListSelectedImage; // @synthesize moreListSelectedImage=_moreListSelectedImage;
@property(retain, nonatomic) UIImage *moreListImage; // @synthesize moreListImage=_moreListImage;
@property(nonatomic, getter=isCacheable) BOOL cacheable; // @synthesize cacheable=_cacheable;
- (void)_writeImage:(id)arg1 toCachePath:(id)arg2 forIdentifier:(id)arg3 variant:(id)arg4;
- (void)_writeButtonImagesForSection:(id)arg1 buttons:(id)arg2 cachePath:(id)arg3;
- (id)_newVariantStringForButton:(id)arg1;
- (id)_newSectionsFromDictionary:(id)arg1;
- (id)_newImageForIdentifier:(id)arg1 variant:(id)arg2 cacheDirectory:(id)arg3;
- (void)_loadButtonArtworkForSection:(id)arg1 buttons:(id)arg2 cachePath:(id)arg3;
- (BOOL)_loadArtworkFromCacheDirectory:(id)arg1;
- (void)_applyDefaultSearchFieldConfigurationsToSections:(id)arg1;
- (BOOL)writeToCacheDirectory:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *versionString;
@property(copy, nonatomic) NSString *storeFrontIdentifier;
@property(nonatomic) BOOL shouldResetUserOrdering;
@property(readonly, nonatomic) NSDictionary *sectionsDictionary;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) NSString *moreListTitle;
@property(readonly, nonatomic) SSItemImageCollection *moreListImageCollection;
@property(readonly, nonatomic) NSArray *allSections;
- (void)dealloc;
- (id)initWithClientInterface:(id)arg1 sectionsDictionary:(id)arg2 responseType:(int)arg3;
- (id)initWithClientInterface:(id)arg1 cacheDirectory:(id)arg2;
- (id)init;

@end

