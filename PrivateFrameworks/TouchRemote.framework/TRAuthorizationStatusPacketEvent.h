/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <TouchRemote/TRPacketEvent.h>

@interface TRAuthorizationStatusPacketEvent : TRPacketEvent
{
    int _authorizationStatus;
}

+ (unsigned int)_packetEventType;
@property(readonly, nonatomic) int authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;
- (id)description;
- (id)initWithAuthorizationStatus:(int)arg1;

@end

