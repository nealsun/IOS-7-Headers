/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, NSURL, SAMicroblogTwitterPostAuthor, SASnippetSubtitle, SAUIAppPunchOut;

@interface SAMicroblogAceMicroblogSearchResult : SADomainObject
{
}

+ (id)aceMicroblogSearchResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)aceMicroblogSearchResult;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@property(copy, nonatomic) NSURL *webAddress;
@property(copy, nonatomic) NSArray *resultUsers;
@property(retain, nonatomic) SASnippetSubtitle *resultSummary;
@property(copy, nonatomic) NSArray *resultPosts;
@property(copy, nonatomic) NSArray *resultNews;
@property(copy, nonatomic) NSString *query;
@property(retain, nonatomic) SAUIAppPunchOut *punchOut;
@property(retain, nonatomic) SAMicroblogTwitterPostAuthor *globalAuthor;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

