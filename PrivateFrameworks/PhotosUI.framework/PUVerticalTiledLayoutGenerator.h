/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotosUI/PUTiledLayoutGenerator.h>

@interface PUVerticalTiledLayoutGenerator : PUTiledLayoutGenerator
{
    struct CGPoint _origin;
    CDStruct_2e802c68 _enqueuedCaptionTileInfo;
    BOOL _shouldDisplayCaptionsBelowBatches;
    float _referenceWidth;
}

@property(nonatomic) BOOL shouldDisplayCaptionsBelowBatches; // @synthesize shouldDisplayCaptionsBelowBatches=_shouldDisplayCaptionsBelowBatches;
@property(nonatomic) float referenceWidth; // @synthesize referenceWidth=_referenceWidth;
- (void)_willAddRowWithFirstTileInfo:(CDStruct_2e802c68)arg1;
- (BOOL)_addRowWithTiles:(CDStruct_2e802c68 *)arg1 imageFrames:(struct CGRect *)arg2 count:(int)arg3;
- (void)_enumerateRowFramesWithContiguousTiles:(CDStruct_2e802c68 *)arg1 count:(int)arg2 useMagneticGuidelines:(BOOL)arg3 block:(id)arg4;
- (BOOL)_addRowWithContiguousTiles:(CDStruct_2e802c68 *)arg1 count:(int)arg2;
- (void)_dequeueCaption;
- (BOOL)_hasEnqueuedCaption;
- (void)_enqueueCaptionWithTileInfo:(CDStruct_2e802c68)arg1;
- (BOOL)_hasLeftSuboptimalRow;
- (BOOL)_scanTileTriplet:(CDStruct_2e802c68 *)arg1;
- (BOOL)_scanTilePair:(CDStruct_2e802c68 *)arg1;
- (BOOL)_scanTileRequiringNewRow:(CDStruct_2e802c68 *)arg1;
- (BOOL)_scanTileRequiringFullWidth:(CDStruct_2e802c68 *)arg1;
- (BOOL)_parseSpecialTileTriplet;
- (BOOL)_parseTileRequiringFullWidth;
- (BOOL)_parseTileTriplet;
- (BOOL)_parseTilePair;
- (BOOL)_parseSingleTile;
- (float)referenceDistanceForMagneticGuidelines;
- (void)didParseTiles;
- (BOOL)parseNextTiles;
- (void)willParseTiles;

@end

