/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class VGLResourceFactory;

__attribute__((visibility("hidden")))
@interface VGLResourceImpl : NSObject
{
    VGLResourceFactory *_factory;
    int _resourceType;
    int _count;
    unsigned int _token;
    unsigned int *_tokens;
}

- (unsigned int *)tokens;
- (unsigned int)token;
- (int)count;
- (void)markUnused;
- (void)deleteResource;
- (void)dealloc;
- (id)description;
- (id)initWithFactory:(id)arg1 resourceType:(int)arg2 count:(int)arg3;

@end

