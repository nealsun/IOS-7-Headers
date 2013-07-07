/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSDeserializerStream.h"

@interface NSAKDeserializerStream : NSObject <NSDeserializerStream>
{
    const void *memory;
    const char *current;
    unsigned int left;
    unsigned int max;
    BOOL freeWhenDone;
}

- (void)readData:(void *)arg1 length:(unsigned int)arg2;
- (unsigned int)readAlignedDataSize;
- (int)readInt;
- (id)initFromPath:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initFromMemoryNoCopy:(const void *)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;

@end
