/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "ABUnknownPersonViewController.h"

#import "ABUnknownPersonViewControllerDelegate.h"

__attribute__((visibility("hidden")))
@interface EKUnknownIdentityViewController : ABUnknownPersonViewController <ABUnknownPersonViewControllerDelegate>
{
    id <EKIdentityProtocol> _identity;
}

- (void).cxx_destruct;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void *)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (void)setIdentity:(id)arg1;
- (id)initWithIdentity:(id)arg1;

@end

