/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/MFPGradientBrush.h>

@class TSUColor;

__attribute__((visibility("hidden")))
@interface MFPLinearGradientBrush : MFPGradientBrush
{
    struct CGRect mBounds;
    TSUColor *mStartColor;
    TSUColor *mEndColor;
}

- (id).cxx_construct;
- (void)createShading;
- (id)endColor;
- (id)startColor;
- (void)setEndColor:(id)arg1;
- (void)setStartColor:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)dealloc;

@end

