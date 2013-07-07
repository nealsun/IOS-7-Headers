/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface EKMonthPainter : NSObject
{
    struct CGRect _frame;
    struct CGRect _headerFrame;
    CDStruct_b0fa4487 _displayedMonth;
    NSMutableArray *_dayViews;
    int _weekRows;
    BOOL _isThisMonth;
    NSString *_monthTitle;
    BOOL _isInspected;
    BOOL _dontStrokeOutline;
    int _style;
    BOOL _showWeekNumbers;
    struct CGRect _dayAreaFrame;
    struct CGRect _weekNumbersFrame;
}

+ (float)_weekNumbersFontDigitHeight;
+ (float)_weekNumbersFontTwoDigitWidth;
+ (float)_weekNumbersFontOneDigitWidth;
+ (id)_weekNumbersFont;
+ (id)_weekNumberTextColor;
+ (float)_weekNumbersMaxTextWidth;
+ (float)_weekNumbersTextMargin;
+ (float)weekNumbersFrameWidth;
@property(nonatomic) struct CGRect weekNumbersFrame; // @synthesize weekNumbersFrame=_weekNumbersFrame;
@property(nonatomic) BOOL showWeekNumbers; // @synthesize showWeekNumbers=_showWeekNumbers;
@property(nonatomic) struct CGRect dayAreaFrame; // @synthesize dayAreaFrame=_dayAreaFrame;
@property BOOL dontStrokeOutline; // @synthesize dontStrokeOutline=_dontStrokeOutline;
@property int style; // @synthesize style=_style;
@property BOOL isInspected; // @synthesize isInspected=_isInspected;
@property int weekRows; // @synthesize weekRows=_weekRows;
@property(readonly) NSMutableArray *dayViews; // @synthesize dayViews=_dayViews;
@property CDStruct_b0fa4487 displayedMonth; // @synthesize displayedMonth=_displayedMonth;
@property(nonatomic) struct CGRect headerFrame; // @synthesize headerFrame=_headerFrame;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawGridlines;
- (void)drawHeaderLine:(float)arg1;
- (void)drawDayAreaWithRect:(struct CGRect)arg1;
- (void)_drawWeekNumbers;
- (id)_copyFirstVisibleDateInView;
- (float)weekRowHeight;
- (float)weekRowWidth;
- (void)relayoutDays;
- (void)setupDays;
- (void)_resetInteriorFrames;
- (Class)dayPainterClass;
- (id)thisMonthBackgroundGradientImage;
- (id)weekdayFont;
- (id)titleFont;
- (id)weekdayTextColor;
- (id)monthTitleColor;
- (id)engravedTextColor;
- (id)engravedGridlineColor;
- (id)gridlineColor;
- (id)headerFillColor;
- (id)headerLineColor;
- (float)headerHeight;
- (void)showYearInTitle:(BOOL)arg1;
- (id)initWithDate:(CDStruct_b0fa4487)arg1 frame:(struct CGRect)arg2;

@end

