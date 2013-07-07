/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface YTProtectedDefaults : NSObject
{
    NSMutableDictionary *_internalDictionary;
    BOOL _shouldSynchronize;
    NSString *_plistPath;
}

+ (id)sharedInstance;
- (void)_protectedDataUnvailable;
- (void)_protectedDataAvailable;
- (BOOL)synchronize;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)init;

@end

