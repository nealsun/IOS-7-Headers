/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DOMElement.h"

@interface DOMElement (MailExtras)
+ (BOOL)isRichTextStyle:(id)arg1;
- (BOOL)mf_hasBackgroundColorOrImage;
- (id)mf_computedBackgroundColor;
- (BOOL)mf_isContainedInAnyElementInSet:(id)arg1;
@property(readonly) DOMElement *mf_containingQuoteBlockElement;
@property(readonly) BOOL mf_isContainedInQuoteBlock;
@property(readonly) BOOL mf_isContainedInTable;
- (void)mf_stripCSSStyle;
- (void)recursivelyRemoveMailAttributes;
- (int)mf_quoteLevelDelta;
- (BOOL)isRichTextElement;
- (BOOL)isRichTextElementType;
- (BOOL)hasMarginsOfZero;
@end

