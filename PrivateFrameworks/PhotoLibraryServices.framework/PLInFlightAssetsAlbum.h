/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "PLAlbumProtocol.h"
#import "PLDerivedAlbumOrigin.h"
#import "PLIndexMappingCache.h"

@class NSArray, NSCache, NSDate, NSDictionary, NSFetchRequest, NSMutableOrderedSet, NSNumber, NSObject<PLIndexMappingCache>, NSOrderedSet, NSString, NSURL, PLManagedAlbum, PLManagedAsset, UIImage;

@interface PLInFlightAssetsAlbum : NSObject <PLAlbumProtocol, PLIndexMappingCache, PLDerivedAlbumOrigin>
{
    NSFetchRequest *_fetchRequest;
    NSMutableOrderedSet *_albumOIDs;
    NSMutableOrderedSet *_inflightAssets;
    unsigned int _photosCount;
    unsigned int _videosCount;
    NSCache *__assetCache;
    PLManagedAlbum *_backingAlbum;
    BOOL _sessionLimited;
    id _weak_assets;
    NSObject<PLIndexMappingCache> *_derivedAlbums[5];
}

+ (struct NSObject *)inFlightAssetsAlbumWithBackingAlbum:(struct NSObject *)arg1;
@property(readonly, nonatomic) PLManagedAlbum *backingAlbum; // @synthesize backingAlbum=_backingAlbum;
- (id)filteredIndexesForPredicate:(id)arg1;
- (void)startNewSession;
@property(nonatomic) BOOL sessionLimited;
- (void)removeObjectFromMergedAssetsAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inMergedAssetsAtIndex:(unsigned int)arg2;
- (void)getMergedAssets:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectInMergedAssetsAtIndex:(unsigned int)arg1;
- (unsigned int)indexInMergedAssetsOfObject:(id)arg1;
- (unsigned int)countOfMergedAssets;
- (id)managedObjectsForOIDs:(id)arg1;
- (id)managedObjectsAtAlbumIndexes:(id)arg1;
- (id)managedObjectAtAlbumIndex:(unsigned int)arg1;
- (id)managedObjectForOID:(id)arg1;
- (unsigned int)batchSize;
- (BOOL)hasDerivedIndexMappers;
- (void)enumerateDerivedAlbums:(id)arg1;
- (void)unregisterAllDerivedAlbums;
- (void)registerDerivedAlbum:(struct NSObject *)arg1;
- (id)titleForSectionStartingAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) id sectioningComparator;
@property(readonly, nonatomic) id sortingComparator;
- (void)batchFetchAssets:(id)arg1;
- (id)assetsByObjectIDAtIndexes:(id)arg1;
- (void)updateStackedImageShouldNotifyImmediately:(BOOL)arg1;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
@property(nonatomic) int pendingItemsType;
@property(nonatomic) int pendingItemsCount;
- (id)displayableIndexesForCount:(unsigned int)arg1;
@property(readonly, nonatomic) NSURL *groupURL;
@property(retain, nonatomic) NSString *importSessionID;
@property(retain, nonatomic) NSDictionary *slideshowSettings;
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
@property(readonly, nonatomic) UIImage *posterImage;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(nonatomic) BOOL hasUnseenContentBoolValue;
@property(readonly, nonatomic) unsigned int videosCount;
@property(readonly, nonatomic) unsigned int photosCount;
@property(readonly, nonatomic) BOOL isEmpty;
- (unsigned int)count;
@property(readonly, nonatomic) unsigned int assetsCount;
@property(readonly, nonatomic) unsigned int approximateCount;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableAssets;
@property(readonly, nonatomic) NSOrderedSet *assets;
@property(readonly, nonatomic) int kindValue;
@property(readonly, nonatomic) NSNumber *kind;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *uuid;
- (unsigned int)countForAssetsOfKind:(short)arg1;
- (unsigned int)_fetchedCountForAssetsOfKind:(short)arg1;
- (id)_albumOIDs;
- (void)_resetAlbumOIDs;
- (id)fetchRequest;
@property(nonatomic) NSMutableOrderedSet *_assets;
- (Class)derivedChangeNotificationClass;
- (BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (id)currentStateForChange;
@property(readonly, nonatomic) id <NSObject><NSCopying> cachedIndexMapState;
- (void)removeInflightAssets:(id)arg1;
- (void)addInFlightAsset:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithBackingAlbum:(struct NSObject *)arg1;

// Remaining properties
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSDate *startDate;

@end

