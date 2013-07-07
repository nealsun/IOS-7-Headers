/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, NSTimer, STAnimatableButton, STRunCaloriesLabel, STRunDistanceLabel, STRunPaceLabel, STRunProgressView, STRunTimeLabel, STShadowLabel, SWRunWorkoutProxy, UIButton, UIImageView;

@interface STRunView : UIView
{
    id <STRunViewDelegate> _delegate;
    SWRunWorkoutProxy *_workoutProxy;
    NSTimer *_subsecondTimer;
    NSTimer *_workoutInfoTimer;
    double _elapsedWorkoutTime;
    double _estimatedElapsedWorkoutTime;
    double _lastWorkoutNotificationTime;
    UIView *_rotationContainer;
    int _orientation;
    int _interface;
    UIButton *_leftButton;
    UIButton *_rightButton;
    STAnimatableButton *_endWorkoutButton;
    UIButton *_previousTrackButton;
    UIButton *_nextTrackButton;
    UIImageView *_transportControlsDivider;
    STRunTimeLabel *_runTimeLabel;
    STRunDistanceLabel *_runDistanceLabel;
    STRunPaceLabel *_runPaceLabel;
    STRunCaloriesLabel *_runCaloriesLabel;
    STShadowLabel *_nowPlayingSongLabel;
    STRunProgressView *_runProgressView;
    float _progressToGoal;
    UIImageView *_powerSongGlowView;
    NSTimer *_considerSeekTimer;
    int _currentSeekDirection;
    NSString *_throttledWorkoutState;
    struct {
        unsigned int timerPaused:1;
        unsigned int shouldStartTimer:1;
        unsigned int isLockScreen:1;
        unsigned int animateForResumeEventsOnly:1;
        unsigned int canHighlightPowerSong:1;
        unsigned int validPaceReceived:1;
        unsigned int noMusic:1;
        unsigned int seekHandled:1;
        unsigned int seekAllowed:1;
        unsigned int needsNowPlayingLayout:1;
        unsigned int forceTimeExtrapolation:1;
        unsigned int goalCompleted:1;
        unsigned int useMetricDistance:1;
        unsigned int forceMetricForDistanceOnly:1;
        unsigned int throttleNextPauseResume:1;
        unsigned int shouldControlMusic:1;
        unsigned int unused:16;
    } _runFlagsBitfield;
}

@property(readonly, nonatomic) SWRunWorkoutProxy *workoutProxy; // @synthesize workoutProxy=_workoutProxy;
@property(nonatomic) id <STRunViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) int interface; // @synthesize interface=_interface;
- (void)_nowPlayingChanged:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationResumed:(id)arg1;
- (void)_applicationWillSuspend:(id)arg1;
- (void)_playPowerSongEventFromRemote:(id)arg1;
- (void)_startWorkoutEventFromRemote:(id)arg1;
- (void)_workoutStateDidChange:(id)arg1;
- (void)_empedSearchStateChanged:(id)arg1;
- (id)_powersongLandscapeButtonDownImage;
- (id)_powersongLandscapeButtonImage;
- (id)_powersongButtonDownImage;
- (id)_powersongButtonImage;
- (id)_endWorkoutLandscapeButtonDownImage;
- (id)_endWorkoutLandscapeButtonImage;
- (id)_endWorkoutButtonDownImage;
- (id)_endWorkoutButtonImage;
- (id)_startWorkoutLandscapeButtonDownImage;
- (id)_startWorkoutLandscapeButtonImage;
- (id)_startWorkoutButtonDownImage;
- (id)_startWorkoutButtonImage;
- (id)_redButtonDownImage;
- (id)_redButtonImage;
- (id)_orangeButtonDownImage;
- (id)_orangeButtonImage;
- (id)_greenButtonDownImage;
- (id)_greenButtonImage;
- (void)_stopUpdateTimers;
- (void)_startUpdateTimers;
- (id)_mainButtonStringForGoalType:(id)arg1;
- (void)_configureButtonsForWorkout;
- (void)_updateSubviewsForWorkoutData:(id)arg1;
- (void)_workoutInfoTimerTick:(id)arg1;
- (void)_subsecondTimerTick:(id)arg1;
- (BOOL)_endSeekInDirection:(int)arg1;
- (BOOL)_beginSeekInDirection:(int)arg1;
- (void)_considerSeekTimerFired:(id)arg1;
- (void)_endSeeking:(id)arg1;
- (void)_beginConsiderSeeking:(id)arg1;
- (void)_cancelConsiderSeeking:(id)arg1;
- (void)_nextTrack;
- (void)_previousTrack;
- (void)_stop;
- (void)_unthrottlePauseResume;
- (void)_resumeWorkoutForResume:(BOOL)arg1;
- (void)_resume;
- (void)_pauseWorkoutForResume:(BOOL)arg1;
- (void)_pause;
- (void)_cancel;
- (void)_start;
- (void)_changeMusic;
- (void)_updateProgressViewWithDictionary:(id)arg1;
- (void)selectPowerSong;
- (void)resumeWorkout;
- (void)_finishResumeEventsOnly;
- (void)resumeEventsOnly;
- (void)resume;
- (void)suspend;
@property(nonatomic) BOOL animateForResumeEventsOnly;
@property(nonatomic) BOOL isLockScreen;
- (void)updateOrientation;
- (void)_layoutLabel:(id)arg1 inPosition:(int)arg2 isLandscape:(BOOL)arg3 isLockedMusicInterface:(BOOL)arg4 hasProgressView:(BOOL)arg5;
- (void)_layoutCaloriesInPosition:(int)arg1 isLandscape:(BOOL)arg2 isLockedMusicInterface:(BOOL)arg3 hasProgressView:(BOOL)arg4;
- (void)_layoutPaceInPosition:(int)arg1 isLandscape:(BOOL)arg2 isLockedMusicInterface:(BOOL)arg3 hasProgressView:(BOOL)arg4;
- (void)_layoutRunDistanceInPosition:(int)arg1 isLandscape:(BOOL)arg2 isLockedMusicInterface:(BOOL)arg3 hasProgressView:(BOOL)arg4;
- (void)_layoutRunTimeInPosition:(int)arg1 isLandscape:(BOOL)arg2 isLockedMusicInterface:(BOOL)arg3 hasProgressView:(BOOL)arg4;
- (void)_layoutNowPlayingLabelForWorkoutType:(int)arg1;
- (void)_layoutTransportControlsDivider;
- (void)_layoutSecondaryLabelsForWorkoutType:(int)arg1;
- (void)_layoutPrimaryLabelForWorkoutType:(int)arg1;
- (void)_layoutLabelsForWorkoutType:(int)arg1 presetGoal:(id)arg2;
- (void)_layoutMainButtonsForGoalType:(id)arg1;
- (void)_layoutBottomButtons;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 workoutProxy:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (int)_workoutTypeForGoalType:(id)arg1;

@end

