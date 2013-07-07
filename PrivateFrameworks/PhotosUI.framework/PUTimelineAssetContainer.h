/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "PLAssetContainer.h"

@class NSArray, NSDate, NSOrderedSet, NSString, PLManagedAsset;

@interface PUTimelineAssetContainer : NSObject <PLAssetContainer>
{
    PLManagedAsset *_keyAsset;
    NSOrderedSet *_assets;
}

@property(retain, nonatomic) NSOrderedSet *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) PLManagedAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) BOOL canShowComments;
- (BOOL)canPerformEditOperation:(int)arg1;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) unsigned int videosCount;
@property(readonly, nonatomic) unsigned int photosCount;
@property(readonly, nonatomic) unsigned int assetsCount;
@property(readonly, nonatomic) unsigned int approximateCount;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *uuid;
- (id)initWithEvents:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;

@end

