/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MessageUI/MFComposeRecipientGroup.h>

@class CRRecentContact, NSString;

@interface MFRecentComposeRecipientGroup : MFComposeRecipientGroup
{
    NSString *_displayString;
    CRRecentContact *_recent;
    CRRecentContact *_recentContact;
}

@property(retain, nonatomic) CRRecentContact *recentContact; // @synthesize recentContact=_recentContact;
- (id)unlocalizedLabel;
- (id)placeholderName;
- (id)label;
- (id)initWithRecentContact:(id)arg1;

@end

