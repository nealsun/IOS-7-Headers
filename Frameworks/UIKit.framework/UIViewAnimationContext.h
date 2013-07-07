/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIViewAnimationContext : NSObject
{
    NSArray *_viewAnimations;
    int _animationCount;
    id _completionHandler;
}

@property(readonly, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) int animationCount; // @synthesize animationCount=_animationCount;
@property(retain, nonatomic) NSArray *viewAnimations; // @synthesize viewAnimations=_viewAnimations;
- (void)dealloc;
- (id)initWithCompletionHandler:(id)arg1;

@end

