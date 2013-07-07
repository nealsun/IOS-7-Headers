/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class ALAssetRepresentationPrivate;

@interface ALAssetRepresentation : NSObject
{
    id _internal;
    BOOL _ignoreRead;
}

@property BOOL ignoreRead; // @synthesize ignoreRead=_ignoreRead;
@property(retain, nonatomic) ALAssetRepresentationPrivate *internal; // @synthesize internal=_internal;
- (id)filename;
- (float)scale;
- (int)orientation;
- (id)metadata;
- (id)url;
- (struct CGImage *)fullScreenImage;
- (struct CGImage *)fullResolutionImage;
- (struct CGImage *)CGImageWithOptions:(id)arg1;
- (struct CGImage *)CGImageWithOptions:(id)arg1 format:(int)arg2 bakeInOrientation:(int)arg3;
- (id)_imageData;
- (unsigned int)getBytes:(char *)arg1 fromOffset:(long long)arg2 length:(unsigned int)arg3 error:(id *)arg4;
- (long long)size;
- (struct CGSize)dimensions;
- (int)_fileDescriptor;
- (id)UTI;
- (BOOL)isValid;
- (id)description;
- (void)dealloc;
- (id)initWithManagedAsset:(id)arg1 sidecar:(id)arg2 extension:(id)arg3 library:(id)arg4;

@end

