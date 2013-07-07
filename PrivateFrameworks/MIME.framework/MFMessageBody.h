/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MFMessage;

@interface MFMessageBody : NSObject
{
    MFMessage *_message;
}

- (void)dealloc;
- (id)textHtmlPart;
- (id)attachmentURLs;
- (id)attachments;
- (unsigned int)numberOfAttachmentsSigned:(char *)arg1 encrypted:(char *)arg2;
- (id)message;
- (void)setMessage:(id)arg1;
- (BOOL)isRich;
- (BOOL)isHTML;
- (id)htmlContent;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int *)arg2 asHTML:(BOOL)arg3 isComplete:(char *)arg4;
- (id)htmlContentToOffset:(unsigned int)arg1 resultOffset:(unsigned int *)arg2;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int *)arg2 asHTML:(BOOL)arg3;
- (id)rawData;

@end

