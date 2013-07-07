/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/MFPImage.h>

@class NSData, TSUImage;

__attribute__((visibility("hidden")))
@interface MFPBitmapImage : MFPImage
{
    NSData *mBitmapData;
    TSUImage *mPhoneBitmapImage;
    struct CGSize mPixelSize;
    struct CGSize mPointSize;
}

- (id).cxx_construct;
- (struct CGSize)pointSize;
- (struct CGSize)pixelSize;
- (id)phoneImage;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 unit:(int)arg3 effect:(id)arg4;
- (void)dealloc;
- (id)initWithBitmapData:(id)arg1;

@end

