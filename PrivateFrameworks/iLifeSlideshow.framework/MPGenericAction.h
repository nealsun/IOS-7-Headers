/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iLifeSlideshow/MPAction.h>

@class NSDictionary, NSMutableDictionary;

@interface MPGenericAction : MPAction
{
    NSMutableDictionary *_attributes;
}

+ (id)genericAction;
@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void)setAction:(id)arg1;
- (id)attributeForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

