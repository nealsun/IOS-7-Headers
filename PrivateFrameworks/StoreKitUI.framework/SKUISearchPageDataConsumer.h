/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <StoreKitUI/SKUIDataConsumer.h>

@class NSString, SKUIClientContext;

@interface SKUISearchPageDataConsumer : SKUIDataConsumer
{
    SKUIClientContext *_clientContext;
    NSString *_searchTerm;
}

+ (id)consumerWithClientContext:(id)arg1;
@property(copy, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
- (void).cxx_destruct;
- (id)_sortFacetWithSorts:(id)arg1;
- (id)_priceFacet;
- (id)_newSearchResultGroupWithBubbleDictionary:(id)arg1 platformDictionary:(id)arg2 editorialDictionary:(id)arg3;
- (id)_categoriesFacetWithCategories:(id)arg1;
- (id)objectForData:(id)arg1 response:(id)arg2 error:(id *)arg3;

@end

