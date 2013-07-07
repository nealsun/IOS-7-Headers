/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <EventKitUI/EKEventEditItem.h>

@class EKEventNotesInlineEditItem, EKEventURLInlineEditItem;

@interface EKEventURLAndNotesInlineEditItem : EKEventEditItem
{
    EKEventURLInlineEditItem *_urlEditItem;
    EKEventNotesInlineEditItem *_notesEditItem;
}

- (void).cxx_destruct;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (BOOL)isInline;
- (id)cellForSubitemAtIndex:(unsigned int)arg1 inSubsection:(unsigned int)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 inSubsection:(unsigned int)arg2 forWidth:(float)arg3;
- (unsigned int)numberOfSubitemsInSubsection:(unsigned int)arg1;
- (void)setSelectedResponder:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (void)reset;
- (id)init;

@end

