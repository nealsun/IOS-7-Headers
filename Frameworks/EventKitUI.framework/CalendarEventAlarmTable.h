/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString;

@interface CalendarEventAlarmTable : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    int _alarmIdentifier;
    NSString *_customString;
    int _selectedItem;
    BOOL _useAllDayAlarms;
    BOOL _shouldAllowAlarmsTriggeringAfterStartDate;
    BOOL _customSelected;
    id <CalendarEventAlarmTableDelegate> _alarmTableDelegate;
    id <EKStyleProvider> _styleProvider;
}

@property(nonatomic) BOOL customSelected; // @synthesize customSelected=_customSelected;
@property(nonatomic) BOOL shouldAllowAlarmsTriggeringAfterStartDate; // @synthesize shouldAllowAlarmsTriggeringAfterStartDate=_shouldAllowAlarmsTriggeringAfterStartDate;
@property(nonatomic) BOOL useAllDayAlarms; // @synthesize useAllDayAlarms=_useAllDayAlarms;
@property(retain, nonatomic) id <EKStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) __weak id <CalendarEventAlarmTableDelegate> alarmTableDelegate; // @synthesize alarmTableDelegate=_alarmTableDelegate;
- (void).cxx_destruct;
- (int)presetIdentifierAtIndex:(unsigned int)arg1;
- (unsigned int)countOfPresets;
- (int)intervalForPresetIdentifier:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)setCustomString:(id)arg1;
- (int)presetIdentifier;
- (void)setPresetIdentifier:(int)arg1;
- (void)_selectRow:(int)arg1;
- (int)_presetIdentifierForRow:(int)arg1;
- (int)rowForPresetIdentifier:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

