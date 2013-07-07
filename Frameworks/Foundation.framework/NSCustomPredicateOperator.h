/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Foundation/NSPredicateOperator.h>

__attribute__((visibility("hidden")))
@interface NSCustomPredicateOperator : NSPredicateOperator
{
    SEL _selector;
}

+ (BOOL)supportsSecureCoding;
- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (id)symbol;
- (BOOL)isEqual:(id)arg1;
- (SEL)selector;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCustomSelector:(SEL)arg1 modifier:(unsigned int)arg2;

@end

