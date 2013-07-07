/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSArray, NSString;

@interface SAUIConfirmationOptions : AceObject <SAAceSerializable>
{
}

+ (id)confirmationOptionsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)confirmationOptions;
@property(copy, nonatomic) NSString *denyText;
@property(copy, nonatomic) NSArray *denyCommands;
@property(copy, nonatomic) NSString *confirmText;
@property(copy, nonatomic) NSArray *confirmCommands;
@property(copy, nonatomic) NSString *cancelTrigger;
@property(copy, nonatomic) NSArray *allConfirmationOptions;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

