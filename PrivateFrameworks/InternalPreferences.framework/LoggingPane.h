/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PSEditingPane.h"

#import "MFMailComposeViewControllerDelegate.h"

@class MFMailComposeViewController, NSLock, NSString, NSTimer, PSRootController, UITextView;

@interface LoggingPane : PSEditingPane <MFMailComposeViewControllerDelegate>
{
    UITextView *_textView;
    BOOL _threadRunning;
    BOOL _timeout;
    BOOL _fileError;
    BOOL _dontScroll;
    NSLock *_lock;
    NSTimer *_timer;
    NSString *_output;
    PSRootController *_rootController;
    MFMailComposeViewController *_mailComposeController;
    int _sendingEmailCount;
}

+ (id)systemVersionDescription;
- (void)saveLogFile;
- (void)setPreferenceSpecifier:(id)arg1;
- (id)textView;
- (void)startTimer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)stopTimer;
- (void)dealloc;
- (BOOL)handlesDoneButton;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)emailButtonClicked;
- (void)_finished:(id)arg1;
- (void)_pipeThread:(id)arg1;
- (void)_aslQuery:(id)arg1;
- (void)_run;
- (void)_updateText:(id)arg1;
- (void)_showAlertForFailedCommand:(id)arg1;

@end

