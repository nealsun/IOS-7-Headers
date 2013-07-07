/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSHTTPCookieInternal;

@interface NSHTTPCookie : NSObject
{
    NSHTTPCookieInternal *_cookiePrivate;
}

+ (id)cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2;
+ (id)requestHeaderFieldsWithCookies:(id)arg1;
+ (struct __CFArray *)_ns2cfCookies:(id)arg1;
+ (id)_cf2nsCookies:(struct __CFArray *)arg1;
+ (id)cookieWithCFHTTPCookie:(struct OpaqueCFHTTPCookie *)arg1;
+ (id)cookieWithProperties:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (BOOL)_isExpired;
- (id)_key;
- (int)_compareForHeaderOrder:(id)arg1;
- (id)MaxAge;
- (id)Port;
- (id)Discard;
- (id)Secure;
- (id)Version;
- (id)OriginURL;
- (id)CommentURL;
- (id)Comment;
- (id)Expires;
- (id)Path;
- (id)Domain;
- (id)Value;
- (id)Name;
- (id)portList;
- (id)commentURL;
- (id)comment;
- (id)path;
- (id)domain;
- (id)value;
- (id)name;
- (id)expiresDate;
- (BOOL)isHTTPOnly;
- (BOOL)isSecure;
- (BOOL)isSessionOnly;
- (unsigned int)version;
- (struct OpaqueCFHTTPCookie *)_GetInternalCFHTTPCookie;
- (id)properties;
- (void)dealloc;
- (id)init;
- (id)initWithCFHTTPCookie:(struct OpaqueCFHTTPCookie *)arg1;
- (id)initWithProperties:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;

@end

