/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class CertInfoCertificateDetailsView, NSArray;

@interface CertInfoTrustDetailsView : UIView
{
    NSArray *_certificateViews;
    CertInfoCertificateDetailsView *_currentCertView;
}

- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 trustProperties:(id)arg2;
- (void)_appendRemainingCertificates;

@end

