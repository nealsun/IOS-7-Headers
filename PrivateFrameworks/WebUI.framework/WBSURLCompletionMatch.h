/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface WBSURLCompletionMatch : NSObject
{
    int _matchLocation;
}

+ (int)matchLocationForString:(id)arg1 inTitle:(id)arg2;
+ (int)matchLocationForString:(id)arg1 inURLString:(id)arg2;
@property(readonly, nonatomic) int matchLocation; // @synthesize matchLocation=_matchLocation;
- (id)matchingStringWithUserTypedPrefix:(id)arg1;
- (id)userVisibleURLString;
- (id)title;
- (id)originalURLString;
- (id)initWithMatchLocation:(int)arg1;

@end

