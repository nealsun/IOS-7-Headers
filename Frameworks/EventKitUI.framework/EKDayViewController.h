/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "EKDayViewDataSource.h"
#import "EKDayViewDelegate.h"
#import "EKEventGestureControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class CalendarOccurrencesCollection, EKDayBannerView, EKDayView, EKDayViewWithGutters, EKEventEditViewController, EKEventGestureController, NSCalendar, NSDateComponents, ScrollSpringFactory, UIScrollView, UIView;

@interface EKDayViewController : UIViewController <EKDayViewDataSource, EKDayViewDelegate, EKEventGestureControllerDelegate, UIScrollViewDelegate>
{
    EKDayBannerView *_banner;
    UIView *_clipView;
    UIScrollView *_horizontalScrollingView;
    EKDayView *_previousDay;
    EKDayView *_currentDay;
    EKDayView *_nextDay;
    EKDayViewWithGutters *_previousDayWithGutter;
    EKDayViewWithGutters *_currentDayWithGutter;
    EKDayViewWithGutters *_nextDayWithGutter;
    unsigned int _scrollViewAnimating:1;
    unsigned int _hasPendingNextDate:1;
    NSDateComponents *_pendingNextDate;
    unsigned int _hasPendingPreviousDate:1;
    NSDateComponents *_pendingPreviousDate;
    unsigned int _decelerating:1;
    unsigned int _settingDateFromScrolling:1;
    CalendarOccurrencesCollection *_occurrences;
    CalendarOccurrencesCollection *_previousDayOccurrences;
    CalendarOccurrencesCollection *_nextDayOccurrences;
    EKEventGestureController *_eventGestureController;
    ScrollSpringFactory *_decelerationSpringFactory;
    NSDateComponents *_originalDisplayDate;
    double _dayStart;
    double _dayEnd;
    BOOL _initialLoad;
    BOOL _instigatedDateChange;
    BOOL _viewAppeared;
    BOOL _resizing;
    BOOL _adjustingForDeceleration;
    BOOL _fingerDown;
    BOOL _correctAfterScroll;
    int _parallaxState;
    NSDateComponents *_targetDateComponents;
    BOOL _needToCompleteScrollingAnimation;
    BOOL _needToCompleteDeceleration;
    BOOL _showsBanner;
    BOOL _allowsDaySwitching;
    BOOL _allowsSelection;
    BOOL _shouldAutoscrollOnNextActivation;
    BOOL _alwaysAnimate;
    BOOL _disableGestureDayChange;
    BOOL _disableNotifyDateChangeDuringTracking;
    id <EKDayViewControllerDelegate> _delegate;
    id <EKDayViewControllerDataSource> _dataSource;
    NSDateComponents *_displayDate;
    NSCalendar *_calendar;
    float _gutterWidth;
    UIView *_gestureOccurrenceSuperview;
    EKEventEditViewController *_currentEditor;
}

@property(copy, nonatomic) NSDateComponents *pendingPreviousDate; // @synthesize pendingPreviousDate=_pendingPreviousDate;
@property(copy, nonatomic) NSDateComponents *pendingNextDate; // @synthesize pendingNextDate=_pendingNextDate;
@property(retain, nonatomic) EKEventEditViewController *currentEditor; // @synthesize currentEditor=_currentEditor;
@property(retain, nonatomic) UIView *gestureOccurrenceSuperview; // @synthesize gestureOccurrenceSuperview=_gestureOccurrenceSuperview;
@property(nonatomic) float gutterWidth; // @synthesize gutterWidth=_gutterWidth;
@property(nonatomic) BOOL disableNotifyDateChangeDuringTracking; // @synthesize disableNotifyDateChangeDuringTracking=_disableNotifyDateChangeDuringTracking;
@property(nonatomic) BOOL disableGestureDayChange; // @synthesize disableGestureDayChange=_disableGestureDayChange;
@property(nonatomic) BOOL alwaysAnimate; // @synthesize alwaysAnimate=_alwaysAnimate;
@property(nonatomic) BOOL shouldAutoscrollOnNextActivation; // @synthesize shouldAutoscrollOnNextActivation=_shouldAutoscrollOnNextActivation;
@property(nonatomic) BOOL allowsSelection; // @synthesize allowsSelection=_allowsSelection;
@property(nonatomic) BOOL allowsDaySwitching; // @synthesize allowsDaySwitching=_allowsDaySwitching;
@property(nonatomic) BOOL showsBanner; // @synthesize showsBanner=_showsBanner;
@property(copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(copy, nonatomic) NSDateComponents *displayDate; // @synthesize displayDate=_displayDate;
@property(nonatomic) __weak id <EKDayViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <EKDayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_completeScrollingAnimationIfNeeded;
- (void)_setHorizontalContentOffsetUsingSpringAnimation:(struct CGPoint)arg1;
- (void)endExternallyControlledScrolling;
- (void)setToDay:(id)arg1 normalizedOffset:(float)arg2;
- (void)beginExternallyControlledScrolling;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_endParallaxStateIfNeeded;
- (void)_beginParallaxStateIfPossible;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)_cleanUpTargetDateComponents;
- (void)_scrollViewDidEndDecelerating:(id)arg1 notifyParallxState:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)_completeDecelerationIfNeeded;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_setDayView:(id)arg1 toDate:(id)arg2;
- (void)_relayoutDaysDuringScrollingAndPerformDayChanges:(BOOL)arg1;
- (void)_relayoutDaysDuringScrolling;
- (void)_notifyDelegateOfSelectedDateChange;
- (void)_relayoutDays;
- (void)externallyEndedGestureDragging;
- (BOOL)didScrollWhenEventGestureController:(id)arg1 scrollTimerFiredToMoveLeft:(BOOL)arg2 right:(BOOL)arg3 vertically:(BOOL)arg4 towardPoint:(struct CGPoint)arg5;
- (void)eventGestureController:(id)arg1 didSingleTapOccurrence:(id)arg2;
- (void)eventGestureController:(id)arg1 didCancelEditingOccurrence:(id)arg2 fadedOut:(BOOL)arg3;
- (BOOL)eventGestureController:(id)arg1 didCommitOccurrence:(id)arg2 toDate:(double)arg3 isAllDay:(BOOL)arg4 span:(int)arg5;
- (void)eventGestureController:(id)arg1 didMoveToDate:(double)arg2 isAllDay:(BOOL)arg3;
- (void)eventGestureController:(id)arg1 didSetUpAtDate:(double)arg2 isAllDay:(BOOL)arg3;
- (BOOL)eventGestureControllerShouldAllowLongPress:(id)arg1;
- (float)timedRegionOriginForEventGestureController:(id)arg1;
- (float)eventGestureController:(id)arg1 heightForOccurrenceViewOfDuration:(double)arg2 allDay:(BOOL)arg3;
- (float)eventGestureController:(id)arg1 widthForOccurrenceViewOfDays:(unsigned int)arg2;
- (struct CGPoint)eventGestureController:(id)arg1 pointAtDate:(double)arg2 isAllDay:(BOOL)arg3;
- (double)eventGestureController:(id)arg1 dateAtPoint:(struct CGPoint)arg2;
- (BOOL)eventGestureController:(id)arg1 isAllDayAtPoint:(struct CGPoint)arg2 requireInsistence:(BOOL)arg3;
- (id)eventGestureController:(id)arg1 occurrenceViewAtPoint:(struct CGPoint)arg2;
- (void)eventGestureController:(id)arg1 addViewToScroller:(id)arg2 isAllDay:(BOOL)arg3;
- (float)eventGestureController:(id)arg1 yPositionPerhapsMatchingAllDayOccurrence:(id)arg2 atPoint:(struct CGPoint)arg3;
- (id)createEventForEventGestureController:(id)arg1;
- (void)eventGestureController:(id)arg1 adjustDraggingViewForAllDay:(BOOL)arg2;
- (id)createOccurrenceViewForEventGestureController:(id)arg1;
- (float)horizontalOffsetForPagingForEventGestureController:(id)arg1;
- (id)occurrenceViewSuperviewForEventGestureController:(id)arg1;
- (id)touchTrackingViewForEventGestureController:(id)arg1;
- (id)_eventGestureSuperview;
- (void)dayViewDidTapEmptySpace:(id)arg1;
- (void)_highlightDayViewDate:(double)arg1 isAllDay:(BOOL)arg2;
- (id)_createGutterDayViewWithDayView:(id)arg1;
- (void)_showWeekNumbersPreferenceChanged:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3;
- (id)_occurrencesForDayView:(id)arg1;
- (void)significantTimeChangeOccurred;
- (void)reloadDataBetweenStart:(id)arg1 end:(id)arg2;
- (void)reloadData;
- (id)_eventsForDay:(id)arg1;
- (id)eventsForStartDate:(id)arg1 endDate:(id)arg2;
- (void)editorDidCancelEditingEvent:(id)arg1;
- (void)editorDidDeleteEvent:(id)arg1;
- (void)editorDidSaveEvent:(id)arg1;
- (void)bringEventToFront:(id)arg1;
- (void)scrollEventsIntoViewAnimated:(BOOL)arg1;
- (void)scrollEventIntoView:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToSecond:(unsigned int)arg1;
- (void)scrollToNow:(BOOL)arg1;
- (void)setTimeZone:(id)arg1;
- (void)_setDisplayDate:(id)arg1 forRepeat:(BOOL)arg2 animate:(BOOL)arg3;
- (void)_setDisplayDate:(id)arg1 forRepeat:(BOOL)arg2;
- (void)dayView:(id)arg1 firstVisibleSecondChanged:(unsigned int)arg2;
- (void)_setNextAndPreviousFirstVisibleSecondToCurrent;
- (void)_setDisplayDateInternal:(id)arg1;
- (void)dayView:(id)arg1 didCreateOccurrenceViews:(id)arg2;
- (void)dayView:(id)arg1 didSelectEvent:(id)arg2;
@property(readonly, nonatomic) UIView *currentAllDayView;
- (id)gestureController;
- (id)occurrenceViewForEvent:(id)arg1;
- (void)calendarDayBanner:(id)arg1 arrowClicked:(int)arg2 forRepeat:(BOOL)arg3;
- (void)layoutContainerView:(id)arg1;
- (unsigned int)firstVisibleSecond;
- (void)setFrame:(struct CGRect)arg1 gutterWidth:(float)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_delayedScrollDayViewAfterAppearence;
- (void)_scrollDayViewAfterAppearence:(BOOL)arg1;
- (void)_calendarModelDisplayedOccurrencesChanged;
- (void)loadView;
- (void)_disposeBannerView;
- (void)_createBannerView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

