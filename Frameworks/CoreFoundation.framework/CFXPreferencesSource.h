/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface CFXPreferencesSource : NSObject
{
    struct __CFDictionary *_dict;
    long _generationCount;
    BOOL _disabled;
}

- (void)finalize;
- (void)dealloc;
- (void)setDisabled:(BOOL)arg1;
- (long)generationCount;
- (struct __CFDictionary *)copyDictionary;
- (struct __CFArray *)copyKeyList;
- (unsigned char)synchronize;
- (void)setValue:(void *)arg1 forKey:(struct __CFString *)arg2;
- (void *)getValueForKey:(struct __CFString *)arg1;
- (id)init;

@end

