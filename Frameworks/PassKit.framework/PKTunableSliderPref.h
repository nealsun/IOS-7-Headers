/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PassKit/PKTunablePref.h>

@class UISlider, UIView;

@interface PKTunableSliderPref : PKTunablePref
{
    float _minVal;
    float _maxVal;
    UIView *_view;
    UISlider *_slider;
}

@property(retain) UISlider *slider; // @synthesize slider=_slider;
@property(retain) UIView *view; // @synthesize view=_view;
@property float maxVal; // @synthesize maxVal=_maxVal;
@property float minVal; // @synthesize minVal=_minVal;
- (void)restore:(id)arg1;
- (void)takeValueFromView:(id)arg1;
- (id)viewWithContainedLabel:(id *)arg1;
- (id)initWithPrefName:(id)arg1 defaultValue:(id)arg2 minimumValue:(float)arg3 maximumValue:(float)arg4;
- (void)dealloc;

@end

