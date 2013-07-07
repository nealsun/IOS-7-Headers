/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSOperationQueue;

@interface CMMotionManagerInternal : NSObject
{
    int fSampleLock;
    struct Dispatcher *fAccelerometerDispatcher;
    double fAccelerometerUpdateInterval;
    id fAccelerometerHandler;
    NSOperationQueue *fAccelerometerQueue;
    double fLastAccelerometerNotificationTimestamp;
    struct Sample {
        double timestamp;
        CDStruct_03942939 acceleration;
    } fLatestAccelerometerSample;
    struct Dispatcher *fGyroDispatcher;
    double fGyroUpdateInterval;
    id fGyroHandler;
    NSOperationQueue *fGyroQueue;
    double fLastGyroNotificationTimestamp;
    struct Sample {
        double timestamp;
        CDStruct_03942939 rotationRate;
        unsigned short sampleNum;
        _Bool fsync;
    } fLatestGyroSample;
    struct Dispatcher *fDeviceMotionDispatcher;
    double fDeviceMotionUpdateInterval;
    id fDeviceMotionHandler;
    NSOperationQueue *fDeviceMotionQueue;
    double fLastDeviceMotionNotificationTimestamp;
    struct Sample {
        double timestamp;
        CDStruct_04e8b4cd deviceMotion;
        _Bool fsync;
    } fLatestDeviceMotionSample;
    int fAttitudeReferenceFrame;
    void *fCompassCalibrationHud;
    _Bool fShowCompassCalibrationHudOnResume;
    _Bool fHaveSentDeviceRequiresMovementError;
    struct shared_ptr<CLGeomagneticModelProvider_Type::Client> fGeomagneticModelProviderClient;
    CDStruct_3e502cbb fGeomagneticModel;
    _Bool fHaveSentTrueNorthUnavailableError;
    double fDeviceMotionStartTimestamp;
    _Bool fPrivateWantsPowerConservativeDeviceMotion;
    struct Dispatcher *fMagnetometerDispatcher;
    double fMagnetometerUpdateInterval;
    id fMagnetometerHandler;
    NSOperationQueue *fMagnetometerQueue;
    double fLastMagnetometerNotificationTimestamp;
    struct Sample {
        double timestamp;
        CDStruct_03942939 magneticField;
    } fLatestMagnetometerSample;
    _Bool fShowsDeviceMovementDisplay;
    struct Dispatcher *fPrivateAccelerometerDataDispatcher;
    void *fPrivateAccelerometerDataCallback;
    void *fPrivateAccelerometerDataCallbackInfo;
    struct Dispatcher *fPrivateGyroDataDispatcher;
    void *fPrivateGyroDataCallback;
    void *fPrivateGyroDataCallbackInfo;
    struct Dispatcher *fPrivateDeviceMotionDispatcher;
    void *fPrivateDeviceMotionCallback;
    void *fPrivateDeviceMotionCallbackInfo;
    _Bool fPrivateDeviceMotionUse9Axis;
    _Bool fPrivateUseAccelerometer;
    _Bool fInactive;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end

