/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CKEntity, CKIMMessage, CKMessageComposition, IMChat, IMMessage, IMService, NSArray, NSMutableArray, NSString, UIImage;

@interface CKConversation : NSObject
{
    NSArray *_recipients;
    NSString *_name;
    NSMutableArray *_messages;
    NSMutableArray *_pendingMessages;
    id <CKMessage> _placeholderMessage;
    IMChat *_chat;
    IMMessage *_incomingTypingMessage;
    IMService *_cachedPreferredService;
    unsigned int _limitToLoad;
    int _bulkMessageAddStack;
    BOOL _cachedPreferredServiceError;
    BOOL _downgradeState;
    struct {
        unsigned int ignoreDowngradeStatusUpdates:1;
        unsigned int isStale:1;
        unsigned int updatesDisabled:1;
        unsigned int needsPostAfterUpdate:1;
        unsigned int wantsAnimatedPost:1;
        unsigned int ignoringTypingUpdates:1;
        unsigned int hasPlaceholder:1;
        unsigned int moreMessagesToLoad:1;
        unsigned int blockingForHistoryQuery:1;
        unsigned int forceMMS:1;
    } _conversationFlags;
    NSArray *_pendingHandles;
    UIImage *_thumbnailImage;
    NSArray *_failedMessages;
}

+ (BOOL)_contentChangedFromOldMessage:(id)arg1 toNewMessage:(id)arg2;
+ (id)newPendingConversation;
+ (double)_iMessage_maxTrimDurationForMediaType:(int)arg1;
+ (unsigned int)_iMessage_maxTransferFileSizeForWiFi:(BOOL)arg1;
+ (id)_iMessage_localizedErrorForReason:(int)arg1;
+ (BOOL)_iMessage_canSendMessageWithParts:(id)arg1 subject:(id)arg2 error:(id *)arg3;
+ (BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int *)arg1;
+ (BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int *)arg1 errorCode:(int *)arg2;
+ (int)_iMessage_maxAttachmentCount;
+ (BOOL)_iMessage_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
+ (BOOL)_iMessage_canAcceptMediaObject:(id)arg1 givenMediaObjects:(id)arg2;
+ (BOOL)_sms_mediaObjectPassesDurationCheck:(id)arg1;
+ (double)_sms_maxTrimDurationForMediaType:(int)arg1;
+ (id)_sms_localizedErrorForReason:(int)arg1;
+ (BOOL)_sms_canSendMessageWithParts:(id)arg1 subject:(id)arg2 error:(id *)arg3;
+ (BOOL)_sms_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
+ (BOOL)_sms_canSendMessageWithMediaObjectTypes:(int *)arg1;
+ (BOOL)_sms_canSendMessageWithMediaObjectTypes:(int *)arg1 errorCode:(int *)arg2;
+ (int)_sms_maxAttachmentCount;
+ (BOOL)_sms_canAcceptMediaObject:(id)arg1 givenMediaObjects:(id)arg2;
+ (BOOL)_sms_mediaObjectPassesRestriction:(id)arg1;
@property(readonly, nonatomic) NSArray *failedMessages; // @synthesize failedMessages=_failedMessages;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(nonatomic) unsigned int limitToLoad; // @synthesize limitToLoad=_limitToLoad;
@property(retain, nonatomic) IMMessage *incomingTypingMessage; // @synthesize incomingTypingMessage=_incomingTypingMessage;
@property(retain, nonatomic) IMChat *chat; // @synthesize chat=_chat;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(copy, nonatomic) NSArray *pendingHandles; // @synthesize pendingHandles=_pendingHandles;
@property(readonly, nonatomic) NSArray *pendingMessages; // @synthesize pendingMessages=_pendingMessages;
@property(readonly, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (id)copyForPendingConversation;
- (void)sendDowngradePingForMessage:(id)arg1 manualDowngrade:(BOOL)arg2;
- (id)displayNameForMediaObjects:(id)arg1 subject:(id)arg2;
- (id)_headerTitleForPendingMediaObjects:(id)arg1 subject:(id)arg2 onService:(id)arg3;
- (id)_headerTitleForService:(id)arg1;
- (id)_nameForHandle:(id)arg1;
@property(readonly, nonatomic) NSString *serviceDisplayName;
- (BOOL)outgoingBubbleColor;
@property(readonly, nonatomic) BOOL buttonColor;
@property(readonly, nonatomic) NSString *previewText;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) unsigned int disclosureAtomStyle; // @dynamic disclosureAtomStyle;
@property(readonly, nonatomic) BOOL shouldShowCharacterCount;
- (void)_clearTypingIndicatorsIfNecessary;
- (void)_updateTypingIndicatorForComposition:(id)arg1;
- (void)__rescindTypingIndicatorIfNecessary;
- (void)__sendTypingIndicatorIfNecessary;
@property(readonly, nonatomic) CKIMMessage *incomingTypingCKMessage;
- (BOOL)_chatSupportsTypingIndicators;
- (void)sendMessage:(id)arg1 newComposition:(BOOL)arg2;
- (void)sendMessage:(id)arg1 onService:(id)arg2 newComposition:(BOOL)arg3;
- (void)_targetChatToPreferredService:(id)arg1 newComposition:(BOOL)arg2;
- (void)_targetChat:(id)arg1 toService:(id)arg2 newComposition:(BOOL)arg3;
- (BOOL)_chatHasValidAccount:(id)arg1 forService:(id)arg2;
- (BOOL)_accountIsOperational:(id)arg1 forService:(id)arg2;
- (void)newMessageContentChangedWithComposition:(id)arg1;
- (id)newMessageWithComposition:(id)arg1 addToConversation:(BOOL)arg2;
- (id)newMessageWithComposition:(id)arg1 guid:(id)arg2 addToConversation:(BOOL)arg3;
- (id)newMessageWithComposition:(id)arg1;
- (double)maxTrimDurationForMediaType:(int)arg1;
- (BOOL)canSendMessageComposition:(id)arg1 error:(id *)arg2;
- (BOOL)canSendToRecipients:(id)arg1 withAttachments:(id)arg2 alertIfUnable:(BOOL)arg3;
- (BOOL)canSendMessageWithParts:(id)arg1 subject:(id)arg2 error:(id *)arg3;
- (BOOL)canSendMessageWithParts:(id)arg1 subject:(id)arg2 onService:(id)arg3 error:(id *)arg4;
- (BOOL)canSendMessageWithMediaObjectTypes:(int *)arg1;
- (BOOL)canAcceptMediaObjects:(id)arg1 givenMediaObjects:(id)arg2;
- (BOOL)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
- (BOOL)canAcceptMediaObject:(id)arg1 givenMediaObjects:(id)arg2;
- (BOOL)restrictMediaObjects;
@property(readonly, nonatomic, getter=isPending) BOOL pending;
@property(readonly, nonatomic) NSArray *recipientStrings;
@property(readonly, nonatomic) NSArray *pendingEntities; // @dynamic pendingEntities;
- (id)copyEntityForAddressString:(id)arg1;
- (void)setPendingComposeRecipients:(id)arg1;
- (int)compareBySequenceNumberAndDateDescending:(id)arg1;
- (void)downgradeStateDidChange;
- (void)invalidatePreferredServiceCache;
- (id)shortDescription;
- (id)description;
- (void)addPlaceholderMessageIfNeededWithDate:(id)arg1;
- (BOOL)isPlaceholder;
- (void)markAllMessagesAsRead;
- (BOOL)isFromFilteredSender;
- (id)latestIncomingMessage;
- (id)latestMessage;
- (void)addMessage:(id)arg1;
- (id)placeholderMessage;
- (void)_setPlaceholderMessage:(id)arg1;
- (void)setLoadedMessageCount:(unsigned int)arg1 completion:(id)arg2;
- (void)loadMoreMessages;
- (void)loadAllMessages;
- (void)setLoadedMessages:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (void)deleteMessages:(id)arg1;
- (void)deleteAllMessagesAndRemoveGroup;
- (void)deleteAllMessages;
- (void)_deleteAllMessagesAndRemoveGroup:(BOOL)arg1;
- (void)removeAllMessages;
- (void)updateMessage:(id)arg1;
- (void)removeMessage:(id)arg1;
- (void)removeMessage:(id)arg1 postUpdate:(BOOL)arg2;
- (id)date;
@property(readonly, nonatomic) unsigned int recipientCount;
@property(readonly, nonatomic) BOOL isEmpty;
- (id)uniqueIdentifier;
@property(readonly, nonatomic) NSString *groupID; // @dynamic groupID;
@property(nonatomic) BOOL updatesDisabled; // @dynamic updatesDisabled;
- (void)setUpdatesDisabled:(BOOL)arg1 quietly:(BOOL)arg2;
- (void)postChangedUpdate:(BOOL)arg1;
- (void)_postChangeUpdate:(BOOL)arg1;
- (void)_refreshMoreToLoadFlag;
- (void)_calculateDowngradeState;
- (id)_consecutiveDowngradeAttemptsViaManualDowngrades:(BOOL)arg1;
- (void)_calculateDowngradeStateTimerFired;
- (void)_updateDowngradeState:(BOOL)arg1 checkAgainInterval:(double)arg2;
- (void)_invalidateDowngradeState;
- (void)_handlePreferredServiceChangedNotification:(id)arg1;
- (BOOL)_handleIsForThisConversation:(id)arg1;
- (void)requestRecipientStatuses;
@property(readonly, nonatomic) IMService *preferredService;
- (id)preferredServiceWithCanSend:(char *)arg1 error:(char *)arg2;
- (BOOL)canSendWithError:(char *)arg1;
- (id)_preferredServiceCheckWithServer:(BOOL)arg1 canSend:(char *)arg2 error:(char *)arg3;
@property(nonatomic) BOOL forceMMS; // @dynamic forceMMS;
@property(readonly, nonatomic) BOOL moreMessagesToLoad; // @dynamic moreMessagesToLoad;
@property(nonatomic, getter=isIgnoringTypingUpdates) BOOL ignoringTypingUpdates; // @dynamic ignoringTypingUpdates;
- (BOOL)isDowngraded;
- (void)_setupPreferredServiceChangeHandlers;
- (void)markAsStale;
- (BOOL)reloadIfStale;
- (int)endBulkMessageAddForcePost:(BOOL)arg1;
- (void)beginBulkMessageAdd;
- (void)_endBatchUpdates;
- (void)_beginBatchUpdates;
@property(retain, nonatomic) NSString *rememberedKeyboard;
@property(retain, nonatomic) CKMessageComposition *unsentComposition; // @dynamic unsentComposition;
- (void)_handleChatPropertiesChangedNotification:(id)arg1;
- (void)_handleItemsDidChangeNotification:(id)arg1;
- (BOOL)_handleRemovedMessage:(id)arg1;
- (BOOL)_handleChangedMessage:(id)arg1 forQuery:(id)arg2;
- (BOOL)_handleTypingIndicationMessage:(id)arg1;
- (id)_messagesFromChat:(id)arg1;
- (void)_postNotification:(id)arg1 forMessage:(id)arg2;
- (id)_addCKMessageFromIMMessage:(id)arg1;
- (id)_existingMadridMessageForIMMessage:(id)arg1;
- (id)_IMMessageWithMessageParts:(id)arg1 subject:(id)arg2 date:(id)arg3 isFinished:(BOOL)arg4 messageGUID:(id)arg5 needsDataDetection:(BOOL)arg6;
- (id)_CKMessageFromIMMessage:(id)arg1;
- (void)acceptTransfer:(id)arg1;
- (id)ckMessageWithGUID:(id)arg1;
@property(readonly, nonatomic) CKEntity *recipient; // @dynamic recipient;
@property(readonly, nonatomic) NSArray *handles; // @dynamic handles;
@property(readonly, nonatomic) BOOL hasUnreadiMessages; // @dynamic hasUnreadiMessages;
@property(readonly, nonatomic) BOOL hasUnreadMessages; // @dynamic hasUnreadMessages;
@property(readonly, nonatomic) unsigned int unreadCount; // @dynamic unreadCount;
- (void)resetCaches;
- (void)resetNameCaches;
- (void)resetPendingMessages;
- (void)dealloc;
- (void)_cleanupMessages;
- (id)initWithChat:(id)arg1 updatesDisabled:(BOOL)arg2;
- (id)init;
- (BOOL)_iMessage_canSendToRecipients:(id)arg1 withAttachments:(id)arg2 alertIfUnable:(BOOL)arg3;
- (BOOL)_iMessage_supportsCharacterCountForAddresses:(id)arg1;
- (BOOL)_sms_canSendToRecipients:(id)arg1 withAttachments:(id)arg2 alertIfUnable:(BOOL)arg3;
- (BOOL)_sms_supportsCharacterCountForAddresses:(id)arg1;
- (BOOL)_sms_willSendMMSByDefaultForAddresses:(id)arg1;
- (id)thumbnail:(BOOL)arg1;
- (id)__generateThumbnailOfDiameter:(float)arg1 withRecordIDs:(id)arg2 recipientCount:(unsigned int)arg3;
- (id)__messageOrderedABRecordIDs;
- (id)__generateThumbnailOfDiameter:(float)arg1 withRecipientImage:(id)arg2 andOtherRecipient:(id)arg3;
- (id)__generateThumbnailOfDiameter:(float)arg1 withRecipientImage:(id)arg2;
- (id)__multiPlaceholderBoth;
- (id)__singlePlaceholder;

@end

