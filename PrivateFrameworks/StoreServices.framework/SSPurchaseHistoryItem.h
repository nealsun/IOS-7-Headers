/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"
#import "SSXPCCoding.h"

@class NSMutableDictionary;

@interface SSPurchaseHistoryItem : NSObject <SSXPCCoding, NSCopying>
{
    NSMutableDictionary *_properties;
}

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)valueForProperty:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (void)dealloc;

@end

