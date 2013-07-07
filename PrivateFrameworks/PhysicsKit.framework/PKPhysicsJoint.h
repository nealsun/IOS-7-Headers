/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"

@class PKPhysicsBody;

@interface PKPhysicsJoint : NSObject <NSCoding>
{
    BOOL _inUse;
    PKPhysicsBody *_bodyA;
    PKPhysicsBody *_bodyB;
}

@property(retain, nonatomic) PKPhysicsBody *bodyB; // @synthesize bodyB=_bodyB;
@property(retain, nonatomic) PKPhysicsBody *bodyA; // @synthesize bodyA=_bodyA;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)create;
@property(readonly, nonatomic) struct b2JointDef *_jointDef;
- (void)set_inUse:(BOOL)arg1;
- (BOOL)_inUse;
@property(nonatomic) struct b2Joint *_joint;

@end

