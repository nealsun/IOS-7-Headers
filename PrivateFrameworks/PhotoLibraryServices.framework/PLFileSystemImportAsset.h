/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSMutableSet, NSObject<PLAlbumProtocol>;

@interface PLFileSystemImportAsset : NSObject
{
    NSMutableSet *_urls;
    NSDate *_dateCreated;
    struct NSObject *_destinationAlbum;
    int assetKind;
}

@property(nonatomic) int assetKind; // @synthesize assetKind;
@property(retain, nonatomic) NSObject<PLAlbumProtocol> *destinationAlbum; // @synthesize destinationAlbum=_destinationAlbum;
@property(retain, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) NSMutableSet *urls; // @synthesize urls=_urls;
- (int)compare:(id)arg1;
- (void)dealloc;
- (BOOL)isCameraKit;
- (id)initWithURLs:(id)arg1 creationDate:(id)arg2 destinationAlbum:(struct NSObject *)arg3 assetKind:(int)arg4;

@end

