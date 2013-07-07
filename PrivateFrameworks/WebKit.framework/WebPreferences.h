/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"

@interface WebPreferences : NSObject <NSCoding>
{
    struct WebPreferencesPrivate *_private;
}

+ (void)initialize;
+ (id)standardPreferences;
+ (void)setWebKitLinkTimeVersion:(int)arg1;
+ (void)_setCurrentNetworkLoaderSessionCookieAcceptPolicy:(unsigned int)arg1;
+ (void)_switchNetworkLoaderToNewTestingSession;
+ (void)_setIBCreatorID:(id)arg1;
+ (void)_setInitialDefaultTextEncodingToSystemEncoding;
+ (unsigned long)_systemCFStringEncoding;
+ (void)_removeReferenceForIdentifier:(id)arg1;
+ (void)_checkLastReferenceForIdentifier:(id)arg1;
+ (void)_setInstance:(id)arg1 forIdentifier:(id)arg2;
+ (id)_getInstanceForIdentifier:(id)arg1;
+ (id)_concatenateKeyWithIBCreatorID:(id)arg1;
+ (id)_IBCreatorID;
- (BOOL)suppressesIncrementalRendering;
- (void)setSuppressesIncrementalRendering:(BOOL)arg1;
- (unsigned int)cacheModel;
- (void)setCacheModel:(unsigned int)arg1;
- (void)_postCacheModelChangedNotification;
- (BOOL)usesPageCache;
- (void)setUsesPageCache:(BOOL)arg1;
- (BOOL)privateBrowsingEnabled;
- (void)setPrivateBrowsingEnabled:(BOOL)arg1;
- (BOOL)autosaves;
- (void)setAutosaves:(BOOL)arg1;
- (BOOL)loadsImagesAutomatically;
- (void)setLoadsImagesAutomatically:(BOOL)arg1;
- (void)setAllowsAnimatedImageLooping:(BOOL)arg1;
- (BOOL)allowsAnimatedImageLooping;
- (void)setAllowsAnimatedImages:(BOOL)arg1;
- (BOOL)allowsAnimatedImages;
- (void)setPlugInsEnabled:(BOOL)arg1;
- (BOOL)arePlugInsEnabled;
- (void)setJavaScriptCanOpenWindowsAutomatically:(BOOL)arg1;
- (BOOL)javaScriptCanOpenWindowsAutomatically;
- (void)setJavaScriptEnabled:(BOOL)arg1;
- (BOOL)isJavaScriptEnabled;
- (void)setJavaEnabled:(BOOL)arg1;
- (BOOL)isJavaEnabled;
- (void)setUserStyleSheetLocation:(id)arg1;
- (id)userStyleSheetLocation;
- (void)setUserStyleSheetEnabled:(BOOL)arg1;
- (BOOL)userStyleSheetEnabled;
- (void)setDefaultTextEncodingName:(id)arg1;
- (id)defaultTextEncodingName;
- (void)setMinimumLogicalFontSize:(int)arg1;
- (int)minimumLogicalFontSize;
- (void)setMinimumFontSize:(int)arg1;
- (int)minimumFontSize;
- (void)setDefaultFixedFontSize:(int)arg1;
- (int)defaultFixedFontSize;
- (void)setDefaultFontSize:(int)arg1;
- (int)defaultFontSize;
- (void)setFantasyFontFamily:(id)arg1;
- (id)fantasyFontFamily;
- (void)setCursiveFontFamily:(id)arg1;
- (id)cursiveFontFamily;
- (void)setSansSerifFontFamily:(id)arg1;
- (id)sansSerifFontFamily;
- (void)setSerifFontFamily:(id)arg1;
- (id)serifFontFamily;
- (void)setFixedFontFamily:(id)arg1;
- (id)fixedFontFamily;
- (void)setStandardFontFamily:(id)arg1;
- (id)standardFontFamily;
- (void)_setUnsignedLongLongValue:(unsigned long long)arg1 forKey:(id)arg2;
- (unsigned long long)_unsignedLongLongValueForKey:(id)arg1;
- (void)_setLongLongValue:(long long)arg1 forKey:(id)arg2;
- (long long)_longLongValueForKey:(id)arg1;
- (void)_setBoolValue:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)_boolValueForKey:(id)arg1;
- (void)_setFloatValue:(float)arg1 forKey:(id)arg2;
- (float)_floatValueForKey:(id)arg1;
- (void)_setUnsignedIntValue:(unsigned int)arg1 forKey:(id)arg2;
- (unsigned int)_unsignedIntValueForKey:(id)arg1;
- (void)_setIntegerValue:(int)arg1 forKey:(id)arg2;
- (int)_integerValueForKey:(id)arg1;
- (void)_setStringValue:(id)arg1 forKey:(id)arg2;
- (id)_stringValueForKey:(id)arg1;
- (id)_valueForKey:(id)arg1;
- (id)identifier;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sendChangeNotification:(BOOL)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)init;
- (void)setHiddenPageCSSAnimationSuspensionEnabled:(BOOL)arg1;
- (BOOL)hiddenPageCSSAnimationSuspensionEnabled;
- (void)setHiddenPageDOMTimerThrottlingEnabled:(BOOL)arg1;
- (BOOL)hiddenPageDOMTimerThrottlingEnabled;
- (void)setPlugInSnapshottingEnabled:(BOOL)arg1;
- (BOOL)plugInSnapshottingEnabled;
- (int)storageBlockingPolicy;
- (void)setStorageBlockingPolicy:(int)arg1;
- (void)setScreenFontSubstitutionEnabled:(BOOL)arg1;
- (BOOL)screenFontSubstitutionEnabled;
- (void)setDiagnosticLoggingEnabled:(BOOL)arg1;
- (BOOL)diagnosticLoggingEnabled;
- (double)incrementalRenderingSuppressionTimeoutInSeconds;
- (void)setIncrementalRenderingSuppressionTimeoutInSeconds:(double)arg1;
- (void)setRequestAnimationFrameEnabled:(BOOL)arg1;
- (BOOL)requestAnimationFrameEnabled;
- (BOOL)shouldRespectImageOrientation;
- (void)setShouldRespectImageOrientation:(BOOL)arg1;
- (BOOL)regionBasedColumnsEnabled;
- (void)setRegionBasedColumnsEnabled:(BOOL)arg1;
- (BOOL)notificationsEnabled;
- (void)setNotificationsEnabled:(BOOL)arg1;
- (BOOL)shouldDisplayTextDescriptions;
- (void)setShouldDisplayTextDescriptions:(BOOL)arg1;
- (BOOL)shouldDisplayCaptions;
- (void)setShouldDisplayCaptions:(BOOL)arg1;
- (BOOL)shouldDisplaySubtitles;
- (void)setShouldDisplaySubtitles:(BOOL)arg1;
- (BOOL)wantsBalancedSetDefersLoadingBehavior;
- (void)setWantsBalancedSetDefersLoadingBehavior:(BOOL)arg1;
- (BOOL)backspaceKeyNavigationEnabled;
- (void)setBackspaceKeyNavigationEnabled:(BOOL)arg1;
- (void)_invalidateCachedPreferences;
- (void)setPageCacheSupportsPlugins:(BOOL)arg1;
- (BOOL)pageCacheSupportsPlugins;
- (void)setPictographFontFamily:(id)arg1;
- (id)pictographFontFamily;
- (void)setSeamlessIFramesEnabled:(BOOL)arg1;
- (BOOL)seamlessIFramesEnabled;
- (void)setMockScrollbarsEnabled:(BOOL)arg1;
- (BOOL)mockScrollbarsEnabled;
- (void)setMediaPlaybackAllowsInline:(BOOL)arg1;
- (BOOL)mediaPlaybackAllowsInline;
- (void)setMediaPlaybackRequiresUserGesture:(BOOL)arg1;
- (BOOL)mediaPlaybackRequiresUserGesture;
- (void)setNetworkDataUsageTrackingEnabled:(_Bool)arg1;
- (BOOL)networkDataUsageTrackingEnabled;
- (void)setAudioSessionCategoryOverride:(unsigned int)arg1;
- (unsigned int)audioSessionCategoryOverride;
- (void)setMediaPlaybackAllowsAirPlay:(BOOL)arg1;
- (BOOL)mediaPlaybackAllowsAirPlay;
- (BOOL)isHixie76WebSocketProtocolEnabled;
- (void)setHixie76WebSocketProtocolEnabled:(BOOL)arg1;
- (BOOL)isQTKitEnabled;
- (void)setQTKitEnabled:(BOOL)arg1;
- (BOOL)isAVFoundationEnabled;
- (void)setAVFoundationEnabled:(BOOL)arg1;
- (BOOL)loadsSiteIconsIgnoringImageLoadingPreference;
- (void)setLoadsSiteIconsIgnoringImageLoadingPreference:(BOOL)arg1;
- (BOOL)asynchronousSpellCheckingEnabled;
- (void)setAsynchronousSpellCheckingEnabled:(BOOL)arg1;
- (BOOL)fullScreenEnabled;
- (void)setFullScreenEnabled:(BOOL)arg1;
- (void)_setPreferenceForTestWithValue:(id)arg1 forKey:(id)arg2;
- (void)willAddToWebView;
- (void)didRemoveFromWebView;
- (void)setUsePreHTML5ParserQuirks:(BOOL)arg1;
- (BOOL)usePreHTML5ParserQuirks;
- (void)setHyperlinkAuditingEnabled:(BOOL)arg1;
- (BOOL)hyperlinkAuditingEnabled;
- (void)setMemoryInfoEnabled:(BOOL)arg1;
- (BOOL)memoryInfoEnabled;
- (void)setPaginateDuringLayoutEnabled:(BOOL)arg1;
- (BOOL)paginateDuringLayoutEnabled;
- (void)setSpatialNavigationEnabled:(BOOL)arg1;
- (BOOL)isSpatialNavigationEnabled;
- (void)setFrameFlatteningEnabled:(BOOL)arg1;
- (BOOL)isFrameFlatteningEnabled;
- (void)_setDiskImageCacheSavedCacheDirectory:(id)arg1;
- (id)_diskImageCacheSavedCacheDirectory;
- (void)setDiskImageCacheMaximumCacheSize:(unsigned int)arg1;
- (unsigned int)diskImageCacheMaximumCacheSize;
- (void)setDiskImageCacheMinimumImageSize:(unsigned int)arg1;
- (unsigned int)diskImageCacheMinimumImageSize;
- (void)setDiskImageCacheEnabled:(BOOL)arg1;
- (BOOL)diskImageCacheEnabled;
- (void)setAccelerated2dCanvasEnabled:(BOOL)arg1;
- (BOOL)accelerated2dCanvasEnabled;
- (void)setWebGLEnabled:(BOOL)arg1;
- (BOOL)webGLEnabled;
- (void)setWebAudioEnabled:(BOOL)arg1;
- (BOOL)webAudioEnabled;
- (void)setShowRepaintCounter:(BOOL)arg1;
- (BOOL)showRepaintCounter;
- (void)setShowDebugBorders:(BOOL)arg1;
- (BOOL)showDebugBorders;
- (void)setCSSGridLayoutEnabled:(BOOL)arg1;
- (BOOL)cssGridLayoutEnabled;
- (void)setCSSCompositingEnabled:(BOOL)arg1;
- (BOOL)cssCompositingEnabled;
- (void)setCSSRegionsEnabled:(BOOL)arg1;
- (BOOL)cssRegionsEnabled;
- (void)setCSSCustomFilterEnabled:(BOOL)arg1;
- (BOOL)cssCustomFilterEnabled;
- (void)setAcceleratedCompositingEnabled:(BOOL)arg1;
- (BOOL)acceleratedCompositingEnabled;
- (void)setCanvasUsesAcceleratedDrawing:(BOOL)arg1;
- (BOOL)canvasUsesAcceleratedDrawing;
- (void)setAcceleratedDrawingEnabled:(BOOL)arg1;
- (BOOL)acceleratedDrawingEnabled;
- (void)_setForceFTPDirectoryListings:(BOOL)arg1;
- (BOOL)_forceFTPDirectoryListings;
- (void)_setFTPDirectoryTemplatePath:(id)arg1;
- (id)_ftpDirectoryTemplatePath;
- (void)_setLocalStorageDatabasePath:(id)arg1;
- (id)_localStorageDatabasePath;
- (void)setDOMPasteAllowed:(BOOL)arg1;
- (BOOL)isDOMPasteAllowed;
- (void)_postPreferencesChangedAPINotification;
- (void)_postPreferencesChangedNotification;
- (void)setExperimentalNotificationsEnabled:(BOOL)arg1;
- (BOOL)experimentalNotificationsEnabled;
- (void)setLocalStorageEnabled:(BOOL)arg1;
- (BOOL)localStorageEnabled;
- (void)setStorageTrackerEnabled:(BOOL)arg1;
- (BOOL)storageTrackerEnabled;
- (void)setDatabasesEnabled:(BOOL)arg1;
- (BOOL)databasesEnabled;
- (void)_setUseSiteSpecificSpoofing:(BOOL)arg1;
- (BOOL)_useSiteSpecificSpoofing;
- (void)setTextDirectionSubmenuInclusionBehavior:(int)arg1;
- (int)textDirectionSubmenuInclusionBehavior;
- (void)setEditableLinkBehavior:(int)arg1;
- (int)editableLinkBehavior;
- (void)setApplicationCacheDefaultOriginQuota:(long long)arg1;
- (long long)applicationCacheDefaultOriginQuota;
- (void)setApplicationCacheTotalQuota:(long long)arg1;
- (long long)applicationCacheTotalQuota;
- (float)_passwordEchoDuration;
- (BOOL)_allowPasswordEcho;
- (int)_interpolationQuality;
- (void)_setInterpolationQuality:(int)arg1;
- (BOOL)_allowCompositingLayerVisualDegradation;
- (void)_setAllowCompositingLayerVisualDegradation:(BOOL)arg1;
- (BOOL)_alwaysUseAcceleratedOverflowScroll;
- (void)_setAlwaysUseAcceleratedOverflowScroll:(BOOL)arg1;
- (BOOL)_alwaysRequestGeolocationPermission;
- (void)_setAlwaysRequestGeolocationPermission:(BOOL)arg1;
- (BOOL)_allowMultiElementImplicitFormSubmission;
- (void)_setAllowMultiElementImplicitFormSubmission:(BOOL)arg1;
- (BOOL)_alwaysUseBaselineOfPrimaryFont;
- (void)_setAlwaysUseBaselineOfPrimaryFont:(BOOL)arg1;
- (int)_NSURLDiskCacheSize;
- (void)_setNSURLDiskCacheSize:(int)arg1;
- (int)_NSURLMemoryCacheSize;
- (void)_setNSURLMemoryCacheSize:(int)arg1;
- (int)_objectCacheSize;
- (void)_setObjectCacheSize:(int)arg1;
- (int)_pageCacheSize;
- (void)_setPageCacheSize:(int)arg1;
- (float)_maxParseDuration;
- (void)_setMaxParseDuration:(float)arg1;
- (int)_layoutInterval;
- (void)_setLayoutInterval:(int)arg1;
- (float)_minimumZoomFontSize;
- (void)_setMinimumZoomFontSize:(float)arg1;
- (BOOL)_telephoneNumberParsingEnabled;
- (void)_setTelephoneNumberParsingEnabled:(BOOL)arg1;
- (void)_setStandalone:(BOOL)arg1;
- (BOOL)_standalone;
- (unsigned long)_maximumImageSize;
- (double)_backForwardCacheExpirationInterval;
- (void)setAllowFileAccessFromFileURLs:(BOOL)arg1;
- (BOOL)allowFileAccessFromFileURLs;
- (void)setAllowUniversalAccessFromFileURLs:(BOOL)arg1;
- (BOOL)allowUniversalAccessFromFileURLs;
- (void)setWebSecurityEnabled:(BOOL)arg1;
- (BOOL)isWebSecurityEnabled;
- (void)setUsesEncodingDetector:(BOOL)arg1;
- (BOOL)usesEncodingDetector;
- (void)setAutomaticallyDetectsCacheModel:(BOOL)arg1;
- (BOOL)automaticallyDetectsCacheModel;
- (void)setShrinksStandaloneImagesToFit:(BOOL)arg1;
- (BOOL)shrinksStandaloneImagesToFit;
- (void)setXSSAuditorEnabled:(BOOL)arg1;
- (BOOL)isXSSAuditorEnabled;
- (void)setJavaScriptCanAccessClipboard:(BOOL)arg1;
- (BOOL)javaScriptCanAccessClipboard;
- (void)setZoomsTextOnly:(BOOL)arg1;
- (BOOL)zoomsTextOnly;
- (void)setOfflineWebApplicationCacheEnabled:(BOOL)arg1;
- (BOOL)offlineWebApplicationCacheEnabled;
- (void)setLocalFileContentSniffingEnabled:(BOOL)arg1;
- (BOOL)localFileContentSniffingEnabled;
- (void)setWebArchiveDebugModeEnabled:(BOOL)arg1;
- (BOOL)webArchiveDebugModeEnabled;
- (void)setApplicationChromeModeEnabled:(BOOL)arg1;
- (BOOL)applicationChromeModeEnabled;
- (void)setAuthorAndUserStylesEnabled:(BOOL)arg1;
- (BOOL)authorAndUserStylesEnabled;
- (void)setDeveloperExtrasEnabled:(BOOL)arg1;
- (BOOL)javaScriptExperimentsEnabled;
- (void)setJavaScriptExperimentsEnabled:(BOOL)arg1;
- (BOOL)developerExtrasEnabled;
- (void)setDNSPrefetchingEnabled:(BOOL)arg1;
- (BOOL)isDNSPrefetchingEnabled;

@end

