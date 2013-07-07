/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class PUPhotosSharingViewControllerSpec;

@interface PUPhotoBrowserControllerSpec : NSObject
{
    PUPhotosSharingViewControllerSpec *_photosSharingViewControllerSpec;
}

@property(readonly, nonatomic) PUPhotosSharingViewControllerSpec *photosSharingViewControllerSpec; // @synthesize photosSharingViewControllerSpec=_photosSharingViewControllerSpec;
- (void).cxx_destruct;
@property(readonly, nonatomic) float commentsButtonLandscapeVerticalOffset;
@property(readonly, nonatomic) BOOL shouldUsePopovers;
@property(readonly, nonatomic) BOOL shouldShowPhotoScrubber;
@property(readonly, nonatomic) BOOL isInCamera;
@property(readonly, nonatomic) BOOL shouldShowDeleteItem;
@property(readonly, nonatomic) BOOL shouldShowShareItem;
@property(readonly, nonatomic) BOOL shouldShowEditItem;
@property(readonly, nonatomic) BOOL shouldShowAirplayItem;
@property(readonly, nonatomic) BOOL shouldShowSlideshowItem;
@property(readonly, nonatomic) BOOL shouldShowToolbarItemsInNavigationBar;
- (id)newPhotoBrowserZoomTransition;
- (id)newPhotoBrowserControllerForPhotoAtIndexPath:(id)arg1 inAssetContainerList:(id)arg2;

@end

