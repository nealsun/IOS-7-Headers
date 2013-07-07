/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MKLocationProviderDelegate.h"
#import "_MKWiFiObserverDelegate.h"

@class CLHeading, CLLocation, GEOLocation, GEOLocationShifter, NSBundle, NSHashTable, NSString, NSTimer, _MKWiFiObserver;

@interface MKLocationManager : NSObject <_MKWiFiObserverDelegate, MKLocationProviderDelegate>
{
    id <MKLocationProvider> _locationProvider;
    NSHashTable *_locationObservers;
    NSHashTable *_locationListeners;
    NSHashTable *_regionMonitors;
    NSHashTable *_headingObservers;
    CLLocation *_lastLocation;
    double _lastLocationUpdateTime;
    BOOL _isLastLocationStale;
    BOOL _lastLocationPushed;
    BOOL _trackingLocation;
    BOOL _trackingHeading;
    id <MKLocationRecorder> _locationRecorder;
    double _applicationResumeTime;
    double _applicationSuspendTime;
    double _headingUpdateTime;
    double _locationAccuracyUpdateTime;
    BOOL _allowUpdateCoalescing;
    NSTimer *_coalesceTimer;
    double _lastLocationReportTime;
    GEOLocationShifter *_locationShifter;
    CLHeading *_throttledHeading;
    CLHeading *_heading;
    id _networkActivity;
    BOOL _enabled;
    BOOL _useCourseForHeading;
    BOOL _logStartStopLocationUpdates;
    int _consecutiveOutOfCourseCount;
    double _navCourse;
    id _locationCorrector;
    struct __SCPreferences *_airplaneModePrefs;
    BOOL _airplaneModeEnabledIsValid;
    BOOL _airplaneModeEnabled;
    BOOL _continuedAfterBecomingInactive;
    BOOL _suspended;
    _MKWiFiObserver *_wifiObserver;
    BOOL _continuesWhileInactive;
}

+ (id)sharedLocationManager;
+ (void)setConsidersWiFiInAirplaneMode:(BOOL)arg1;
@property(nonatomic) BOOL logStartStopLocationUpdates; // @synthesize logStartStopLocationUpdates=_logStartStopLocationUpdates;
@property(nonatomic) BOOL allowUpdateCoalescing; // @synthesize allowUpdateCoalescing=_allowUpdateCoalescing;
@property(readonly, nonatomic, getter=wasLastLocationPushed) BOOL lastLocationPushed; // @synthesize lastLocationPushed=_lastLocationPushed;
@property(copy, nonatomic) id locationCorrector; // @synthesize locationCorrector=_locationCorrector;
@property(readonly, nonatomic) double navigationCourse; // @synthesize navigationCourse=_navCourse;
@property(nonatomic) BOOL continuesWhileInactive; // @synthesize continuesWhileInactive=_continuesWhileInactive;
@property(nonatomic) BOOL useCourseForHeading; // @synthesize useCourseForHeading=_useCourseForHeading;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) id <MKLocationRecorder> locationRecorder; // @synthesize locationRecorder=_locationRecorder;
@property(retain, nonatomic) CLHeading *throttledHeading; // @synthesize throttledHeading=_throttledHeading;
@property(readonly, nonatomic) CLHeading *heading; // @synthesize heading=_heading;
@property(copy, nonatomic) id networkActivity; // @synthesize networkActivity=_networkActivity;
@property(readonly, nonatomic) BOOL isLastLocationStale; // @synthesize isLastLocationStale=_isLastLocationStale;
- (void)stopHeadingUpdateWithObserver:(id)arg1;
- (void)startHeadingUpdateWithObserver:(id)arg1;
- (void)_setTrackingHeading:(BOOL)arg1;
- (id)singleLocationUpdateWithHandler:(id)arg1;
- (void)stopLocationUpdateWithObserver:(id)arg1;
- (void)startLocationUpdateWithObserver:(id)arg1;
- (void)stopMonitoringRegion:(id)arg1 observer:(id)arg2;
- (void)startMonitoringRegion:(id)arg1 observer:(id)arg2;
- (BOOL)isMonitoringRegionsAvailable;
- (void)listenForLocationUpdates:(id)arg1;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2 monitoringRegion:(id)arg3;
- (void)locationProvider:(id)arg1 didExitRegion:(id)arg2;
- (void)locationProvider:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationProviderDidResumeLocationUpdates:(id)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id)arg1;
- (BOOL)locationProviderShouldPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
- (void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
- (void)_locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)pushLocation:(id)arg1;
- (void)dismissHeadingCalibrationDisplay;
- (void)dampenGPSLocationAccuracy:(id *)arg1 oldLocationSource:(int)arg2;
- (void)reportCoalescedUpdated;
- (void)_stopCoalescingUpdates;
- (void)_startCoalescingUpdates:(int)arg1;
- (BOOL)shouldStopCoalescingLocation:(id)arg1;
- (BOOL)shouldStartCoalescingLocation:(id)arg1;
- (BOOL)shouldCoalesceUpdates;
- (void)setCoalesceTimer:(id)arg1;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
@property(nonatomic) int activityType;
@property(nonatomic) double distanceFilter;
@property(nonatomic) double desiredAccuracy;
- (BOOL)isLocationServicesPossiblyAvailable:(id *)arg1;
- (void)_setTrackingLocation:(BOOL)arg1;
- (void)_syncLocationProviderWithTracking;
- (void)reset;
- (void)_reportHeadingFailureWithError:(id)arg1;
- (void)_reportHeadingSuccess;
- (void)_reportLocationReset;
- (void)_reportLocationSuccess;
- (void)_reportLocationFailureWithError:(id)arg1;
- (void)_reportLocationStatus:(SEL)arg1;
- (void)_suspend;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)resetAfterResumeIfNecessary;
- (BOOL)_isTimeToResetOnResume;
@property(readonly, nonatomic) BOOL locationShiftEnabled;
@property(readonly, nonatomic) BOOL hasLocation;
- (void)setHeading:(id)arg1;
@property(nonatomic) int headingOrientation;
@property(readonly, nonatomic) GEOLocation *courseCorrectedLocation;
@property(readonly, nonatomic) GEOLocation *gridSnappedCurrentLocation;
@property(readonly, nonatomic) GEOLocation *currentLocation;
@property(readonly, nonatomic) double headingUpdateTimeInterval;
- (void)setLastLocation:(id)arg1;
@property(readonly, nonatomic) CLLocation *lastLocation;
@property(readonly, nonatomic) int lastLocationSource;
@property(retain, nonatomic) id <MKLocationProvider> locationProvider;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
@property(nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
- (void)wiFiObserverDidChangeEnabled:(id)arg1;
- (void)_airplaneModeChanged;
- (void)_refreshAirplaneMode;
@property(readonly, nonatomic) BOOL isAirplaneModeBlockingLocation;
@property(readonly, nonatomic) BOOL isHeadingServicesAvailable;
@property(readonly, nonatomic) BOOL isLocationServicesPossiblyAvailable;
@property(readonly, nonatomic) BOOL isLocationServicesAvailable;
@property(readonly, nonatomic) BOOL isLocationServicesRestricted;
@property(readonly, nonatomic) BOOL isLocationServicesDenied;
@property(readonly, nonatomic) BOOL isLocationServicesApproved;
@property(readonly, nonatomic) BOOL isWiFiEnabled;
@property(readonly, nonatomic) BOOL isLocationServicesEnabled;
- (void)dealloc;
- (id)init;
- (void)_useCoreLocationProvider;

@end

