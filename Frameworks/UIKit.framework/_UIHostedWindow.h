/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIWindow.h>

@class _UIHostedWindowHostingHandle;

@interface _UIHostedWindow : UIWindow
{
}

- (BOOL)_isClippedByScreenJail;
- (BOOL)_needsShakesWhenInactive;
- (void)_updateTransformLayerForClassicPresentation;
- (void)_updateAppTintView;
- (void)_unregisterScrollToTopView:(id)arg1;
- (void)_registerScrollToTopView:(id)arg1;
- (BOOL)_usesWindowServerHitTesting;
@property(readonly, nonatomic) _UIHostedWindowHostingHandle *hostingHandle;
- (unsigned int)contextID;
- (BOOL)_canPromoteFromKeyWindowStack;
- (BOOL)_isWindowServerHostingManaged;
- (id)initWithFrame:(struct CGRect)arg1;

@end

