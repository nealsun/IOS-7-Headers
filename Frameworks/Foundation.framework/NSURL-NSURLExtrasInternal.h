/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSURL.h"

@interface NSURL (NSURLExtrasInternal)
+ (id)_URLWithData:(id)arg1 relativeToURL:(id)arg2;
+ (id)_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
- (id)_hostString;
- (id)_URLByEscapingSpacesAndControlChars;
- (id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;
- (id)_web_URLByRemovingUserAndPath_nowarn;
- (id)_web_URLByRemovingLastPathComponent_nowarn;
@end

