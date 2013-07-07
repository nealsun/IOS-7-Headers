/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSLock, NSMutableArray, NSTimer;

@interface VSCacheUpdateListener : NSObject
{
    NSLock *_lock;
    NSMutableArray *_updateRequestQueue;
    NSDictionary *_dataProviders;
    NSTimer *_flushTimer;
    BOOL _isListening;
}

+ (id)sharedListenerIfExists;
+ (id)sharedListener;
- (void)_flush;
- (void)_enqueueRequest:(id)arg1;
- (void)_spokenLanguageChanged:(id)arg1;
- (void)performUpdateForModelIdentifier:(id)arg1 classIdentifier:(id)arg2;
- (void)stopListening;
- (void)startListening;
- (void)dealloc;
- (id)_initShared;
- (id)init;

@end
