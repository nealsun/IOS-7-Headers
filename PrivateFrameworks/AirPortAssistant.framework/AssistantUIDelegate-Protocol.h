/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@protocol AssistantUIDelegate
- (void)doneWithAssistantResult:(long)arg1;
- (void)showUIConfigPromptForGuestNetConfigWithParamDict:(id)arg1;
- (void)showUIConfigPromptToSendDiagsUsageStatsWithParamDict:(id)arg1;
- (void)connectionVerificationSucceededForSelector:(int)arg1;
- (void)showAskUserPluginAudioCablingForStatus:(long)arg1 paramDict:(id)arg2;
- (void)showAskUserSwapCablingForStatus:(long)arg1 paramDict:(id)arg2;
- (void)showAskUserForPPPoECredentialsForStatus:(long)arg1 paramDict:(id)arg2;
- (void)showTellUserToResetBroadbandDeviceForStatus:(long)arg1 paramDict:(id)arg2;
- (void)showTellUserToPlugInEthernetForStatus:(long)arg1 paramDict:(id)arg2;
- (void)presentUIForSetupResult:(long)arg1 baseStationInfo:(id)arg2 withPrompt:(id)arg3;
- (void)presentUIForSetupStatusWithRecommendationDict:(id)arg1;
- (void)presentUIForStepByStepResult:(long)arg1;
- (void)presentUIForStepByStepNextStep:(int)arg1 paramDict:(id)arg2;
- (void)presentUIForStepByStepStart;
- (void)presentUIForRecommendationResult:(long)arg1 paramDict:(id)arg2;
- (void)presentUIForRecommmendationTargetInfo:(id)arg1;
- (void)presentUIForRecommendationStatus;
- (void)assistantUpdateProgress:(id)arg1 forState:(int)arg2;

@optional
- (void)showUIConfigPromptPostHook;
- (void)showUIConfigPromptPreHook;
@end

