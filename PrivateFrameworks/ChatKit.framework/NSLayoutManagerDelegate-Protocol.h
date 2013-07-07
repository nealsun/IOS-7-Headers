/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol NSLayoutManagerDelegate <NSObject>

@optional
- (void)layoutManager:(id)arg1 textContainer:(id)arg2 didChangeGeometryFromSize:(struct CGSize)arg3;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
- (void)layoutManagerDidInvalidateLayout:(id)arg1;
- (struct CGRect)layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned int)arg2 forTextContainer:(id)arg3 proposedLineFragment:(struct CGRect)arg4 glyphPosition:(struct CGPoint)arg5 characterIndex:(unsigned int)arg6;
- (BOOL)layoutManager:(id)arg1 shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned int)arg2;
- (BOOL)layoutManager:(id)arg1 shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned int)arg2;
- (int)layoutManager:(id)arg1 shouldUseAction:(int)arg2 forControlCharacterAtIndex:(unsigned int)arg3;
- (float)layoutManager:(id)arg1 paragraphSpacingAfterGlyphAtIndex:(unsigned int)arg2 withProposedLineFragmentRect:(struct CGRect)arg3;
- (float)layoutManager:(id)arg1 paragraphSpacingBeforeGlyphAtIndex:(unsigned int)arg2 withProposedLineFragmentRect:(struct CGRect)arg3;
- (float)layoutManager:(id)arg1 lineSpacingAfterGlyphAtIndex:(unsigned int)arg2 withProposedLineFragmentRect:(struct CGRect)arg3;
- (unsigned int)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short *)arg2 properties:(const int *)arg3 characterIndexes:(const unsigned int *)arg4 font:(id)arg5 forGlyphRange:(struct _NSRange)arg6;
@end

