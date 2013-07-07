/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "NSCoding.h"
#import "UIPickerTableViewContainerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CALayer, NSMutableArray, UIColor, UIImageView;

@interface UIPickerView : UIView <UIPickerTableViewContainerDelegate, UITableViewDelegate, NSCoding, UITableViewDataSource>
{
    NSMutableArray *_tables;
    UIView *_topFrame;
    NSMutableArray *_dividers;
    NSMutableArray *_selectionBars;
    id <UIPickerViewDataSource> _dataSource;
    id <UIPickerViewDelegate> _delegate;
    UIView *_backgroundView;
    int _numberOfComponents;
    UIImageView *_topGradient;
    UIImageView *_bottomGradient;
    UIView *_foregroundView;
    CALayer *_maskGradientLayer;
    UIView *_topLineView;
    UIView *_bottomLineView;
    struct {
        unsigned int needsLayout:1;
        unsigned int delegateRespondsToNumberOfComponentsInPickerView:1;
        unsigned int delegateRespondsToNumberOfRowsInComponent:1;
        unsigned int delegateRespondsToDidSelectRow:1;
        unsigned int delegateRespondsToViewForRow:1;
        unsigned int delegateRespondsToTitleForRow:1;
        unsigned int delegateRespondsToAttributedTitleForRow:1;
        unsigned int delegateRespondsToWidthForComponent:1;
        unsigned int delegateRespondsToRowHeightForComponent:1;
        unsigned int delegateRespondsToCheckableForRow:1;
        unsigned int showsSelectionBar:1;
        unsigned int allowsMultipleSelection:1;
        unsigned int allowSelectingCells:1;
        unsigned int soundsDisabled:1;
        unsigned int usesCheckedSelection:1;
        unsigned int skipsBackground:1;
    } _pickerViewFlags;
    BOOL _usesModernStyle;
    UIColor *_textColor;
    UIColor *_textShadowColor;
    BOOL _isInLayoutSubviews;
}

+ (id)_modernNonCenterCellFont;
+ (id)_modernCenterCellFont;
+ (struct CGSize)defaultSizeForCurrentOrientation;
+ (struct CGSize)sizeForCurrentOrientationThatFits:(struct CGSize)arg1;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 forInterfaceOrientation:(int)arg2;
@property(nonatomic, setter=_setInLayoutSubviews:) BOOL _isInLayoutSubviews; // @synthesize _isInLayoutSubviews;
@property(nonatomic) id <UIPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <UIPickerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (struct CATransform3D)_perspectiveTransform;
- (BOOL)_shouldDrawWithModernStyle;
- (void)_setTextShadowColor:(id)arg1;
- (id)_textShadowColor;
- (void)_setTextColor:(id)arg1;
- (id)_textColor;
- (void)_setHighlightColor:(id)arg1;
- (id)_highlightColor;
- (void)_setUsesModernStyle:(BOOL)arg1;
- (BOOL)_usesModernStyle;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)selectRow:(int)arg1 inColumn:(int)arg2 animated:(BOOL)arg3;
- (void)selectRow:(int)arg1 inComponent:(int)arg2 animated:(BOOL)arg3;
- (void)_selectRow:(int)arg1 inComponent:(int)arg2 animated:(BOOL)arg3 notify:(BOOL)arg4;
- (struct CGRect)_effectiveTableViewFrameForColumn:(int)arg1;
- (id)tableViewForColumn:(int)arg1;
- (int)columnForTableView:(id)arg1;
- (int)selectedRowForColumn:(int)arg1;
- (int)selectedRowInComponent:(int)arg1;
- (struct _NSRange)visibleRowsForColumn:(int)arg1;
- (BOOL)_drawsBackground;
- (void)_setDrawsBackground:(BOOL)arg1;
- (BOOL)_usesCheckedSelection;
- (void)_setUsesCheckedSelection:(BOOL)arg1;
- (void)_sendSelectionChangedFromTable:(id)arg1;
- (BOOL)_usesCheckSelection;
- (BOOL)allowsMultipleSelection;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)_sendSelectionChangedForComponent:(int)arg1;
@property(nonatomic) BOOL showsSelectionIndicator;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_updateWithOldSize:(struct CGSize)arg1 newSize:(struct CGSize)arg2;
- (void)_resetSelectionOfTables;
- (void)layoutSubviews;
- (id)_contentView;
- (float)_wheelShift;
- (void)reloadAllPickerPieces;
- (id)viewForRow:(int)arg1 forComponent:(int)arg2;
@property(readonly, nonatomic) int numberOfComponents; // @synthesize numberOfComponents=_numberOfComponents;
- (int)numberOfColumns;
- (int)numberOfRowsInColumn:(int)arg1;
- (int)numberOfRowsInComponent:(int)arg1;
- (struct CGSize)rowSizeForComponent:(int)arg1;
- (id)_createTableWithFrame:(struct CGRect)arg1 forComponent:(int)arg2;
- (id)_createColumnWithTableFrame:(struct CGRect)arg1 rowHeight:(float)arg2;
- (void)_addMagnifierLinesForRowHeight:(float)arg1;
- (float)_delegateRowHeightForComponent:(int)arg1;
- (float)_delegateWidthForComponent:(int)arg1 ofCount:(int)arg2 withSizeLeft:(float)arg3;
- (id)_delegateAttributedTitleForRow:(int)arg1 forComponent:(int)arg2;
- (id)_delegateTitleForRow:(int)arg1 forComponent:(int)arg2;
- (int)_delegateNumberOfRowsInComponent:(int)arg1;
- (int)_delegateNumberOfComponents;
- (double)scrollAnimationDuration;
- (void)_sendCheckedRow:(int)arg1 inTableView:(id)arg2 checked:(BOOL)arg3;
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (id)createDividerWithFrame:(struct CGRect)arg1;
- (id)_createViewForPickerPiece:(int)arg1;
- (struct CGRect)_selectionBarRectForHeight:(float)arg1;
- (id)imageForPickerPiece:(int)arg1;
- (id)_popoverSuffix;
- (id)_selectionBarSuffix;
- (id)pickerImageNamePrefix;
- (void)reloadComponent:(int)arg1;
- (void)reloadDataForColumn:(int)arg1;
- (void)reloadAllComponents;
- (void)reloadData;
- (void)reload;
- (void)didMoveToWindow;
- (void)setAlpha:(float)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)_updateSound;
- (void)setNeedsLayout;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (BOOL)_soundsEnabled;
- (void)setSoundsEnabled:(BOOL)arg1;
- (id)_orientationImageSuffix;
- (float)_tableRowHeight;
- (BOOL)_isLandscapeOrientation;
- (struct CGSize)defaultSize;
- (BOOL)isAccessibilityElementByDefault;

@end

