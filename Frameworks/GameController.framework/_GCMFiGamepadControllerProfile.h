/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <GameController/_GCGamepad.h>

#import "_GCACHomeButtonDelegate.h"

@class _GCACHomeButton;

__attribute__((visibility("hidden")))
@interface _GCMFiGamepadControllerProfile : _GCGamepad <_GCACHomeButtonDelegate>
{
    _GCACHomeButton *_acHome;
}

- (void).cxx_destruct;
- (void)toggleSuspendResume;
- (id)inputForElement:(struct __IOHIDElement *)arg1;
- (void)setPlayerIndex:(int)arg1;
- (id)name;
- (id)initWithController:(id)arg1;

@end

