/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, NSURLRequest, NSURLResponse;

__attribute__((visibility("hidden")))
@interface WebNavigationDataPrivate : NSObject
{
    NSString *url;
    NSString *title;
    NSURLRequest *originalRequest;
    NSURLResponse *response;
    BOOL hasSubstituteData;
    NSString *clientRedirectSource;
}

- (void)dealloc;

@end

