/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MPActionSupport.h"
#import "MPActionableSupport.h"
#import "MPActionableSupportInternal.h"
#import "MPAnimationSupport.h"
#import "MPGeometrySupport.h"
#import "MPLayerableSupport.h"
#import "MPNavigatorSupport.h"
#import "MPNavigatorSupportInternal.h"
#import "MPTimingSupport.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class MCContainerNavigator, MCPlug, MPNavigatorInternal, NSMutableDictionary, NSString;

@interface MPNavigator : NSObject <MPNavigatorSupportInternal, MPActionableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPNavigatorSupport, MPActionSupport, MPLayerableSupport, MPActionableSupport, MPGeometrySupport, MPTimingSupport>
{
    MPNavigatorInternal *_internal;
    NSMutableDictionary *_layers;
    NSMutableDictionary *_actions;
    MCPlug *_plug;
    MCContainerNavigator *_navigator;
    id _parent;
    NSMutableDictionary *_animationPaths;
}

- (void)removeActionForKey:(id)arg1;
- (void)setAction:(id)arg1 forKey:(id)arg2;
- (id)actionForKey:(id)arg1;
- (id)actions;
- (void)setStartsPaused:(BOOL)arg1;
- (BOOL)startsPaused;
- (void)setIsTriggered:(BOOL)arg1;
- (BOOL)isTriggered;
- (void)setNumberOfLoops:(double)arg1;
- (double)numberOfLoops;
- (void)setPhaseOutDuration:(double)arg1;
- (double)phaseOutDuration;
- (void)setPhaseInDuration:(double)arg1;
- (double)phaseInDuration;
- (void)setDuration:(double)arg1;
- (double)duration;
- (void)setTimeIn:(double)arg1;
- (double)timeIn;
- (void)setZIndex:(int)arg1;
- (int)zIndex;
- (void)setScale:(float)arg1;
- (float)scale;
- (void)setYRotationAngle:(float)arg1;
- (float)yRotationAngle;
- (void)setXRotationAngle:(float)arg1;
- (float)xRotationAngle;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)size;
- (void)setRotationAngle:(float)arg1;
- (float)rotationAngle;
- (void)setZPosition:(float)arg1;
- (float)zPosition;
- (void)setPosition:(struct CGPoint)arg1;
- (struct CGPoint)position;
- (void)setOpacity:(float)arg1;
- (float)opacity;
- (void)removeAnimationPathForKey:(id)arg1;
- (void)setAnimationPath:(id)arg1 forKey:(id)arg2;
- (id)animationPathForKey:(id)arg1;
- (id)animationPaths;
- (id)layers;
@property(copy, nonatomic) NSString *initialLayer; // @dynamic initialLayer;
- (void)removeAllLayers;
- (void)removeLayerForKey:(id)arg1;
- (void)setLayer:(id)arg1 forKey:(id)arg2;
- (id)layerForKey:(id)arg1;
- (id)layerKey;
- (id)parent;
- (id)navigatorKey;
- (void)dealloc;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)allSongs;
- (id)allSlides:(BOOL)arg1;
- (id)plug;
- (id)layerKeyDictionary;
- (id)actionableObjectForID:(id)arg1;
- (void)reconnectAll;
- (void)copyActions:(id)arg1;
- (void)copyAnimationPaths:(id)arg1;
- (void)copyLayers:(id)arg1;
- (void)copyStruct:(id)arg1;
- (void)cleanup;
- (void)setPlug:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)configureActions;
- (void)setParent:(id)arg1;
- (id)uuid;
- (id)objectID;
- (id)plugID;
- (id)parentDocument;

@end

