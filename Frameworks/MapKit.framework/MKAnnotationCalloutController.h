/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MKAnnotationView;

__attribute__((visibility("hidden")))
@interface MKAnnotationCalloutController : NSObject
{
    id <MKAnnotationCalloutControllerDelegate> _delegate;
    MKAnnotationView *_annotationView;
}

@property(nonatomic) id <MKAnnotationCalloutControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MKAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)hideCalloutAnimated:(BOOL)arg1;
- (void)showCalloutForAnnotationView:(id)arg1 animated:(BOOL)arg2 scrollToFit:(BOOL)arg3 avoid:(struct CGRect)arg4;
- (struct CGRect)_visibleCenteringRectInView:(id)arg1;
- (void)_updateCalloutAnimated:(BOOL)arg1;
- (void)_removeAccessoryTargets;
- (void)_removeAccessoryTargetForView:(id)arg1;
- (void)_addAccessoryTargetForView:(id)arg1;
- (void)_calloutAccessoryControlTapped:(id)arg1;
- (void)_setDetailAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)_setRightAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)_setLeftAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)_setSubtitle:(id)arg1 animated:(BOOL)arg2;
- (id)_subtitle;
- (void)_setTitle:(id)arg1;
- (BOOL)_isShowingCallout;
- (void)_updateCallout;
- (float)defaultCalloutHeight;
- (BOOL)isCalloutExpanded;
- (BOOL)calloutContainsPoint:(struct CGPoint)arg1;
@property(nonatomic) Class calloutViewClass;
- (void)dealloc;

@end

