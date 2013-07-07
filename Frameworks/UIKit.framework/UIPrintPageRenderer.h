/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface UIPrintPageRenderer : NSObject
{
    float _headerHeight;
    float _footerHeight;
    struct CGRect _paperRect;
    struct CGRect _printableRect;
    NSMutableArray *_printFormatters;
    struct CGContext *_printContext;
}

@property(copy, nonatomic) NSArray *printFormatters; // @synthesize printFormatters=_printFormatters;
@property(nonatomic) struct CGRect printableRect; // @synthesize printableRect=_printableRect;
@property(nonatomic) struct CGRect paperRect; // @synthesize paperRect=_paperRect;
@property(nonatomic) float footerHeight; // @synthesize footerHeight=_footerHeight;
@property(nonatomic) float headerHeight; // @synthesize headerHeight=_headerHeight;
- (void)_endPrintContext:(id)arg1 success:(BOOL)arg2;
- (void)_drawPage:(int)arg1;
- (BOOL)_startPrintContext:(id)arg1 printSettings:(id)arg2;
- (void)drawFooterForPageAtIndex:(int)arg1 inRect:(struct CGRect)arg2;
- (void)drawContentForPageAtIndex:(int)arg1 inRect:(struct CGRect)arg2;
- (void)drawHeaderForPageAtIndex:(int)arg1 inRect:(struct CGRect)arg2;
- (void)drawPrintFormatter:(id)arg1 forPageAtIndex:(int)arg2;
- (void)drawPageAtIndex:(int)arg1 inRect:(struct CGRect)arg2;
- (void)prepareForDrawingPages:(struct _NSRange)arg1;
- (int)numberOfPages;
- (int)_maxFormatterPage;
- (void)_removePrintFormatter:(id)arg1;
- (id)printFormattersForPageAtIndex:(int)arg1;
- (void)addPrintFormatter:(id)arg1 startingAtPageAtIndex:(int)arg2;
- (void)dealloc;

@end

