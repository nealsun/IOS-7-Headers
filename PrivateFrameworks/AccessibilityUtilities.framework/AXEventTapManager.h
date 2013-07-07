/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableSet, NSRecursiveLock;

@interface AXEventTapManager : NSObject
{
    NSMutableArray *_eventTaps;
    NSMutableArray *_addedEventTapPairs;
    NSMutableSet *_removedEventTapIdentifiers;
    BOOL _isEnumeratingEventTaps;
    BOOL _shouldReorderEventTaps;
    id _installationGSCallback;
    id _installationHIDCallback;
    NSRecursiveLock *_eventTapLock;
    id _installationEventRepPost;
}

+ (id)sharedManager;
@property(copy, nonatomic) id installationEventRepPost; // @synthesize installationEventRepPost=_installationEventRepPost;
@property(copy, nonatomic) id installationHIDCallback; // @synthesize installationHIDCallback=_installationHIDCallback;
@property(copy, nonatomic) id installationGSCallback; // @synthesize installationGSCallback=_installationGSCallback;
- (void)removeEventTap:(id)arg1;
- (id)installEventTap:(id)arg1 identifier:(void)arg2;
- (void)_installEventTap:(id)arg1;
- (void)setEventTapPriority:(id)arg1 priority:(int)arg2;
- (void)_reorderEventTaps;
- (BOOL)_processGSEvent:(CDStruct_74958489 *)arg1;
- (BOOL)_processHIDEvent:(struct __IOHIDEvent *)arg1 taskPort:(unsigned int)arg2 bundleId:(id)arg3;
- (void)sendEvent:(id)arg1 afterTap:(id)arg2 useGSEvent:(BOOL)arg3 namedTaps:(id)arg4;
- (void)_enumerateEventTapPairsUsingBlock:(id)arg1;
- (void)_setHIDEventTapCallback:(void *)arg1;
- (void)_setGSEventTapCallback:(void *)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

