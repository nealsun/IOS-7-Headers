/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface DAAccountClassNames : NSObject
{
    NSString *_accountClassName;
    NSString *_clientAccountClassName;
    NSString *_daemonAccountClassName;
    NSString *_agentClassName;
}

@property(retain, nonatomic) NSString *agentClassName; // @synthesize agentClassName=_agentClassName;
@property(retain, nonatomic) NSString *daemonAccountClassName; // @synthesize daemonAccountClassName=_daemonAccountClassName;
@property(retain, nonatomic) NSString *clientAccountClassName; // @synthesize clientAccountClassName=_clientAccountClassName;
@property(retain, nonatomic) NSString *accountClassName; // @synthesize accountClassName=_accountClassName;
- (void)dealloc;
- (id)description;

@end

