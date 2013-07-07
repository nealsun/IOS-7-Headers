/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/CMState.h>

@class CMOutlineState, NSMutableDictionary, WDText;

__attribute__((visibility("hidden")))
@interface WMState : CMState
{
    CMOutlineState *currentListState;
    CMOutlineState *outlineState;
    NSMutableDictionary *listStates;
    WDText *mLastHeader;
    WDText *mLastFooter;
    unsigned int mCurrentPage;
    unsigned int mBlockIndex;
    unsigned int mRunIndex;
    float mTopMargin;
    float mLeftMargin;
    float mPageHeight;
    BOOL mIsFrame;
    BOOL mIsFrameStart;
    BOOL mIsFrameEnd;
    BOOL mIsHeaderOrFooter;
    float mTotalPageHeight;
}

- (BOOL)isHeaderOrFooter;
- (void)setIsHeaderOrFooter:(BOOL)arg1;
- (BOOL)isFrameEnd;
- (void)setIsFrameEnd:(BOOL)arg1;
- (BOOL)isFrameStart;
- (void)setIsFrameStart:(BOOL)arg1;
- (BOOL)isFrame;
- (void)setIsFrame:(BOOL)arg1;
- (id)lastFooter;
- (void)setLastFooter:(id)arg1;
- (id)lastHeader;
- (void)setLastHeader:(id)arg1;
- (float)leftMargin;
- (void)setLeftMargin:(float)arg1;
- (float)topMargin;
- (void)setTopMargin:(float)arg1;
- (float)totalPageHeight;
- (void)setTotalPageHeight:(float)arg1;
- (float)pageHeight;
- (void)setPageHeight:(float)arg1;
- (unsigned int)blockIndex;
- (void)setBlockIndex:(unsigned int)arg1;
- (unsigned int)runIndex;
- (void)setRunIndex:(unsigned int)arg1;
- (float)pageOffset;
- (unsigned int)currentPage;
- (void)setCurrentPage:(unsigned int)arg1;
- (void)setListState:(id)arg1 forListId:(int)arg2;
- (id)listStateForListId:(int)arg1;
- (void)clearCurrentListState;
- (BOOL)isCurrentListId:(int)arg1;
- (BOOL)isCurrentListStateOverridden;
- (void)setCurrentListState:(id)arg1;
- (id)outlineState;
- (id)currentListState;
- (void)dealloc;
- (id)init;

@end

