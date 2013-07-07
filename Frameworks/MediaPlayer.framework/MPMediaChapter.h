/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface MPMediaChapter : NSObject
{
    int _chapterType;
    unsigned int _indexInChaptersWithAnyType;
    unsigned int _indexInChaptersWithSameType;
    double _playbackDuration;
    double _playbackTime;
    id _value;
    id _valueLoader;
}

@property(copy, nonatomic) id valueLoader; // @synthesize valueLoader=_valueLoader;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
@property(nonatomic) double playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property(nonatomic) int chapterType; // @synthesize chapterType=_chapterType;
@property(nonatomic) unsigned int indexInChaptersWithSameType; // @synthesize indexInChaptersWithSameType=_indexInChaptersWithSameType;
@property(nonatomic) unsigned int indexInChaptersWithAnyType; // @synthesize indexInChaptersWithAnyType=_indexInChaptersWithAnyType;
- (void).cxx_destruct;
- (double)duration;
- (id)title;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (int)_sortByChapterIndex:(id)arg1;

@end

