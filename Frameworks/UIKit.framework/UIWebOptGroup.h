/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIWebOptGroup : NSObject
{
    id <UIWebSelectedItemPrivate> _group;
    NSArray *_options;
    int _offset;
}

@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
@property(retain, nonatomic) id <UIWebSelectedItemPrivate> group; // @synthesize group=_group;
@property(readonly, nonatomic) int offset; // @synthesize offset=_offset;
- (void)dealloc;
- (id)initWithGroup:(id)arg1 itemOffset:(int)arg2;

@end

