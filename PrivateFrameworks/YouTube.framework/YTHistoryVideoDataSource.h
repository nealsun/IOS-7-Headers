/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <YouTube/YTVideoDataSource.h>

@class NSMutableArray;

@interface YTHistoryVideoDataSource : YTVideoDataSource
{
    NSMutableArray *_history;
}

- (void)_saveToDefaults;
- (unsigned int)maxVideosToSave;
- (void)clearHistory;
- (void)addVideo:(id)arg1;
- (void)loadFromDefaults;
- (void)reloadData;
- (id)_history;

@end

