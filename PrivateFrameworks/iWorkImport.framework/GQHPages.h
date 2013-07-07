/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQPagesGenerator.h"

__attribute__((visibility("hidden")))
@interface GQHPages : NSObject <GQPagesGenerator>
{
}

+ (void)mapCurrentHiddenPositioningFooterFromPublication:(id)arg1 state:(id)arg2;
+ (void)mapCurrentHeaderAndFooterFromPublication:(id)arg1 state:(id)arg2;
+ (int)setCurrentPageIndex:(int)arg1 state:(id)arg2;
+ (int)handleSectionStyle:(id)arg1 pageIndex:(int)arg2 numPages:(int)arg3 state:(id)arg4;
+ (int)handleFooters:(struct __CFArray *)arg1 state:(id)arg2;
+ (int)handleHeaders:(struct __CFArray *)arg1 state:(id)arg2;
+ (Class)enterBodyStorage:(id)arg1;
+ (Class)enterMainDrawablesForPage:(unsigned int)arg1 state:(id)arg2;
+ (int)handleStylesheet:(id)arg1 state:(id)arg2;
+ (int)handlePageSetup:(id)arg1 state:(id)arg2;
+ (int)endPublication:(id)arg1 state:(id)arg2;
+ (int)beginPublication:(id)arg1 state:(id)arg2;
+ (void)mapHeaderOrFooter:(id)arg1 isHeader:(BOOL)arg2 toPublication:(id)arg3 state:(id)arg4;
+ (void)handlePagesOrders:(id)arg1;
+ (void)handleZOrder:(unsigned int)arg1 cssClassName:(struct __CFString *)arg2 state:(id)arg3;

@end

