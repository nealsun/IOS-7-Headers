/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "PLDataArrayInputStreamProgressDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSData, NSMutableArray, NSString, PLVideoRemaker, UIViewController;

@interface PLPublishingAgent : NSObject <PLDataArrayInputStreamProgressDelegate, UIAlertViewDelegate>
{
    id _userInfo;
    id _delegate;
    NSString *_mediaPath;
    NSData *_mediaData;
    NSString *_mimeType;
    BOOL _deleteAfterPublishing;
    double _changeRate;
    long long _currentValue;
    double _estimatedTimeRemaining;
    long long _maxValue;
    long long _normalizedCurrentValue;
    long long _normalizedMaxValue;
    float _percentComplete;
    float _remakingPercentComplete;
    float _progressMultiplier;
    NSMutableArray *_snapshotTimes;
    NSMutableArray *_snapshotValues;
    UIViewController *_parentNavigationController;
    BOOL _ownerIsCamera;
    BOOL _needsRemaking;
    double _startTime;
    double _endTime;
    long long _approximateHDUploadSize;
    long long _approximateSDUploadSize;
    BOOL _mediaIsHDVideo;
    BOOL _enableHDUpload;
    BOOL _needsTrimming;
    BOOL _allowsHDOver3GUpload;
    int _selectedOption;
    PLVideoRemaker *_remaker;
    int _remakerMode;
    SEL _completionSelector;
    unsigned int _remakingWasCancelled:1;
    unsigned int _remaking:1;
    unsigned int _publishing:1;
    BOOL _shouldCancelPublish;
}

+ (id)publishingAgentForBundleNamed:(id)arg1 toPublishMedia:(id)arg2;
@property(nonatomic) BOOL shouldCancelPublish; // @synthesize shouldCancelPublish=_shouldCancelPublish;
@property(nonatomic) BOOL allowsHDOver3GUpload; // @synthesize allowsHDOver3GUpload=_allowsHDOver3GUpload;
@property(nonatomic) float progressMultiplier; // @synthesize progressMultiplier=_progressMultiplier;
@property(nonatomic) int selectedOption; // @synthesize selectedOption=_selectedOption;
@property(nonatomic) int remakerMode; // @synthesize remakerMode=_remakerMode;
@property(nonatomic) BOOL needsTrimming; // @synthesize needsTrimming=_needsTrimming;
@property(nonatomic) BOOL enableHDUpload; // @synthesize enableHDUpload=_enableHDUpload;
@property(nonatomic) BOOL mediaIsHDVideo; // @synthesize mediaIsHDVideo=_mediaIsHDVideo;
@property(nonatomic) long long approximateSDUploadSize; // @synthesize approximateSDUploadSize=_approximateSDUploadSize;
@property(nonatomic) long long approximateHDUploadSize; // @synthesize approximateHDUploadSize=_approximateHDUploadSize;
@property(nonatomic) BOOL ownerIsCamera; // @synthesize ownerIsCamera=_ownerIsCamera;
@property(nonatomic) id <PLPublishingAgentDelegate> delegate; // @synthesize delegate=_delegate;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)showAlertWithError:(id)arg1;
- (int)_remakerModeForSelectedOption;
- (id)progressViewMessageDuringRemake;
- (void)videoRemaker:(id)arg1 progressDidChange:(float)arg2;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)_remakerDidFinish:(id)arg1;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)_transcodeVideo:(id)arg1;
- (void)_cancelRemaking:(id)arg1;
- (BOOL)isRemaking;
- (void)cancelRemaking;
- (float)remakingPercentComplete;
- (float)percentComplete;
- (double)estimatedTimeRemaining;
- (void)_updateStatisticsFromSnapshots;
- (void)snapshot;
- (void)setTotalBytesWritten:(int)arg1 totalBytes:(int)arg2;
- (void)dataArrayInputStreamBytesWereRead:(id)arg1;
- (double)maximumVideoDuration;
- (BOOL)allowsViewingOnHost;
- (BOOL)allowsTellingFriend;
- (id)tellAFriendBody;
- (id)tellAFriendSubject;
- (id)tellAFriendURL;
- (BOOL)isVideoMedia;
- (id)mediaTitle;
- (id)mediaURL;
- (id)parentNavigationController;
- (void)dismiss;
- (void)presentModalSheetInViewController:(id)arg1;
- (id)serviceName;
- (void)publish;
- (void)_agentIsReadyToPublish:(id)arg1;
- (void)doneButtonClicked;
- (void)cancelButtonClicked;
- (id)navigationController;
- (void)resignPublishingSheetResponders;
- (void)_setApproximateVideoUploadSizes;
- (void)setTrimStartTime:(double)arg1 andEndTime:(double)arg2;
- (void)setPublishing:(BOOL)arg1;
- (BOOL)isPublishing;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (void)setMediaData:(id)arg1;
- (id)mediaData;
- (BOOL)deleteMediaFileAfterPublishing;
- (void)setDeleteMediaFileAfterPublishing:(BOOL)arg1;
- (void)setMediaPath:(id)arg1;
- (id)mediaPath;
- (void)_setUpPublishingParams;
- (void)dealloc;
- (id)initWithMedia:(id)arg1;
- (void)_stopNetworkObservation;
- (void)_startNetworkObservation;
- (void)_networkReachabilityDidChange:(id)arg1;
@property(readonly, nonatomic) BOOL allowsCellularAccessForRequests;

@end

