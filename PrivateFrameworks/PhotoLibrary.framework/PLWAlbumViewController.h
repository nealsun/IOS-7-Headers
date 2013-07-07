/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PLAbstractAlbumPickerViewControllerDelegate.h"
#import "PLActivityViewControllerDelegate.h"
#import "PLAssetContainerObserver.h"
#import "PLConfigurableNavigationDisplayOptions.h"
#import "PLDismissableViewController.h"
#import "PLPhotosPickerSessionParticipant.h"
#import "PLSlideshowSettingsViewControllerDelegate.h"
#import "PLStackViewDataSource.h"
#import "PLStackViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class NSArray, NSObject<PLAlbumProtocol>, NSString, NSTimer, PLActivityViewController, PLAlbumFooterView, PLEmptyAlbumView, PLLibraryBannerView, PLLibraryImageDataProvider, PLManagedAsset, PLPhotoScrubber, PLPhotosPickerSession, PLPreheatManager, PLProgressView, PLSegmentedControl, PLStackView, PLVideoRemaker, PLWAlbumPickerViewController, UIActionSheet, UIAlertView, UIBarButtonItem, UINavigationController, UINavigationItem, UIPopoverController, UIView;

@interface PLWAlbumViewController : UIViewController <PLAbstractAlbumPickerViewControllerDelegate, PLActivityViewControllerDelegate, PLStackViewDelegate, PLStackViewDataSource, UIActionSheetDelegate, UIPopoverControllerDelegate, PLSlideshowSettingsViewControllerDelegate, PLPhotosPickerSessionParticipant, PLAssetContainerObserver, PLConfigurableNavigationDisplayOptions, PLDismissableViewController>
{
    struct NSObject *_album;
    PLStackView *_stackView;
    PLPhotoScrubber *_photoScrubber;
    PLEmptyAlbumView *_emptyAlbumView;
    PLAlbumFooterView *_footerView;
    PLLibraryBannerView *_bannerView;
    UIView *_customTitleView;
    NSString *_customTitle;
    int _currentFilter;
    BOOL _showPhotosVideosFilter;
    unsigned int _ignoreReorderNotificationCount;
    BOOL _hasChangesInEditSession;
    BOOL _viewCountIsConsistentWithModel;
    PLPhotosPickerSession *_currentPickerSession;
    PLWAlbumPickerViewController *_albumPickerController;
    PLPhotosPickerSession *_activePhotosPickerSession;
    int _currentExpandedTag;
    UINavigationItem *_customNavigationItem;
    PLSegmentedControl *_filterControl;
    UIBarButtonItem *_playButtonItem;
    UIBarButtonItem *_actionButtonItem;
    UIBarButtonItem *_addButtonItem;
    UIBarButtonItem *_removeButtonItem;
    UIBarButtonItem *_cancelButtonItem;
    UIBarButtonItem *_savedBarButtonItem;
    UIBarButtonItem *_modalDoneButtonItem;
    UIAlertView *_createAlbumAlert;
    NSArray *_leftBarEditingItems;
    NSArray *_rightBarEditingItems;
    UIActionSheet *_moveSheet;
    UIActionSheet *_deleteWarningSheet;
    NSArray *_moveSheetActions;
    BOOL _isSlideShowScheduled;
    UIView *_fadeToBlackView;
    BOOL _fadingToBlack;
    BOOL _slideshowIsOrigami;
    UIPopoverController *_slideshowSettingsPopover;
    UIPopoverController *_activityControllerPopover;
    unsigned int _remaking:1;
    int _selectedImageCount;
    int _selectedAVCount;
    int _selectedUnknownCount;
    int _selectedPlaceholderCount;
    UINavigationController *_composeNavigationController;
    unsigned int _dataInsertionCount;
    PLVideoRemaker *_remaker;
    SEL _completionSelector;
    PLManagedAsset *_currentVideo;
    PLActivityViewController *_activityViewController;
    PLProgressView *_progressView;
    NSTimer *_progressUpdateTimer;
    BOOL _shouldReloadWhenBecomingVisible;
    id _nextViewDidLayoutSubviewsHandler;
    BOOL _shouldShowEmptyAlbumView;
    unsigned int _programmaticExpansion:1;
    id _activityTarget;
    SEL _activityAction;
    PLLibraryImageDataProvider *imageDataProvider;
    PLPreheatManager *_preheatManager;
}

@property(retain, nonatomic) PLPreheatManager *preheatManager; // @synthesize preheatManager=_preheatManager;
@property(nonatomic) BOOL shouldShowEmptyAlbumView; // @synthesize shouldShowEmptyAlbumView=_shouldShowEmptyAlbumView;
@property(retain, nonatomic) PLPhotosPickerSession *currentPickerSession; // @synthesize currentPickerSession=_currentPickerSession;
@property(copy) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(retain) UIView *customTitleView; // @synthesize customTitleView=_customTitleView;
@property(nonatomic) BOOL hasChangesInEditSession; // @synthesize hasChangesInEditSession=_hasChangesInEditSession;
@property(nonatomic) int currentFilter; // @synthesize currentFilter=_currentFilter;
@property(retain, nonatomic) PLLibraryImageDataProvider *imageDataProvider; // @synthesize imageDataProvider;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)_remakerDidFinish:(id)arg1;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)_showMailComposition:(id)arg1 transcodedVideoPath:(id)arg2;
- (void)_showMailComposition:(id)arg1;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)_transcodeVideo:(id)arg1 usingMode:(int)arg2 completionSelector:(SEL)arg3;
- (void)_showTrimViewControllerForVideo:(id)arg1 maximumTrimDuration:(double)arg2 trimButtonTitle:(id)arg3;
- (void)_showRemakerProgressView:(BOOL)arg1;
- (BOOL)popControllerWhenStackCollapses;
- (BOOL)canSaveToCameraRoll;
- (BOOL)canDeletePhotos;
- (BOOL)canRemovePhotos;
- (id)removableSelectedPhotos;
@property(copy, nonatomic) NSArray *selectedPhotos;
- (id)contentScrollView;
@property(retain, nonatomic) PLStackView *stackView;
- (id)filteredItems;
@property(retain, nonatomic) NSObject<PLAlbumProtocol> *album; // @synthesize album=_album;
- (id)_library;
- (void)_restoreSelectionFromPickerSession;
- (id)navigationItem;
- (id)navigationBar;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)updateFooterView;
- (void)getDisplayPhotoCount:(unsigned int *)arg1 videoCount:(unsigned int *)arg2 pendingCount:(unsigned int *)arg3 importOperation:(int *)arg4;
- (id)_footerSubtitle;
- (void)libraryDidChange:(id)arg1;
- (void)assetContainerDidChange:(id)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)smsComposeControllerAppeared:(id)arg1;
- (void)smsComposeControllerDataInserted:(id)arg1;
- (void)expandableViewDidCompleteExpanding:(id)arg1;
- (void)expandableViewWillBeginExpanding:(id)arg1;
- (id)expandedControllerForExpandableView:(id)arg1;
- (void)_imageViewDidCompleteExpanding:(id)arg1;
- (void)stackViewSelectionDidChange:(id)arg1 added:(id)arg2 removed:(id)arg3;
- (void)beginPoppingAnimated:(BOOL)arg1 completionHandler:(id)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (id)slideshowSettingsViewController:(id)arg1 slideshowSettingsForAirPlayRoute:(id)arg2;
- (id)slideshowSettingsViewController:(id)arg1 alternateTransitionLocalizationsForAirPlayRoute:(id)arg2;
- (id)slideshowSettingsViewController:(id)arg1 transitionKeysForAirPlayRoute:(id)arg2;
- (void)slideshowSettingsViewController:(id)arg1 didSelectAirPlayRoute:(id)arg2;
- (void)slideshowSettingsViewControllerPlayButtonWasPressed:(id)arg1;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (void)performBlockAfterNextViewDidLayoutSubviews:(id)arg1;
- (void)scrollToRevealPhoto:(id)arg1 animated:(BOOL)arg2;
- (void)expandImageViewForPhoto:(id)arg1 toComment:(id)arg2 animated:(BOOL)arg3;
- (void)expandImageViewForPhoto:(id)arg1 animated:(BOOL)arg2;
- (void)_dismissSlideshowPopover;
- (void)_dismissSlideshowPopoverAnimated:(BOOL)arg1;
- (void)_showSlideshowSettings:(id)arg1;
- (void)_beginSlideshow;
- (void)_fadeToBlackAnimation:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_fadeToBlack;
- (BOOL)albumPickerController:(id)arg1 shouldEnableAlbum:(struct NSObject *)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)stackView:(id)arg1 getUnreadStartMarkerCount:(unsigned int *)arg2 showsProgress:(char *)arg3;
- (BOOL)stackView:(id)arg1 writeItemsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)stackViewItemMoveDidComplete:(id)arg1;
- (void)stackView:(id)arg1 moveItemAtIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (int)stackView:(id)arg1 editingOptionsForItemAtIndex:(unsigned int)arg2;
- (id)stackView:(id)arg1 collapsedIndexesForCount:(unsigned int)arg2;
- (void)stackView:(id)arg1 saveStackedImage:(id)arg2 options:(id)arg3;
- (id)stackedImageForStackView:(id)arg1 options:(id *)arg2;
- (int)stackViewPosterItemIndex:(id)arg1;
- (id)stackView:(id)arg1 badgeImageForImageAtIndex:(int)arg2;
- (id)stackView:(id)arg1 textBadgeStringForImageAtIndex:(int)arg2;
- (void)stackView:(id)arg1 preheatImageDataAtStartIndex:(unsigned int)arg2 endIndex:(unsigned int)arg3 windowSize:(unsigned int)arg4 downDirection:(BOOL)arg5;
- (id)stackView:(id)arg1 itemViewAtIndex:(int)arg2 loadImagesSynchronously:(BOOL)arg3;
- (int)stackViewItemCount:(id)arg1;
- (void)_showMoveSheet:(id)arg1;
- (void)_publishingAgentDidEndRemaking:(id)arg1;
- (void)_publishingAgentDidStartRemaking:(id)arg1;
- (void)_updateProgressView;
- (id)_currentPublishingAgent;
- (void)activityViewControllerDidDismiss:(id)arg1;
- (void)_displayActivitySheet:(id)arg1;
- (void)_dismissActivityControllerPopover:(BOOL)arg1;
- (void)_performPostAlbumStreamTasksWithNewlyCreatedAlbum:(struct NSObject *)arg1;
- (void)beginAddPhotosSession:(id)arg1;
- (void)_updateBannerSelectionButton;
- (void)_updateAddButtonTitleAndAction;
- (void)_updateNavigationBarAnimated:(BOOL)arg1;
- (void)_reclaimImageView:(id)arg1;
- (void)reclaimStackView;
- (BOOL)_canAddToAssets;
- (void)_updateUnreadMarkerAnimated:(BOOL)arg1;
- (BOOL)_dismissPopovers;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_showMMSCompositionForSelectedPhotos:(id)arg1;
- (void)_sendViaMMS:(id)arg1;
- (void)_addSelectionToNewAlbum:(id)arg1;
- (void)deleteSelection:(id)arg1;
- (void)copySelection:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)emailSelection:(id)arg1;
- (void)saveSelection:(id)arg1;
- (id)_editButtons;
- (void)_updateStackView;
- (void)_endSelectionMode:(BOOL)arg1;
- (void)_beginSelectionMode;
- (void)_endEditing:(id)arg1;
- (void)_beginEditing:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_filterWasToggled:(id)arg1;
- (void)showEmptyAlbumView:(BOOL)arg1;
@property(nonatomic) BOOL showPhotosVideosFilter;
- (void)_resizeFilterControlForInterfaceOrientation:(int)arg1;
- (id)_suppresionContexts;
- (BOOL)_appAllowsSupressionOfAlerts;
- (void)interactionCancelledWithView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappearInteractivelyWithView:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidAppearInteractivelyWithView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillAppearInteractivelyWithView:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)_getRotationContentSettings:(CDStruct_af7d35ee *)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)dealloc;
- (id)initWithAlbum:(struct NSObject *)arg1 imageDataProvider:(id)arg2;
- (id)initWithAlbum:(struct NSObject *)arg1 imageDataProvider:(id)arg2 modalDoneButtonItem:(id)arg3;

@end

