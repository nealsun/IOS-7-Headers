/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "WebOpenPanelResultListener.h"

__attribute__((visibility("hidden")))
@interface WebOpenPanelResultListener : NSObject <WebOpenPanelResultListener>
{
    struct FileChooser *_chooser;
}

- (void)chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage *)arg3;
- (void)chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage *)arg3;
- (void)chooseFilenames:(id)arg1;
- (void)chooseFilename:(id)arg1;
- (void)cancel;
- (id)initWithChooser:(PassRefPtr_2f7011b9)arg1;

@end

