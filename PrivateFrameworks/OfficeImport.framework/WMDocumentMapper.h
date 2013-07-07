/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/CMMapper.h>

#import "CMMapperRoot.h"

@class CMArchiveManager, NSString, WDDocument;

__attribute__((visibility("hidden")))
@interface WMDocumentMapper : CMMapper <CMMapperRoot>
{
    CMArchiveManager *mArchiver;
    WDDocument *wDom;
    NSString *mFileName;
}

- (struct CGSize)contentSizeForDevice;
- (struct CGSize)pageSizeForDevice;
- (id)documentTitle;
- (id)styleMatrix;
- (id)archiver;
- (void)mapWithState:(id)arg1;
- (void)mapDefaultCssStylesAt:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (int)defaultTabWidth;
- (id)blipAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithWDom:(id)arg1 archiver:(id)arg2;
- (float)bottomMargin;
- (float)headerMargin;
- (float)topMargin;
- (float)rightMargin;
- (float)leftMargin;
- (BOOL)hasSessionBreakAtIndex:(unsigned int)arg1;

@end

