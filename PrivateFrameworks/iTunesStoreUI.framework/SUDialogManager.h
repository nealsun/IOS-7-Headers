/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "ISSingleton.h"
#import "SUDialogDelegate.h"

@class NSMutableArray;

@interface SUDialogManager : NSObject <ISSingleton, SUDialogDelegate>
{
    NSMutableArray *_dialogs;
}

+ (id)newDialogWithError:(id)arg1;
+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
- (void)_performDefaultActionForDialog:(id)arg1 buttonIndex:(int)arg2;
- (BOOL)_haveEquivalentDialog:(id)arg1;
- (void)_finishDialog:(id)arg1 withButtonIndex:(int)arg2;
- (void)dialogDidCancel:(id)arg1;
- (void)dialog:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (BOOL)presentDialogForError:(id)arg1 withCompletionBlock:(id)arg2;
- (BOOL)presentDialogForError:(id)arg1;
- (BOOL)presentDialog:(id)arg1 withCompletionBlock:(id)arg2;
- (BOOL)presentDialog:(id)arg1;
@property(readonly, nonatomic) int numberOfPendingDialogs;
- (void)dealloc;

@end

