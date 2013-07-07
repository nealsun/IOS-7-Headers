/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface PKColor : NSObject <NSSecureCoding, NSCopying>
{
    float _red;
    float _green;
    float _blue;
    float _alpha;
    struct CGColor *_colorRef;
}

+ (BOOL)supportsSecureCoding;
+ (id)colorFromString:(id)arg1;
+ (id)colorWithH:(float)arg1 S:(float)arg2 B:(float)arg3 A:(float)arg4;
+ (id)colorWithR:(float)arg1 G:(float)arg2 B:(float)arg3 A:(float)arg4;
- (struct CGColor *)_newCGColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)string;
- (struct CGColor *)CGColor;
- (void)dealloc;

@end

