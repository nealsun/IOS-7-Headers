/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface WDStory : NSObject
{
    OADDrawable *mHead;
    BOOL mOle;
}

- (BOOL)isOle;
- (void)setOle:(BOOL)arg1;
- (id)text;
- (id)head;
- (void)dealloc;
- (id)initWithHead:(id)arg1;

@end

