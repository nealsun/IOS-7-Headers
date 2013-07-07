/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <StoreServices/SSPurchasableItem.h>

@interface SSPurchasableAppItem : SSPurchasableItem
{
}

+ (id)allPropertyKeys;
+ (id)sortByNameKey;
+ (id)databaseTable;
+ (id)itemsFromDatabase:(id)arg1 forAccount:(long long)arg2 matching:(id)arg3 sortedBy:(id)arg4 sortAscending:(BOOL)arg5;
+ (id)allItemsFromDatabase:(id)arg1 forAccount:(long long)arg2 sortedBy:(id)arg3 sortAscending:(BOOL)arg4;
- (id)description;
- (long long)iTunesVersion;
- (id)humanReadableVersion;
- (id)redownloadParams;
- (BOOL)supportsIPhone;
- (BOOL)supportsIPad;
- (unsigned int)minimumOS;
- (id)longTitle;
- (BOOL)isNewsstand;
- (id)iconURL;
- (id)iconTitle;
- (id)bundleID;
- (unsigned char)contentRatingFlags;
- (id)companyName;
- (id)category;

@end

