/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SABaseCommand.h>

#import "SAServerBoundCommand.h"

@class NSString;

@interface SASSpeechCorrectionStatistics : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)speechCorrectionStatisticsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)speechCorrectionStatistics;
@property(copy, nonatomic) NSString *sessionId;
@property(copy, nonatomic) NSString *interactionId;
@property(nonatomic) int characterChangeCount;
@property(nonatomic) int alternativeSelectCount;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;

@end

