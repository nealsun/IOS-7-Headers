/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class AVPlayerItemErrorLogEvent, NSDate, NSString;

@interface MPMovieErrorLogEvent : NSObject <NSCopying>
{
    AVPlayerItemErrorLogEvent *_event;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *errorComment;
@property(readonly, nonatomic) NSString *errorDomain;
@property(readonly, nonatomic) int errorStatusCode;
@property(readonly, nonatomic) NSString *playbackSessionID;
@property(readonly, nonatomic) NSString *serverAddress;
@property(readonly, nonatomic) NSString *URI;
@property(readonly, nonatomic) NSDate *date;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithAVItemErrorLogEvent:(id)arg1;

@end

