/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <HomeSharing/HSRequest.h>

@interface HSPlayStatusUpdateRequest : HSRequest
{
    unsigned int _interfaceID;
    unsigned int _revisionID;
}

@property(readonly, nonatomic) unsigned int revisionID; // @synthesize revisionID=_revisionID;
@property(readonly, nonatomic) unsigned int interfaceID; // @synthesize interfaceID=_interfaceID;
- (double)timeoutInterval;
- (BOOL)isConcurrent;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithInterfaceID:(unsigned int)arg1 revisionID:(unsigned int)arg2;

@end

