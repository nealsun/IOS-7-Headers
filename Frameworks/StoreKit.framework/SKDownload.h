/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSError, NSNumber, NSString, NSURL, SKPaymentTransaction;

@interface SKDownload : NSObject
{
    NSString *_contentIdentifier;
    long long _contentLength;
    NSURL *_contentURL;
    NSNumber *_downloadID;
    int _downloadState;
    NSError *_error;
    float _progress;
    double _timeRemaining;
    SKPaymentTransaction *_transaction;
    NSString *_version;
}

@property(readonly, nonatomic) SKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) double timeRemaining; // @synthesize timeRemaining=_timeRemaining;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) int downloadState; // @synthesize downloadState=_downloadState;
@property(copy, nonatomic, getter=_downloadID, setter=_setDownloadID:) NSNumber *_downloadID; // @synthesize _downloadID;
@property(readonly, nonatomic) NSString *contentVersion; // @synthesize contentVersion=_version;
@property(readonly, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(readonly, nonatomic) long long contentLength; // @synthesize contentLength=_contentLength;
@property(readonly, nonatomic) NSString *contentIdentifier; // @synthesize contentIdentifier=_contentIdentifier;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)_setVersion:(id)arg1;
- (void)_setTransaction:(id)arg1;
- (void)_setTimeRemaining:(double)arg1;
- (void)_setProgress:(float)arg1;
- (void)_setError:(id)arg1;
- (void)_setDownloadState:(int)arg1;
- (void)_setContentURL:(id)arg1;
- (void)_setContentLength:(long long)arg1;
- (void)_setContentIdentifier:(id)arg1;
- (void)_applyChangeset:(id)arg1;
- (void)dealloc;
- (id)init;

@end

