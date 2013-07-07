/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AVFoundation/AVCaptureDevice.h>

@class NSDictionary, NSString;

@interface AVCaptureFigAudioDevice : AVCaptureDevice
{
    NSDictionary *_deviceProperties;
    BOOL _levelMeteringEnabled;
    BOOL _isConnected;
    NSString *_localizedName;
    struct OpaqueCMClock *_deviceClock;
}

+ (id)_devices;
- (struct OpaqueCMClock *)deviceClock;
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)arg1;
- (void)audioInputDevicesDidChangeHandler:(id)arg1;
- (BOOL)supportsAVCaptureSessionPreset:(id)arg1;
- (id)devicePropertiesDictionary;
- (void)stopUsingDevice;
- (BOOL)startUsingDevice:(id *)arg1;
- (BOOL)isConnected;
- (BOOL)isInUseByAnotherApplication;
- (BOOL)hasMediaType:(id)arg1;
- (id)localizedName;
- (id)modelID;
- (id)uniqueID;
- (void)dealloc;
- (id)initWithProperties:(id)arg1;
- (id)init;

@end

