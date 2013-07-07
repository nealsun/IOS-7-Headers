/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class ACAccountStore;

@interface ACUIAccountOperationsHelper : NSObject
{
    ACAccountStore *_accountStore;
    BOOL _isRemovingAccount;
    BOOL _isSavingAccount;
    id <ACUIAccountOperationsDelegate> _delegate;
}

@property BOOL isSavingAccount; // @synthesize isSavingAccount=_isSavingAccount;
@property BOOL isRemovingAccount; // @synthesize isRemovingAccount=_isRemovingAccount;
@property(nonatomic) __weak id <ACUIAccountOperationsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_desiredDataclassActionsFromPossibleActions:(id)arg1 forAccount:(id)arg2;
- (void)removeAccount:(id)arg1;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 requireVerification:(BOOL)arg3;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2;
- (void)saveAccount:(id)arg1 requireVerification:(BOOL)arg2;
- (void)saveAccount:(id)arg1;
- (id)initWithAccountStore:(id)arg1;

@end

