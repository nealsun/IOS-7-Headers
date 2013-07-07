/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <DataAccess/DAMailboxRequest.h>

@class NSString;

@interface DAMailboxFetchMessageRequest : DAMailboxRequest
{
    NSString *_messageID;
    int _bodyFormat;
    int _maxSize;
}

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (int)maxSize;
- (int)bodyFormat;
- (id)messageID;
- (id)initRequestForBodyFormat:(int)arg1 withMessageID:(id)arg2 withBodySizeLimit:(int)arg3;

@end

