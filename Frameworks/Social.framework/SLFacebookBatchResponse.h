/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Social/SLFacebookResponse.h>

@class NSArray;

@interface SLFacebookBatchResponse : SLFacebookResponse
{
}

@property(readonly) NSArray *batchResponseParameters;
- (id)responseAtBatchIndex:(int)arg1;
- (int)batchedResponsesCount;

@end

