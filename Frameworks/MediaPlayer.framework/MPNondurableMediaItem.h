/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MediaPlayer/MPMediaItem.h>

@interface MPNondurableMediaItem : MPMediaItem
{
    unsigned long long _persistentID;
}

+ (id)defaultPropertyValues;
+ (BOOL)canFilterByProperty:(id)arg1;
- (BOOL)isUsableAsRepresentativeItem;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(id)arg1;
- (BOOL)incrementPlayCountForStopTime:(double)arg1;
- (void)incrementPlayCountForPlayingToEnd;
- (void)incrementSkipCount;
- (void)noteWasPlayedToTime:(double)arg1 skipped:(BOOL)arg2;
- (void)markNominalAmountHasBeenPlayed;
- (BOOL)didSkipWithPlayedToTime:(double)arg1;
- (BOOL)existsInLibrary;
- (unsigned long long)persistentID;
- (id)initWithPersistentID:(unsigned long long)arg1;

@end

