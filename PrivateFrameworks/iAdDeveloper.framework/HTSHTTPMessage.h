/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSMutableDictionary, NSString;

@interface HTSHTTPMessage : NSObject
{
    NSMutableDictionary *_headers;
    NSData *_body;
    NSString *_versionString;
}

@property(copy, nonatomic) NSString *versionString; // @synthesize versionString=_versionString;
@property(retain, nonatomic) NSData *body; // @synthesize body=_body;
@property(retain, nonatomic) NSMutableDictionary *headers; // @synthesize headers=_headers;
- (id)valueForHeaderField:(id)arg1;
- (struct __CFHTTPMessage *)copyMessage;
- (void)addHeadersToMessage:(struct __CFHTTPMessage *)arg1;
- (void)dealloc;

@end

