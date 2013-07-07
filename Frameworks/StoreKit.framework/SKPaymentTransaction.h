/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSData, NSDate, NSError, NSString, SKPayment;

@interface SKPaymentTransaction : NSObject
{
    id _internal;
}

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)_transactionIdentifier;
- (void)_setTransactionState:(int)arg1;
- (void)_setTransactionReceipt:(id)arg1;
- (void)_setTransactionIdentifier:(id)arg1;
- (void)_setTransactionDate:(id)arg1;
- (void)_setTemporaryIdentifier:(id)arg1;
- (void)_setOriginalTransaction:(id)arg1;
- (void)_setError:(id)arg1;
- (void)_setDownloads:(id)arg1;
- (BOOL)mergeWithTransaction:(id)arg1;
- (id)matchingIdentifier;
- (BOOL)canMergeWithTransaction:(id)arg1;
@property(readonly, nonatomic) int transactionState;
@property(readonly, nonatomic) NSData *transactionReceipt;
@property(readonly, nonatomic) NSString *transactionIdentifier;
@property(readonly, nonatomic) NSDate *transactionDate;
@property(readonly, nonatomic) SKPayment *payment;
@property(readonly, nonatomic) SKPaymentTransaction *originalTransaction;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSArray *downloads;
- (void)dealloc;
- (id)initWithPayment:(id)arg1;
- (id)init;

@end

