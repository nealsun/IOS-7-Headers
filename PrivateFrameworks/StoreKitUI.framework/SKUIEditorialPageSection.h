/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <StoreKitUI/SKUIStorePageSection.h>

@class SKUIEditorialComponent, SKUIEditorialLayout, SKUITextBoxView;

@interface SKUIEditorialPageSection : SKUIStorePageSection
{
    SKUIEditorialLayout *_editorialLayout;
    float _edgePadding;
    BOOL _isExpanded;
    SKUITextBoxView *_textBoxView;
}

- (void).cxx_destruct;
- (id)_editorialLayout;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAppearInContext:(id)arg1;
- (int)numberOfCells;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SKUIEditorialComponent *pageComponent; // @dynamic pageComponent;

@end

