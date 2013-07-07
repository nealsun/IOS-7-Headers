/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Foundation/NSMapTable.h>

__attribute__((visibility("hidden")))
@interface NSConcreteMapTable : NSMapTable
{
    struct NSSlice keys;
    struct NSSlice values;
    unsigned int count;
    unsigned int capacity;
    unsigned int keyOptions;
    unsigned int valueOptions;
    unsigned int mutations;
    int growLock;
    _Bool shouldRehash;
}

- (id)allValues;
- (id)allKeys;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (unsigned int)getKeys:(const void **)arg1 values:(const void **)arg2;
- (id)objectEnumerator;
- (id)keyEnumerator;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (void)removeAllItems;
- (void)removeObjectForKey:(id)arg1;
- (void)rehash;
- (unsigned int)rehashAround:(unsigned int)arg1;
- (void)replaceItem:(const void *)arg1 forExistingKey:(const void *)arg2;
- (BOOL)mapMember:(const void *)arg1 originalKey:(const void **)arg2 value:(const void **)arg3;
- (void *)existingItemForSetItem:(const void *)arg1 forAbsentKey:(const void *)arg2;
- (void)setItem:(const void *)arg1 forKnownAbsentKey:(const void *)arg2;
- (void)setItem:(const void *)arg1 forAbsentKey:(const void *)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)assign:(unsigned int)arg1 key:(const void *)arg2 value:(const void *)arg3 isNew:(BOOL)arg4;
- (void)grow;
- (id)dump;
- (BOOL)containsKeys:(const void **)arg1 values:(const void **)arg2 count:(unsigned int)arg3;
- (unsigned int)count;
- (id)valuePointerFunctions;
- (id)keyPointerFunctions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned int)arg3;
- (id)initWithKeyOptions:(unsigned int)arg1 valueOptions:(unsigned int)arg2 capacity:(unsigned int)arg3;
- (id)copy;
- (void)_setBackingStore;
- (void)_initBlock;
- (void)zeroPairedEntries;
- (void)checkCount:(const char *)arg1;
- (unsigned int)realCount;
- (void)raiseCountUnderflowException;
- (id)init;

@end

