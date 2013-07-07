/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSString;

@interface CLLocationManagerInternal : NSObject
{
    struct __CLClient *fClient;
    id <CLLocationManagerDelegate> fDelegate;
    double fDistanceFilter;
    double fDesiredAccuracy;
    BOOL fUpdatingLocation;
    CDStruct_4185d922 fLocation;
    NSString *fLocationEventType;
    BOOL fCapabilitiesValid;
    struct {
        double bestAccuracy;
    } fCapabilities;
    BOOL fUpdatingHeading;
    double fHeadingFilter;
    int fHeadingOrientation;
    BOOL fPersistentMonitoringEnabled;
    BOOL fAllowsLocationPrompts;
    BOOL fPreviousAuthorizationStatusValid;
    int fPreviousAuthorizationStatus;
    int fActivityType;
    int fPausesLocationUpdatesAutomatically;
    BOOL fPaused;
    BOOL fAllowsMapCorrection;
    BOOL fBatchingLocation;
    NSMutableSet *fRangedRegions;
}

@property(readonly, nonatomic) NSMutableSet *rangedRegions; // @synthesize rangedRegions=fRangedRegions;
- (void)dealloc;
- (void)stopUpdatingLocationAutoPaused;
- (int)PausesLocationUpdatesAutomatically;
- (void)setPausesLocationUpdatesAutomatically:(int)arg1;
- (id)initWithInfo:(id)arg1 bundleIdentifier:(id)arg2 bundle:(id)arg3;

@end

