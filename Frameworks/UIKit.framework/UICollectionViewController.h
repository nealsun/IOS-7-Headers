/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class UICollectionView, UICollectionViewLayout;

@interface UICollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionViewLayout *_layout;
    UICollectionView *_collectionView;
    struct {
        unsigned int clearsSelectionOnViewWillAppear:1;
        unsigned int useLayoutToLayoutNavigationTransitions:1;
    } _collectionViewControllerFlags;
}

@property(nonatomic) BOOL useLayoutToLayoutNavigationTransitions;
- (BOOL)shouldCrossFadeBottomBars;
- (BOOL)shouldCrossFadeNavigationBar;
- (id)_animatorForOperation:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (id)_newCollectionViewWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)dataSource;
- (id)delegate;
@property(retain, nonatomic) UICollectionView *collectionView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillUnload;
- (void)_clearSharedView;
- (void)_setSharedCollectionView:(id)arg1;
- (void)setView:(id)arg1;
- (BOOL)automaticallyAdjustsScrollViewInsets;
- (void)loadView;
- (id)_wrappingView;
@property(readonly, nonatomic) UICollectionViewLayout *layout;
@property(nonatomic) BOOL clearsSelectionOnViewWillAppear;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;

@end

