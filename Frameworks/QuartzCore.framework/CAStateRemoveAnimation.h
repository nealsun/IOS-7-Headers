/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <QuartzCore/CAStateElement.h>

@class NSString;

@interface CAStateRemoveAnimation : CAStateElement
{
    NSString *_key;
}

@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)apply:(id)arg1;
- (BOOL)matches:(id)arg1;
- (id)keyPath;

@end

