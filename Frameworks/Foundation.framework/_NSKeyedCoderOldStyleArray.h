/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _NSKeyedCoderOldStyleArray : NSObject
{
    void *_addr;
    unsigned int _count;
    unsigned int _size;
    BOOL _type;
    BOOL _decoded;
    char _padding[2];
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fillObjCType:(BOOL)arg1 count:(unsigned int)arg2 at:(void *)arg3;
- (void)finalize;
- (void)dealloc;
- (id)initWithObjCType:(BOOL)arg1 count:(unsigned int)arg2 at:(const void *)arg3;

@end

