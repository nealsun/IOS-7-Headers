/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Foundation/NSXPCCoder.h>

@class NSObject<OS_xpc_object>, NSXPCConnection, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface NSXPCDecoder : NSXPCCoder
{
    NSObject<OS_xpc_object> *_oolObjects;
    NSXPCInterface *_interface;
    SEL _replyToSelector;
    unsigned long long _genericIndex;
    void **_decoder;
    NSXPCConnection *_connection;
    struct *_collections[128];
    struct {
        unsigned int offset;
        int type;
    } _rootObject;
    unsigned int _collectionPointer;
    struct __CFSet *_cache;
    id _allowedClassesList[128];
    int _allowedClassesIndex;
}

@property NSXPCConnection *_connection; // @synthesize _connection;
@property SEL replyToSelector; // @synthesize replyToSelector=_replyToSelector;
@property(retain) NSXPCInterface *interface; // @synthesize interface=_interface;
- (id)decodeXPCObjectForKey:(id)arg1;
- (const char *)_decodeCStringForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned int *)arg2;
- (int)decodeIntegerForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (BOOL)decodeBoolForKey:(id)arg1;
- (id)_decodeArrayOfObjectsForKey:(id)arg1;
- (id)allowedClasses;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectForKey:(id)arg1;
- (BOOL)containsValueForKey:(id)arg1;
- (id)decodeInvocation;
- (id)decodeObject;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (void)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(BOOL)arg3;
- (BOOL)allowsKeyedCoding;
- (id)debugDescription;
- (void)_setCache:(struct __CFSet *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)_initWithRootXPCObject:(id)arg1;

@end

