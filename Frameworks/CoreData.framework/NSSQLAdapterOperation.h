/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSSQLCorrelation, NSSQLRow;

__attribute__((visibility("hidden")))
@interface NSSQLAdapterOperation : NSObject
{
    unsigned int _adapterOperator;
    NSSQLRow *_row;
    NSSQLCorrelation *_correlation;
}

- (id)description;
- (id)_opString;
- (int)compareAdapterOperation:(id)arg1;
- (id)row;
- (id)correlation;
- (id)entity;
- (void)setAdapterOperator:(unsigned int)arg1;
- (unsigned int)adapterOperator;
- (void)dealloc;
- (id)initWithAdapterOperator:(unsigned int)arg1 correlation:(id)arg2;
- (id)initWithAdapterOperator:(unsigned int)arg1 row:(id)arg2;

@end

