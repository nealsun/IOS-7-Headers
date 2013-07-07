/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PLAlbumViewDataSource.h"
#import "PLAlbumViewDelegate.h"
#import "PLAssetContainerObserver.h"
#import "PLDismissableViewController.h"
#import "PLPhotosPickerSessionDelegate.h"

@class NSDate, NSObject<PLAlbumProtocol>, PLAlbumSectionsManager, PLAlbumView, PLEmptyAlbumView, PLPhotosPickerSession, PLPreheatManager, UISegmentedControl;

@interface PLAlbumViewController : UIViewController <PLPhotosPickerSessionDelegate, PLAlbumViewDataSource, PLAlbumViewDelegate, PLAssetContainerObserver, PLDismissableViewController>
{
    struct NSObject *_album;
    PLAlbumSectionsManager *_sectionsManager;
    PLEmptyAlbumView *_emptyAlbumView;
    int _currentFilter;
    PLPhotosPickerSession *_activePhotosPickerSession;
    UISegmentedControl *_recentsFilterControl;
    NSDate *_firstRecentBatchDate;
    BOOL _shouldReloadWhenBecomingVisible;
    BOOL _shouldUpdatePreheatWhenLoading;
    BOOL _allowDividingAssetsInSections;
    BOOL _divideAssetsInSections;
    BOOL _shouldShowEmptyAlbumView;
    id viewDidAppearCompletion;
    PLPreheatManager *_preheatManager;
}

@property(retain, nonatomic) PLPreheatManager *preheatManager; // @synthesize preheatManager=_preheatManager;
@property(nonatomic) BOOL shouldShowEmptyAlbumView; // @synthesize shouldShowEmptyAlbumView=_shouldShowEmptyAlbumView;
@property(nonatomic) BOOL allowDividingAssetsInSections; // @synthesize allowDividingAssetsInSections=_allowDividingAssetsInSections;
@property(nonatomic) int currentFilter; // @synthesize currentFilter=_currentFilter;
@property(copy, nonatomic) id viewDidAppearCompletion; // @synthesize viewDidAppearCompletion;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (BOOL)photosPickerSessionShouldFinishWithCurrentSelection:(id)arg1;
- (void)albumView:(id)arg1 preheatImageDataAtStartIndexPath:(id)arg2 endIndexPath:(id)arg3 windowSize:(unsigned int)arg4 downDirection:(BOOL)arg5;
- (void)albumView:(id)arg1 getUnreadStartMarkerCount:(unsigned int *)arg2 showsProgress:(char *)arg3;
- (id)albumView:(id)arg1 badgeImageForPhotoAtIndexPath:(id)arg2;
- (id)albumView:(id)arg1 textBadgeForPhotoAtIndexPath:(id)arg2;
- (id)footerAccessoryViewForAlbumView:(id)arg1;
- (id)footerSubtitleForAlbumView:(id)arg1;
- (BOOL)footerSubtitleAllowsEmail:(id)arg1;
- (void)albumView:(id)arg1 imageCount:(unsigned int *)arg2 videoCount:(unsigned int *)arg3 otherCount:(unsigned int *)arg4 pendingCount:(unsigned int *)arg5 importOperation:(int *)arg6;
- (id)albumView:(id)arg1 imageForPhotoAtIndexPath:(id)arg2;
- (id)albumView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (unsigned int)albumView:(id)arg1 numberOfPhotosInSection:(unsigned int)arg2;
- (unsigned int)numberOfSectionsInAlbumView:(id)arg1;
- (void)_updateRecentsFilterControl;
- (void)updateUnreadMarkerAnimated:(BOOL)arg1;
- (void)assetContainerDidChange:(id)arg1;
- (void)libraryDidChange:(id)arg1;
- (void)_recentsFilterChanged:(id)arg1;
- (void)beginAddPhotosSession:(id)arg1;
- (id)selectedPhotos;
- (unsigned int)filteredCount;
- (id)filteredItems;
- (id)_parametersForFilter:(int)arg1 forAlbum:(struct NSObject *)arg2;
@property(readonly, nonatomic) PLAlbumView *albumView;
- (id)contentScrollView;
- (void)_scrollToInitialPosition;
- (void)_updateDivideInSections;
@property(nonatomic, getter=isShowingEmptyAlbumView) BOOL showingEmptyAlbumView;
@property(readonly, nonatomic) NSObject<PLAlbumProtocol> *album;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)reloadData;
- (void)dealloc;
- (id)initWithAlbum:(struct NSObject *)arg1;
- (id)init;
- (void)setAlbum:(struct NSObject *)arg1;

@end
