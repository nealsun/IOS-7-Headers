/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "UINavigationBarDelegate.h"

@class UINavigationBar;

@interface PLInteractiveNavigationControllerView : UIView <UINavigationBarDelegate>
{
    UIView *_top;
    UIView *_bottom;
    UIView *_interactive;
    UIView *_overlay;
    UINavigationBar *_navBar;
    UIView *_header;
    UIView *_footer;
    int _orientation;
    struct {
        unsigned int transitioning:1;
        unsigned int headerViewIsVisible:1;
        unsigned int footerViewIsVisible:1;
    } _controllerViewFlags;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footer;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_header;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottom;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_top;
@property(readonly, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navBar;
- (void)setInterfaceOrientation:(int)arg1;
- (void)setTopViewAlpha:(float)arg1;
- (void)setOverlayView:(id)arg1;
- (id)interactiveView;
- (void)setInteractiveView:(id)arg1;
- (void)setInteractiveView:(id)arg1 removePrevious:(BOOL)arg2;
- (void)transitionDidEnd;
- (void)transitionWillBegin;
- (void)layoutSubviews;
- (void)_adjustViewFrame:(id)arg1;
@property(nonatomic, getter=footerViewIsHidden) BOOL footerViewHidden;
@property(nonatomic, getter=headerViewIsHidden) BOOL headerViewHidden;
- (void)setFooterViewHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHeaderViewHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

