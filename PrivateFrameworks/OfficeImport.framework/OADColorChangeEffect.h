/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/OADBlipEffect.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADColorChangeEffect : OADBlipEffect
{
    OADColor *mFromColor;
    OADColor *mToColor;
}

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)setStyleColor:(id)arg1;
- (void)setToColor:(id)arg1;
- (id)toColor;
- (void)setFromColor:(id)arg1;
- (id)fromColor;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

