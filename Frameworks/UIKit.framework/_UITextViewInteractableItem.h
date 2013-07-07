/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIActionSheetDelegate.h"
#import "_UIRotatingActionSheetDelegate.h"

@class NSArray, NSDictionary, NSString, UITextView, _UIRotatingActionSheet;

__attribute__((visibility("hidden")))
@interface _UITextViewInteractableItem : NSObject <_UIRotatingActionSheetDelegate, UIActionSheetDelegate>
{
    _UIRotatingActionSheet *_linkInteractionSheet;
    UITextView *_textView;
    NSArray *_actions;
    NSDictionary *_defaultAction;
    struct _NSRange _range;
}

@property(readonly, nonatomic) NSDictionary *defaultAction; // @synthesize defaultAction=_defaultAction;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)_handleActionAndFinish:(id)arg1;
- (struct CGRect)presentationRectInHostViewForSheet:(id)arg1;
- (struct CGRect)initialPresentationRectInHostViewForSheet:(id)arg1;
- (id)hostViewForSheet:(id)arg1;
- (void)_showActionSheet;
@property(readonly, nonatomic) NSString *localizedTitle;
- (BOOL)allowInteraction;
- (void)handleLongPress;
- (void)handleTap;
- (id)_actionSheet;

@end

