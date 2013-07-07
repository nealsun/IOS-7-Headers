/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <StoreServices/SSDownloadSession.h>

@class NSNumber, NSString;

@interface SSDownloadHandlerSession : SSDownloadSession
{
    NSString *_downloadPhase;
    NSNumber *_duetTimeoutInterval;
}

@property(readonly) NSNumber *duetTimeoutInterval; // @synthesize duetTimeoutInterval=_duetTimeoutInterval;
- (void)_setBool:(BOOL)arg1 forSessionProperty:(const char *)arg2;
- (void)_finishWithType:(int)arg1 error:(id)arg2;
- (void)setStatusDescription:(id)arg1;
- (void)setPercentComplete:(float)arg1;
@property BOOL needsPowerAssertion;
@property BOOL canBePaused;
@property BOOL blocksOtherDownloads;
- (void)releaseSessionControl;
- (void)finishSessionWithSuccess:(BOOL)arg1 error:(id)arg2;
@property(readonly) NSString *downloadPhase;
- (void)disavowSessionWithError:(id)arg1;
- (void)dealloc;
- (id)_initWithMessage:(id)arg1 controlConnection:(id)arg2;

@end

