/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SADomainObject.h>

@class NSString, SAWebWebSearchResult;

@interface SAWebObject : SADomainObject
{
}

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@property(retain, nonatomic) SAWebWebSearchResult *results;
@property(copy, nonatomic) NSString *query;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

