/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface ACDPreferences : NSObject
{
}

+ (id)sharedPreferences;
- (void)reset;
- (void)synchronize;
- (double)serverTimeoutInterval;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;

@end

