/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIColor, UIImage;

@interface EKEventOccurrenceListItem : UIView
{
    NSString *_title;
    NSString *_location;
    NSString *_timeString;
    UIColor *_dotColor;
    UIImage *_dot;
    unsigned int _designator:2;
    unsigned int _isAllDay:1;
    unsigned int _isBirthday:1;
    unsigned int _isFacebook:1;
    unsigned int _tentative:1;
    unsigned int _declined:1;
    unsigned int _needsReply:1;
    unsigned int _cancelled:1;
    unsigned int _isEndDate:1;
    unsigned int _indentsWithoutDot:1;
    unsigned int _showsColors:1;
    BOOL _isSelected;
}

+ (float)defaultHeight;
+ (float)timeWidthIncludingDots:(BOOL)arg1;
+ (float)hourWidth;
+ (void)_invalidateWidths;
+ (void)_calculateWidths;
+ (float)xMidpointForCalendarDot;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)isCancelled;
- (BOOL)isAllDay;
- (unsigned int)designator;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawText:(id)arg1 withDefaultColor:(id)arg2 atPoint:(struct CGPoint)arg3 forWidth:(float)arg4 font:(id)arg5 lineBreakMode:(int)arg6 staticColor:(BOOL)arg7;
- (void)drawDeemphasizedText:(id)arg1 atPoint:(struct CGPoint)arg2 forWidth:(float)arg3 font:(id)arg4 lineBreakMode:(int)arg5 staticColor:(BOOL)arg6;
- (void)drawBoldText:(id)arg1 atPoint:(struct CGPoint)arg2 forWidth:(float)arg3 font:(id)arg4 lineBreakMode:(int)arg5 staticColor:(BOOL)arg6;
- (BOOL)setUpStaticDrawingColor;
- (id)outlineImageWithColor:(id)arg1;
- (id)_dot;
- (id)_selectedBackgroundImage;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isHighlighted;
- (void)setShowsColors:(BOOL)arg1;
- (void)setIndentsForMissingDot:(BOOL)arg1;
- (void)setDotColor:(id)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setNeedsReply:(BOOL)arg1;
- (void)setDeclined:(BOOL)arg1;
- (void)setTentative:(BOOL)arg1;
- (void)setIsEndDate:(BOOL)arg1;
- (void)setDisplayDate:(id)arg1;
- (void)setIsFacebook:(BOOL)arg1;
- (void)setIsBirthday:(BOOL)arg1;
- (void)setIsAllDay:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)updateWithEvent:(id)arg1;
- (BOOL)showDisclosure;
- (id)init;
- (id)initWithEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

