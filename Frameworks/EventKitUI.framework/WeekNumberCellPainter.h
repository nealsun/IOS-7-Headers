/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, UIColor, UIFont;

@interface WeekNumberCellPainter : NSObject
{
    BOOL _bottomLeftHasRoundedCorner;
    BOOL _bottomRightHasRoundedCorner;
    BOOL _isToday;
    NSString *_text;
    struct CGRect _frame;
}

@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) BOOL isToday; // @synthesize isToday=_isToday;
@property(nonatomic) BOOL bottomRightHasRoundedCorner; // @synthesize bottomRightHasRoundedCorner=_bottomRightHasRoundedCorner;
@property(nonatomic) BOOL bottomLeftHasRoundedCorner; // @synthesize bottomLeftHasRoundedCorner=_bottomLeftHasRoundedCorner;
- (void).cxx_destruct;
- (void)_drawText;
- (void)_drawBackground;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly, nonatomic) UIFont *textFont;
@property(readonly, nonatomic) UIColor *textColor;
@property(readonly, nonatomic) UIColor *backgroundColor;
- (id)initWithDate:(id)arg1 frame:(struct CGRect)arg2;

@end

