/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/MFPBrush.h>

@class TSUColor, TSUImage;

__attribute__((visibility("hidden")))
@interface MFPImageBrush : MFPBrush
{
    TSUImage *mPhoneImage;
    TSUColor *mPhonePatternColor;
}

- (id)color;
- (void)fillPath:(id)arg1;
- (void)dealloc;
- (id)initWithPhoneImage:(id)arg1;

@end

