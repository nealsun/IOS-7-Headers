/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AddressBookUI/ABPropertyGroupItem.h>

@interface ABPropertyGroupAlertItem : ABPropertyGroupItem
{
}

- (id)_vibrationManager;
- (id)_toneManger;
- (id)description;
- (BOOL)isEquivalentToItem:(id)arg1 whenEditing:(BOOL)arg2;
@property(readonly, nonatomic, getter=isVibration) BOOL vibration;
@property(readonly, nonatomic, getter=isTone) BOOL tone;
- (BOOL)canRemove;
- (id)displayStringForValue:(id)arg1;
- (id)displayLabel;

@end

