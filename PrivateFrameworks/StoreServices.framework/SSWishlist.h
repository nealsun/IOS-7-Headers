/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSNumber, SSSQLiteDatabase;

@interface SSWishlist : NSObject
{
    long long _accountIdentifier;
    SSSQLiteDatabase *_database;
}

+ (BOOL)existsForAccountIdentifier:(long long)arg1;
@property(readonly, nonatomic) long long accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSNumber *lastSyncTime;
- (void)performTransactionWithBlock:(id)arg1;
- (BOOL)deleteBackingStore;
- (void)dealloc;
- (id)initWithAccountIdentifier:(long long)arg1;

@end

