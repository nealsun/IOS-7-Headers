/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

#import "NSCoding.h"

@class NSCalendar, NSDate, NSLocale, NSTimeZone, UIColor, _UIDatePickerView;

@interface UIDatePicker : UIControl <NSCoding>
{
    _UIDatePickerView *_pickerView;
    BOOL _useCurrentDateDuringDecoding;
}

+ (Class)_pickerViewClass;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)setDate:(id)arg1 animated:(BOOL)arg2;
@property(nonatomic) int minuteInterval; // @dynamic minuteInterval;
@property(nonatomic) double countDownDuration; // @dynamic countDownDuration;
@property(retain, nonatomic) NSDate *maximumDate; // @dynamic maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @dynamic minimumDate;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(copy, nonatomic) NSCalendar *calendar; // @dynamic calendar;
@property(retain, nonatomic) NSTimeZone *timeZone; // @dynamic timeZone;
@property(retain, nonatomic) NSLocale *locale; // @dynamic locale;
- (void)_setLocale:(id)arg1;
- (id)_locale;
@property(nonatomic) int datePickerMode; // @dynamic datePickerMode;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_insertPickerView;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setDate:(id)arg1 animate:(BOOL)arg2;
- (void)setBackgroundColor:(id)arg1;
- (int)second;
- (int)minute;
- (int)hour;
- (void)setHighlightsToday:(BOOL)arg1;
- (void)setStaggerTimeIntervals:(BOOL)arg1;
- (void)setDateComponents:(id)arg1;
- (id)dateComponents;
- (void)setDelegate:(id)arg1;
@property(nonatomic, getter=_useCurrentDateDuringDecoding, setter=_setUseCurrentDateDuringDecoding:) BOOL useCurrentDateDuringDecoding;
@property(retain, nonatomic, getter=_textShadowColor, setter=_setTextShadowColor:) UIColor *textShadowColor;
@property(retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *textColor;
@property(retain, nonatomic, getter=_highlightColor, setter=_setHighlightColor:) UIColor *highlightColor;
@property(nonatomic, getter=_usesModernStyle, setter=_setUsesModernStyle:) BOOL _usesModernStyle;
@property(nonatomic, getter=_allowsZeroTimeInterval, setter=_setAllowsZeroTimeInterval:) BOOL allowsZeroTimeInterval; // @dynamic allowsZeroTimeInterval;
@property(nonatomic, getter=_allowsZeroCountDownDuration, setter=_setAllowsZeroCountDownDuration:) BOOL allowsZeroCountDownDuration; // @dynamic allowsZeroCountDownDuration;
@property(nonatomic, getter=_drawsBackground, setter=_setDrawsBackground:) BOOL drawsBackground; // @dynamic drawsBackground;
@property(nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) BOOL usesBlackChrome; // @dynamic usesBlackChrome;
@property(readonly, nonatomic, getter=_dateUnderSelectionBar) NSDate *dateUnderSelectionBar; // @dynamic dateUnderSelectionBar;
- (void)_setHidesLabels:(BOOL)arg1;
- (void)_setHighlightsToday:(BOOL)arg1;
@property(readonly, nonatomic, getter=_contentWidth) float contentWidth; // @dynamic contentWidth;
@property(readonly, nonatomic, getter=_isTimeIntervalMode) BOOL isTimeIntervalMode; // @dynamic isTimeIntervalMode;
- (id)_labelTextForCalendarUnit:(unsigned int)arg1;
- (id)_selectedTextForCalendarUnit:(unsigned int)arg1;
@property(nonatomic) double timeInterval; // @dynamic timeInterval;

@end

