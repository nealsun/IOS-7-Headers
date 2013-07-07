/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "CoreDAVItem.h"

@class ICSDateValue, NSString;

@interface CalDAVCalendarServerDeletedDetailsItem : CoreDAVItem
{
    NSString *_componentType;
    NSString *_summary;
    NSString *_displayName;
    ICSDateValue *_nextInstance;
    BOOL _hadMoreInstances;
}

@property BOOL hadMoreInstances; // @synthesize hadMoreInstances=_hadMoreInstances;
@property(retain) ICSDateValue *nextInstance; // @synthesize nextInstance=_nextInstance;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSString *summary; // @synthesize summary=_summary;
@property(retain) NSString *componentType; // @synthesize componentType=_componentType;
- (id)copyParseRules;
- (void)setHadMoreInstancesItem:(id)arg1;
- (void)setNextInstanceItem:(id)arg1;
- (void)setDisplayNameItem:(id)arg1;
- (void)setSummaryItem:(id)arg1;
- (void)setComponentTypeItem:(id)arg1;
- (void)dealloc;
- (id)init;

@end

