/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <GameController/GCGamepad.h>

#import "GCNamedProfile.h"

@class GCController, NSString, _GCControllerButtonInput, _GCControllerDirectionPad;

__attribute__((visibility("hidden")))
@interface _GCGamepad : GCGamepad <GCNamedProfile>
{
    GCController *_controller;
    id _valueChangedHandler;
    _GCControllerDirectionPad *_dpad;
    _GCControllerButtonInput *_button0;
    _GCControllerButtonInput *_button1;
    _GCControllerButtonInput *_button2;
    _GCControllerButtonInput *_button3;
    _GCControllerButtonInput *_leftShoulder;
    _GCControllerButtonInput *_rightShoulder;
}

- (id)rightShoulder;
- (id)leftShoulder;
- (id)buttonY;
- (id)buttonX;
- (id)buttonB;
- (id)buttonA;
- (id)dpad;
- (void)setValueChangedHandler:(id)arg1;
- (id)valueChangedHandler;
- (id)controller;
- (void).cxx_destruct;
- (void)setPlayerIndex:(int)arg1;
@property(readonly) NSString *name;
- (id)initWithController:(id)arg1 dpadFlippedY:(BOOL)arg2;
- (id)initWithController:(id)arg1;

@end

