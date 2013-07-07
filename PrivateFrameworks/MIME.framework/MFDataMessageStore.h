/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MIME/MFMessageStore.h>

@class NSData;

@interface MFDataMessageStore : MFMessageStore
{
    NSData *_data;
    Class _messageClass;
}

- (id)mailboxUid;
- (id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)bodyDataForMessage:(id)arg1 isComplete:(char *)arg2 isPartial:(char *)arg3 downloadIfNecessary:(BOOL)arg4;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (id)account;
- (id)message;
- (void)setMessageClass:(Class)arg1;
- (void)writeUpdatedMessageDataToDisk;
- (id)storePath;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

