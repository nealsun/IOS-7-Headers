/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLEffectFilter.h>

@class NSNumber;

@interface PLEffectFilterBW : PLEffectFilter
{
    NSNumber *inputValue;
}

@property(retain, nonatomic) NSNumber *inputValue; // @synthesize inputValue;
- (id)BWFilterWithFraction:(float)arg1;
- (id)vignetteFilter;
- (id)_filtersForCurrentInputValues;
- (void)dealloc;

@end

