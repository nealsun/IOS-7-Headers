/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class MPUChronologicalProgressView, MPUTransportControlsView, UISlider, _MPUMarqueeContainerView;

@interface _MPUSystemMediaControlsView : UIView
{
    int _style;
    MPUTransportControlsView *_transportControlsView;
    MPUChronologicalProgressView *_timeInformationView;
    _MPUMarqueeContainerView *_trackInformationView;
    UISlider *_volumeSliderView;
}

@property(retain, nonatomic) UISlider *volumeSliderView; // @synthesize volumeSliderView=_volumeSliderView;
@property(retain, nonatomic) _MPUMarqueeContainerView *trackInformationView; // @synthesize trackInformationView=_trackInformationView;
@property(retain, nonatomic) MPUChronologicalProgressView *timeInformationView; // @synthesize timeInformationView=_timeInformationView;
@property(retain, nonatomic) MPUTransportControlsView *transportControlsView; // @synthesize transportControlsView=_transportControlsView;
@property(readonly, nonatomic) int style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)_createVolumeSliderView;
- (id)_volumeSliderLockscreenMinimumTrackImage;
- (void)updatePlaybackState:(BOOL)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(int)arg1;

@end

