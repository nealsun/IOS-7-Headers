/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Social/SLMicroBlogComposeViewController.h>

@class SLTencentWeiboSession;

@interface SLTencentWeiboComposeViewController : SLMicroBlogComposeViewController
{
    SLTencentWeiboSession *_remoteSession;
}

- (void).cxx_destruct;
- (void)presentNoAccountsAlert;
- (void)loadView;
- (void)tearDownSession;
- (void)dealloc;
- (id)session;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

