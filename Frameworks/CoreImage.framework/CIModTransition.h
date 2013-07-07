/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIModTransition : CIFilter
{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIVector *inputCenter;
    NSNumber *inputTime;
    NSNumber *inputAngle;
    NSNumber *inputRadius;
    NSNumber *inputCompression;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputCompression; // @synthesize inputCompression;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle;
@property(retain, nonatomic) NSNumber *inputTime; // @synthesize inputTime;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) CIImage *inputTargetImage; // @synthesize inputTargetImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;
- (void)setDefaults;

@end

