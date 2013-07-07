/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CFNetwork/__NSCFLocalSessionTask.h>

@class NSObject<OS_dispatch_data>, __NSCFLocalDownloadFile;

__attribute__((visibility("hidden")))
@interface __NSCFLocalDownloadTask : __NSCFLocalSessionTask
{
    _Bool _canWrite;
    _Bool _needFinish;
    _Bool _didIssueNeedFinish;
    id _fileCompletion;
    __NSCFLocalDownloadFile *_downloadFile;
    NSObject<OS_dispatch_data> *_writeBuffer;
    unsigned int _ioSuspend;
    int _seqNo;
    unsigned long _totalWrote;
    id _resumeCallback;
}

@property(copy) id resumeCallback; // @synthesize resumeCallback=_resumeCallback;
@property unsigned long totalWrote; // @synthesize totalWrote=_totalWrote;
@property _Bool didIssueNeedFinish; // @synthesize didIssueNeedFinish=_didIssueNeedFinish;
@property _Bool needFinish; // @synthesize needFinish=_needFinish;
@property int seqNo; // @synthesize seqNo=_seqNo;
@property unsigned int ioSuspend; // @synthesize ioSuspend=_ioSuspend;
@property(retain) NSObject<OS_dispatch_data> *writeBuffer; // @synthesize writeBuffer=_writeBuffer;
@property _Bool canWrite; // @synthesize canWrite=_canWrite;
@property(retain) __NSCFLocalDownloadFile *downloadFile; // @synthesize downloadFile=_downloadFile;
@property(copy) id fileCompletion; // @synthesize fileCompletion=_fileCompletion;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)_task_onqueue_didFinish;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1;
- (void)_onqueue_didReceiveResponse:(id)arg1;
- (void)checkWrite;
- (void)_private_fileCompletion;
- (void)_private_errorCompletion;
- (id)createResumeInformation:(id)arg1;
- (void)writeAndResume;
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(id)arg2;
- (void)_private_posixError:(int)arg1;
- (void)reportProgress:(unsigned long)arg1;
- (void)cancelByProducingResumeData:(id)arg1;
- (void)dealloc;
- (id)initWithTask:(id)arg1 suspendedConnection:(struct _CFURLConnection *)arg2;
- (id)initWithSession:(id)arg1 resumeData:(id)arg2 ident:(unsigned int)arg3 bridge:(id)arg4;
- (id)initWithSession:(id)arg1 request:(id)arg2 ident:(unsigned int)arg3 bridge:(id)arg4;
- (_Bool)setupForNewDownload;

@end

