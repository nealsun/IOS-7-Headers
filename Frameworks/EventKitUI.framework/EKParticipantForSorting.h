/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class EKParticipant, NSString;

@interface EKParticipantForSorting : NSObject
{
    EKParticipant *_participant;
    BOOL _isEmail;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_cachedDisplayName;
}

- (void).cxx_destruct;
- (id)description;
- (int)compare:(id)arg1;
- (id)lastName;
- (id)firstName;
- (id)displayName;
- (BOOL)isEmail;
- (id)participant;
- (id)initWithEKParticipant:(id)arg1;

@end

