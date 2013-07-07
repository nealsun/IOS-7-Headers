/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UINavigationController.h"

@interface ABTranslucentNavigationController : UINavigationController
{
    BOOL _overridesNavigationBarInset;
    id <ABStyleProvider> _styleProvider;
}

@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) BOOL overridesNavigationBarInset; // @synthesize overridesNavigationBarInset=_overridesNavigationBarInset;
- (BOOL)_shouldNavigationBarInsetViewController:(id)arg1;

@end

