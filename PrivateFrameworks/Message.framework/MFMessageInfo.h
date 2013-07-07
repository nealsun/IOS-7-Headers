/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface MFMessageInfo : NSObject
{
    unsigned int _flagged:1;
    unsigned int _read:1;
    unsigned int _deleted:1;
    unsigned int _uidIsLibraryID:1;
    unsigned int _hasAttachments:1;
    unsigned int _isVIP:1;
    unsigned int _uid;
    unsigned int _dateReceivedInterval;
    unsigned int _dateSentInterval;
    unsigned int _mailboxID;
    long long _conversationHash;
    long long _generationNumber;
}

+ (long long)newGenerationNumber;
@property(readonly, nonatomic) long long generationNumber; // @synthesize generationNumber=_generationNumber;
@property(nonatomic) unsigned int mailboxID; // @synthesize mailboxID=_mailboxID;
@property(nonatomic) long long conversationHash; // @synthesize conversationHash=_conversationHash;
@property(nonatomic) unsigned int dateSentInterval; // @synthesize dateSentInterval=_dateSentInterval;
@property(nonatomic) unsigned int dateReceivedInterval; // @synthesize dateReceivedInterval=_dateReceivedInterval;
@property(nonatomic) unsigned int uid; // @synthesize uid=_uid;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)generationCompare:(id)arg1;
- (id)initWithUid:(unsigned int)arg1 mailboxID:(unsigned int)arg2 dateReceivedInterval:(unsigned int)arg3 dateSentInterval:(unsigned int)arg4 conversationHash:(long long)arg5 read:(BOOL)arg6 knownToHaveAttachments:(BOOL)arg7 flagged:(BOOL)arg8 isVIP:(BOOL)arg9;
- (id)init;
@property(nonatomic) BOOL isVIP;
@property(nonatomic, getter=isKnownToHaveAttachments) BOOL knownToHaveAttachments;
@property(nonatomic) BOOL uidIsLibraryID;
@property(nonatomic) BOOL deleted;
@property(nonatomic) BOOL flagged;
@property(nonatomic) BOOL read;

@end

