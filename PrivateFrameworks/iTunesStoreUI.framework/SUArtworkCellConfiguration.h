/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUArrayCellConfiguration.h>

#import "ISStoreURLOperationDelegate.h"

@class NSMutableArray, NSMutableDictionary;

@interface SUArtworkCellConfiguration : SUArrayCellConfiguration <ISStoreURLOperationDelegate>
{
    NSMutableDictionary *_artworkByURL;
    NSMutableArray *_artworkLoadOperations;
}

+ (id)copyDefaultContext;
- (id)_artworkImageForURL:(id)arg1 dataProvider:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)setRepresentedObject:(id)arg1;
- (void)reloadAfterArtworkLoad;
- (id)copyImageDataProvider;
- (void)cancelArtworkRequests;
- (id)artworkImageForURL:(id)arg1;
- (id)artworkImageForItemImage:(id)arg1;
- (void)dealloc;

@end

