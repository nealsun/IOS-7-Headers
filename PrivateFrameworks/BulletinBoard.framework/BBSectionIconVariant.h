/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData;

@interface BBSectionIconVariant : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _precomposed;
    int _format;
    NSData *_imageData;
}

+ (BOOL)supportsSecureCoding;
+ (id)variantWithFormat:(int)arg1 imageData:(id)arg2;
@property(nonatomic, getter=isPrecomposed) BOOL precomposed; // @synthesize precomposed=_precomposed;
@property(copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(nonatomic) int format; // @synthesize format=_format;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

