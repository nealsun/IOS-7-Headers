/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSArray, NSString;

@interface SAAnswerLinkedAnswerGroup : AceObject <SAAceSerializable>
{
}

+ (id)linkedAnswerGroupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)linkedAnswerGroup;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSArray *linkedAnswers;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

