/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "_UIRemoteViewController.h"

#import "ABPeoplePickerHostViewControllerProtocol.h"

@interface ABPeoplePickerHostViewController : _UIRemoteViewController <ABPeoplePickerHostViewControllerProtocol>
{
    id <ABPeoplePickerHostViewControllerDelegate> _delegate;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(nonatomic) id <ABPeoplePickerHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)requestContinueAfterSelectingPerson:(id)arg1 vcard:(id)arg2 property:(id)arg3 identifier:(id)arg4 replyHandler:(id)arg5;
- (void)requestContinueAfterSelectingPerson:(id)arg1 vcard:(id)arg2 replyHandler:(id)arg3;
- (void)didCancel;
- (id)serviceViewControllerProxy;

@end

