/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSNumber, NSSet;

@interface TDEffectRenditionSpec : TDRenditionSpec
{
}

- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned int)arg2 document:(id)arg3;
- (id)effectPreset;
- (void)setComponentsFromEffectPreset:(id)arg1 withDocument:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSSet *components; // @dynamic components;
@property(retain, nonatomic) NSNumber *effectScale; // @dynamic effectScale;

@end

