/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface EDTableFilter : NSObject
{
    int mScale;
    int mOperator;
    double mValue;
    double mFilterValue;
}

+ (id)edTableFilter;
- (void)setOperatorType:(int)arg1;
- (int)operatorType;
- (void)setScale:(int)arg1;
- (int)scale;
- (void)setFilterValue:(double)arg1;
- (double)filterValue;
- (void)setValue:(double)arg1;
- (double)value;

@end

