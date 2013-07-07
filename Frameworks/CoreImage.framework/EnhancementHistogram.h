/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface EnhancementHistogram : NSObject
{
    float hist[256];
}

+ (id)histogramFromDoubleData:(const double *)arg1;
+ (id)histogramFromFloatData:(const float *)arg1;
+ (id)histogramFromData:(const float *)arg1;
- (const float *)values;

@end

