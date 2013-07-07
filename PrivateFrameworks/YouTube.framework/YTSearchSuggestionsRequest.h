/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <YouTube/YTXMLHTTPRequest.h>

@class NSMutableArray, NSString;

@interface YTSearchSuggestionsRequest : YTXMLHTTPRequest
{
    id _delegate;
    NSMutableArray *_suggestions;
    NSString *_query;
}

- (void)clearDelegate;
- (void)failWithError:(id)arg1;
- (void)requestSuggestionsWithDelegate:(id)arg1 query:(id)arg2;
- (id)_suggestionsURLForQuery:(id)arg1;
- (void)didAuthenticate:(id)arg1;
- (void)didParseData;
- (int)parseData:(id)arg1;
- (void)dealloc;

@end

