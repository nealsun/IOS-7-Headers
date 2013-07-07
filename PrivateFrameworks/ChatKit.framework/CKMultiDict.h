/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface CKMultiDict : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    unsigned int _count;
    NSMutableDictionary *_dictionary;
}

@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue; // @synthesize lockQueue=_lockQueue;
- (id)allKeys;
- (unsigned int)count;
- (void)removeAllObjects;
- (void)removeObjectsForKey:(id)arg1;
- (id)objectsForKey:(id)arg1;
- (id)dequeueObjectForKey:(id)arg1;
- (id)headObjectForKey:(id)arg1;
- (void)enqueueObject:(id)arg1 forKey:(id)arg2;
- (id)popObjectForKey:(id)arg1;
- (id)peekObjectForKey:(id)arg1;
- (void)pushObject:(id)arg1 forKey:(id)arg2;
- (id)description;
- (id)init;
- (void)dealloc;

@end

