/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAssetWriterInputHelper, AVAssetWriterInputInternal, AVOutputSettings, AVWeakReference, NSArray, NSDictionary, NSString;

@interface AVAssetWriterInput : NSObject
{
    AVAssetWriterInputInternal *_internal;
}

+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;
+ (id)keyPathsForValuesAffectingStatus;
+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription *)arg3;
+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2;
+ (void)initialize;
- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (void)markAsFinished;
@property(readonly) int numberOfAppendFailures;
- (BOOL)_appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id)arg2;
@property(nonatomic) BOOL expectsMediaDataInRealTime;
@property(readonly, nonatomic, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;
- (void)_transitionToTerminalStatus:(int)arg1;
- (BOOL)_prepareToFinishWritingReturningError:(id *)arg1;
- (void)_prepareToEndSession;
- (BOOL)_prepareForWritingWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 mediaFileType:(id)arg2 error:(id *)arg3;
@property(nonatomic, getter=_isAttachedToPixelBufferAdaptor, setter=_setAttachedToPixelBufferAdaptor:) BOOL attachedToPixelBufferAdaptor;
@property(copy, nonatomic, getter=_sourcePixelBufferAttributes, setter=_setSourcePixelBufferAttributes:) NSDictionary *sourcePixelBufferAttributes;
@property(readonly, nonatomic, getter=_pixelBufferPool) struct __CVPixelBufferPool *pixelBufferPool;
@property(readonly, nonatomic, getter=_trackReferences) NSDictionary *trackReferences;
@property(nonatomic, getter=_alternateGroupID, setter=_setAlternateGroupID:) short alternateGroupID;
- (void)setLayer:(int)arg1;
- (int)layer;
- (void)setPreferredVolume:(float)arg1;
- (float)preferredVolume;
- (void)setMarksOutputTrackAsEnabled:(BOOL)arg1;
- (BOOL)marksOutputTrackAsEnabled;
- (void)setExtendedLanguageTag:(id)arg1;
- (id)extendedLanguageTag;
- (void)setLanguageCode:(id)arg1;
- (id)languageCode;
- (void)setNaturalSize:(struct CGSize)arg1;
- (struct CGSize)naturalSize;
- (void)setMediaTimeScale:(int)arg1;
- (int)mediaTimeScale;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)transform;
@property(copy, nonatomic) NSArray *metadata;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *sourceFormatHint;
@property(readonly, nonatomic) NSDictionary *outputSettings;
@property(readonly, nonatomic, getter=_outputSettingsObject) AVOutputSettings *outputSettingsObject;
@property(readonly, nonatomic) NSString *mediaType;
@property(readonly, nonatomic, getter=_trackID) int trackID;
@property(retain, nonatomic, getter=_helper, setter=_setHelper:) AVAssetWriterInputHelper *helper;
@property(readonly, nonatomic, getter=_status) int status;
- (void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg1;
@property(retain, nonatomic, getter=_weakReferenceToAssetWriter, setter=_setWeakReferenceToAssetWriter:) AVWeakReference *weakReferenceToAssetWriter;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription *)arg3;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2;
- (id)init;

@end

