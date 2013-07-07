/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

@class EKCalendar, EKEventStore, EKSource, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, UIRefreshControl, UITableView, _UIAccessDeniedView;

@interface EKCalendarChooser : UIViewController
{
    BOOL _disableCalendarEditing;
    BOOL _showsDeclinedEventsSetting;
    CDStruct_a7a51b3b _flags;
    int _style;
    NSMutableSet *_selectedCalendars;
    id <EKCalendarChooserDelegate> _delegate;
    int _chooserMode;
    unsigned int _entityType;
    int _lastAuthorizationStatus;
    EKEventStore *_eventStore;
    UITableView *_tableView;
    NSMutableArray *_groups;
    NSMutableDictionary *_storeGroupMap;
    NSMutableDictionary *_customGroupMap;
    NSIndexPath *_checkedRow;
    id <EKStyleProvider> _styleProvider;
    EKSource *_limitedToSource;
    _UIAccessDeniedView *_accessDeniedView;
    int _refreshCounter;
    UIRefreshControl *_refreshControl;
}

@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(nonatomic) int refreshCounter; // @synthesize refreshCounter=_refreshCounter;
@property(retain, nonatomic) _UIAccessDeniedView *accessDeniedView; // @synthesize accessDeniedView=_accessDeniedView;
@property(retain, nonatomic) EKSource *limitedToSource; // @synthesize limitedToSource=_limitedToSource;
@property(nonatomic) CDStruct_a7a51b3b flags; // @synthesize flags=_flags;
@property(retain, nonatomic) id <EKStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(retain, nonatomic) NSIndexPath *checkedRow; // @synthesize checkedRow=_checkedRow;
@property(retain, nonatomic) NSMutableDictionary *customGroupMap; // @synthesize customGroupMap=_customGroupMap;
@property(retain, nonatomic) NSMutableDictionary *storeGroupMap; // @synthesize storeGroupMap=_storeGroupMap;
@property(retain, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(nonatomic) int lastAuthorizationStatus; // @synthesize lastAuthorizationStatus=_lastAuthorizationStatus;
@property(nonatomic) unsigned int entityType; // @synthesize entityType=_entityType;
@property(nonatomic) BOOL showsDeclinedEventsSetting; // @synthesize showsDeclinedEventsSetting=_showsDeclinedEventsSetting;
@property(nonatomic) BOOL disableCalendarEditing; // @synthesize disableCalendarEditing=_disableCalendarEditing;
@property(nonatomic) int chooserMode; // @synthesize chooserMode=_chooserMode;
@property(nonatomic) __weak id <EKCalendarChooserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableSet *selectedCalendarSet; // @synthesize selectedCalendarSet=_selectedCalendars;
@property(nonatomic) int selectionStyle; // @synthesize selectionStyle=_style;
- (void).cxx_destruct;
- (void)_insertStoreIntoByGroupArray:(id)arg1;
- (void)calendarEditor:(id)arg1 didCompleteWithAction:(int)arg2;
- (float)marginForTableView:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)_selectAllCalendarsAndStores:(BOOL)arg1;
- (void)_selectCalendar:(id)arg1 selected:(BOOL)arg2;
- (void)_selectGroup:(id)arg1 selected:(BOOL)arg2;
- (int)_numSelectedGroups;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)declinedEventsSwitchChanged:(id)arg1;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)_declinedEventsSwitchSection;
- (BOOL)_shouldShowGroupNameInSection:(int)arg1;
- (id)_stringForSharedCalendar:(id)arg1;
- (BOOL)_isEllipsisCellForGroup:(id)arg1 rowIndex:(int)arg2;
- (BOOL)_tableShouldDisplayNewCalendarCellForGroup:(id)arg1;
- (BOOL)_tableShouldDisplayAllCellForGroup:(id)arg1;
- (BOOL)_tableShouldDisplayAllCalendarButtons;
- (BOOL)_tableShouldDisplayAllCalendarsSection;
- (id)_indexPathForCalendar:(id)arg1 source:(id)arg2;
@property(copy, nonatomic) NSSet *selectedCalendars;
@property(retain, nonatomic) EKCalendar *selectedCalendar;
- (void)_setCalendars:(id)arg1;
- (void)_populateGroupsForCalendars:(id)arg1;
- (void)_applySelection;
- (id)_loadCalendars;
- (id)_filterCalendars:(id)arg1;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)_eventStoreChanged:(id)arg1;
- (void)_restoreSelection:(id)arg1 newCalendars:(id)arg2;
- (id)_saveSelection;
- (id)_groupForCustomGroupType:(int)arg1;
- (id)_groupForSource:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)_calendarAvailableForEditing:(id)arg1;
- (void)_cancelMaximumTimeElapsedTimeout;
- (void)_beginMaximumTimeElapsedTimeout;
- (void)_cancelSyncCompletedTimeout;
- (void)_beginSyncCompletedTimeout;
- (void)_syncCompletedGracePeriodExpired;
- (void)_refreshControlMaximumVisibleTimeElapsed;
- (void)_pulledToRefresh:(id)arg1;
- (void)refresh:(id)arg1;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (BOOL)showsWritableCalendarsOnly;
- (void)setShowsWritableCalendarsOnly:(BOOL)arg1;
@property(nonatomic) BOOL allowsPullToRefresh;
@property(nonatomic) BOOL showsRefreshButton;
- (BOOL)_canEnableRefresh;
@property(nonatomic) BOOL showsCancelButton;
@property(nonatomic) BOOL showsDoneButton;
- (unsigned int)supportedInterfaceOrientations;
@property(nonatomic) BOOL allowsEdit;
@property(nonatomic) BOOL allowsRotation;
- (struct CGSize)contentSizeForViewInPopover;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithSelectionStyle:(int)arg1 displayStyle:(int)arg2 eventStore:(id)arg3;
- (id)initWithSelectionStyle:(int)arg1 displayStyle:(int)arg2 entityType:(unsigned int)arg3 eventStore:(id)arg4;
- (id)initWithSelectionStyle:(int)arg1 displayStyle:(int)arg2 entityType:(unsigned int)arg3 eventStore:(id)arg4 limitedToSource:(id)arg5;

@end

