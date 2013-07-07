/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "PLAlbumProtocol.h"

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSSet, NSString, NSURL, PLManagedAsset, PLPlacesMapAnnotation, UIImage;

@interface PLPlace : NSObject <PLAlbumProtocol>
{
    PLPlacesMapAnnotation *_annotation;
    BOOL _titleIsNumberOfPhotos;
    NSMutableArray *_photos;
    BOOL _needsToUpdateAlbumPhotos;
    unsigned int numberOfPhotos;
    unsigned int numberOfVideos;
    NSSet *assetsSet;
    NSDictionary *slideshowSettings;
    NSString *_uuid;
    NSMutableOrderedSet *_assets;
    CDStruct_feeb6407 originalRegion;
    CDStruct_feeb6407 destinationRegion;
    CDStruct_feeb6407 _region;
}

@property(nonatomic) CDStruct_90e2a262 region; // @synthesize region=_region;
@property(nonatomic) CDStruct_90e2a262 destinationRegion; // @synthesize destinationRegion;
@property(nonatomic) CDStruct_90e2a262 originalRegion; // @synthesize originalRegion;
@property(retain, nonatomic) NSMutableOrderedSet *_assets; // @synthesize _assets;
@property(copy, nonatomic) NSString *_uuid; // @synthesize _uuid;
@property(retain, nonatomic) NSDictionary *slideshowSettings; // @synthesize slideshowSettings;
@property(retain, nonatomic) NSSet *assetsSet; // @synthesize assetsSet;
@property(nonatomic) unsigned int numberOfVideos; // @synthesize numberOfVideos;
@property(nonatomic) unsigned int numberOfPhotos; // @synthesize numberOfPhotos;
- (void)_updateAnnotationTitle;
- (id)_annotationTitle;
- (CDStruct_c3b9c2ee)_placeLocation;
- (BOOL)hasSameEffectiveLocationAs:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)effectiveLocation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPlace:(id)arg1;
- (id)annotation;
- (void)setTitleIsNumberOfPhotos:(BOOL)arg1;
- (BOOL)shouldGroupPhoto:(id)arg1;
- (BOOL)hasPhoto:(id)arg1;
- (void)removePhoto:(id)arg1;
- (void)addPhoto:(id)arg1;
- (void)batchFetchAssets:(id)arg1;
- (id)displayableIndexesForCount:(unsigned int)arg1;
- (id)titleForSectionStartingAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) id sectioningComparator;
@property(readonly, nonatomic) id sortingComparator;
@property(readonly, nonatomic) NSURL *groupURL;
@property(retain, nonatomic) NSString *importSessionID;
@property(readonly, nonatomic) BOOL shouldDeleteWhenEmpty;
- (BOOL)canPerformEditOperation:(int)arg1;
@property(readonly, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) BOOL canShowComments;
@property(readonly, nonatomic) BOOL canContributeToCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isMultipleContributorCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isOwnedCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isStandInAlbum;
@property(readonly, nonatomic) BOOL isPendingPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isWallpaperAlbum;
@property(readonly, nonatomic) BOOL isPanoramasAlbum;
@property(readonly, nonatomic) BOOL isCameraAlbum;
@property(readonly, nonatomic) BOOL isLibrary;
- (unsigned int)indexOfPosterImage;
@property(readonly, nonatomic) UIImage *posterImage;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSString *name;
- (void)updateStackedImageShouldNotifyImmediately:(BOOL)arg1;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
@property(nonatomic) int pendingItemsType;
@property(nonatomic) int pendingItemsCount;
@property(nonatomic) BOOL hasUnseenContentBoolValue;
@property(readonly, nonatomic) unsigned int videosCount;
@property(readonly, nonatomic) unsigned int photosCount;
@property(readonly, nonatomic) BOOL isEmpty;
- (unsigned int)count;
@property(readonly, nonatomic) unsigned int assetsCount;
@property(readonly, nonatomic) unsigned int approximateCount;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableAssets;
- (void)setAssets:(id)arg1;
@property(readonly, nonatomic) NSOrderedSet *assets;
@property(readonly, nonatomic) int kindValue;
@property(readonly, nonatomic) NSNumber *kind;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *uuid;
- (void)dealloc;
- (id)initWithRegion:(CDStruct_90e2a262)arg1;
- (void)_updatePlaceToPlace:(id)arg1;
- (id)_newAnnotationWith2DLocation:(CDStruct_c3b9c2ee)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)_setRegion:(CDStruct_90e2a262)arg1;

// Remaining properties
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;

@end

