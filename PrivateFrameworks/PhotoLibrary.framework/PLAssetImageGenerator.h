/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAssetImageGenerator;

@interface PLAssetImageGenerator : NSObject
{
    BOOL _inUse;
    AVAssetImageGenerator *_imageGenerator;
}

@property(nonatomic) BOOL inUse; // @synthesize inUse=_inUse;
@property(retain, nonatomic) AVAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;

@end

