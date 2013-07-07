/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DuetLoggerProtocol.h"

@class NSBundle, NSMutableArray, NSMutableDictionary;

@interface DuetConfigurator : NSObject <DuetLoggerProtocol>
{
    NSBundle *bundle;
    NSMutableDictionary *dictOfConfigurations;
    NSMutableDictionary *appBlackMap;
    NSMutableArray *appWhiteListArray;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableArray *appWhiteListArray; // @synthesize appWhiteListArray;
@property(readonly, nonatomic) NSMutableDictionary *appBlackMap; // @synthesize appBlackMap;
- (void).cxx_destruct;
- (void)logLight:(struct __aslclient *)arg1 withMsg:(struct __aslmsg *)arg2 withLevel:(int)arg3;
- (void)logAll:(struct __aslclient *)arg1 withMsg:(struct __aslmsg *)arg2 withLevel:(int)arg3;
- (void)loadConfigurations:(id)arg1;
- (void)loadBundleConfigurations;
- (long long)getStateFor:(id)arg1;
- (void)reloadBundleFromDisk;
- (id)init;

@end

