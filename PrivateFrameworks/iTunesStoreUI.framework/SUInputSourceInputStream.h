/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSInputStream.h"

@class NSArray, NSError;

@interface SUInputSourceInputStream : NSInputStream
{
    void *_clientCallback;
    CDStruct_304912e7 _clientContext;
    id _delegate;
    NSArray *_inputSources;
    int _inputSourceIndex;
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopSource *_runLoopSource;
    BOOL _sentAtEndEvent;
    BOOL _sentOpenEvent;
    NSError *_streamError;
    unsigned int _streamStatus;
}

@property(readonly, nonatomic) NSArray *inputSources; // @synthesize inputSources=_inputSources;
- (void)_streamEventCallback;
- (void)_setStreamError:(id)arg1;
- (void)_scheduleCallback;
- (id)_currentInputSource;
- (void)_close;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (unsigned int)streamStatus;
- (id)streamError;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)_setCFClientFlags:(unsigned long)arg1 callback:(void *)arg2 context:(CDStruct_304912e7 *)arg3;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2;
- (id)propertyForKey:(id)arg1;
- (void)open;
- (BOOL)hasBytesAvailable;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned int *)arg2;
- (id)delegate;
- (void)close;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithInputSources:(id)arg1;
- (id)initWithFileAtPath:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

@end

