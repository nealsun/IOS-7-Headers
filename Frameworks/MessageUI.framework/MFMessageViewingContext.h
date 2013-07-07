/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MFActivityMonitor, MFAttachmentManager, MFError, MFLock, MFMailMessage, MFMessageBody, MFMimePart, NSArray, NSObject<MFMessageViewingContextDelegate>;

@interface MFMessageViewingContext : NSObject
{
    NSObject<MFMessageViewingContextDelegate> *_delegate;
    MFMailMessage *_message;
    MFMessageBody *_body;
    id _content;
    MFLock *_contentLock;
    MFActivityMonitor *_loadTask;
    MFMimePart *_loadedPart;
    NSArray *_signers;
    MFError *_secureMIMEError;
    MFAttachmentManager *_attachmentManager;
    unsigned int _contentOffset;
    unsigned int _loadIncrement;
    unsigned int _loadedFullData:1;
    unsigned int _loadBestAlternative:1;
    unsigned int _hasNoContent:1;
    unsigned int _failedToLoad:1;
    unsigned int _isOutgoingMessage:1;
    unsigned int _isDraftMessage:1;
    unsigned int _isEditableMessage:1;
    unsigned int _showMailboxName:1;
}

+ (BOOL)isAttachmentTooLarge:(id)arg1;
+ (unsigned int)nextOffsetForOffset:(unsigned int)arg1 totalLength:(unsigned int)arg2 requestedAmount:(unsigned int)arg3;
@property(readonly, nonatomic) MFAttachmentManager *attachmentManager; // @synthesize attachmentManager=_attachmentManager;
@property(nonatomic) NSObject<MFMessageViewingContextDelegate> *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int contentOffset; // @synthesize contentOffset=_contentOffset;
@property(readonly, nonatomic) MFMimePart *loadedPart; // @synthesize loadedPart=_loadedPart;
@property(readonly, nonatomic) MFActivityMonitor *loadTask; // @synthesize loadTask=_loadTask;
@property(readonly, nonatomic) MFMessageBody *messageBody; // @synthesize messageBody=_body;
@property(readonly, nonatomic) MFMailMessage *message; // @synthesize message=_message;
- (void)_notifyAttachmentComplete:(id)arg1 data:(id)arg2;
- (void)_notifyCompletelyComplete;
- (void)_notifyFullMessageLoadFailed;
- (void)_notifyInitialLoadComplete;
- (void)_setLoadedPart:(id)arg1;
- (void)loadBestAlternative;
- (void)loadMore;
- (void)load;
- (void)loadWithPriority:(int)arg1;
- (void)loadFull;
- (void)loadAsPlainText:(BOOL)arg1 asHTML:(BOOL)arg2 downloadIfNecessary:(BOOL)arg3;
- (void)unload;
- (void)setLoadTask:(id)arg1;
- (void)cancelLoad;
@property(readonly, nonatomic) BOOL failedToLoad;
@property(readonly, nonatomic) BOOL isPartial;
@property(readonly, nonatomic) BOOL hasLoaded;
- (id)fileWrappersForImageAttachments;
- (id)attachments;
@property(readonly, nonatomic) MFError *secureMimeError; // @synthesize secureMimeError=_secureMIMEError;
- (void)_setSecureMIMEError:(id)arg1;
@property(readonly, nonatomic) NSArray *signers; // @synthesize signers=_signers;
- (void)_setSigners:(id)arg1;
- (id)uniqueID;
- (void)_setMessageBody:(id)arg1;
- (void)_setContentOffset:(unsigned int)arg1;
@property(readonly, nonatomic) BOOL isMessageEncrypted;
@property(readonly, nonatomic) BOOL isMessageSigned;
@property(readonly, nonatomic) BOOL hasNoContent;
@property(readonly, nonatomic) id content;
- (void)_setContent:(id)arg1;
- (void)dealloc;
- (id)initWithMessage:(id)arg1 attachmentManager:(id)arg2;
@property(nonatomic) BOOL showMailboxName;
@property(nonatomic) BOOL isEditableMessage;
@property(nonatomic) BOOL isDraftMessage;
@property(nonatomic) BOOL isOutgoingMessage;

@end

