/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSData.h"

__attribute__((visibility("hidden")))
@interface _NSDispatchData : NSData
{
}

+ (BOOL)supportsSecureCoding;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)_allowsDirectEncoding;
- (BOOL)_isDispatchData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (struct _NSRange)rangeOfData:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (unsigned int)hash;
- (BOOL)isEqualToData:(id)arg1;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)enumerateByteRangesUsingBlock:(id)arg1;
- (void)getBytes:(void *)arg1 length:(unsigned int)arg2;
- (void)getBytes:(void *)arg1;
- (const void *)bytes;
- (const void *)_bytesIfCompact;
- (unsigned int)length;

@end

