/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@interface CAMBlurredSnapshotView : UIView
{
    BOOL _blurred;
    BOOL _dimmed;
    int _style;
    UIView *_snapshotView;
    UIView *__dimmingView;
    struct CGRect _targetFrame;
}

@property(readonly, nonatomic) UIView *_dimmingView; // @synthesize _dimmingView=__dimmingView;
@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(nonatomic) BOOL dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic) BOOL blurred; // @synthesize blurred=_blurred;
@property(readonly, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(nonatomic) int style; // @synthesize style=_style;
- (void)_removeSnapshotDimAnimated:(BOOL)arg1 withCompletionBlock:(id)arg2;
- (void)_applySnapshotDimAnimated:(BOOL)arg1 withCompletionBlock:(id)arg2;
- (void)_setupDimOnSnapshot;
- (void)_removeSnapshotBlurAnimated:(BOOL)arg1 withCompletionBlock:(id)arg2;
- (void)_applySnapshotBlurAnimated:(BOOL)arg1 withCompletionBlock:(id)arg2;
- (void)_setupBlurOnSnapshot;
- (void)_prepareForApplyingBlurAnimation:(BOOL)arg1 inputRadiusAmount:(float *)arg2 inputRadiusDuration:(double *)arg3 inputRadiusDelay:(double *)arg4 inputRadiusTimingFunction:(id *)arg5 opacityAmount:(float *)arg6 opacityDuration:(double *)arg7 opacityDelay:(double *)arg8 opacityTimingFunction:(id *)arg9;
- (void)setDimmed:(BOOL)arg1 animated:(BOOL)arg2 withCompletionBlock:(id)arg3;
- (void)setBlurred:(BOOL)arg1 animated:(BOOL)arg2 withCompletionBlock:(id)arg3;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end

