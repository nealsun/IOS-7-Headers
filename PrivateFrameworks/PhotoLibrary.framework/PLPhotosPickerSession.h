/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSObject<PLAlbumProtocol>, NSSet, NSString, UIViewController;

@interface PLPhotosPickerSession : NSObject
{
    struct NSObject *_destinationAlbum;
    UIViewController *_rootViewController;
    NSString *_currentPrompt;
    id <PLPhotosPickerSessionDelegate> _delegate;
    NSMutableDictionary *_selectedAssetsByAlbumID;
    NSMutableSet *_allSelectedAssets;
    int _albumFilter;
    int _bannerButtonType;
    id _bannerButtonAction;
    id _sessionDidEndHandler;
}

@property(nonatomic) id <PLPhotosPickerSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int albumFilter; // @synthesize albumFilter=_albumFilter;
@property(copy, nonatomic) id bannerButtonAction; // @synthesize bannerButtonAction=_bannerButtonAction;
@property(nonatomic) int bannerButtonType; // @synthesize bannerButtonType=_bannerButtonType;
@property(readonly, nonatomic) NSSet *allSelectedAssets; // @synthesize allSelectedAssets=_allSelectedAssets;
@property(retain, nonatomic) NSMutableDictionary *selectedAssetsByAlbumID; // @synthesize selectedAssetsByAlbumID=_selectedAssetsByAlbumID;
@property(retain, nonatomic) NSObject<PLAlbumProtocol> *destinationAlbum; // @synthesize destinationAlbum=_destinationAlbum;
@property(copy, nonatomic) NSString *currentPrompt; // @synthesize currentPrompt=_currentPrompt;
- (void)_updatePromptText;
- (void)_dismissSessionSuccessfully:(BOOL)arg1 animated:(BOOL)arg2;
- (void)handleDoneButton:(id)arg1;
- (void)cancelSessionAnimated:(BOOL)arg1;
- (void)beginSessionWithModalViewController:(id)arg1 overViewController:(id)arg2 didShowHandler:(id)arg3 completionHandler:(void)arg4;
- (void)setSelectedAssets:(id)arg1 forAlbumWithID:(id)arg2 added:(id)arg3 removed:(id)arg4;
@property(readonly, nonatomic) BOOL hasAlbumFilter;
- (void)dealloc;
- (id)init;

@end

