/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "WAKView.h"

@class NSMutableArray, WebNodeHighlight;

__attribute__((visibility("hidden")))
@interface WebNodeHighlightView : WAKView
{
    WebNodeHighlight *_webNodeHighlight;
    NSMutableArray *_layers;
}

- (id)webNodeHighlight;
- (void)layoutSublayers:(id)arg1;
- (void)_layoutForRectsHighlight:(struct Highlight *)arg1 parent:(id)arg2;
- (void)_layoutForNodeHighlight:(struct Highlight *)arg1 parent:(id)arg2;
- (void)_attach:(id)arg1 numLayers:(unsigned int)arg2;
- (BOOL)isFlipped;
- (void)detachFromWebNodeHighlight;
- (void)dealloc;
- (id)initWithWebNodeHighlight:(id)arg1;
- (void)_removeAllLayers;

@end

