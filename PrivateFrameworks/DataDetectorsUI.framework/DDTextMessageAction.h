/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <DataDetectorsUI/DDTelephoneNumberAction.h>

#import "MFMessageComposeViewControllerDelegate.h"

__attribute__((visibility("hidden")))
@interface DDTextMessageAction : DDTelephoneNumberAction <MFMessageComposeViewControllerDelegate>
{
}

- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (id)viewController;
- (void)perform;
- (int)interactionType;
- (id)localizedName;

@end

