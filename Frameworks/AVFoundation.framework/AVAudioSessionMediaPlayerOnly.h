/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAudioSessionMediaPlayerOnlyInternal, NSString;

@interface AVAudioSessionMediaPlayerOnly : NSObject
{
    AVAudioSessionMediaPlayerOnlyInternal *_audioSession;
}

+ (void)initialize;
- (void)_removeFPListeners;
- (void)_addFPListeners;
- (void)_setFigPlayer:(struct OpaqueFigPlayer *)arg1;
- (id)_weakReference;
- (void)setApplicationAudioSession:(BOOL)arg1;
- (BOOL)isApplicationAudioSession;
- (BOOL)setMode:(id)arg1 error:(id *)arg2;
@property(readonly) NSString *mode;
@property(readonly) int currentHardwareOutputNumberOfChannels;
@property(readonly) int currentHardwareInputNumberOfChannels;
@property(readonly) double currentHardwareSampleRate;
@property(readonly) BOOL inputIsAvailable;
@property(readonly) double preferredIOBufferDuration;
@property(readonly) double preferredHardwareSampleRate;
@property(readonly) NSString *category;
- (BOOL)setPreferredIOBufferDuration:(double)arg1 error:(id *)arg2;
- (BOOL)setPreferredHardwareSampleRate:(double)arg1 error:(id *)arg2;
- (BOOL)setCategory:(id)arg1 error:(id *)arg2;
- (BOOL)setActive:(BOOL)arg1 withFlags:(int)arg2 error:(id *)arg3;
- (BOOL)setActive:(BOOL)arg1 error:(id *)arg2;
@property id <AVAudioSessionDelegateMediaPlayerOnly> delegate;
- (void)dealloc;
- (id)init;

@end

