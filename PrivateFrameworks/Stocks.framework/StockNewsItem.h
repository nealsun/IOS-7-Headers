/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSString, NSURL;

@interface StockNewsItem : NSObject
{
    unsigned long long _ID;
    NSString *_headline;
    NSString *_summary;
    NSString *_source;
    NSDate *_date;
    NSURL *_link;
    NSString *_localizedDateString;
}

+ (id)localizedStringForDate:(id)arg1;
@property(retain, nonatomic) NSURL *link; // @synthesize link=_link;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(nonatomic) unsigned long long ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *localizedDateString;
- (int)chronologicalComparisonWithNewsItem:(id)arg1;
- (id)archiveDictionary;
- (void)dealloc;
- (id)initWithArchiveDictionary:(id)arg1;
- (void)resetLocale;

@end

