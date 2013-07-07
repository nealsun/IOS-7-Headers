/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MCPeerIDInternal : NSObject
{
    NSString *_idString;
    NSString *_displayName;
    unsigned long long _pid64;
}

@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) unsigned long long pid64; // @synthesize pid64=_pid64;
@property(readonly, nonatomic) NSString *idString; // @synthesize idString=_idString;
- (void)dealloc;
- (id)initWithIDString:(id)arg1 pid64:(unsigned long long)arg2 displayName:(id)arg3;

@end

