/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSString, SUScriptNavigationController, SUScriptNavigationItem, SUScriptPopOver, SUScriptSection, SUScriptSplitViewController, UIViewController;

@interface SUScriptViewController : SUScriptObject
{
    NSArray *_scriptToolbarItems;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (int)_transitionForString:(id)arg1;
- (void)_presentModalViewController:(id)arg1 withTransition:(id)arg2;
- (void)_dismissModalViewControllerWithTransition:(id)arg1;
- (void)_dismissModalViewControllerAnimated:(BOOL)arg1;
@property(readonly) NSString *modalPresentationStyleNameFullScreen;
@property(readonly) NSString *modalPresentationStyleNameFormSheet;
@property id wantsFullScreenLayout;
@property id usesBlurredBackground;
@property(retain) SUScriptViewController *transientViewController;
@property(retain) id topBackgroundColor;
@property(copy) id toolbarItems;
@property(readonly) SUScriptSplitViewController *splitViewController;
@property id showsLibraryButton;
@property(retain) SUScriptSection *section;
@property(retain) NSString *modalPresentationStyle;
@property(retain) SUScriptViewController *inputAccessoryViewController;
@property(retain) id backgroundColor;
@property(readonly) SUScriptViewController *presentingViewController;
@property(readonly) SUScriptPopOver *popOver;
@property(readonly) SUScriptNavigationItem *navigationItem;
@property(readonly) SUScriptNavigationController *navigationController;
@property(readonly) SUScriptViewController *modalViewController;
- (id)_className;
@property(readonly) NSString *contextDictionary;
- (void)setToolbarItems:(id)arg1 animated:(BOOL)arg2;
- (void)runScrollTest:(id)arg1 withDelta:(float)arg2 forIterations:(int)arg3;
- (void)presentModalViewController:(id)arg1 withTransition:(id)arg2;
- (void)dismissModalViewControllerWithTransition:(id)arg1;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)tearDownUserInterface;
- (BOOL)equals:(id)arg1;
@property(retain, nonatomic) UIViewController *nativeViewController;
- (id)newNativeViewController;
- (id)newScriptColorWithValue:(id)arg1;
- (void)dealloc;
- (id)_parentViewControllerForVolumeViewController;
- (void)presentVolumeViewController:(id)arg1 animated:(id)arg2;
- (void)dismissVolumeViewControllerAnimated:(id)arg1;
@property(readonly) SUScriptViewController *volumeViewController;

@end

