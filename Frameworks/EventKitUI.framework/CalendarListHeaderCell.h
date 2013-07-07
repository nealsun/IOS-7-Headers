/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class CalendarListHeaderCellContentView;

@interface CalendarListHeaderCell : UIView
{
    CalendarListHeaderCellContentView *_contentView;
    BOOL _showWeekNumber;
    double _date;
}

@property(nonatomic) BOOL showWeekNumber; // @synthesize showWeekNumber=_showWeekNumber;
- (void).cxx_destruct;
- (void)setNeedsDisplay;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_backgroundImage;
- (void)setFrame:(struct CGRect)arg1;
- (void)setOpaque:(BOOL)arg1;
@property(readonly, nonatomic) BOOL reusable;
@property(nonatomic) BOOL indentsForDots;
@property(nonatomic) double date; // @synthesize date=_date;
- (id)initWithFrame:(struct CGRect)arg1 date:(double)arg2;

@end

