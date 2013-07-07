/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Foundation/NSString.h>

@interface NSMutableString : NSString
{
}

+ (id)stringWithCapacity:(unsigned int)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (id)initWithCapacity:(unsigned int)arg1;
- (Class)classForCoder;
- (unsigned int)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange)arg4;
- (void)setString:(id)arg1;
- (void)appendFormat:(id)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withCharacters:(const unsigned short *)arg2 length:(unsigned int)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withCString:(const char *)arg2 length:(unsigned int)arg3;
- (void)deleteCharactersInRange:(struct _NSRange)arg1;
- (void)appendString:(id)arg1;
- (void)insertString:(id)arg1 atIndex:(unsigned int)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)_cfNormalize:(long)arg1;
- (void)_cfTrimWS;
- (void)_trimWithCharacterSet:(id)arg1;
- (void)_cfTrim:(struct __CFString *)arg1;
- (void)_cfPad:(struct __CFString *)arg1 length:(unsigned int)arg2 padIndex:(unsigned int)arg3;
- (void)_cfCapitalize:(const void *)arg1;
- (void)_cfUppercase:(const void *)arg1;
- (void)_cfLowercase:(const void *)arg1;
- (void)_cfAppendCString:(const char *)arg1 length:(int)arg2;
- (void)appendCharacters:(const unsigned short *)arg1 length:(unsigned int)arg2;
- (unsigned int)_replaceOccurrencesOfRegularExpressionPattern:(id)arg1 withTemplate:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange)arg4;

@end

