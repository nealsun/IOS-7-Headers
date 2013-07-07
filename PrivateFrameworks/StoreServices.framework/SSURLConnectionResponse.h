/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "SSXPCCoding.h"

@class NSData, NSDictionary, NSString, NSURL;

@interface SSURLConnectionResponse : NSObject <SSXPCCoding>
{
    NSDictionary *_allHeaderFields;
    NSData *_body;
    long long _expectedContentLength;
    NSString *_mimeType;
    int _statusCode;
    NSString *_suggestedFilename;
    NSString *_textEncodingName;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(readonly, nonatomic) NSString *textEncodingName; // @synthesize textEncodingName=_textEncodingName;
@property(readonly, nonatomic) NSString *suggestedFilename; // @synthesize suggestedFilename=_suggestedFilename;
@property(readonly, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_mimeType;
@property(readonly, nonatomic) long long expectedContentLength; // @synthesize expectedContentLength=_expectedContentLength;
@property(readonly, nonatomic) NSData *bodyData; // @synthesize bodyData=_body;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
@property(readonly, nonatomic) NSData *databaseEncoding;
- (id)initWithDatabaseEncoding:(id)arg1;
- (int)statusCode;
- (id)allHeaderFields;
- (void)dealloc;
- (id)initWithURLResponse:(id)arg1 bodyData:(id)arg2;

@end

