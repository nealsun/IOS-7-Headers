/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"
#import "UITextInputTraits.h"

@class UIColor, UIImage;

@protocol UITextInputTraits_Private <NSObject, UITextInputTraits>
- (void)takeTraitsFrom:(id)arg1;

@optional
@property(nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) BOOL deferBecomingResponder;
@property(nonatomic) BOOL useInterfaceLanguageForLocalization;
@property(nonatomic) BOOL forceEnableDictation;
@property(nonatomic) BOOL suppressReturnKeyStyling;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) BOOL learnsCorrections;
@property(nonatomic) BOOL displaySecureTextUsingPlainText;
@property(nonatomic) BOOL acceptsSplitKeyboard;
@property(nonatomic) BOOL acceptsFloatingKeyboard;
@property(nonatomic) BOOL returnKeyGoesToNextResponder;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) BOOL acceptsEmoji;
@property(nonatomic) BOOL contentsIsSingleValue;
@property(nonatomic) BOOL isSingleLineDocument;
@property(nonatomic) id textSuggestionDelegate;
@property(nonatomic) int textSelectionBehavior;
@property(nonatomic) int textLoupeVisibility;
@property(nonatomic) unsigned int insertionPointWidth;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
@end

