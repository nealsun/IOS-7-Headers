/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "MCProfileConnectionObserver.h"
#import "MPStoreDownloadManagerObserver.h"
#import "SKUIItemOfferButtonDelegate.h"

@class MPMediaDownloadObserver, MPMediaItem, NSString, RadioTrack, SKUIItemOfferButton;

@interface RUTrackDownloadView : UIView <MCProfileConnectionObserver, MPStoreDownloadManagerObserver, SKUIItemOfferButtonDelegate>
{
    MPMediaDownloadObserver *_downloadObserver;
    BOOL _isInAppPurchaseAllowed;
    SKUIItemOfferButton *_itemOfferButton;
    MPMediaItem *_mediaItem;
    BOOL _showingConfirmation;
    int _buyButtonTitleStyle;
    id <RUTrackDownloadViewDelegate> _delegate;
    NSString *_originator;
    RadioTrack *_radioTrack;
    int _state;
}

@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) RadioTrack *radioTrack; // @synthesize radioTrack=_radioTrack;
@property(copy, nonatomic) NSString *originator; // @synthesize originator=_originator;
@property(nonatomic) id <RUTrackDownloadViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int buyButtonTitleStyle; // @synthesize buyButtonTitleStyle=_buyButtonTitleStyle;
- (void).cxx_destruct;
- (void)_updateStateAndInternalViewsIfNeededForDownloads:(id)arg1;
- (void)_updateStateAndInternalViewsAnimated:(BOOL)arg1;
- (void)_updateIsInAppPurchaseAllowedForProfileConnection:(id)arg1;
- (void)_sizeToFitAndNotifyDelegate;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_itemOfferShowConfirmationAction:(id)arg1;
- (void)_itemOfferCancelConfirmationAction:(id)arg1;
- (void)_itemOfferButtonAction:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

