/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSInputStream.h"

@class NSData, SLRequestMultiPart;

@interface SLRequestMultiPartInputStream : NSInputStream
{
    SLRequestMultiPart *_multiPart;
    unsigned int _streamStatus;
    unsigned int _bytesReadInState;
    unsigned int _totalBytesRead;
    NSData *_srcData;
    int _currentState;
}

- (void).cxx_destruct;
- (BOOL)hasBytesAvailable;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned int *)arg2;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2;
- (void)close;
- (void)open;
- (unsigned int)length;
- (int)currentStateRead:(char *)arg1 maxLength:(unsigned int)arg2;
- (unsigned int)readStateSourceData:(id)arg1 toBuffer:(char *)arg2 offset:(unsigned int)arg3 maxLength:(unsigned int)arg4;
- (void)transitionState;
- (id)initWithMultiPart:(id)arg1;

@end

