/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSSet, NSString;

@protocol MPMediaLibraryDataProvider <NSObject>
@property(readonly, nonatomic) NSString *uniqueIdentifier;
@property(readonly, nonatomic) NSString *name;
- (void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(id)arg2;
- (void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(id)arg2;
- (void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(id)arg2;
- (void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(id)arg2;
- (id)collectionResultSetForQueryCriteria:(id)arg1;
- (id)itemResultSetForQueryCriteria:(id)arg1;
- (void)loadBestArtworkImageDataForSize:(struct CGSize)arg1 ofItemWithIdentifier:(long long)arg2 atPlaybackTime:(double)arg3 completionBlock:(id)arg4;
- (void)loadProperties:(id)arg1 ofCollectionWithIdentifier:(long long)arg2 groupingType:(int)arg3 completionBlock:(id)arg4;
- (void)loadProperties:(id)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)loadValueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(id)arg4;
- (void)loadValueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(id)arg4;

@optional
@property(readonly, nonatomic) NSString *syncValidity;
@property(readonly, nonatomic) NSSet *propertiesToCache;
@property(readonly, nonatomic) BOOL requiresAuthentication;
- (void)setLibraryContainerFilterPredicatesWithCloudFilteringType:(int)arg1;
- (void)setLibraryEntityFilterPredicatesWithCloudFilteringType:(int)arg1;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 itemBlock:(id)arg2 collectionBlock:(void)arg3;
- (void)disconnect;
- (void)connectWithAuthenticationData:(id)arg1 completionBlock:(id)arg2 progressHandler:(void)arg3;
- (void)enumerateCollectionIdentifiersForQueryCriteria:(id)arg1 ordered:(BOOL)arg2 cancelBlock:(id)arg3 usingBlock:(void)arg4;
- (void)enumerateItemIdentifiersForQueryCriteria:(id)arg1 ordered:(BOOL)arg2 cancelBlock:(id)arg3 usingBlock:(void)arg4;
@end

