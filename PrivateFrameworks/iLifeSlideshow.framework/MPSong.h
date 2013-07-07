/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class MCSong, MPAudioPlaylist, MPSongInternal, NSString, NSURL;

@interface MPSong : NSObject <NSCoding, NSCopying>
{
    NSString *_path;
    MCSong *_song;
    MPAudioPlaylist *_parentPlaylist;
    MPSongInternal *_internal;
}

+ (id)songWithPath:(id)arg1;
+ (id)songWithURL:(id)arg1;
+ (id)song;
- (id)parentPlaylist;
- (int)index;
@property(nonatomic) float audioVolume; // @dynamic audioVolume;
@property(nonatomic) double fadeOutDuration; // @dynamic fadeOutDuration;
@property(nonatomic) double fadeInDuration; // @dynamic fadeInDuration;
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic) double startTime; // @dynamic startTime;
@property(copy, nonatomic) NSURL *URL; // @dynamic URL;
@property(copy, nonatomic) NSString *path; // @dynamic path;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (double)maxDuration;
- (id)song;
- (void)setInternalStartTime;
- (void)setInternalDuration;
- (void)setParentPlaylist:(id)arg1;
- (void)setSong:(id)arg1;
- (void)copyStruct:(id)arg1;
- (id)parentDocument;
- (double)stopTime;

@end

