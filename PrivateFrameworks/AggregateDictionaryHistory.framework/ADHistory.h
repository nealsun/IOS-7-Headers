/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface ADHistory : NSObject
{
    struct Database *_database;
    NSString *_path;
}

@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (BOOL)distributionsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(id)arg4;
- (BOOL)scalarsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(id)arg4;
- (void)dealloc;
- (id)initWithDefaultPath;
- (id)initWithPath:(id)arg1;

@end

