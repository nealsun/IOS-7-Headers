/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class ICSCalendar;

@interface ICSDocument : NSObject
{
    ICSCalendar *_calendar;
}

+ (void)suppressParserSyntaxErrorLogging;
+ (int)ICSChecksumVersionSpecifiedInOptions:(unsigned int)arg1;
- (BOOL)validate:(id *)arg1;
- (id)ICSChecksumForVersion:(int)arg1;
- (id)ICSChecksumStringForVersion:(int)arg1;
- (id)ICSStringWithOptions:(unsigned int)arg1;
- (id)ICSDataWithOptions:(unsigned int)arg1;
- (id)calendar;
- (void)dealloc;
- (id)initWithCalendar:(id)arg1;
- (id)initWithData:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithData:(id)arg1 encoding:(unsigned int)arg2 options:(unsigned int)arg3 error:(id *)arg4;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithICSString:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;

@end

