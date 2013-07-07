/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "IMConnectionMonitorDelegate.h"
#import "IMSystemMonitorListener.h"

@class IMConnectionMonitor, NSArray, NSString;

@interface NetworkChangeNotifier : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate>
{
    BOOL _lastPostedNetworkUp;
    struct __SCDynamicStore *_store;
    NSString *_myIP;
    NSArray *_myIPs;
    IMConnectionMonitor *_connectionMonitor;
}

+ (void)disableNotifications;
+ (BOOL)enableNotifications;
+ (id)sharedInstance;
@property(nonatomic) BOOL lastPostedNetworkUp; // @synthesize lastPostedNetworkUp=_lastPostedNetworkUp;
@property(retain, nonatomic) IMConnectionMonitor *connectionMonitor; // @synthesize connectionMonitor=_connectionMonitor;
@property(retain, nonatomic) NSArray *myIPs; // @synthesize myIPs=_myIPs;
@property(retain, nonatomic) NSString *myIP; // @synthesize myIP=_myIP;
@property(nonatomic) struct __SCDynamicStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) BOOL isNetworkUp;
- (void)connectionMonitorDidUpdate:(id)arg1;
- (unsigned int)linkQualityForInterfaceType:(unsigned int)arg1;
- (int)linkQualityValueForInterface:(id)arg1;
- (int)linkQualityValueForInterfaceType:(unsigned int)arg1;
@property(readonly, nonatomic) struct __SCDynamicStore *getDynamicStore;
@property(readonly, nonatomic) NSString *myIPAddress;
@property(readonly, nonatomic) NSString *myGatewayAddress;
@property(readonly, nonatomic) NSArray *myIPAddresses;
- (void)dealloc;
- (id)init;
- (BOOL)_listenForChanges;
- (void)systemDidWake;
- (void)systemWillSleep;
- (void)_clearIPCache;

@end

