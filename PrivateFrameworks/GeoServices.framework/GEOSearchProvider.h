/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface GEOSearchProvider : NSObject
{
    id _error;
}

+ (unsigned short)provider;
@property(copy, nonatomic) id error; // @synthesize error=_error;
- (void)cancel;
- (void)search:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(BOOL)arg3 finished:(id)arg4 spellingSuggestion:(void)arg5 refinement:(id)arg6 error:(void)arg7 isCompletions:(id)arg8;
- (void)dealloc;

@end

