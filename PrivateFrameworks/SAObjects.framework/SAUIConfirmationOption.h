/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSArray, NSString;

@interface SAUIConfirmationOption : AceObject <SAAceSerializable>
{
}

+ (id)confirmationOptionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)confirmationOption;
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSArray *commands;
@property(nonatomic) BOOL active;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

