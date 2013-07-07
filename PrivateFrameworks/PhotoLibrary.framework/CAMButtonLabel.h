/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UILabel, _UILegibilityView;

@interface CAMButtonLabel : UIView
{
    BOOL _useLegibilityView;
    UILabel *__label;
    _UILegibilityView *__legibilityView;
    struct CGSize _contentSize;
}

@property(readonly, nonatomic) _UILegibilityView *_legibilityView; // @synthesize _legibilityView=__legibilityView;
@property(readonly, nonatomic) UILabel *_label; // @synthesize _label=__label;
@property(nonatomic, getter=isUsingLegibilityView) BOOL useLegibilityView; // @synthesize useLegibilityView=_useLegibilityView;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (void)layoutSubviews;
- (id)_imageFromLabel:(id)arg1;
- (void)_createLegibilityView;
- (void)_updateViewAlphas;
@property(copy, nonatomic) NSString *text;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

