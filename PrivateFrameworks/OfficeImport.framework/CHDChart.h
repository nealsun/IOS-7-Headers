/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/OADGraphic.h>

#import "OADDrawableContainer.h"

@class CHDDefaultTextProperties, CHDLegend, CHDPlotArea, CHDTitle, CHDView3D, EDSheet, EDWorkbook, NSMutableArray, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDChart : OADGraphic <OADDrawableContainer>
{
    EDSheet *mSheet;
    int mStyleId;
    _Bool mAutoTitleDeleted;
    _Bool mPlotVisibleCellsOnly;
    _Bool mMSGraph;
    _Bool mDirectionChanged;
    int mDisplayBlankCellsAs;
    CHDPlotArea *mPlotArea;
    CHDView3D *mView3D;
    CHDTitle *mTitle;
    CHDLegend *mLegend;
    EDWorkbook *mExternalData;
    OADGraphicProperties *mChartAreaGraphicProperties;
    OADGraphicProperties *mBackWallGraphicProperties;
    OADGraphicProperties *mSideWallGraphicProperties;
    OADGraphicProperties *mFloorGraphicProperties;
    CHDDefaultTextProperties *mDefaultTextProperties;
    int mChartDirection;
    struct CGRect mLogicalBounds;
    NSMutableArray *mDrawables;
}

+ (id)binaryEffects:(BOOL)arg1;
- (id).cxx_construct;
- (void)setDirectionChanged:(_Bool)arg1;
- (_Bool)isDirectionChanged;
- (void)setMSGraph:(_Bool)arg1;
- (_Bool)isMSGraph;
- (unsigned int)categoryCount;
- (unsigned int)seriesCount;
- (_Bool)isBinary;
- (_Bool)isPie;
- (_Bool)is3D;
- (id)mainType;
- (id)styleMatrix;
- (int)defaultLabelPosition;
- (id)defaultFontWithResources:(id)arg1;
- (id)defaultContentFormat;
- (unsigned int)defaultFontIndex;
- (id)defaultSeriesTitleFont;
- (id)defaultDataLabelFont;
- (id)defaultTextFont;
- (id)defaultThemeFont;
- (void)setParentTextListStyle:(id)arg1;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (id)children;
- (id)childAtIndex:(unsigned int)arg1;
- (void)addChildren:(id)arg1;
- (void)addChild:(id)arg1;
- (unsigned int)childCount;
- (void)setLogicalBounds:(struct CGRect)arg1;
- (struct CGRect)logicalBounds;
- (void)setDirection:(int)arg1;
- (int)direction;
- (void)setDefaultTextProperties:(id)arg1;
- (id)defaultTextProperties;
- (void)setFloorGraphicProperties:(id)arg1;
- (id)floorGraphicProperties;
- (void)setSideWallGraphicProperties:(id)arg1;
- (id)sideWallGraphicProperties;
- (void)setBackWallGraphicProperties:(id)arg1;
- (id)backWallGraphicProperties;
- (void)setChartAreaGraphicProperties:(id)arg1;
- (id)chartAreaGraphicProperties;
- (void)setExternalData:(id)arg1;
- (id)externalData;
- (void)setLegend:(id)arg1;
- (id)legend;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setView3D:(id)arg1;
- (id)view3D;
- (void)setPlotArea:(id)arg1;
- (id)plotArea;
- (void)setDisplayBlankAs:(int)arg1;
- (int)displayBlankAs;
- (void)setPlotVisibleCellsOnly:(_Bool)arg1;
- (_Bool)isPlotVisibleCellsOnly;
- (void)setAutoTitleDeleted:(_Bool)arg1;
- (_Bool)isAutoTitleDeleted;
- (void)setStyleId:(int)arg1;
- (int)styleId;
- (id)processors;
- (id)workbook;
- (void)setSheet:(id)arg1;
- (id)sheet;
- (void)dealloc;
- (id)init;

@end

