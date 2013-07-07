/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface AFPreferences : NSObject
{
    BOOL _registeredForInternalPrefs;
    BOOL _registeredForLanguageCode;
    BOOL _registeredForOutputVoice;
    NSObject<OS_dispatch_queue> *_navTokenQueue;
    BOOL _navTokenIsValid;
    int _navToken;
}

+ (id)sharedPreferences;
- (void).cxx_destruct;
- (BOOL)fileLoggingIsEnabled;
- (void)setFileLoggingIsEnabled:(BOOL)arg1;
- (id)languagesMissingBirthCertificates;
- (void)setBirthCertificateData:(id)arg1 forLanguageCode:(id)arg2;
- (id)birthCertificateDataForLanguageCode:(id)arg1;
- (id)whitelistedLanguages;
- (void)setValue:(id)arg1 forSessionContextKey:(id)arg2;
- (id)valueForSessionContextPreferenceKey:(id)arg1;
- (void)_registerForNavStatusIfNeeded;
- (void)setOutputVoice:(id)arg1;
- (id)outputVoice;
- (void)setLanguageCode:(id)arg1;
- (id)languageCode;
- (void)setShouldShowReadyForLanguageCode:(id)arg1;
- (void)didShowReadyForLanguageCode:(id)arg1;
- (BOOL)shouldShowReadyForLanguageCode:(id)arg1;
- (void)setDisableAssistantWhilePasscodeLocked:(BOOL)arg1;
- (BOOL)disableAssistantWhilePasscodeLocked;
- (void)setHandsFreeMode:(int)arg1;
- (int)handsFreeMode;
- (void)setDebugButtonIsEnabled:(BOOL)arg1;
- (BOOL)debugButtonIsEnabled;
- (void)setDictationIsEnabled:(BOOL)arg1;
- (void)setAssistantIsEnabled:(BOOL)arg1;
- (void)_setDictationIsEnabledLocal:(BOOL)arg1;
- (void)_setAssistantIsEnabledLocal:(BOOL)arg1;
- (BOOL)dictationIsEnabled;
- (BOOL)assistantIsEnabled;
- (void)_registerForOutputVoice;
- (void)_registerForLanguageCode;
- (void)_registerForInteralPrefs;
- (void)synchronize;
- (void)dealloc;
- (id)init;
- (void)_internalPreferencesDidChangeExternally;
- (void)_preferencesDidChangeExternally;

@end

