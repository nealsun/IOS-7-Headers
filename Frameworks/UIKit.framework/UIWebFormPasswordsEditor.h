/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface UIWebFormPasswordsEditor : NSObject
{
    NSDictionary *_credentialsByProtectionSpace;
    NSMutableArray *_flattenedCredentials;
    NSMutableDictionary *_credentialToProtectionSpaceMap;
    BOOL _ignoreNotifications;
}

+ (id)sharedPasswordsEditor;
- (void)removeAll;
- (void)removeSelectedItems:(id)arg1;
- (void)dealloc;
- (void)stopMonitoringCredentials;
- (void)startMonitoringCredentials;
- (void)credentialsChanged:(id)arg1;
- (void)resetCredentials;
- (id)addressStringForCredential:(id)arg1;
- (id)protectionSpaceForCredential:(id)arg1;

@end

