/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <StoreKitUI/SKUISwooshViewController.h>

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSMutableIndexSet, NSString, NSURL, SKUIItemArtworkContext, SKUISwooshView, UICollectionView;

@interface SKUILockupSwooshViewController : SKUISwooshViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    SKUIItemArtworkContext *_artworkContext;
    UICollectionView *_collectionView;
    BOOL _delegateWantsWillDisplay;
    NSMutableIndexSet *_hiddenIconIndexSet;
    NSArray *_items;
    struct CGSize _maxCellSize;
    struct CGSize _maxImageSize;
    NSString *_seeAllTitle;
    NSURL *_seeAllURL;
    SKUISwooshView *_swooshView;
    int _swooshType;
}

+ (int)_swooshTypeForItems:(id)arg1;
@property(readonly, nonatomic) NSURL *seeAllURL; // @synthesize seeAllURL=_seeAllURL;
@property(nonatomic) int swooshType; // @synthesize swooshType=_swooshType;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) SKUIItemArtworkContext *artworkContext; // @synthesize artworkContext=_artworkContext;
- (void).cxx_destruct;
- (id)_newArtworkContextForSwooshType:(int)arg1;
- (void)_seeAllAction:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)unhideImages;
- (void)setItemsWithLockups:(id)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(int)arg2;
- (void)setDelegate:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (id)popImageViewForItemAtIndex:(int)arg1;
- (id)indexPathsForVisibleItems;
- (struct CGRect)frameForItemAtIndex:(int)arg1;
@property(readonly, nonatomic) struct CGRect seeAllButtonFrame;
- (void)dealloc;
- (id)initWithSwoosh:(id)arg1;
- (id)initWithItemList:(id)arg1;

@end

