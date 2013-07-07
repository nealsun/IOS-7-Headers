/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol AFClientService <NSObject>
- (oneway void)_refreshAssistantValidation;
- (oneway void)_startSpeechWithURL:(id)arg1 isNarrowBand:(BOOL)arg2;
- (oneway void)_barrierWithReply:(id)arg1;
- (oneway void)_clearAssistantInfoForAccountIdentifier:(id)arg1;
- (oneway void)_fetchAppContextWithReply:(id)arg1;
- (oneway void)_broadcastCommandDictionary:(id)arg1;
- (oneway void)_performCommandDictionary:(id)arg1 forBundleIdentifier:(id)arg2 reply:(id)arg3;
- (oneway void)_sendLargeData:(id)arg1 reply:(id)arg2;
- (oneway void)_pingServiceForIdentifier:(id)arg1 reply:(id)arg2;
- (oneway void)_listInstalledServicesWithReply:(id)arg1;
- (oneway void)redoRequest;
- (oneway void)undoRequest;
- (oneway void)setApplicationContextFromFrontmostAppIncludingBulletins:(id)arg1;
- (oneway void)clearContext;
- (oneway void)performGenericAceCommand:(id)arg1 interruptOutstandingRequest:(BOOL)arg2 reply:(id)arg3;
- (oneway void)requestStateUpdateWithReply:(id)arg1;
- (oneway void)stopSpeechWithOptions:(id)arg1;
- (oneway void)cancelSpeech;
- (oneway void)startSpeechCorrectionWithText:(id)arg1 forCorrectionContext:(id)arg2;
- (oneway void)rollbackRequest;
- (oneway void)cancelRequest;
- (oneway void)updateSpeechOptions:(id)arg1;
- (oneway void)startSpeechPronunciationRequestWithOptions:(id)arg1 speechSource:(id)arg2 pronunciationContext:(id)arg3;
- (oneway void)startSpeechRequestWithOptions:(id)arg1 speechSource:(id)arg2;
- (oneway void)sendAssistantDirectActionRequest:(id)arg1;
- (oneway void)sendAssistantRequest:(id)arg1 reply:(id)arg2;
- (oneway void)endSession;
- (oneway void)setIsStark:(BOOL)arg1;
- (oneway void)setLockState:(BOOL)arg1 showingLockScreen:(BOOL)arg2;
- (oneway void)preheat;
@end

