/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol MFLibraryContentIndexDataSource <NSObject>
- (void)contentIndex:(id)arg1 invalidateItemsGreaterThanTransactionId:(unsigned int)arg2;
- (void)contentIndex:(id)arg1 assignTransactionIdentifier:(unsigned int)arg2 forDocumentIdentifiers:(id)arg3;
- (id)itemsRequiringIndexingForContentIndex:(id)arg1 limit:(unsigned int)arg2;
@end

