/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MPAVRoute : NSObject
{
    BOOL _displayIsPicked;
    int _displayRouteType;
    BOOL _isPicked;
    BOOL _requiresPassword;
    unsigned int _routeIndex;
    NSString *_routeName;
    int _routeType;
    NSString *_routeUID;
}

+ (id)_availableRoutesFromAudioDeviceController:(id)arg1 forType:(unsigned int)arg2;
+ (id)_audioDeviceController;
+ (id)wirelessDisplayRouteForRoute:(id)arg1;
+ (id)videoRouteForRoute:(id)arg1;
+ (id)availableRoutesForType:(unsigned int)arg1;
+ (BOOL)availableRoutesExistForType:(unsigned int)arg1;
@property(readonly, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
@property(readonly, nonatomic) int routeType; // @synthesize routeType=_routeType;
@property(readonly, nonatomic) unsigned int routeIndex; // @synthesize routeIndex=_routeIndex;
@property(readonly, nonatomic) BOOL requiresPassword; // @synthesize requiresPassword=_requiresPassword;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_routeName;
@property(nonatomic) BOOL isPicked; // @synthesize isPicked=_isPicked;
@property(nonatomic) int displayRouteType; // @synthesize displayRouteType=_displayRouteType;
@property(nonatomic) BOOL displayIsPicked; // @synthesize displayIsPicked=_displayIsPicked;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)_initWithName:(id)arg1 routeType:(int)arg2 routeUID:(id)arg3 routeIndex:(unsigned int)arg4 requiresPassword:(BOOL)arg5;

@end

