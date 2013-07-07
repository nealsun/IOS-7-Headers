/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface PLClientServerTransaction : NSObject
{
    NSString *_transactionToken;
}

+ (id)transactionFromUserInfo:(id)arg1;
+ (void)removeTransactionFromUserInfo:(id)arg1;
+ (void)addTransaction:(id)arg1 toUserInfo:(id)arg2;
+ (id)transactionTokenFromXPCDictionary:(id)arg1;
+ (void)addTokenForTransaction:(id)arg1 toXPCDictionary:(id)arg2;
+ (void)handleOutstandingTransactions:(id)arg1;
+ (id)_outstandingTransactionPaths;
+ (id)beginServerTransactionWithToken:(id)arg1;
+ (id)beginClientTransaction;
+ (id)_fileManager;
+ (id)_transactionsDirectory;
@property(copy, nonatomic) NSString *transactionToken; // @synthesize transactionToken=_transactionToken;
- (void)dealloc;
- (void)abortTransaction;
- (void)stillAlive;

@end

