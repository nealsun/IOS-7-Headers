/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol SCROBrailleDriverProtocol <NSObject>
- (BOOL)setStatusCells:(const char *)arg1 length:(int)arg2;
- (BOOL)setMainCells:(const char *)arg1 length:(int)arg2;
- (int)statusSize;
- (int)mainSize;
- (id)getInputEvents;
- (int)brailleInputMode;
- (BOOL)postsKeyboardEvents;
- (BOOL)isInputEnabled;
- (BOOL)supportsBlinkingCursor;
- (id)modelIdentifier;
- (BOOL)isSleeping;
- (BOOL)isDriverLoaded;
- (BOOL)unloadDriver;
- (int)loadDriverWithIOElement:(id)arg1;
- (unsigned int)interfaceVersion;
@end

