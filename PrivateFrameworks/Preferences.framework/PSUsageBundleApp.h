/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface PSUsageBundleApp : NSObject
{
    NSString *_name;
    NSString *_bundleIdentifier;
    NSArray *_categories;
    float _totalSize;
    id <PSStorageReporting> _usageBundleStorageReporter;
}

+ (id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2 andCategories:(id)arg3;
+ (id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2;
@property(retain, nonatomic) id <PSStorageReporting> usageBundleStorageReporter; // @synthesize usageBundleStorageReporter=_usageBundleStorageReporter;
@property(nonatomic) float totalSize; // @synthesize totalSize=_totalSize;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;

@end

