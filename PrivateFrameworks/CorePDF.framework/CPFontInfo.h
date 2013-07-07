/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "CPDisposable.h"

@interface CPFontInfo : NSObject <CPDisposable>
{
    struct __CFData *fontData;
    const char *dataPtr;
    unsigned int offset;
    unsigned int fontDataLength;
    BOOL valid;
}

- (struct __CFData *)newKernData;
- (int)kernUnitsPerEm;
- (BOOL)getDescriptor:(CDStruct_8bce2348 *)arg1;
- (struct CGRect)readRect;
- (float)readFloat;
- (int)readLong;
- (unsigned int)readUnsignedLong;
- (unsigned char)readByte;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithFontData:(struct __CFData *)arg1;

@end

