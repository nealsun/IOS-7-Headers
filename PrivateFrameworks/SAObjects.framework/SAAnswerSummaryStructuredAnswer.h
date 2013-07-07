/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SAAnswerStructuredAnswer.h"

@class NSArray, NSString, NSURL;

@interface SAAnswerSummaryStructuredAnswer : AceObject <SAAnswerStructuredAnswer>
{
}

+ (id)summaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)summaryStructuredAnswer;
@property(copy, nonatomic) NSString *titleAnnotation;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSString *imageCaption;
@property(copy, nonatomic) NSURL *image;
@property(copy, nonatomic) NSString *category; // @dynamic category;
@property(copy, nonatomic) NSArray *answerPropertyGroups;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

