/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Foundation/NSFileAccessClaim.h>

@class NSArray, NSFileAccessNode, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface NSFileSubarbitrationClaim : NSFileAccessClaim
{
    NSArray *_readingURLs;
    unsigned int _readingOptions;
    NSArray *_writingURLs;
    unsigned int _writingOptions;
    id _messageSender;
    NSArray *_readingLocations;
    NSArray *_writingLocations;
    NSFileAccessNode *_rootNode;
    NSMutableSet *_forwardedClaimIDs;
    NSMutableDictionary *_readRelinquishmentsByPresenterID;
    NSMutableDictionary *_writeRelinquishmentsByPresenterID;
}

- (void)forwardReacquisitionMessageWithKind:(id)arg1 parameters:(id)arg2 toPresenterForID:(id)arg3;
- (void)forwardRelinquishmentMessageWithKind:(id)arg1 parameters:(id)arg2 toPresenter:(id)arg3 usingReplySender:(id)arg4;
- (id)relinquishmentForMessageOfKind:(id)arg1 toPresenterForID:(id)arg2;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)devalueSelf;
- (void)revoked;
- (void)invokeClaimer;
- (void)granted;
- (BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (void)devalueOldClaim:(id)arg1;
- (void)evaluateNewClaim:(id)arg1;
- (BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2;
- (void)forwardUsingMessageSender:(id)arg1 crashHandler:(void)arg2;
- (id)messageSender;
- (void)setMessageSender:(id)arg1;
- (void)dealloc;
- (id)initWithClient:(id)arg1 messageParameters:(id)arg2 replySender:(id)arg3;
- (id)initWithReadingURLs:(id)arg1 options:(unsigned int)arg2 writingURLs:(id)arg3 options:(unsigned int)arg4 claimer:(id)arg5;

@end

