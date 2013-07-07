/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SportsVoices/Slot.h>

@class SlotSequence;

@interface CompoundSlot : Slot
{
    SlotSequence *_slots;
}

@property(readonly) SlotSequence *slots; // @synthesize slots=_slots;
- (void)dealloc;
- (id)reversed;
- (id)description;
- (BOOL)matches:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)initFromPlist:(id)arg1;

@end

