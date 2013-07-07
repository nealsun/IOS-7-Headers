/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSTimer;

@interface TIPreferencesController : NSObject
{
    NSTimer *_synchronizePreferencesTimer;
    BOOL dontSynchronizePreferences;
    BOOL isInternalInstall;
}

+ (id)sharedPreferencesController;
@property(nonatomic) BOOL isInternalInstall; // @synthesize isInternalInstall;
@property(nonatomic) BOOL dontSynchronizePreferences; // @synthesize dontSynchronizePreferences;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (void)touchSynchronizePreferencesTimer;
- (void)synchronizePreferences;
- (void)releaseDontSynchronizePreferences;
- (void)clearSynchronizePreferencesTimer;
- (BOOL)boolForKey:(int)arg1;
- (id)valueForKey:(int)arg1;
- (id)defaultForKey:(int)arg1;
- (CDStruct_59875e80 *)domainForType:(int)arg1;
- (void)dealloc;
- (id)init;
- (void)preferencesChangedCallback:(id)arg1;
- (CDStruct_982099be *)preferences;
- (CDStruct_59875e80 *)domains;

@end

