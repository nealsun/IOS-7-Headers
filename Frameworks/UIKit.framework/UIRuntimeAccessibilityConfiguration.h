/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface UIRuntimeAccessibilityConfiguration : NSObject
{
    NSString *accessibilityConfigurationHint;
    NSString *accessibilityConfigurationLabel;
    NSNumber *accessibilityConfigurationTraits;
    NSNumber *isAccessibilityConfigurationElement;
    NSObject *object;
}

@property(retain, nonatomic) NSObject *object; // @synthesize object;
@property(retain, nonatomic) NSNumber *isAccessibilityConfigurationElement; // @synthesize isAccessibilityConfigurationElement;
@property(retain, nonatomic) NSNumber *accessibilityConfigurationTraits; // @synthesize accessibilityConfigurationTraits;
@property(retain, nonatomic) NSString *accessibilityConfigurationLabel; // @synthesize accessibilityConfigurationLabel;
@property(retain, nonatomic) NSString *accessibilityConfigurationHint; // @synthesize accessibilityConfigurationHint;
- (void)applyConfiguration;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 label:(id)arg2 hint:(id)arg3 traits:(id)arg4 andIsAccessibilityElement:(id)arg5;

@end

