/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCache, NSString;

@interface CPBitmapStore : NSObject
{
    NSString *_path;
    NSString *_imagePath;
    NSCache *_cache;
    int _version;
}

+ (id)CPBitmapStoreWithPath:(id)arg1 version:(int)arg2 useDirectHashing:(BOOL)arg3;
- (int)setVersion:(int)arg1;
@property(readonly, nonatomic) int version;
- (id)_versionPath;
- (void)purge;
- (unsigned int)imageCount;
- (id)imagePath;
- (void)removeImagesInGroups:(id)arg1;
- (void)commitTransaction;
- (void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 opaque:(BOOL)arg4 scale:(float)arg5 data:(id)arg6;
- (void)storeImageForKey:(id)arg1 inGroup:(id)arg2 opaque:(BOOL)arg3 image:(struct CGImage *)arg4;
- (struct CGImage *)copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 opaque:(BOOL)arg4 scale:(float)arg5 draw:(id)arg6;
- (struct CGImage *)_copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 opaque:(BOOL)arg4 scale:(float)arg5 fillMem:(id)arg6 alternateCompletion:(void)arg7;
- (struct CGImage *)copyImageForKey:(id)arg1 inGroup:(id)arg2;
- (void)commitTxn;
- (id)allGroups;
- (struct CGImage *)copyImageForKey:(id)arg1;
- (unsigned int)memContentOffset;
- (void *)openAndMmap:(id)arg1 withInfo:(struct _img *)arg2;
- (BOOL)saveImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img *)arg3;
- (BOOL)findImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img *)arg3;
- (id)imageNameForKey:(id)arg1 inGroup:(id)arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1 version:(int)arg2;

@end

