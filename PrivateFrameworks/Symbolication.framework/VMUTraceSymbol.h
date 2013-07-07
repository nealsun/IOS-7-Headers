/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface VMUTraceSymbol : NSObject
{
    unsigned long long address;
    NSString *name;
    NSString *library;
    NSString *filename;
    int lineNumber;
}

- (BOOL)readFromFile:(struct __sFILE *)arg1;
- (void)writeToFile:(struct __sFILE *)arg1;
- (int)lineNumber;
- (id)filename;
- (id)library;
- (id)name;
- (id)initWithCString:(char *)arg1 length:(long)arg2 withLine:(int)arg3;
- (id)initWithPC:(unsigned long long)arg1 withSymbolicator:(struct _CSTypeRef)arg2;

@end

