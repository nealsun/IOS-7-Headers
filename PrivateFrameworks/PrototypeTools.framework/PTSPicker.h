/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "PTSHUDControl.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "_UISettingsKeyPathObserver.h"

@class NSArray, NSString, UILabel, UITableView, _UISettings;

@interface PTSPicker : UIView <UITableViewDelegate, UITableViewDataSource, PTSHUDControl, _UISettingsKeyPathObserver>
{
    BOOL _enabled;
    BOOL _autoEnablesForDesignMode;
    _UISettings *_settings;
    NSString *_valueKeyPath;
    int _alignment;
    UILabel *_titleLabel;
    NSArray *_choices;
    UITableView *_tableView;
    NSArray *_subviewConstraints;
}

+ (id)pickerForSettings:(id)arg1 valueKeyPath:(id)arg2 title:(id)arg3 choices:(id)arg4;
+ (id)picker;
+ (struct CGRect)defaultFrame;
@property(retain, nonatomic) NSArray *subviewConstraints; // @synthesize subviewConstraints=_subviewConstraints;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSArray *choices; // @synthesize choices=_choices;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) BOOL autoEnablesForDesignMode; // @synthesize autoEnablesForDesignMode=_autoEnablesForDesignMode;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
@property(copy, nonatomic) NSString *valueKeyPath; // @synthesize valueKeyPath=_valueKeyPath;
@property(nonatomic) __weak _UISettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (id)makeTitleLabel;
- (id)makeTableView;
- (void)layoutSubviews;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

