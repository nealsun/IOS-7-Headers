/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface IMPersonRegistrar : NSObject
{
    NSMutableDictionary *_personMap;
}

+ (id)sharedInstance;
@property(retain) NSMutableDictionary *_personMap; // @synthesize _personMap;
- (void)_dumpAllPersons;
- (id)personForUniqueID:(id)arg1;
- (void)unregisterPerson:(id)arg1;
- (void)registerPerson:(id)arg1;
- (void)dealloc;

@end

