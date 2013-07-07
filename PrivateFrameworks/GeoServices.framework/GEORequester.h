/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBRequester.h"

@class NSString, NSThread;

@interface GEORequester : PBRequester
{
    BOOL _disableReplay;
    NSThread *_thread;
    BOOL _usePersistentConnection;
    BOOL _useBackgroundConnection;
    NSString *_debugRequestName;
}

+ (void)replayRequests;
+ (void)stopAllRequests;
+ (void)setLogRequestResponseDirectory:(id)arg1;
+ (void)setOSVersion:(id)arg1;
+ (void)setAppID:(id)arg1;
@property BOOL disableReplay; // @synthesize disableReplay=_disableReplay;
@property(retain, nonatomic) NSString *debugRequestName; // @synthesize debugRequestName=_debugRequestName;
- (id)newConnectionWithCFURLRequest:(struct _CFURLRequest *)arg1 delegate:(id)arg2;
- (struct _CFURLRequest *)newCFMutableURLRequestWithURL:(id)arg1;
- (id)persistentConnectionSession;
- (id)requestPreamble;
- (id)logResponseToFile;
- (id)logRequestToFile;
- (void)start;
- (void)_handleResumeOnThread;
- (void)_applicationWantsToReplayRequests:(id)arg1;
- (void)_handleSuspendOnThread;
- (void)_applicationDidStopAllRequests:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2 usePersistentConnection:(BOOL)arg3;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2 usePersistentConnection:(BOOL)arg3 useBackgroundConnection:(BOOL)arg4;

@end

