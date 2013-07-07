/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, OADTextBodyProperties, OADTextListStyle;

__attribute__((visibility("hidden")))
@interface OADTextBody : NSObject
{
    OADTextBodyProperties *mProperties;
    NSMutableArray *mParagraphs;
    OADTextListStyle *mTextListStyle;
}

- (void)removeUnnecessaryOverrides;
- (void)flattenProperties;
- (BOOL)isEmpty;
- (void)removeLeadingNewlines;
- (void)removeTrailingNewlines;
- (void)setParentTextListStyle:(id)arg1;
- (void)applyTextListStyle:(id)arg1;
- (id)overrideTextListStyle;
- (id)textListStyle;
- (void)removeAllParagraphs;
- (id)addParagraph;
- (id)paragraphAtIndex:(unsigned int)arg1;
- (unsigned int)paragraphCount;
- (void)setProperties:(id)arg1;
- (id)properties;
- (void)dealloc;
- (id)init;
- (id)findFirstTextRunOfClass:(Class)arg1;
- (void)addParagraphsFromTextBody:(id)arg1;
- (id)plainText;

@end

