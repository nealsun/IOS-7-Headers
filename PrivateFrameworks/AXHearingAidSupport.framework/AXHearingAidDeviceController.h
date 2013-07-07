/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "CBCentralManagerDelegate.h"

@class AXTimer, CBCentralManager, NSLock, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface AXHearingAidDeviceController : NSObject <CBCentralManagerDelegate>
{
    CBCentralManager *_bluetoothManager;
    NSLock *_centralRequestsLock;
    BOOL _isScanning;
    NSObject<OS_dispatch_queue> *_bluetoothCentralQueue;
    NSMutableArray *_availableSearchBlocks;
    NSMutableArray *_connectedSearchBlocks;
    NSMutableArray *_updateDeviceBlocks;
    AXTimer *_deviceUpdatesTimer;
    NSMutableDictionary *_deviceUpdatesDescription;
    AXTimer *_advertisingTimeoutTimer;
    NSMutableDictionary *_advertisingTimestamps;
    NSMutableArray *_availablePeripherals;
    NSMutableArray *_loadedDevices;
    NSMutableArray *_connectedDevices;
    NSMutableArray *centralRequestBlocks;
    NSMutableArray *_persistentDevices;
}

+ (id)sharedController;
@property(retain, nonatomic) NSMutableArray *persistentDevices; // @synthesize persistentDevices=_persistentDevices;
@property(retain, nonatomic) NSMutableArray *updateDeviceBlocks; // @synthesize updateDeviceBlocks=_updateDeviceBlocks;
@property(retain, nonatomic) NSMutableArray *connectedSearchBlocks; // @synthesize connectedSearchBlocks=_connectedSearchBlocks;
@property(retain, nonatomic) NSMutableArray *availableSearchBlocks; // @synthesize availableSearchBlocks=_availableSearchBlocks;
@property(retain, nonatomic) NSMutableArray *centralRequestBlocks; // @synthesize centralRequestBlocks;
@property(retain, nonatomic) NSMutableArray *connectedDevices; // @synthesize connectedDevices=_connectedDevices;
@property(retain) NSMutableArray *loadedDevices; // @synthesize loadedDevices=_loadedDevices;
@property(retain, nonatomic) NSMutableArray *availablePeripherals; // @synthesize availablePeripherals=_availablePeripherals;
- (void)pairedHearingAidsDidChange;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didRetrieveConnectedPeripherals:(id)arg2;
- (void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)sendRequestToCentralManager:(id)arg1;
- (id)modelNumberUUID;
- (id)firmwareVersionUUID;
- (id)hardwareVersionUUID;
- (id)manufacturerUUID;
- (id)disUUID;
- (id)leaHearingAidUUID;
- (void)deviceDidFinishLoading:(id)arg1;
- (void)device:(id)arg1 didSubsumeSlave:(id)arg2;
- (void)device:(id)arg1 didUpdateProperty:(int)arg2;
- (void)clearConnectedDevices;
- (void)removeConnectedDevice:(id)arg1;
- (void)addConnectedDevice:(id)arg1;
- (void)clearAvailableDevices;
- (void)removeAvailableDevice:(id)arg1;
- (void)addAvailableDevice:(id)arg1;
- (void)clearLoadedDevices;
- (void)removeLoadedDevice:(id)arg1;
- (void)addLoadedDevice:(id)arg1;
- (void)loadedDevicesDidChange;
- (id)hearingAidForPeripheral:(id)arg1;
- (id)hearingAidsForUUID:(id)arg1;
- (BOOL)isScanning;
- (void)stopPropertyUpdates;
- (void)stopSearching;
- (BOOL)isBluetoothAvailable;
- (void)disconnectFromPeripheral:(id)arg1;
- (void)connectToPeripheral:(id)arg1;
- (void)searchForConnectedDevices;
- (void)searchForAvailableDevices;
- (void)clearMissingHearingAids;
- (void)dealloc;
- (id)init;
- (void)registerForPropertyUpdates:(id)arg1;
- (void)searchForAvailableDevicesWithCompletion:(id)arg1;

@end

