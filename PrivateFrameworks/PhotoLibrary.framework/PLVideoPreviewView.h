/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class AVCaptureVideoPreviewLayer, NSString, PLEffectsFullsizeView, PLEffectsGridLabelsView, PLEffectsGridView;

@interface PLVideoPreviewView : UIView
{
    NSString *_videoGravity;
    BOOL _disableLayoutForPreviewView;
    BOOL _disableLayoutForEffectsFullsizeView;
    BOOL _disableLayoutForEffectsGridViews;
    BOOL _square;
    AVCaptureVideoPreviewLayer *_previewLayer;
    int _orientation;
    UIView *_previewLayerView;
    PLEffectsFullsizeView *_effectsFullsizeView;
    PLEffectsGridView *_effectsGridView;
    PLEffectsGridLabelsView *_effectsGridLabelsView;
    UIView *_fadeOutView;
}

@property(nonatomic, getter=isSquare) BOOL square; // @synthesize square=_square;
@property(nonatomic, getter=isDisabledLayoutForEffectsGridViews) BOOL disableLayoutForEffectsGridViews; // @synthesize disableLayoutForEffectsGridViews=_disableLayoutForEffectsGridViews;
@property(nonatomic, getter=isDisabledLayoutForEffectsFullsizeView) BOOL disableLayoutForEffectsFullsizeView; // @synthesize disableLayoutForEffectsFullsizeView=_disableLayoutForEffectsFullsizeView;
@property(nonatomic, getter=isDisabledLayoutForPreviewView) BOOL disableLayoutForPreviewView; // @synthesize disableLayoutForPreviewView=_disableLayoutForPreviewView;
@property(readonly, nonatomic) UIView *fadeOutView; // @synthesize fadeOutView=_fadeOutView;
@property(readonly, nonatomic) PLEffectsGridLabelsView *effectsGridLabelsView; // @synthesize effectsGridLabelsView=_effectsGridLabelsView;
@property(readonly, nonatomic) PLEffectsGridView *effectsGridView; // @synthesize effectsGridView=_effectsGridView;
@property(readonly, nonatomic) PLEffectsFullsizeView *effectsFullsizeView; // @synthesize effectsFullsizeView=_effectsFullsizeView;
@property(readonly, nonatomic) UIView *previewLayerView; // @synthesize previewLayerView=_previewLayerView;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
- (void)layoutSubviews;
- (struct CGRect)convertRect:(struct CGRect)arg1 toSublayer:(id)arg2;
- (struct CGRect)frameForView:(id)arg1;
- (struct CGRect)_frameForSubviewsAccountForSquare:(BOOL)arg1;
- (struct CGRect)rectForCaptureDeviceFaceRect:(struct CGRect)arg1;
- (void)destroyEffectsGridViews;
- (void)createEffectsGridViews;
- (void)destroyEffectsFullsizeView;
- (void)createEffectsFullsizeView;
- (void)_updateGravityForLayers;
- (void)setOrientation:(int)arg1 animated:(BOOL)arg2;
@property(copy, nonatomic) NSString *videoGravity;
- (void)setSquare:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

