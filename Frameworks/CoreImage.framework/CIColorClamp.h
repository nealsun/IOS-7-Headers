/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIColorClamp : CIFilter
{
    CIImage *inputImage;
    CIVector *inputMinComponents;
    CIVector *inputMaxComponents;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIVector *inputMaxComponents; // @synthesize inputMaxComponents;
@property(retain, nonatomic) CIVector *inputMinComponents; // @synthesize inputMinComponents;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (void)setDefaults;
- (id)_kernel;

@end

