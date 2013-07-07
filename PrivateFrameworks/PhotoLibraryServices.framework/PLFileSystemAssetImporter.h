/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSString, PLPhotoLibrary;

@interface PLFileSystemAssetImporter : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    NSString *_photoLibraryStoreUUID;
    NSMutableIndexSet *_thumbIndexes;
    BOOL _hasProcessedAnyAssets;
    NSMutableSet *_existingUUIDs;
    NSMutableDictionary *_existingUUIDsByPath;
    NSMutableDictionary *_existingOIDsByUUID;
    unsigned int _thumbnailBatchFetchSize;
}

@property(nonatomic) unsigned int thumbnailBatchFetchSize; // @synthesize thumbnailBatchFetchSize=_thumbnailBatchFetchSize;
@property(retain, nonatomic) NSMutableDictionary *existingOIDsByUUID; // @synthesize existingOIDsByUUID=_existingOIDsByUUID;
@property(retain, nonatomic) NSMutableDictionary *existingUUIDsByPath; // @synthesize existingUUIDsByPath=_existingUUIDsByPath;
@property(retain, nonatomic) NSMutableSet *existingUUIDs; // @synthesize existingUUIDs=_existingUUIDs;
- (unsigned int)nextThumbnailIndex;
- (void)addAvailableThumbnailIndex:(unsigned int)arg1;
- (BOOL)setupVideoAsset:(id)arg1 withURL:(id)arg2;
- (BOOL)setupPhotoAsset:(id)arg1 withURL:(id)arg2;
- (void)setModificationAndCreationDateOnAsset:(id)arg1 withURL:(id)arg2;
- (id)addAssetWithURLs:(id)arg1;
- (id)addAssetWithURLs:(id)arg1 forceInsert:(BOOL)arg2 forceUpdate:(BOOL)arg3;
- (id)assetURLisInDatabase:(id)arg1;
- (id)_addAssetWithURL:(id)arg1 existingOID:(id)arg2;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;

@end

