/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SABaseCommand.h>

#import "SAServerBoundCommand.h"

@class NSArray, NSString;

@interface SAClockSearchCompleted : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)searchCompletedWithResults:(id)arg1;
+ (id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)searchCompleted;
@property(copy, nonatomic) NSArray *results;
- (id)initWithResults:(id)arg1;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;

@end

