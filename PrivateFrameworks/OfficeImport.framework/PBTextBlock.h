/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface PBTextBlock : NSObject
{
}

+ (void)writeTextBody:(id)arg1 textBoxParentHolder:(id)arg2 startIndexInParent:(unsigned int)arg3 bulletStyleAtom:(struct PptTextBlockStyling9Atom *)arg4 textRulerAtom:(struct PptTextRulerAtom *)arg5 masterTextStyleAtom:(struct PptTextMasterStyleAtom *)arg6 masterBulletStyleAtom:(struct PptTextMasterStyle9Atom *)arg7 state:(id)arg8;
+ (void)writeHyperlink:(id)arg1 textBoxParentHolder:(id)arg2 insertIndexInParent:(unsigned int)arg3 counter:(unsigned int *)arg4 charRange:(struct _NSRange)arg5 instance:(int)arg6 state:(id)arg7;
+ (void)readClientTextBox:(id)arg1 textBody:(id)arg2 state:(id)arg3;
+ (void)applyTextRuler:(struct PptTextRulerAtom *)arg1 toTextBlock:(id)arg2;
+ (void)readParagraph:(id)arg1 paragraph:(struct __CFAttributedString *)arg2 textType:(int)arg3 state:(id)arg4;
+ (void)readFromStyledText:(struct __CFAttributedString *)arg1 toStyledPargraphs:(struct __CFArray *)arg2;
+ (void)readFromTextBlock:(id)arg1 toStyledText:(struct __CFAttributedString *)arg2;

@end

