/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class AVItemErrorLogInternal, NSArray;

@interface AVItemErrorLog : NSObject <NSCopying>
{
    AVItemErrorLogInternal *_playerItemErrorLog;
}

@property(readonly, nonatomic) NSArray *events;
- (unsigned int)extendedLogDataStringEncoding;
- (id)extendedLogData;
- (void)dealloc;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithLogArray:(id)arg1;
- (id)init;

@end

