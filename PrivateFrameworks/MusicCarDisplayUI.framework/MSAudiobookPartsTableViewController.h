/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MusicCarDisplayUI/MSTableViewController.h>

@class NSNumberFormatter, NSString;

@interface MSAudiobookPartsTableViewController : MSTableViewController
{
    NSNumberFormatter *_formatter;
    NSString *_numberOfParts;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;

@end

