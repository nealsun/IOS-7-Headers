/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SAUISetSuggestedUtterances : SABaseClientBoundCommand
{
}

+ (id)setSuggestedUtterancesWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setSuggestedUtterances;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *utterances;
@property(copy, nonatomic) NSString *language;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

