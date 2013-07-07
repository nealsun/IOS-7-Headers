/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "SUManagerClientInterface.h"

@class NSXPCConnection, SUDescriptor;

@interface SUManagerClient : NSObject <SUManagerClientInterface>
{
    NSXPCConnection *_serverConnection;
    id <SUManagerClientDelegate> _delegate;
    BOOL _connected;
    BOOL _serverIsExiting;
    int _clientType;
    BOOL _installing;
    SUDescriptor *_installDescriptor;
}

@property(retain, nonatomic) SUDescriptor *installDescriptor; // @synthesize installDescriptor=_installDescriptor;
@property(nonatomic) int clientType; // @synthesize clientType=_clientType;
@property(nonatomic) id <SUManagerClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)installDidFinish:(id)arg1;
- (void)installDidFail:(id)arg1 withError:(id)arg2;
- (void)installDidStart:(id)arg1;
- (void)downloadWasInvalidatedForNewUpdateAvailable:(id)arg1;
- (void)downloadDidFinish:(id)arg1;
- (void)downloadDidFail:(id)arg1 withError:(id)arg2;
- (void)downloadProgressDidChange:(id)arg1;
- (void)downloadDidStart:(id)arg1;
- (void)automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg1 withError:(id)arg2;
- (void)scanDidCompleteWithNewUpdateAvailable:(id)arg1 error:(id)arg2;
- (void)scanRequestDidFinishForOptions:(id)arg1 update:(id)arg2 error:(id)arg3;
- (void)scanRequestDidStartForOptions:(id)arg1;
- (void)noteServerExiting;
- (void)noteConnectionDropped;
- (void)connectToServerIfNecessary;
- (void)_invalidateConnection;
- (id)_remoteInterfaceWithErrorHandler:(id)arg1 connectIfNecessary:(void)arg2;
- (id)_remoteInterfaceWithErrorHandler:(id)arg1;
- (id)_remoteInterface;
- (void)installUpdate:(id)arg1;
- (void)isUpdateReadyForInstallation:(id)arg1;
- (void)download:(id)arg1;
- (void)updateDownloadMetadata:(id)arg1 withResult:(id)arg2;
- (void)resumeDownload:(id)arg1;
- (void)pauseDownload:(id)arg1;
- (void)cancelDownload:(id)arg1;
- (void)startDownloadWithMetadata:(id)arg1 withResult:(id)arg2;
- (void)startDownload:(id)arg1;
- (void)isDownloading:(id)arg1;
- (void)scanForUpdates:(id)arg1 withResult:(id)arg2;
- (void)isScanning:(id)arg1;
- (void)_setClientType;
- (void)dealloc;
- (void)invalidate;
- (id)initWithDelegate:(id)arg1 clientType:(int)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

