/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, NSURL, SUPlayerStatus;

@interface SUScriptAudioPlayer : SUScriptObject
{
    SUPlayerStatus *_playerStatus;
    NSURL *_url;
    NSURL *_keyUrl;
    NSURL *_certificateUrl;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_audioPlayerStateChangeNotification:(id)arg1;
@property(readonly) int playerStateUnplayed;
@property(readonly) int playerStatePaused;
@property(readonly) int playerStateFinished;
@property(readonly) int playerStateFailed;
@property(readonly) int playerStateBuffering;
@property(readonly) int playerStateActive;
@property(readonly) NSString *nowPlayingKeyTitle;
@property(readonly) NSString *nowPlayingKeyPlaybackDuration;
@property(readonly) NSString *nowPlayingKeyPersistentID;
@property(readonly) NSString *nowPlayingKeyGenre;
@property(readonly) NSString *nowPlayingKeyDiscNumber;
@property(readonly) NSString *nowPlayingKeyDiscCount;
@property(readonly) NSString *nowPlayingKeyComposer;
@property(readonly) NSString *nowPlayingKeyArtwork;
@property(readonly) NSString *nowPlayingKeyArtist;
@property(readonly) NSString *nowPlayingKeyAlbumTrackNumber;
@property(readonly) NSString *nowPlayingKeyAlbumTrackCount;
@property(readonly) NSString *nowPlayingKeyAlbumTitle;
@property(readonly) NSString *URL;
@property(readonly) int state;
@property(readonly) NSString *keyURL;
@property(readonly) double duration;
@property(readonly) double currentTime;
@property(readonly) NSString *certificateURL;
- (id)_className;
- (void)stop;
- (void)setValue:(id)arg1 forNowPlayingKey:(id)arg2;
- (void)pause;
- (void)play;
- (void)dealloc;
- (id)initWithURL:(id)arg1 keyURL:(id)arg2 certificateURL:(id)arg3;

@end

