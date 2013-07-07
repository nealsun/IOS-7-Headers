/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSSet;

@interface SSMetricsConfiguration : NSObject
{
    NSSet *_blacklistedEvents;
    SSMetricsConfiguration *_childConfiguration;
    NSDictionary *_config;
    NSMutableDictionary *_eventFieldsUnion;
    NSDictionary *_fields;
    BOOL _disabled;
    BOOL _sendDisabled;
}

@property(retain, nonatomic) SSMetricsConfiguration *childConfiguration; // @synthesize childConfiguration=_childConfiguration;
- (BOOL)_configBooleanForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (id)tokenStringWithElements:(id)arg1;
- (id)reportingURLString;
- (double)reportingFrequency;
- (id)pingURLs;
- (BOOL)isSendDisabled;
- (BOOL)isEventTypeBlacklisted:(id)arg1;
- (BOOL)isDisabled;
- (id)compoundStringWithElements:(id)arg1;
- (id)eventFields;
- (id)blacklistedEventFields;
- (void)dealloc;
- (id)initWithStorePlatformData:(id)arg1;
- (id)initWithGlobalConfiguration:(id)arg1;

@end

