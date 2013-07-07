/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSUbiquitousKeyValueStore;

@interface StockManager : NSObject
{
    NSMutableArray *_defaultListStockSymbols;
    BOOL _shouldPostSyncNotifications;
    NSMutableArray *_stocksList;
    NSMutableArray *_chartDataLRUCache;
    double _lastModifiedTime;
    BOOL _needRemoteAddNotification;
    BOOL _needRemoteDeleteNotification;
    BOOL _needRemoteMoveNotification;
    NSUbiquitousKeyValueStore *_syncedKVStore;
}

+ (void)clearSharedManager;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_checkForMovedStocks;
- (void)_checkForDeletedStocks;
- (void)_checkForAddedStocks;
- (void)saveDataChanges;
- (void)saveListChanges;
- (void)_saveDataChangesWithDictionaries:(id)arg1;
- (BOOL)anyMarketOpen;
- (BOOL)anyMarketOpenWithRealtimePrice;
- (BOOL)anyPriceIsRealtime;
- (void)clearCachedChartDataImageSets;
- (void)clearCachedChartData;
- (void)UpdateChartDataInLRU:(id)arg1;
- (void)DeleteChartData:(id)arg1;
- (void)RemoveChartDataFromLRU:(id)arg1;
- (void)moveStockFromIndex:(int)arg1 toIndex:(int)arg2;
- (void)removeStock:(id)arg1;
- (void)addStock:(id)arg1;
- (id)stockWithSymbol:(id)arg1;
- (id)stocksList;
- (BOOL)setLocalStockListFromSyncableStockList:(id)arg1;
- (id)makeSyncableStockListFromList:(id)arg1;
- (void)handleSyncedDataChanged:(id)arg1;
- (void)reloadStocksFromDefaults;
- (id)_defaultStockDictionaries;
- (id)_localeStocks;
- (id)stockForURL:(id)arg1;
- (void)dealloc;
- (id)init;

@end

