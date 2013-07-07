/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MRRenderer, NSDictionary, NSOperationQueue;

@interface MRRenderArguments : NSObject
{
    MRRenderer *_renderer;
    NSOperationQueue *_preloadQueue;
    NSDictionary *_forcedState;
    double _unalteredTime;
    double _displayLinkTimestamp;
    float _morphingProgress;
    int _thumbnailPolicy;
    unsigned char _currentLayoutIndex;
    BOOL _isPreloading;
    BOOL _freezesSizeOfImageRequests;
    BOOL _skipsAnimations;
}

@property(nonatomic) BOOL skipsAnimations; // @synthesize skipsAnimations=_skipsAnimations;
@property BOOL freezesSizeOfImageRequests; // @synthesize freezesSizeOfImageRequests=_freezesSizeOfImageRequests;
@property int thumbnailPolicy; // @synthesize thumbnailPolicy=_thumbnailPolicy;
@property(readonly) BOOL isPreloading; // @synthesize isPreloading=_isPreloading;
@property unsigned char currentLayoutIndex; // @synthesize currentLayoutIndex=_currentLayoutIndex;
@property float morphingProgress; // @synthesize morphingProgress=_morphingProgress;
@property double displayLinkTimestamp; // @synthesize displayLinkTimestamp=_displayLinkTimestamp;
@property double unalteredTime; // @synthesize unalteredTime=_unalteredTime;
@property(retain) NSDictionary *forcedState; // @synthesize forcedState=_forcedState;
@property(retain) NSOperationQueue *preloadQueue; // @synthesize preloadQueue=_preloadQueue;
@property(readonly) MRRenderer *renderer; // @synthesize renderer=_renderer;
- (id)copyForPreloading;
- (void)cleanup;
- (void)dealloc;
- (id)initWithRenderer:(id)arg1;

@end

