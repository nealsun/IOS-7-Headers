/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSMetadataQueryAttributeValueTuple : NSObject
{
    id _attr;
    id _value;
    unsigned int _count;
    void *_reserved;
}

- (unsigned int)count;
- (id)value;
- (id)attribute;
- (void)dealloc;
- (id)_init:(id)arg1 attribute:(id)arg2 value:(id)arg3 count:(unsigned int)arg4;

@end

