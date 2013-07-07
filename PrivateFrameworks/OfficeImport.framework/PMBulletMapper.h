/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/CMMapper.h>

@class CMStyle, OADParagraphProperties;

__attribute__((visibility("hidden")))
@interface PMBulletMapper : CMMapper
{
    OADParagraphProperties *mProperties;
    CMStyle *mStyle;
    int mFontSize;
}

+ (id)stringForIndex:(int)arg1 withFormat:(int)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)dealloc;
- (id)initWithOadProperties:(id)arg1 fontSize:(int)arg2 parent:(id)arg3;
- (id)makeBulletWithListState:(id)arg1;
- (void)mapBulletColorWithState:(id)arg1;
- (id)bulletFontName;
- (int)bulletSize;

@end

