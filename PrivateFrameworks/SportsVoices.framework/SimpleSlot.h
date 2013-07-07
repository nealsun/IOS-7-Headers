/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SportsVoices/Slot.h>

@class Cell;

@interface SimpleSlot : Slot
{
    Cell *_cell;
}

+ (id)simpleSlotWithCell:(id)arg1;
+ (id)empty;
+ (id)instanceFromPlist:(id)arg1;
+ (id)blank;
@property(retain) Cell *cell; // @synthesize cell=_cell;
- (id)description;
- (BOOL)matches:(id)arg1;
- (id)attributeForKey:(id)arg1;
- (id)overlayedOn:(id)arg1;
- (id)reversed;
- (void)dealloc;
- (id)initWithCell:(id)arg1;
- (id)initFromPlist:(id)arg1;
- (id)content;

@end

