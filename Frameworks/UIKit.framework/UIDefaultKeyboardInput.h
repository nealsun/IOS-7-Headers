/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "UIKeyboardInput.h"
#import "UITextInputPrivate.h"

@class NSDictionary, UIColor, UIImage, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange;

@interface UIDefaultKeyboardInput : UIView <UIKeyboardInput, UITextInputPrivate>
{
    UITextInputTraits *m_traits;
}

- (id)selectionRectsForRange:(id)arg1;
@property(nonatomic) id <UITextInputDelegate> inputDelegate;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(int)arg2 inDirection:(int)arg3;
- (BOOL)isPosition:(id)arg1 withinTextUnit:(int)arg2 inDirection:(int)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(int)arg2 inDirection:(int)arg3;
- (BOOL)isPosition:(id)arg1 atBoundary:(int)arg2 inDirection:(int)arg3;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)unmarkText;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textInRange:(id)arg1;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(copy) UITextRange *selectedTextRange;
- (BOOL)hasText;
- (struct CGRect)visibleBounds;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (BOOL)becomesEditableWithGestures;
- (void)updateSelection;
- (BOOL)isEditing;
- (BOOL)isEditable;
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
- (id)selectionView;
@property(nonatomic) BOOL acceptsEmoji; // @dynamic acceptsEmoji;
- (void)setSecure:(BOOL)arg1;
- (BOOL)isSecure;
- (void)setupPlaceholderTextIfNeeded;
- (BOOL)isShowingPlaceholder;
- (struct CGRect)convertCaretRect:(struct CGRect)arg1;
- (struct CGRect)caretRect;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void)selectAll;
- (void)extendCurrentSelection:(int)arg1;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (struct _NSRange)selectionRange;
- (BOOL)selectionAtWordStart;
- (BOOL)selectionAtDocumentStart;
- (int)selectionState;
- (BOOL)hasSelection;
- (BOOL)hasContent;
- (int)wordOffsetInRange:(id)arg1;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (id)rectsForNSRange:(struct _NSRange)arg1;
- (id)textColorForCaretSelection;
- (id)fontForCaretSelection;
- (unsigned short)characterAfterCaretSelection;
- (unsigned short)characterBeforeCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (void)confirmMarkedText:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)replaceCurrentWordWithText:(id)arg1;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
- (id)delegate;
- (void)takeTraitsFrom:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)textInputTraits;
- (void)dealloc;

// Remaining properties
@property(nonatomic) BOOL acceptsFloatingKeyboard;
@property(nonatomic) BOOL acceptsSplitKeyboard;
@property(nonatomic) int autocapitalizationType; // @dynamic autocapitalizationType;
@property(nonatomic) int autocorrectionType; // @dynamic autocorrectionType;
@property(nonatomic) BOOL contentsIsSingleValue; // @dynamic contentsIsSingleValue;
@property(nonatomic) BOOL deferBecomingResponder;
@property(nonatomic) BOOL displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) BOOL enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property(nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) BOOL forceEnableDictation;
@property(retain, nonatomic) UIColor *insertionPointColor; // @dynamic insertionPointColor;
@property(nonatomic) unsigned int insertionPointWidth; // @dynamic insertionPointWidth;
@property(nonatomic) BOOL isSingleLineDocument;
@property(nonatomic) int keyboardAppearance; // @dynamic keyboardAppearance;
@property(nonatomic) int keyboardType; // @dynamic keyboardType;
@property(nonatomic) BOOL learnsCorrections;
@property(nonatomic) BOOL returnKeyGoesToNextResponder;
@property(nonatomic) int returnKeyType; // @dynamic returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // @dynamic secureTextEntry;
@property(nonatomic) int selectionAffinity;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(nonatomic) int selectionGranularity;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType; // @dynamic shortcutConversionType;
@property(nonatomic) int spellCheckingType; // @dynamic spellCheckingType;
@property(nonatomic) BOOL suppressReturnKeyStyling;
@property(readonly, nonatomic) UIView *textInputView;
@property(nonatomic) int textLoupeVisibility; // @dynamic textLoupeVisibility;
@property(nonatomic) int textSelectionBehavior; // @dynamic textSelectionBehavior;
@property(nonatomic) id textSuggestionDelegate; // @dynamic textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet; // @dynamic textTrimmingSet;
@property(nonatomic) BOOL useInterfaceLanguageForLocalization;

@end

