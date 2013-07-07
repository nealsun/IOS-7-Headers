/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NKLibrary, NSArray, NSDate, NSMapTable, NSMutableArray, NSMutableSet, NSString, NSURL;

@interface NKIssue : NSObject
{
    NKLibrary *_library;
    NSString *_name;
    NSDate *_date;
    NSString *_directory;
    NSMutableArray *_assets;
    NSMapTable *_assetsByRequest;
    NSMutableSet *_resolvedAssets;
    BOOL _foundContent;
    BOOL _isDecodingValid;
}

@property(copy) NSString *directory; // @synthesize directory=_directory;
@property(copy) NSDate *date; // @synthesize date=_date;
@property(copy) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)_assetChanged:(id)arg1;
- (void)_cleanupAsset:(id)arg1;
- (void)_markAssetAsResolved:(id)arg1;
- (BOOL)_isDecodingValid;
- (id)_assetsForRequest:(id)arg1;
- (id)_directory;
- (void)_setLibrary:(id)arg1;
- (id)_library;
- (id)addAssetWithRequest:(id)arg1;
@property(readonly) int status;
@property(readonly) NSURL *contentURL;
@property(readonly) NSArray *downloadingAssets;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_initWithName:(id)arg1 date:(id)arg2 directory:(id)arg3;
- (id)_commonInit;

@end

