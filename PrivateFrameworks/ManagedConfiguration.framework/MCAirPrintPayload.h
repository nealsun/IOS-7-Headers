/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSMutableArray;

@interface MCAirPrintPayload : MCPayload
{
    unsigned int _airPrintCount;
    NSMutableArray *_ippAddresses;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(retain, nonatomic) NSMutableArray *ippAddresses; // @synthesize ippAddresses=_ippAddresses;
@property(nonatomic) unsigned int airPrintCount; // @synthesize airPrintCount=_airPrintCount;
- (void).cxx_destruct;
- (id)restrictions;
- (id)description;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

