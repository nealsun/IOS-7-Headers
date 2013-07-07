/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIButton.h"

@interface CalendarArrowButton : UIButton
{
    unsigned int _didRepeat:1;
    double _lastArrowDown;
    id _delegate;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_automationID;
- (void)_touchExitOrOutside;
- (void)_repeatCancelled;
- (void)_buttonDown:(id)arg1;
- (void)_performDownRepeat;
- (void)_notifyArrowDown;
- (void)_scheduleDownRepeat;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (int)arrowType;
- (id)initWithArrowType:(int)arg1;

@end

