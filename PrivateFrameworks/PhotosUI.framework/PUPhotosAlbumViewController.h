/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotosUI/PUPhotosGridViewController.h>

#import "PUSectionedGridLayoutDelegate.h"

@class NSObject<PLAlbumProtocol>, PUPhotosPickerViewController, PUSectionedGridLayout;

@interface PUPhotosAlbumViewController : PUPhotosGridViewController <PUSectionedGridLayoutDelegate>
{
    PUPhotosPickerViewController *_activePhotosPickerViewController;
    struct NSObject *_album;
}

@property(retain, nonatomic) NSObject<PLAlbumProtocol> *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (void)handleAddFromAction;
- (void)setupScrubber;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)assetContainerDidChange:(id)arg1;
- (id)savedSlideshowSettings;
- (void)saveSlideshowSettings:(id)arg1;
- (void)_updateTitleAnimated:(BOOL)arg1;
- (BOOL)canEnterEditModeWhenEmpty;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureCollectionViewGridLayout:(id)arg1;
- (BOOL)wantsGlobalFooter;
- (BOOL)_hasScrollableContent;
- (id)sessionInfoForTransferredAssets:(id)arg1;
- (id)localizedTitleForAssets:(id)arg1;
- (id)initWithSpec:(id)arg1;

// Remaining properties
@property(retain, nonatomic) PUSectionedGridLayout *mainGridLayout;

@end

