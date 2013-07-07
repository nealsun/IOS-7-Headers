/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CorePDF/CPObject.h>

@interface CPChunk : CPObject
{
    struct CGRect bounds;
    BOOL shrinksWithChildren;
    BOOL dirtyBounds;
    unsigned int position;
    long insertionOrder;
}

+ (float)chooseReferenceFontSizeFrom:(float)arg1 and:(float)arg2;
- (float)rotationAngle;
- (void)setChunkPosition:(unsigned int)arg1;
- (unsigned int)chunkPosition;
- (void)translateObjectYBy:(float)arg1;
- (BOOL)intersectsChild:(struct CGRect)arg1;
- (void)setShrinksWithChildren:(BOOL)arg1;
- (BOOL)shrinksWithChildren;
- (BOOL)boundsEqualsRect:(struct CGRect)arg1 accuracy:(float)arg2;
- (BOOL)geometricallyContains:(id)arg1;
- (BOOL)overlapsVerticallyWith:(id)arg1;
- (BOOL)overlapsHorizontallyWith:(id)arg1;
- (void)orderedInsert:(id)arg1 usingSelector:(SEL)arg2;
- (int)clusterLevelHint;
- (struct CGSize)advance;
- (float)fontSize;
- (float)bottom;
- (float)top;
- (float)center;
- (float)right;
- (float)left;
- (int)compareChunkPosition:(id)arg1;
- (int)compareYDescendingX:(id)arg1;
- (int)compareYDescending:(id)arg1;
- (int)compareTopDescending:(id)arg1;
- (int)compareYBounds:(id)arg1;
- (int)compareY:(id)arg1;
- (int)compareLinearBounds:(id)arg1;
- (int)compareXBounds:(id)arg1;
- (int)compareZDescending:(id)arg1;
- (int)compareZ:(id)arg1;
- (int)compareInsertionOrder:(id)arg1;
- (int)compareX:(id)arg1;
- (int)compareAnchorYDescending:(id)arg1;
- (int)compareAnchorX:(id)arg1;
- (int)compareAnchorY:(id)arg1;
- (void)sortUsingSelector:(SEL)arg1;
- (long)insertionOrder;
- (void)setInsertionOrder:(long)arg1;
- (void)resizeWith:(id)arg1;
- (void)fitBoundsToChildren;
- (float)referenceAdvanceWidth;
- (float)absoluteGapTo:(id)arg1;
- (float)advanceDeltaAfterSpace;
- (float)clusterGapTo:(id)arg1;
- (struct CGPoint)anchor;
- (void)setAnchor:(struct CGPoint)arg1;
- (id)describeBounds;
- (struct CGRect)renderedBounds;
- (struct CGRect)adjustToPointBoundary:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg1;
- (void)setChildren:(id)arg1;
- (id)newTakeChildrenAmong:(id)arg1;
- (id)newTakeChildren;
- (void)removeAll;
- (void)remove:(id)arg1;
- (void)addChildrenOf:(id)arg1;
- (void)add:(id)arg1 atIndex:(unsigned int)arg2;
- (void)add:(id)arg1;
- (float)opticalLeading;
- (void)accept:(id)arg1;
- (id)copyAndSplitChildrenAtIndex:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

