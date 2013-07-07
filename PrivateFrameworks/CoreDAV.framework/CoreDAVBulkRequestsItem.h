/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, NSDictionary, NSMutableSet, NSSet;

@interface CoreDAVBulkRequestsItem : CoreDAVItem
{
    CoreDAVLeafItem *_maxResourcesItem;
    CoreDAVLeafItem *_maxSizeItem;
    NSMutableSet *_supportedItems;
}

+ (id)copyParseRules;
@property(readonly) NSSet *supportedItems; // @synthesize supportedItems=_supportedItems;
@property(retain) CoreDAVLeafItem *maxSizeItem; // @synthesize maxSizeItem=_maxSizeItem;
@property(retain) CoreDAVLeafItem *maxResourcesItem; // @synthesize maxResourcesItem=_maxResourcesItem;
@property(readonly) BOOL supportsDelete;
@property(readonly) BOOL supportsUpdate;
@property(readonly) BOOL supportsInsert;
- (BOOL)supportsItemWithNameSpace:(id)arg1 name:(id)arg2;
@property(readonly) int maxSize;
@property(readonly) int maxResources;
@property(readonly) NSDictionary *dictRepresentation;
- (void)addSupportedItem:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

