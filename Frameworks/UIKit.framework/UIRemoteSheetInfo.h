/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class UISpringBoardHostedView, UIView;

__attribute__((visibility("hidden")))
@interface UIRemoteSheetInfo : NSObject
{
    UIView *_sheetView;
    UISpringBoardHostedView *_remoteView;
    id _delegate;
    SEL _selector;
    void *_context;
    int _returnCode;
}

@property(nonatomic) int returnCode; // @synthesize returnCode=_returnCode;
@property(nonatomic) void *context; // @synthesize context=_context;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UISpringBoardHostedView *remoteView; // @synthesize remoteView=_remoteView;
@property(retain, nonatomic) UIView *sheetView; // @synthesize sheetView=_sheetView;
- (void)dealloc;

@end

