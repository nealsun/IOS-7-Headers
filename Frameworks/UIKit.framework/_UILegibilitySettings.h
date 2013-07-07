/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/_UISettings.h>

@class NSString, UIColor;

@interface _UILegibilitySettings : _UISettings
{
    int _style;
    NSString *_shadowCompositingFilterName;
    UIColor *_shadowColor;
    float _shadowStrength;
    float _outerGlowSize;
    float _outerGlowAlpha;
}

+ (id)sharedInstanceForStyle:(int)arg1;
@property(nonatomic) float outerGlowAlpha; // @synthesize outerGlowAlpha=_outerGlowAlpha;
@property(nonatomic) float outerGlowSize; // @synthesize outerGlowSize=_outerGlowSize;
@property(nonatomic) float shadowStrength; // @synthesize shadowStrength=_shadowStrength;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(copy, nonatomic) NSString *shadowCompositingFilterName; // @synthesize shadowCompositingFilterName=_shadowCompositingFilterName;
@property(nonatomic) int style; // @synthesize style=_style;
- (void)dealloc;

@end

