/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CMAccelerometerData, CMDeviceMotion, CMGyroData, CMMagnetometerData;

@interface CMMotionManager : NSObject
{
    id _internal;
}

+ (void)dummySelector:(id)arg1;
+ (void)setAllowInBackground:(BOOL)arg1;
+ (unsigned int)availableAttitudeReferenceFrames;
+ (void)initialize;
- (void)didBecomeActivePrivate:(id)arg1;
- (void)willResignActivePrivate:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)onGeomagneticModel:(const CDStruct_3e502cbb *)arg1;
- (void)onDeviceMotion:(const struct Sample *)arg1;
- (void)onMagnetometer:(const struct Sample *)arg1;
- (void)onGyro:(const struct Sample *)arg1;
- (void)onAccelerometer:(const struct Sample *)arg1;
- (void)setMaxAccelerationVarianceForStability:(float)arg1;
- (void)setSensorTurnOffTime:(double)arg1;
- (void)setSensorThrottleTime:(double)arg1;
- (void)setWantsPowerConservativeDeviceMotion:(BOOL)arg1;
- (void)setDeviceMotionCallback:(void *)arg1 info:(void *)arg2 interval:(double)arg3 fsync:(BOOL)arg4;
- (void)setGyroDataCallback:(void *)arg1 info:(void *)arg2 interval:(double)arg3;
- (void)setAccelerometerDataCallback:(void *)arg1 info:(void *)arg2 interval:(double)arg3;
- (id)initUsingGyroOnlySensorFusion;
- (id)initUsing6AxisSensorFusion;
- (void)dismissDeviceMovementDisplay;
- (void)showDeviceMovementDisplay;
- (void)setShowsDeviceMovementDisplayPrivate:(BOOL)arg1;
@property(nonatomic) BOOL showsDeviceMovementDisplay;
- (void)stopMagnetometerUpdatesPrivate;
- (void)startMagnetometerUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)setMagnetometerUpdateIntervalPrivate:(double)arg1;
- (void)stopMagnetometerUpdates;
- (void)startMagnetometerUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startMagnetometerUpdates;
@property(readonly) CMMagnetometerData *magnetometerData;
@property(nonatomic) double magnetometerUpdateInterval;
@property(readonly, nonatomic, getter=isMagnetometerActive) BOOL magnetometerActive;
@property(readonly, nonatomic, getter=isMagnetometerAvailable) BOOL magnetometerAvailable;
- (int)gyttNumTemperatures;
- (void)rebuildGytt;
- (void)stopDeviceMotionUpdatesPrivate;
- (void)startDeviceMotionUpdatesPrivateUsingReferenceFrame:(int)arg1 toQueue:(id)arg2 withHandler:(id)arg3;
- (void)setDeviceMotionUpdateIntervalPrivate:(double)arg1;
- (void)stopDeviceMotionUpdates;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(int)arg1 toQueue:(id)arg2 withHandler:(id)arg3;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(int)arg1;
- (void)startDeviceMotionUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startDeviceMotionUpdates;
@property(readonly) CMDeviceMotion *deviceMotion; // @dynamic deviceMotion;
@property(readonly, nonatomic) int attitudeReferenceFrame; // @dynamic attitudeReferenceFrame;
@property(nonatomic) double deviceMotionUpdateInterval; // @dynamic deviceMotionUpdateInterval;
@property(readonly, nonatomic, getter=isDeviceMotionActive) BOOL deviceMotionActive; // @dynamic deviceMotionActive;
@property(readonly, nonatomic, getter=isDeviceMotionAvailable) BOOL deviceMotionAvailable; // @dynamic deviceMotionAvailable;
- (void)stopGyroUpdatesPrivate;
- (void)startGyroUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)setGyroUpdateIntervalPrivate:(double)arg1;
- (void)stopGyroUpdates;
- (void)startGyroUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startGyroUpdates;
@property(readonly) CMGyroData *gyroData; // @dynamic gyroData;
@property(nonatomic) double gyroUpdateInterval; // @dynamic gyroUpdateInterval;
@property(readonly, nonatomic, getter=isGyroActive) BOOL gyroActive; // @dynamic gyroActive;
@property(readonly, nonatomic, getter=isGyroAvailable) BOOL gyroAvailable; // @dynamic gyroAvailable;
- (void)stopAccelerometerUpdatesPrivate;
- (void)startAccelerometerUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)setAccelerometerUpdateIntervalPrivate:(double)arg1;
- (void)stopAccelerometerUpdates;
- (void)startAccelerometerUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startAccelerometerUpdates;
@property(readonly) CMAccelerometerData *accelerometerData; // @dynamic accelerometerData;
@property(nonatomic) double accelerometerUpdateInterval; // @dynamic accelerometerUpdateInterval;
@property(readonly, nonatomic, getter=isAccelerometerActive) BOOL accelerometerActive; // @dynamic accelerometerActive;
@property(readonly, nonatomic, getter=isAccelerometerAvailable) BOOL accelerometerAvailable; // @dynamic accelerometerAvailable;
- (void)deallocPrivate;
- (void)dealloc;
- (id)initPrivate;
- (id)init;
- (BOOL)useAccelerometer;
- (void)setUseAccelerometer:(BOOL)arg1;

@end

