/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol SecureBackupProtocol <NSObject>
- (void)backupWithInfo:(id)arg1 reply:(id)arg2;
- (void)startSMSChallengeWithInfo:(id)arg1 reply:(id)arg2;
- (void)changeSMSTargetWithInfo:(id)arg1 reply:(id)arg2;
- (void)uncachePassphraseWithInfo:(id)arg1 reply:(id)arg2;
- (void)cachePassphraseWithInfo:(id)arg1 reply:(id)arg2;
- (void)disableWithInfo:(id)arg1 reply:(id)arg2;
- (void)recoverWithInfo:(id)arg1 reply:(id)arg2;
- (void)enableWithInfo:(id)arg1 reply:(id)arg2;
- (void)getAccountInfoWithInfo:(id)arg1 reply:(id)arg2;
@end

