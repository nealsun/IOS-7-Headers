/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSArray, PLEffectsGridView;

@interface PLEffectsGridLabelsView : UIView
{
    BOOL _disableLayoutForLabels;
    PLEffectsGridView *_gridView;
    int _orientation;
    NSArray *_filterLabelViews;
    NSArray *_filterIndices;
    NSArray *__labels;
}

@property(retain, nonatomic, setter=_setLabels:) NSArray *_labels; // @synthesize _labels=__labels;
- (void)_setFilterIndices:(id)arg1;
@property(retain, nonatomic) NSArray *filterIndices; // @synthesize filterIndices=_filterIndices;
@property(retain, nonatomic) NSArray *filterLabelViews; // @synthesize filterLabelViews=_filterLabelViews;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic, getter=isDisabledLayoutForLabels) BOOL disableLayoutForLabels; // @synthesize disableLayoutForLabels=_disableLayoutForLabels;
@property(retain, nonatomic) PLEffectsGridView *gridView; // @synthesize gridView=_gridView;
- (struct CGAffineTransform)_transformForOrientation:(int)arg1;
- (struct CGRect)frameForLabelView:(id)arg1 withinGridFrame:(struct CGRect)arg2;
- (struct CGSize)_sizeForLabelView:(id)arg1 withinSize:(struct CGSize)arg2;
- (struct CGSize)_sizeForLabel:(id)arg1 withinSize:(struct CGSize)arg2;
- (void)layoutSubviews;
- (void)_setFilterLabelViews:(id)arg1;
- (id)_imageFromLabel:(id)arg1;
- (void)_updateLabelViews;
- (void)_rebuildFilterLabels;
- (void)updateFilterLabels;
- (void)_replaceLabelViews:(BOOL)arg1;
- (void)setOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

