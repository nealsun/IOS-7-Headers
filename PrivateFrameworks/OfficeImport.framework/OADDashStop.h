/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface OADDashStop : NSObject <NSCopying>
{
    float mDash;
    float mSpace;
}

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (float)space;
- (float)dash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDash:(float)arg1 space:(float)arg2;

@end

