/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSURL;

@interface SKStorePageRequest : NSObject
{
    int _pageStyle;
    NSDictionary *_productParameters;
    NSURL *_productURL;
}

@property(copy, nonatomic) NSURL *productURL; // @synthesize productURL=_productURL;
@property(copy, nonatomic) NSDictionary *productParameters; // @synthesize productParameters=_productParameters;
@property(nonatomic) int productPageStyle; // @synthesize productPageStyle=_pageStyle;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)dealloc;

@end

