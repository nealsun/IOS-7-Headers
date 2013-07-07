/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "AVCaptureAudioDataOutputSampleBufferDelegate.h"

@class AVAssetWriter, AVCaptureAudioDataOutput, AVCaptureSession, NSMutableArray, NSObject<OS_dispatch_queue>, NSURL, NSUUID;

@interface RCCaptureAudioFileOutput : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate>
{
    BOOL _processingSamples;
    unsigned int _sampleBuffersWritten;
    NSMutableArray *_delegateBlocks;
    BOOL _manageSessionRunState;
    unsigned int _maxRecordedFileSize;
    AVCaptureSession *_captureSession;
    NSURL *_recordingURL;
    id <RCCaptureAudioFileOutputRecordingDelegate> _recordingDelegate;
    int _state;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_recordingSessionID;
    AVCaptureAudioDataOutput *_sampleBufferDataOutput;
    NSObject<OS_dispatch_queue> *_sampleBufferQueue;
    NSURL *_outputFileURL;
    AVAssetWriter *_assetWriter;
    double _maxRecordedDuration;
}

@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(copy, nonatomic) NSURL *outputFileURL; // @synthesize outputFileURL=_outputFileURL;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferQueue; // @synthesize sampleBufferQueue=_sampleBufferQueue;
@property(retain, nonatomic) AVCaptureAudioDataOutput *sampleBufferDataOutput; // @synthesize sampleBufferDataOutput=_sampleBufferDataOutput;
@property(copy, nonatomic) NSUUID *recordingSessionID; // @synthesize recordingSessionID=_recordingSessionID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) id <RCCaptureAudioFileOutputRecordingDelegate> recordingDelegate; // @synthesize recordingDelegate=_recordingDelegate;
@property(readonly, nonatomic) NSURL *recordingURL; // @synthesize recordingURL=_recordingURL;
@property(readonly, nonatomic) BOOL manageSessionRunState; // @synthesize manageSessionRunState=_manageSessionRunState;
@property(readonly, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
- (void).cxx_destruct;
- (int)_state;
- (void)_setState:(int)arg1;
- (void)_checkIfRecordingSessionEverStarted:(id)arg1;
- (BOOL)_setupAssetWritter:(id *)arg1 sampleBufferRef:(struct opaqueCMSampleBuffer *)arg2;
- (void)_setupSampleBufferDataOutput;
- (void)_scheduleMainThreadDelegateBlock:(id)arg1;
- (BOOL)isRecordingPaused;
- (BOOL)isRecording;
@property(nonatomic) unsigned int maxRecordedFileSize; // @synthesize maxRecordedFileSize=_maxRecordedFileSize;
@property(nonatomic) double maxRecordedDuration; // @synthesize maxRecordedDuration=_maxRecordedDuration;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)_finalizeAssetWriting;
- (void)_clearSampleDataOutput;
- (void)endRecording;
- (void)resumeRecording;
- (void)pauseRecording;
- (BOOL)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (id)connectionWithMediaType:(id)arg1;
- (void)dealloc;
- (id)initWithCaptureSession:(id)arg1 manageSessionRunState:(BOOL)arg2;

@end

