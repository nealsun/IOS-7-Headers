/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Foundation/NSPredicateOperator.h>

@interface NSCompoundPredicateOperator : NSPredicateOperator
{
}

+ (id)notPredicateOperator;
+ (id)orPredicateOperator;
+ (id)andPredicateOperator;
- (BOOL)evaluatePredicates:(id)arg1 withObject:(id)arg2 substitutionVariables:(id)arg3;
- (BOOL)evaluatePredicates:(id)arg1 withObject:(id)arg2;
- (id)symbol;
- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

