/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "ABPersonViewController.h"

#import "ABPersonViewControllerDelegate.h"
#import "EKEditItemViewControllerProtocol.h"

@interface EKIdentityViewController : ABPersonViewController <ABPersonViewControllerDelegate, EKEditItemViewControllerProtocol>
{
    id <EKIdentityProtocol> _identity;
}

- (void).cxx_destruct;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (unsigned int)supportedInterfaceOrientations;
- (void)setIdentity:(id)arg1;
- (id)initWithIdentity:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <EKEditItemViewControllerDelegate> editDelegate;

@end

