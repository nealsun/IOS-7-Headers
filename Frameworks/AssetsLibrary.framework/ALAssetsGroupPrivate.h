/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "ALAssetsLibraryAsset.h"

@class ALAssetsFilter, ALAssetsLibrary, NSMutableDictionary, NSObject<PLAlbumProtocol>, PLPhotoLibrary;

__attribute__((visibility("hidden")))
@interface ALAssetsGroupPrivate : NSObject <ALAssetsLibraryAsset>
{
    BOOL _loadedAssets;
    ALAssetsLibrary *_library;
    BOOL _isValid;
    BOOL _isCloudSharedGroup;
    struct NSObject *_album;
    ALAssetsFilter *_assetsFilter;
    unsigned int _groupType;
    NSMutableDictionary *_propertyValues;
    PLPhotoLibrary *_photoLibrary;
}

@property(nonatomic) BOOL isCloudSharedGroup; // @synthesize isCloudSharedGroup=_isCloudSharedGroup;
@property(retain, nonatomic) PLPhotoLibrary *_photoLibrary; // @synthesize _photoLibrary;
@property(retain, nonatomic) NSMutableDictionary *propertyValues; // @synthesize propertyValues=_propertyValues;
@property(nonatomic) BOOL isValid; // @synthesize isValid=_isValid;
@property(nonatomic) unsigned int groupType; // @synthesize groupType=_groupType;
@property(retain, nonatomic) ALAssetsFilter *assetsFilter; // @synthesize assetsFilter=_assetsFilter;
@property(retain, nonatomic) NSObject<PLAlbumProtocol> *album; // @synthesize album=_album;
- (void)_performBlockAndWait:(id)arg1;
- (void)libraryDidChange;
@property(nonatomic) ALAssetsLibrary *library;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (void)populateAssets;
- (void)resetAssets;
- (BOOL)hasFilter;
- (int)albumFilter;
- (void)dealloc;
- (id)initWithAlbum:(struct NSObject *)arg1 library:(id)arg2;

@end

