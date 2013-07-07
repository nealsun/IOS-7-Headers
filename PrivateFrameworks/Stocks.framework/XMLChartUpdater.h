/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Stocks/XMLHTTPRequest.h>

@class Stock, StockChartData, XMLChartParserData;

@interface XMLChartUpdater : XMLHTTPRequest
{
    id _delegate;
    Stock *_stock;
    int _interval;
    StockChartData *_currentChartData;
    XMLChartParserData *_chartParserData;
}

+ (id)_rangeStringForInterval:(int)arg1;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)aggregateDictionaryDomain;
- (void)failWithError:(id)arg1;
- (void)didParseData;
- (int)parseData:(id)arg1;
- (BOOL)updateChartForStock:(id)arg1 interval:(int)arg2;
- (void)cancel;
- (id)init;

@end

