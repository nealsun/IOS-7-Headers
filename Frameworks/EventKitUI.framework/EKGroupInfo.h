/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class EKSource, NSArray, NSMutableArray, NSSet, NSString;

@interface EKGroupInfo : NSObject
{
    NSMutableArray *_calendars;
    int _customGroupType;
    NSString *_customTitle;
    NSString *_customTitleAtBeginningOfSentence;
    NSString *_typeTitle;
    NSString *_title;
    NSString *_titleForBeginningOfSentence;
    BOOL _selected;
    BOOL _showSelectAllButton;
    EKSource *_source;
}

@property(nonatomic) BOOL showSelectAllButton; // @synthesize showSelectAllButton=_showSelectAllButton;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) EKSource *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) int sortOrder;
@property(readonly, nonatomic) BOOL isSubscribed;
@property(readonly, nonatomic) BOOL showCalendarNameIfSolitary;
@property(readonly, nonatomic) BOOL showAddCalendarButton;
- (void)selectNone;
- (void)selectAll;
@property(readonly, nonatomic) NSSet *selectedCalendarSet;
@property(readonly, nonatomic) NSSet *calendarSet;
- (id)copyCalendars;
- (id)calendarAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int numSelectedCalendars;
@property(readonly, nonatomic) unsigned int numSelectableCalendars;
@property(readonly, nonatomic) unsigned int numCalendars;
@property(readonly, nonatomic) NSArray *calendarInfos;
@property(readonly, nonatomic) NSString *typeTitle;
- (void)setCustomTitle:(id)arg1 forBeginningOfSentence:(id)arg2;
- (id)titleForBeginningOfSentence:(BOOL)arg1;
@property(readonly, nonatomic) NSString *title;
- (void)removeCalendar:(id)arg1;
- (void)insertCalendarInfo:(id)arg1;
- (void)insertDeclinedEventsItem;
- (id)initWithCustomGroupType:(int)arg1;
- (id)initWithSource:(id)arg1;
- (id)init;

@end

