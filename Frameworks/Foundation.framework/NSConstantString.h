/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Foundation/NSSimpleCString.h>

@interface NSConstantString : NSSimpleCString
{
}

- (const char *)lossyCString;
- (const char *)cString;
- (void)finalize;
- (void)dealloc;
- (oneway void)release;
- (unsigned int)retainCount;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)retain;
- (id)autorelease;
- (unsigned int)hash;
- (int)compare:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (BOOL)isEqualToString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (BOOL)canBeConvertedToEncoding:(unsigned int)arg1;
- (unsigned int)smallestEncoding;
- (unsigned int)fastestEncoding;
- (unsigned int)cStringLength;
- (unsigned int)length;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned int)arg2;

@end

