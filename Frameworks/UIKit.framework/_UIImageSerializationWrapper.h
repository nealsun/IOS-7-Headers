/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIImageSerializationWrapper : NSObject <NSCoding>
{
    UIImage *_image;
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithImage:(id)arg1;

@end

