/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotosUI/PUPhotosGridViewController.h>

#import "PUCollectionViewFlowLayoutDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class PLFetchingAlbum, PUCollectionViewFlowLayout, PUPhotosPanoramaViewControllerSpec;

@interface PUPhotosPanoramaViewController : PUPhotosGridViewController <UICollectionViewDelegateFlowLayout, PUCollectionViewFlowLayoutDelegate>
{
    PUPhotosPanoramaViewControllerSpec *_panoramaSpec;
    PLFetchingAlbum *_userPanoAlbum;
}

@property(retain, nonatomic) PLFetchingAlbum *userPanoAlbum; // @synthesize userPanoAlbum=_userPanoAlbum;
@property(retain, nonatomic) PUPhotosPanoramaViewControllerSpec *panoramaSpec; // @synthesize panoramaSpec=_panoramaSpec;
- (void).cxx_destruct;
- (void)_updatePhotoDecorationForCell:(id)arg1 animated:(BOOL)arg2;
- (void)updateMainCollectionViewAnimated:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)sectionedGridLayoutWillPrepareLayout:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)rotatePhotoViewToHorizontalIfNeeded:(id)arg1 withAsset:(id)arg2;
- (void)updatePhotoView:(id)arg1 withThumbnailImage:(id)arg2;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)configureCollectionViewGridLayout:(id)arg1;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4;
- (BOOL)_hasScrollableContent;
- (BOOL)wantsGlobalFooter;
- (id)newGridLayout;
- (id)newPanoPhotoCollections;
- (id)initWithSpec:(id)arg1;

// Remaining properties
@property(retain, nonatomic) PUCollectionViewFlowLayout *mainGridLayout;

@end

