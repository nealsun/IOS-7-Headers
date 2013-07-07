/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "UIKeyboardCandidateListDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSObject<UIKeyboardRecording><UIApplicationEventRecording>, NSString, NSTimer, TIKeyboardCandidateResultSet, TIKeyboardInputManagerState, TIKeyboardInputManagerStub, TIKeyboardLayout, TIKeyboardState, TIKeyboardTouchEvent, UIAlertView, UIAutocorrectInlinePrompt, UIDelayedAction, UIEvent, UIKeyboardAutocorrectionController, UIKeyboardLayout, UIKeyboardTaskQueue, UIResponder, UIResponder<UIKeyInput>, UIResponder<UITextInput>, UIResponder<UITextInputPrivate>, UITextInputArrowKeyHistory, UITextInputTraits, _UIActionWhenIdle;

@interface UIKeyboardImpl : UIView <UIKeyboardCandidateListDelegate>
{
    id <UIKeyInput> m_delegate;
    UIKeyboardTaskQueue *m_taskQueue;
    id m_externalTask;
    TIKeyboardState *m_keyboardState;
    TIKeyboardInputManagerState *m_inputManagerState;
    UIView *m_languageIndicator;
    NSString *m_previousInputString;
    TIKeyboardInputManagerStub *m_inputManager;
    UIKeyboardAutocorrectionController *m_autocorrectionController;
    UIAutocorrectInlinePrompt *m_autocorrectPrompt;
    UIDelayedAction *m_autocorrectPromptAction;
    TIKeyboardCandidateResultSet *m_candidateResultSet;
    id <UIKeyboardCandidateList> m_candidateList;
    UIView *m_markedTextOverlay;
    id <UIKeyboardImplGeometryDelegate> m_geometryDelegate;
    NSObject<UIKeyboardRecording><UIApplicationEventRecording> *m_recorder;
    UIKeyboardLayout *m_layout;
    NSMutableDictionary *m_keyedLayouts;
    NSString *m_inputModeLastChosen;
    struct {
        NSTimer *timer;
        UIEvent *eventToRepeat;
        char firstRepeat;
    } m_hardwareRepeat;
    NSTimer *m_autoDeleteTimer;
    BOOL m_autoDeleteJustFired;
    unsigned int m_autoDeleteCount;
    double m_autoDeleteLastDelete;
    double m_autoDeleteInterval;
    unsigned long m_autoDeleteShiftCharacter;
    UIDelayedAction *m_longPressAction;
    int m_orientation;
    int m_originalOrientation;
    struct CGPoint m_inputPoint;
    int m_changeCount;
    double m_changeTime;
    id m_changedDelegate;
    struct __CFRunLoopObserver *m_observer;
    unsigned int m_textInputChangingCount;
    BOOL m_textInputChangingText;
    BOOL m_textInputChangingDirection;
    BOOL m_textInputChangesIgnored;
    BOOL m_insideKeyInputDelegateCall;
    UITextInputTraits *m_defaultTraits;
    UITextInputTraits *m_traits;
    int m_returnKeyState;
    int m_currentDirection;
    int m_contextWordDepth;
    BOOL m_autoDeleteOK;
    BOOL m_autocapitalizationPreference;
    BOOL m_autocorrectPromptTimerFired;
    BOOL m_autocorrectionPreference;
    BOOL m_autoshift;
    BOOL m_caretShowingNow;
    BOOL m_changeNotificationDisabled;
    BOOL m_correctionLearningAllowed;
    BOOL m_delegateIsSMSTextView;
    BOOL m_delegateRequiresKeyEvents;
    BOOL m_doubleSpacePeriodWasAppliedInCurrentContext;
    BOOL m_doubleSpacePeriodPreference;
    BOOL m_hardwareKeyboardAttached;
    BOOL m_inDealloc;
    BOOL m_initializationDone;
    BOOL m_performanceLoggingEnabled;
    BOOL m_selecting;
    BOOL m_shift;
    BOOL m_shiftLocked;
    BOOL m_shiftLockedEnabled;
    BOOL m_settingShift;
    BOOL m_suggestionsShownForCurrentDeletion;
    BOOL m_originalShouldSkipCandidateSelection;
    BOOL m_updatingPreferences;
    BOOL m_changingGeometryWithSameOrientation;
    BOOL m_suppressGeometryChangeNotifications;
    BOOL m_acceptingCandidate;
    BOOL m_userChangedSelection;
    BOOL m_shouldChargeKeys;
    BOOL m_longPress;
    BOOL m_replacingWord;
    BOOL m_shiftNeedsUpdate;
    BOOL m_shiftPreventAutoshift;
    BOOL m_shiftHeldDownNeedsUpdated;
    BOOL m_delegateAdoptsTextInput;
    BOOL m_delegateAdoptsTextInputPrivate;
    BOOL m_delegateAdoptsKeyboardInput;
    BOOL m_clientVariantSupportEnabled;
    BOOL m_clientVariantSupportEnabledEver;
    NSMutableArray *m_keyplaneNamesPreviousDelegate;
    NSMutableArray *m_keyplaneNamesCurrentDelegate;
    UITextInputArrowKeyHistory *m_arrowKeyHistory;
    BOOL m_preRotateShift;
    BOOL m_preRotateShiftLocked;
    BOOL m_showInputModeIndicator;
    BOOL m_suppressUpdateCandidateView;
    BOOL m_shouldUpdateCacheOnInputModesChange;
    BOOL m_shouldSetInputModeInNextRun;
    BOOL m_rivenCenterFilled;
    float m_splitProgress;
    NSString *m_currentUsedInputMode;
    NSString *m_lastUsedInputMode;
    BOOL m_needsCandidates;
    BOOL m_shouldSkipCandidateGeneration;
    BOOL m_updateLayoutOnShowKeyboard;
    BOOL m_receivedCandidatesInCurrentInputMode;
    int _currentAlertReason;
    BOOL m_scrolling;
    unsigned int m_previousSpaceKeyBehavior;
    BOOL m_showsCandidateBar;
    BOOL m_showsCandidateInline;
    BOOL committingCandidate;
    BOOL geometryIsChanging;
    BOOL m_hardwareKeyboardIsSeen;
    BOOL m_softwareKeyboardShownByTouch;
    TIKeyboardTouchEvent *m_touchEventWaitingForKeyInputEvent;
    _UIActionWhenIdle *m_delayedCandidateRequest;
    _UIActionWhenIdle *m_deferredReleaseInputManagerAction;
    id <UIKeyboardTypology> typologyRecorder;
    UIAlertView *keyboardAlertView;
}

+ (void)hardwareKeyboardAvailabilityChanged;
+ (unsigned int)convertToTextInputAutocapitalizationType:(int)arg1;
+ (id)orientationKeyForOrientation:(int)arg1;
+ (Class)layoutClassForInputMode:(id)arg1 keyboardType:(int)arg2;
+ (int)interfaceOrientationForSize:(struct CGSize)arg1;
+ (struct CGPoint)persistentDictationWindowOffset;
+ (void)setPersistentDictationWindowOffset:(struct CGPoint)arg1;
+ (void)setPersistentDictationTargetZone:(int)arg1;
+ (int)persistentDictationTargetZone;
+ (struct CGPoint)persistentOffset;
+ (void)setPersistentOffset:(struct CGPoint)arg1;
+ (void)suppressSetPersistentOffset:(BOOL)arg1;
+ (void)setPersistentSplitProgress:(float)arg1;
+ (float)splitProgress;
+ (float)persistentSplitProgress;
+ (BOOL)supportsSplit;
+ (BOOL)isSplit;
+ (BOOL)rivenTranslationPreference;
+ (BOOL)rivenPreference;
+ (BOOL)rivenInstalled;
+ (void)refreshRivenStateWithTraits:(id)arg1 isKeyboard:(BOOL)arg2;
+ (unsigned int)translateToTextInputKeyboardType:(int)arg1;
+ (float)additionalInstanceHeightLoading;
+ (float)additionalInstanceHeight;
+ (id)normalizedInputModesFromPreference;
+ (struct CGSize)keyboardSizeForInterfaceOrientation:(int)arg1;
+ (struct CGSize)sizeForInterfaceOrientation:(int)arg1;
+ (struct CGSize)_defaultSizeForInterfaceOrientation:(int)arg1;
+ (struct CGSize)defaultSizeForInterfaceOrientation:(int)arg1;
+ (id)keyboardScreen;
+ (void)applicationDidReceiveMemoryWarning:(id)arg1;
+ (void)applicationWillEnterForeground:(id)arg1;
+ (void)applicationDidEnterBackground:(id)arg1;
+ (void)applicationWillResignActive:(id)arg1;
+ (void)applicationWillSuspend:(id)arg1;
+ (void)releaseSharedInstance;
+ (id)activeInstance;
+ (id)sharedInstance;
+ (void)markElapsed:(id)arg1;
+ (void)markPerformance:(id)arg1;
+ (void)setParentTestForProfiling:(id)arg1;
+ (void)_clearHardwareKeyboardMinimizationPreference;
@property(nonatomic) BOOL softwareKeyboardShownByTouch; // @synthesize softwareKeyboardShownByTouch=m_softwareKeyboardShownByTouch;
@property(nonatomic) BOOL hardwareKeyboardIsSeen; // @synthesize hardwareKeyboardIsSeen=m_hardwareKeyboardIsSeen;
@property(nonatomic) BOOL geometryIsChanging; // @synthesize geometryIsChanging;
@property(nonatomic) BOOL committingCandidate; // @synthesize committingCandidate;
@property(retain, nonatomic) UIAlertView *keyboardAlertView; // @synthesize keyboardAlertView;
@property(nonatomic) BOOL showsCandidateInline; // @synthesize showsCandidateInline=m_showsCandidateInline;
@property(nonatomic) BOOL receivedCandidatesInCurrentInputMode; // @synthesize receivedCandidatesInCurrentInputMode=m_receivedCandidatesInCurrentInputMode;
@property(nonatomic) BOOL showsCandidateBar; // @synthesize showsCandidateBar=m_showsCandidateBar;
@property(retain, nonatomic) NSString *currentUsedInputMode; // @synthesize currentUsedInputMode=m_currentUsedInputMode;
@property(retain, nonatomic) NSString *lastUsedInputMode; // @synthesize lastUsedInputMode=m_lastUsedInputMode;
@property(retain, nonatomic) id <UIKeyboardTypology> typologyRecorder; // @synthesize typologyRecorder;
@property(nonatomic) BOOL shouldSetInputModeInNextRun; // @synthesize shouldSetInputModeInNextRun=m_shouldSetInputModeInNextRun;
@property(nonatomic) BOOL showInputModeIndicator; // @synthesize showInputModeIndicator=m_showInputModeIndicator;
@property(retain, nonatomic) id changedDelegate; // @synthesize changedDelegate=m_changedDelegate;
@property(retain, nonatomic) _UIActionWhenIdle *deferredReleaseInputManagerAction; // @synthesize deferredReleaseInputManagerAction=m_deferredReleaseInputManagerAction;
@property(retain, nonatomic) _UIActionWhenIdle *delayedCandidateRequest; // @synthesize delayedCandidateRequest=m_delayedCandidateRequest;
@property(retain, nonatomic) TIKeyboardTouchEvent *touchEventWaitingForKeyInputEvent; // @synthesize touchEventWaitingForKeyInputEvent=m_touchEventWaitingForKeyInputEvent;
@property(readonly, nonatomic) UIKeyboardAutocorrectionController *autocorrectionController; // @synthesize autocorrectionController=m_autocorrectionController;
@property(retain, nonatomic) TIKeyboardInputManagerState *inputManagerState; // @synthesize inputManagerState=m_inputManagerState;
@property(copy, nonatomic) id externalTask; // @synthesize externalTask=m_externalTask;
@property(nonatomic) id <UIKeyboardImplGeometryDelegate> geometryDelegate; // @synthesize geometryDelegate=m_geometryDelegate;
@property(retain, nonatomic) UITextInputArrowKeyHistory *arrowKeyHistory; // @synthesize arrowKeyHistory=m_arrowKeyHistory;
@property(retain, nonatomic) id <UIKeyboardRecording><UIApplicationEventRecording> recorder;
- (void)trackUsageForPromptedCorrection:(id)arg1 inputString:(id)arg2 previousPrompt:(id)arg3;
- (void)trackUsageForAcceptedAutocorrection:(id)arg1 promptWasShowing:(BOOL)arg2;
- (BOOL)isAutoFillMode;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)needsKeyHitTestResults;
- (BOOL)canHandleKeyHitTest;
- (void)clearSelection;
- (BOOL)caretVisible;
- (BOOL)caretBlinks;
- (void)setCaretVisible:(BOOL)arg1;
- (void)setCaretBlinks:(BOOL)arg1;
- (void)startCaretBlinkIfNeeded;
- (void)remoteControlEvent:(id)arg1;
- (void)showKeyboardIfNeeded;
- (void)ejectKeyDown;
- (void)toggleSoftwareKeyboard;
- (void)completeHandleKeyEvent:(id)arg1;
- (void)handleKeyWithString:(id)arg1 forKeyEvent:(id)arg2 executionContext:(id)arg3;
- (void)handleKeyEvent:(id)arg1 executionContext:(id)arg2;
- (void)handleKeyEvent:(id)arg1;
- (void)_handleKeyEvent:(id)arg1 executionContext:(id)arg2;
- (void)flushTouchEventWaitingForKeyInputEventIfNecessary;
- (void)_remapKeyEvent:(id)arg1 withKeyEventMap:(id)arg2;
- (void)_handleWebKeyEvent:(id)arg1 withInputString:(id)arg2 executionContext:(id)arg3;
- (void)_handleWebKeyEvent:(id)arg1 withIndex:(unsigned int)arg2 inInputString:(id)arg3 executionContext:(id)arg4;
- (void)_handleWebKeyEvent:(id)arg1 withEventType:(int)arg2 withInputString:(id)arg3 withInputStringIgnoringModifiers:(id)arg4;
- (void)updateKeyboardEventsLagging:(id)arg1;
- (BOOL)isValidKeyInput:(id)arg1;
- (void)cancelAllKeyEvents;
- (void)dismissKeyboard;
@property(nonatomic, getter=isInHardwareKeyboardMode) BOOL inHardwareKeyboardMode;
- (void)showKeyboard;
- (void)hideKeyboard;
- (void)firstHardwareAutoRepeat:(id)arg1;
- (void)hardwareAutoRepeat:(id)arg1;
- (void)hardwareKeyboardAvailabilityChanged;
- (int)changeCount;
- (void)updateChangeTimeAndIncrementCount;
- (void)clearChangeTimeAndCount;
- (void)clearTimers;
- (BOOL)isLongPress;
- (void)longPressAction;
- (void)handleDelayedActionLongPress;
- (void)clearLongPressTimer;
- (void)touchLongPressTimer;
- (void)touchLongPressTimerWithDelay:(double)arg1;
- (void)stopAutoDelete;
- (void)startAutoDeleteTimer;
- (void)completeHandleAutoDelete;
- (void)handleAutoDeleteWithExecutionContext:(id)arg1;
- (void)handleAutoDelete;
- (void)autoDeleteTimerFired:(id)arg1;
- (void)touchAutoDeleteTimerWithThreshold:(double)arg1;
- (id)generateAutocorrectionReplacements:(id)arg1;
- (void)generateCandidatesWithOptions:(int)arg1;
- (void)generateCandidates;
- (BOOL)delegateSuggestionsForCurrentInput;
- (BOOL)stringIsExemptFromChecker:(id)arg1;
- (id)autocorrectionRecordForWord:(id)arg1;
- (void)autocorrectionAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)fadeAutocorrectPrompt;
- (void)animateAutocorrection;
- (void)applyAutocorrection;
- (void)updateAutocorrectPromptDisplay:(struct CGRect)arg1;
- (void)updateAutocorrectPrompt:(id)arg1;
- (id)_autocorrectPromptRects;
- (id)_rangeForAutocorrectionText:(id)arg1;
- (void)updateAutocorrectPromptAction;
- (void)handleDelayedActionUpdateAutocorrectPrompt;
- (void)clearAutocorrectPromptTimer;
- (void)touchAutocorrectPromptTimer;
- (struct CGRect)convertRectToAutocorrectRect:(struct CGRect)arg1 delegateView:(id)arg2 container:(id)arg3;
- (void)updateTextCandidateView;
- (void)handleDelayedActionUpdateTextCandidateView;
- (id)inputOverlayContainer;
- (void)updateKeyboardConfigurations;
- (void)_handleKeyBehaviors:(id)arg1 withState:(id)arg2;
- (id)_keyboardBehaviorState;
- (void)_handleKeyBehavior:(unsigned int)arg1 forKeyType:(id)arg2;
- (id)_canonicalKeyTypeForKeyType:(id)arg1;
- (void)_nop;
- (void)updateReturnKey:(BOOL)arg1;
- (void)updateReturnKey;
- (void)setReturnKeyEnabled:(BOOL)arg1;
- (BOOL)returnKeyEnabled;
- (id)returnKeyDisplayName;
- (int)returnKeyType;
- (BOOL)noContent;
- (void)setCandidates:(id)arg1;
- (void)removeAutocorrectPrompt;
- (id)autocorrectPrompt;
- (void)setAutocorrection:(id)arg1;
- (BOOL)isMinimized;
- (void)resizeCandidateBarWithDelta:(float)arg1;
- (BOOL)isUsingDictationLayout;
- (void)updateCandidateDisplay;
- (BOOL)needsToDeferUpdateTextCandidateView;
- (void)updateCandidateDisplayAsyncWithCandidateSet:(id)arg1 documentOperation:(id)arg2;
- (BOOL)shouldIgnoreCandidateSet:(id)arg1 documentOperation:(id)arg2;
- (BOOL)displaysCandidates;
- (void)setCandidateList:(id)arg1 updateCandidateView:(BOOL)arg2;
- (BOOL)acceptWord:(id)arg1 firstDelete:(unsigned int)arg2 forInput:(id)arg3;
- (BOOL)acceptWord:(id)arg1 firstDelete:(unsigned int)arg2;
- (void)scheduleReplacementsWithOptions:(unsigned int)arg1;
- (void)replaceText:(id)arg1;
- (void)clearDelegate;
- (void)clearAnimations;
- (void)clearTransientState;
- (void)completeAcceptCandidateBeforeAddingInputObject:(id)arg1 executionContext:(id)arg2;
- (void)addInputObject:(id)arg1 executionContext:(id)arg2;
- (void)addInputObject:(id)arg1;
- (void)clearInput;
- (id)candidateList;
- (void)candidateListSelectionDidChange:(id)arg1;
- (void)candidateListAcceptCandidate:(id)arg1;
- (void)revealHiddenCandidates;
- (void)jumpToCompositions;
- (void)showNextPage;
- (void)showNextCandidates;
- (void)completeAcceptCandidate;
- (void)acceptCurrentCandidateIfSelectedWithExecutionContext:(id)arg1;
- (void)acceptCurrentCandidateIfSelected;
- (void)setUserSelectedCurrentCandidate:(BOOL)arg1;
- (BOOL)userSelectedCurrentCandidate;
- (void)acceptFirstCandidate;
- (void)acceptCurrentCandidateWithExecutionContext:(id)arg1;
- (void)acceptCurrentCandidate;
- (void)acceptCandidate:(id)arg1;
- (void)acceptCandidate:(id)arg1 atIndex:(unsigned int)arg2 executionContext:(id)arg3;
- (void)acceptCandidate:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeAutocorrection;
- (void)acceptAutocorrection;
- (void)willReplaceTextInRangedSelectionWithKeyboardInput;
- (void)completeDeleteFromInput;
- (void)deleteFromInputWithExecutionContext:(id)arg1;
- (void)deleteFromInput;
- (void)completeDeleteOnceFromInputWithCharacterBefore:(unsigned long)arg1;
- (void)scheduleReplacementsAfterDeletionToEndOfWord;
- (void)moveSelectionToEndOfWord;
- (BOOL)selectionIsEndOfWord;
- (BOOL)nextCharacterIsWordCharacter;
- (void)deleteOnceFromInputWithExecutionContext:(id)arg1;
- (void)updateLayoutAndSetShift;
- (BOOL)shouldEnableShiftForDeletedCharacter:(unsigned long)arg1;
- (void)movePhraseBoundaryToDirection:(int)arg1;
- (unsigned int)phraseBoundary;
- (void)setPhraseBoundary:(unsigned int)arg1;
- (void)completeAddInputString:(id)arg1;
- (void)addWordTerminator:(id)arg1 afterSpace:(BOOL)arg2 elapsedTime:(double)arg3 executionContext:(id)arg4;
- (id)acceptedAutocorrectionForWordTerminator:(id)arg1;
- (void)completeAcceptCandidateBeforeAddingInput:(id)arg1 executionContext:(id)arg2;
- (void)addInputString:(id)arg1 withFlags:(unsigned int)arg2 executionContext:(id)arg3;
- (void)addInputString:(id)arg1 withFlags:(unsigned int)arg2;
- (BOOL)shouldAcceptCandidate:(id)arg1 beforeInputString:(id)arg2;
- (BOOL)handleDoubleSpacePeriodForInputString:(id)arg1 afterSpace:(BOOL)arg2 elapsedTime:(double)arg3;
- (void)updateDoubleSpacePeriodStateForString:(id)arg1;
- (void)updateDoubleSpacePeriodStateForCharacter:(unsigned long)arg1;
- (id)inputEventForInputString:(id)arg1;
- (void)addInputString:(id)arg1 fromVariantKey:(BOOL)arg2;
- (void)addInputString:(id)arg1;
- (void)deleteBackward;
- (void)deleteForwardAndNotify:(BOOL)arg1;
- (void)deleteBackwardAndNotify:(BOOL)arg1;
- (void)insertTextAfterSelection:(id)arg1;
- (void)insertText:(id)arg1;
- (void)setPreviousInputString:(id)arg1;
- (BOOL)acceptInputString:(id)arg1;
- (void)handleStringInput:(id)arg1 withFlags:(unsigned int)arg2 executionContext:(id)arg3;
- (void)handleClearWithExecutionContext:(id)arg1;
- (void)handleClear;
- (void)handleDelete;
- (void)handleDeleteWithExecutionContext:(id)arg1;
- (void)handleDeleteAsRepeat:(BOOL)arg1 executionContext:(id)arg2;
- (void)setInputPoint:(struct CGPoint)arg1;
- (void)keyDeactivated;
- (void)keyActivated;
- (BOOL)supportsNumberKeySelection;
- (BOOL)suppliesCompletions;
- (void)setUsesCandidateSelection:(BOOL)arg1;
- (BOOL)usesCandidateSelection;
@property(nonatomic) BOOL shouldSkipCandidateSelection;
- (void)forceShiftUpdateIfKeyboardStateChanged;
- (void)forceShiftUpdate;
- (void)clearShiftState;
- (BOOL)shiftLockedEnabled;
- (BOOL)isShiftLocked;
- (BOOL)isAutoShifted;
- (BOOL)isShifted;
- (void)setShiftLockedForced:(BOOL)arg1;
- (void)setShiftLocked:(BOOL)arg1;
- (void)setShiftNeedsUpdate;
- (void)setShiftPreventAutoshift:(BOOL)arg1;
- (void)setShift:(BOOL)arg1 autoshift:(BOOL)arg2;
- (void)setShift:(BOOL)arg1;
- (void)toggleShift;
- (void)setShiftOffIfNeeded;
- (void)updateShiftState;
- (void)notifyShiftState;
- (void)updateInputManagerAutocapitalizationType;
- (void)recomputeActiveInputModesFromList:(id)arg1;
- (void)recomputeActiveInputModes;
- (BOOL)shouldSwitchInputMode:(id)arg1;
- (void)performOperations:(id)arg1;
@property(retain, nonatomic) TIKeyboardInputManagerStub *inputManager;
- (void)releaseInputManagerIfInactive;
- (void)setInputManagerFromInputMode:(id)arg1;
- (BOOL)_systemHasKbd;
- (void)removeAllDynamicDictionaries;
- (void)continuePerformHitTestToKeyCode:(int)arg1 keyCodeHandler:(id)arg2;
- (void)handleReplyToPerformHitTestWithTask:(id)arg1 executionContext:(void)arg2;
- (id)replyHandlerForPerformHitTestForTouchEventWithKeyCodeHandler:(SEL)arg1 executionContext:(id)arg2;
- (void)performHitTestForTouchEvent:(id)arg1 keyCodeHandler:(id)arg2 executionContext:(void)arg3;
- (void)skipHitTestForTouchEvent:(id)arg1 delayed:(BOOL)arg2;
- (void)skipHitTestForTouchEvent:(id)arg1;
- (void)continueGenerateReplacementsForStringWithCandidates:(id)arg1 candidatesHandler:(id)arg2;
- (void)handleReplyToGenerateReplacementsForStringWithTask:(id)arg1 executionContext:(void)arg2;
- (id)replyHandlerForGenerateReplacementsForStringWithCandidatesHandler:(SEL)arg1 executionContext:(id)arg2;
- (void)generateReplacementsForString:(id)arg1 candidatesHandler:(id)arg2 executionContext:(void)arg3;
- (void)continueHandleAcceptedCandidateWithOperations:(id)arg1;
- (void)handleReplyToHandleAcceptedCandidateWithTask:(id)arg1 executionContext:(void)arg2;
- (id)replyHandlerForHandleAcceptedCandidateWithExecutionContext:(SEL)arg1;
- (void)handleAcceptedCandidate:(id)arg1 executionContext:(id)arg2;
- (void)continueGenerateAutocorrectionWithOperations:(id)arg1;
- (void)handleReplyToGenerateAutocorrectionWithTask:(id)arg1 executionContext:(void)arg2;
- (id)replyHandlerForGenerateAutocorrectionWithExecutionContext:(SEL)arg1;
- (void)generateAutocorrectionWithExecutionContext:(id)arg1;
- (void)continueGenerateCandidatesAsynchronouslyWithOperations:(id)arg1;
- (void)handleReplyToGenerateCandidatesAsynchronouslyWithTask:(id)arg1;
- (id)replyHandlerForGenerateCandidatesAsynchronouslyWithSelectedCandidate:(SEL)arg1;
- (void)generateCandidatesAsynchronouslyWithMaxCandidateCount:(unsigned int)arg1 selectedCandidate:(id)arg2;
- (void)generateCandidatesAsynchronouslyWithMaxCandidateCount:(unsigned int)arg1;
- (void)generateCandidatesAsynchronously;
- (void)continueHandleKeyboardInputWithOperations:(id)arg1;
- (void)handleReplyToHandleKeyboardInputWithTask:(id)arg1 executionContext:(void)arg2;
- (id)replyHandlerForHandleKeyboardInputWithExecutionContext:(SEL)arg1;
- (void)handleKeyboardInput:(id)arg1 executionContext:(id)arg2;
- (void)continueSyncToKeyboardStateWithOperations:(id)arg1;
- (void)handleReplyToSyncToKeyboardStateWithTask:(id)arg1 executionContext:(void)arg2;
- (id)replyHandlerForSyncToKeyboardStateWithExecutionContext:(SEL)arg1;
- (void)syncInputManagerToKeyboardStateWithExecutionContext:(id)arg1;
- (void)syncInputManagerToKeyboardState;
@property(readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;
- (void)deleteHandwritingStrokesAtIndexes:(id)arg1;
- (void)selectionDidChange:(id)arg1;
- (void)completeUpdateForChangedSelection:(BOOL)arg1;
- (void)updateForChangedSelectionWithExecutionContext:(id)arg1;
- (void)updateForChangedSelection;
- (id)currentInputContextFromInputDelegateWithWordRange:(id)arg1;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (void)selectionWillChange:(id)arg1;
- (void)prepareForSelectionChange;
- (id)inputStringFromPhraseBoundary;
- (id)searchStringForMarkedText;
- (id)markedTextOverlay;
- (id)markedText;
- (BOOL)hasEditableMarkedText;
- (BOOL)hasMarkedText;
- (void)unmarkText:(id)arg1;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 inputString:(id)arg3;
- (int)_clipCornersOfView:(id)arg1;
- (void)resizeForKeyplaneSize:(struct CGSize)arg1;
- (int)interfaceOrientation;
- (void)updateLayout;
@property(readonly, nonatomic) BOOL shouldShowCandidateBar;
- (BOOL)_shouldShowCandidateBar:(BOOL)arg1;
- (BOOL)currentKeyboardTraitsAllowCandidateBar;
- (struct CGRect)subtractKeyboardFrameFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)geometryChangeDone:(BOOL)arg1;
- (void)prepareForGeometryChange;
- (void)releaseSuppressUpdateCandidateView;
- (void)updateLayoutIfNeeded;
- (BOOL)handleKeyCommand:(id)arg1 repeatOkay:(char *)arg2;
- (void)handleObserverCallback;
- (void)updateObserverState;
- (void)setChangeNotificationDisabled:(BOOL)arg1;
- (BOOL)changeNotificationDisabled;
- (void)setChanged;
- (void)textFrameChanged:(id)arg1;
- (void)callChanged;
- (void)callChangedSelection;
- (BOOL)callShouldDeleteWithWordCountForRapidDelete:(int)arg1 characterCountForRapidDelete:(int)arg2;
- (BOOL)callShouldReplaceExtendedRange:(unsigned int)arg1 withText:(id)arg2 includeMarkedText:(BOOL)arg3;
- (BOOL)callShouldInsertText:(id)arg1;
- (void)enable;
- (id)textInputTraits;
- (void)setDefaultTextInputTraits:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textChanged:(id)arg1;
- (void)layoutHasChanged;
- (void)textWillChange:(id)arg1;
- (void)storeDelegateConformance;
- (BOOL)autocorrectSpellingEnabled;
- (void)setAutocorrectSpellingEnabled:(BOOL)arg1;
- (BOOL)delegateSupportsCorrectionUI;
- (BOOL)delegateIsSMSTextView;
- (void)setDelegate:(id)arg1 force:(BOOL)arg2;
@property(retain, nonatomic) UIResponder<UIKeyInput> *delegate;
@property(readonly, nonatomic) UIResponder *delegateAsResponder;
@property(readonly, nonatomic) UIResponder<UITextInput> *inputDelegate;
@property(readonly, nonatomic) UIResponder<UITextInputPrivate> *privateInputDelegate;
@property(readonly, nonatomic) id <UIKeyboardInput> legacyInputDelegate;
- (void)takeTextInputTraitsFromDelegate;
- (void)setCorrectionLearningAllowed:(BOOL)arg1;
- (void)updateLayoutToCurrentInterfaceOrientation;
- (void)prepareLayoutForInterfaceOrientation:(int)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setOrientation;
- (void)_willMoveToWindow:(id)arg1 withAncestorView:(id)arg2;
- (void)_updateSoundPreheatingForWindow:(id)arg1;
- (id)inputModeLastChosen;
- (void)setInputModeToNextASCIICapableInPreferredList;
- (void)setInputModeToNextInPreferredList;
- (id)getLastUsedInputMode;
- (void)updateLastUsedInputMode:(id)arg1;
- (BOOL)isAllowedInputMode:(id)arg1;
- (BOOL)isDesiredInputMode:(id)arg1;
- (void)showInternationalKeyInfoAlertIfNeeded;
- (void)showInformationalAlertIfNeededForReason:(int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)arg1;
- (void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)arg1 preserveIfPossible:(BOOL)arg2;
- (void)setInputModeFromPreferences;
- (void)setInputMode:(id)arg1 userInitiated:(BOOL)arg2;
- (void)setInputMode:(id)arg1;
- (BOOL)shiftLockPreference;
- (void)setHardwareKeyboardsSeenPreference:(id)arg1;
- (id)hardwareKeyboardsSeenPreference;
- (void)setShouldUpdateCacheOnInputModesChange:(BOOL)arg1;
- (id)inputModeLastUsedForLanguage:(id)arg1;
- (id)inputModeLastUsedPreference;
- (void)setInputModeLastChosenPreference;
- (id)inputModeLastChosenPreference;
- (id)inputModeFirstPreference;
- (id)inputModePreference;
- (void)saveInputModesPreference:(id)arg1;
- (void)setAutomaticMinimizationEnabled:(BOOL)arg1;
- (BOOL)automaticMinimizationEnabled;
- (BOOL)keyboardsExpandedPreference;
- (id)UILanguagePreference;
- (BOOL)doubleSpacePeriodPreference;
- (BOOL)swipeToTabPreference;
- (BOOL)checkSpellingPreferenceForTraits;
- (BOOL)checkSpellingPreference;
- (BOOL)autocapitalizationPreference;
- (BOOL)autocorrectionPreferenceForTraits;
- (BOOL)autocorrectionPreference;
- (BOOL)performanceLoggingPreference;
- (void)cancelSplitTransition;
- (BOOL)hideAccessoryViewsDuringSplit;
- (void)setSplitProgress:(float)arg1;
- (void)setInSplitKeyboardMode:(id)arg1;
@property(readonly, nonatomic) BOOL splitTransitionInProgress;
@property(readonly) unsigned int minimumTouchesForTranslation;
@property BOOL rivenSplitLock;
- (void)refreshRivenPreferences;
- (struct CGSize)dragGestureSize;
- (struct CGRect)frameForKeylayoutName:(id)arg1;
@property(readonly) BOOL centerFilled;
- (void)defaultsDidChange;
- (void)selectionScrolling:(id)arg1;
- (void)applicationResumedEventsOnly:(id)arg1;
- (void)applicationSuspendedEventsOnly:(id)arg1;
- (void)removeFromSuperview;
- (void)clearLayouts;
@property(retain, nonatomic) TIKeyboardLayout *layoutForKeyHitTest;
- (void)refreshKeyboardState;
- (id)layoutState;
- (void)dealloc;
- (void)detach;
- (void)keyboardDidHide:(id)arg1;
- (void)delayedInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)callLayoutUpdateAllLocalizedKeys;
- (void)callLayoutUpdateLocalizedKeys;
- (void)callLayoutLongPressAction;
- (void)callLayoutSetAutoshift:(BOOL)arg1;
- (void)callLayoutSetShift:(BOOL)arg1;
- (BOOL)callLayoutIsShiftKeyBeingHeld;
- (BOOL)callLayoutIsShiftKeyPlaneChooser;
- (BOOL)callLayoutIgnoresShiftState;
- (BOOL)callLayoutUsesAutoShift;
- (void)callLayoutUpdateReturnKey;
- (void)timeElapsed:(unsigned int)arg1 message:(id)arg2;
- (void)timeMark:(unsigned int)arg1;
- (void)timeMark:(unsigned int)arg1 message:(id)arg2;
- (BOOL)isAutoDeleteActive;
- (void)testAutocorrectionPromptWithCorrection:(id)arg1;
- (int)textInputChangingCount;
- (BOOL)_isShowingCandidateUIWithAvailableCandidates;
- (void)updateFromTextInputTraits;
- (BOOL)hasAutoRepeat;
- (void)_setShiftLockedEnabled:(BOOL)arg1;
- (void)_setInputManager:(id)arg1;
- (id)_layout;
- (void)launchTypologyApplication;
- (void)installTypology;
- (BOOL)typologyEnabled;
- (void)setTextInputChangesIgnored:(BOOL)arg1;
- (void)finishSplitTransitionWithProgress:(float)arg1;
- (void)setSplit:(BOOL)arg1 animated:(BOOL)arg2;
- (id)selectionView;
- (void)setInitialDirection;
- (BOOL)_shouldMinimizeForHardwareKeyboard;
- (void)clearLanguageIndicator;
- (BOOL)keyboardDrawsOpaque;
- (void)clearExcessKeyboardMemory;
- (void)_releaseInputManager;
- (void)_resetInputLocation;
- (BOOL)_needsCandidates;
- (void)_setNeedsCandidates:(BOOL)arg1;
- (int)_positionInCandidateList:(id)arg1;
- (BOOL)_hasCandidates;
- (id)_getAutocorrection;
- (void)_setAutocorrects:(BOOL)arg1;
- (id)_getLocalizedInputMode;
- (id)_getCurrentKeyboardName;
- (id)_getCurrentKeyplaneName;
- (id)_inputForAutocorrectionCandidate;
- (void)stopKeyboardRecording;
- (void)startKeyboardRecording;
- (void)installRecorder;
- (BOOL)keyboardRecordingEnabled;

@end

