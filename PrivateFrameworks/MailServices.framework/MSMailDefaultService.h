/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MailServices/MSService.h>

@interface MSMailDefaultService : MSService
{
    BOOL _shouldLaunch;
}

@property(nonatomic) BOOL shouldLaunchMobileMail; // @synthesize shouldLaunchMobileMail=_shouldLaunch;
- (id)_handleMessageSendFailure:(id)arg1 message:(id)arg2 messageIndex:(long long)arg3 context:(inout id *)arg4;
- (id)_createServiceOnQueue:(id)arg1;
- (id)init;

@end

