/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "GEOResourceManifestTileGroupObserver.h"

@class NSDictionary, NSString;

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver>
{
    NSString *_countryCode;
    NSDictionary *_oldProvidersInfo;
    NSString *_oldCountryCode;
    BOOL _isObservingReachability;
    BOOL _isUpdating;
    BOOL _currentCountrySupportsTraffic;
    BOOL _currentCountrySupportsDirections;
}

+ (id)sharedConfiguration;
@property(readonly, nonatomic) BOOL currentCountrySupportsTraffic; // @synthesize currentCountrySupportsTraffic=_currentCountrySupportsTraffic;
@property(readonly, nonatomic) BOOL currentCountrySupportsDirections; // @synthesize currentCountrySupportsDirections=_currentCountrySupportsDirections;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)countryDefaultForKey:(id)arg1;
- (id)countryDefaultForKey:(id)arg1 sourcePtr:(int *)arg2;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(int *)arg3;
- (void)_useCountryCodeProvider:(id)arg1;
- (void)_checkCountryProviders;
- (void)_registerNetworkDefaults;
- (void)_checkCountryCode;
- (void)_updatedSupportedFeatures;
- (void)updateProvidersForCurrentCountry;
- (void)_reachabilityChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

