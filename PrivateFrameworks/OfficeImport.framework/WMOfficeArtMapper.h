/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/CMDrawableMapper.h>

@class WDAContent;

__attribute__((visibility("hidden")))
@interface WMOfficeArtMapper : CMDrawableMapper
{
    BOOL mFloating;
    BOOL mIsMapped;
    BOOL mIsInsideGroup;
    WDAContent *mContent;
    unsigned int mCurrentPage;
}

- (void)setBoundingBox;
- (void)mapTextBoxAt:(id)arg1 withState:(id)arg2;
- (id)blipAtIndex:(unsigned int)arg1;
- (void)setWithClientData:(id)arg1 state:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)setCurrentPage:(unsigned int)arg1;
- (id)initWithOadDrawable:(id)arg1 asFloating:(BOOL)arg2 origin:(struct CGPoint)arg3 parent:(id)arg4;
- (void)setIsInsideGroup:(BOOL)arg1;
- (BOOL)isInsideGroup;
- (id)initWithWdOfficeArt:(id)arg1 parent:(id)arg2;
- (struct CGSize)expandedSizeForTextBox:(id)arg1 withState:(id)arg2;
- (void)mapDiagramAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtTextboxAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtImageAt:(id)arg1 withState:(id)arg2;

@end

