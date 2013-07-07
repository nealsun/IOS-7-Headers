/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface ECFormulaProcessor : NSObject
{
    struct XlFormulaProcessor *mXlFormulaProcessorLasso;
    struct XlFormulaProcessor *mXlFormulaProcessorXl;
    struct XlNameTable *mXlNameTable;
    ChVector_be6372b9 *mLassoSheetNames;
    ChVector_be6372b9 *mXlSheetNames;
    struct XlLinkTable *mXlLinkTable;
}

- (struct XlFormulaProcessor *)xlFormulaProcessorXl;
- (struct XlFormulaProcessor *)xlFormulaProcessorLasso;
- (void)setupWithWorkbook:(id)arg1;
- (void)dealloc;
- (id)init;
- (ChVector_be6372b9 *)sheetNamesFromWorkbook:(id)arg1;
- (struct XlFormulaProcessor *)setupWithWorkbook:(id)arg1 xlNameTable:(struct XlNameTable *)arg2 sheetNames:(ChVector_be6372b9 *)arg3 xlLinkTable:(struct XlLinkTable *)arg4 lassoSyntax:(_Bool)arg5;

@end

