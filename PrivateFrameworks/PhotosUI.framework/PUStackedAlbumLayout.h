/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UICollectionViewLayout.h"

@class NSArray, NSMutableDictionary, PUAlbumListTransitionContext, PUPhotoDecoration, UICollectionViewLayoutAttributes;

@interface PUStackedAlbumLayout : UICollectionViewLayout
{
    NSMutableDictionary *_visibleLayoutAttributesByIndexPath;
    NSMutableDictionary *_derivedLayoutAttributesByIndexPath;
    NSMutableDictionary *_zIndexByIndexPath;
    int _itemsCount;
    BOOL _isOrderedAscending;
    PUAlbumListTransitionContext *_transitionContext;
    NSArray *_visibleStackedItemLayoutAttributes;
    UICollectionViewLayoutAttributes *_referenceItemLayoutAttributes;
    PUPhotoDecoration *_referencePhotoDecoration;
    struct CGPoint _referenceCenter;
}

@property(copy, nonatomic) PUPhotoDecoration *referencePhotoDecoration; // @synthesize referencePhotoDecoration=_referencePhotoDecoration;
@property(nonatomic) struct CGPoint referenceCenter; // @synthesize referenceCenter=_referenceCenter;
@property(copy, nonatomic) UICollectionViewLayoutAttributes *referenceItemLayoutAttributes; // @synthesize referenceItemLayoutAttributes=_referenceItemLayoutAttributes;
@property(copy, nonatomic) NSArray *visibleStackedItemLayoutAttributes; // @synthesize visibleStackedItemLayoutAttributes=_visibleStackedItemLayoutAttributes;
@property(retain, nonatomic) PUAlbumListTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (struct CGSize)collectionViewContentSize;
- (id)_newAdjustedLayoutAttributes:(id)arg1 indexPath:(id)arg2;
- (int)zIndexForItemAtIndexPath:(id)arg1;

@end

