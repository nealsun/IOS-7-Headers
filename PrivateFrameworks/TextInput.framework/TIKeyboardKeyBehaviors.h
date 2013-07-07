/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface TIKeyboardKeyBehaviors : NSObject
{
    unsigned int _spaceKeyBehavior;
    unsigned int _returnKeyBehavior;
}

+ (id)behaviorForSpaceKey:(unsigned int)arg1 forReturnKey:(unsigned int)arg2;
@property(nonatomic) unsigned int returnKeyBehavior; // @synthesize returnKeyBehavior=_returnKeyBehavior;
@property(nonatomic) unsigned int spaceKeyBehavior; // @synthesize spaceKeyBehavior=_spaceKeyBehavior;
- (id)initWithSpaceKeyBehavior:(unsigned int)arg1 returnKeyBehavior:(unsigned int)arg2;

@end

