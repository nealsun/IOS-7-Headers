/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVGrantItem : CoreDAVItem
{
    NSMutableSet *_privileges;
}

+ (id)copyParseRules;
@property(retain) NSMutableSet *privileges; // @synthesize privileges=_privileges;
- (void)addPrivilege:(id)arg1;
- (void)write:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

