/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SymbolParserData : NSObject
{
    int state;
    NSMutableDictionary *_dictionary;
    NSMutableArray *_symbols;
    NSString *_bufferString;
}

@property(retain, nonatomic) NSString *bufferString; // @synthesize bufferString=_bufferString;
@property(retain, nonatomic) NSMutableArray *symbols; // @synthesize symbols=_symbols;
@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;

@end

