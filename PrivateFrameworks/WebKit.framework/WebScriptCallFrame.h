/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class WebScriptCallFramePrivate;

@interface WebScriptCallFrame : NSObject
{
    WebScriptCallFramePrivate *_private;
    id _userInfo;
}

- (id)evaluateWebScript:(id)arg1;
- (id)exception;
- (id)functionName;
- (id)scopeChain;
- (id)caller;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void)dealloc;
- (id)_convertValueToObjcValue:(struct JSValue)arg1;
- (void)_clearDebuggerCallFrame;
- (void)_setDebuggerCallFrame:(const struct DebuggerCallFrame *)arg1;
- (id)_initWithGlobalObject:(id)arg1 debugger:(struct WebScriptDebugger *)arg2 caller:(id)arg3 debuggerCallFrame:(const struct DebuggerCallFrame *)arg4;

@end

