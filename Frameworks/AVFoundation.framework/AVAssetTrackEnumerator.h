/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSEnumerator.h"

@class NSArray, NSString;

@interface AVAssetTrackEnumerator : NSEnumerator
{
    NSString *_mediaType;
    NSArray *_mediaCharacteristics;
    NSEnumerator *_enumerator;
}

+ (id)trackEnumeratorWithAsset:(id)arg1;
- (id)nextObject;
- (void)setMediaCharacteristics:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 mediaCharacteristics:(id)arg2;
- (id)initWithAsset:(id)arg1 mediaType:(id)arg2;
- (id)initWithAsset:(id)arg1;

@end

