/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "CALayer.h"

@class NSMutableArray;

@interface FigHUDGraphLayer : CALayer
{
    float **_Values;
    NSMutableArray *_valueLabels;
    float *_Mins;
    float *_Maxes;
    int *_StartIndex;
    int *_NumValues;
    int _NumGraphs;
    struct CGPoint *_Lines;
    int _MaxLength;
    struct __CTFont *_Font;
    struct __CFDictionary *_TextAttributes;
}

- (void)drawInContext:(struct CGContext *)arg1;
- (void)dealloc;
- (id)init;
- (void)updateValue:(int)arg1 value:(float)arg2;
- (void)updateValue:(int)arg1 value:(float)arg2 label:(id)arg3;
- (void)setUpGraph:(int)arg1 min:(float)arg2 max:(float)arg3 numValues:(int)arg4;
- (void)setUpGraphs:(int)arg1;

@end

