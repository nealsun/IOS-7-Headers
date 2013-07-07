/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableDictionary, NSString;

@interface MPTransition : NSObject <NSCoding, NSCopying>
{
    NSMutableDictionary *_attributes;
    id _parent;
    NSString *_transitionID;
    NSString *_presetID;
    double _duration;
    BOOL _isRandom;
    int _randomSeed;
}

+ (id)transitionWithTransitionID:(id)arg1;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *presetID; // @synthesize presetID=_presetID;
@property(copy, nonatomic) NSString *transitionID; // @synthesize transitionID=_transitionID;
- (void)setRandomSeed:(int)arg1;
- (int)randomSeed;
- (id)parentContainer;
- (id)parent;
- (void)setTransitionAttribute:(id)arg1 forKey:(id)arg2;
- (id)transitionAttributeForKey:(id)arg1;
- (void)setTransitionAttributes:(id)arg1;
- (id)transitionAttributes;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithTransitionID:(id)arg1;
- (id)transitionPresetID;
- (double)findMaxDuration;
- (id)convertMPAttributeToMCAttribute:(id)arg1 withKey:(id)arg2;
- (id)fullDebugLog;
- (void)dump;
- (id)_transitionAttributes;
- (void)applyFormattedAttributes;
- (id)formattedAttributes;
- (void)setIsRandom:(BOOL)arg1;
- (BOOL)isRandom;
- (void)setParent:(id)arg1;
- (id)parentDocument;
- (void)copyAttribures:(id)arg1;
- (void)copyVars:(id)arg1;

@end

