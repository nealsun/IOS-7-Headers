/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AddressBookUI/ABContactCell.h>

@class ABCardActionGroupItem, ABContactAction, NSDictionary;

@interface ABContactActionCell : ABContactCell
{
    NSDictionary *_textAttributes;
}

@property(copy, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
- (void)_updateTextFont;
@property(readonly, nonatomic) ABContactAction *action;
@property(readonly, nonatomic) ABCardActionGroupItem *actionGroupItem;
- (void)setCardGroupItem:(id)arg1;
- (BOOL)shouldPerformDefaultAction;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

