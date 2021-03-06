/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIScrollView.h"

#import "ABPersonTabsScrollView.h"

@class UIView;

@interface ABPersonOverlayingContainerView : UIScrollView <ABPersonTabsScrollView>
{
    float _minimumBottomInset;
    struct UIEdgeInsets _savedContentInset;
    UIView *_backgroundView;
    UIView *_abContentView;
    id <ABPersonTabsLayoutManager> _tabsLayoutManager;
}

@property(retain, nonatomic) id <ABPersonTabsLayoutManager> tabsLayoutManager; // @synthesize tabsLayoutManager=_tabsLayoutManager;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_abContentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
@property(nonatomic) float minimumBottomInset;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)_updateContentFrameAndSize;

@end

