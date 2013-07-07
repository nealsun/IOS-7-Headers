/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ChatKit/CKAVMediaObject.h>

@interface CKMovieMediaObject : CKAVMediaObject
{
    BOOL _hasVideoTrack;
    BOOL _checkedVideoInfo;
    struct CGSize _pxSize;
}

+ (BOOL)isPreviewable;
+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
@property(nonatomic) BOOL checkedVideoInfo; // @synthesize checkedVideoInfo=_checkedVideoInfo;
@property(nonatomic) struct CGSize pxSize; // @synthesize pxSize=_pxSize;
@property(nonatomic) BOOL hasVideoTrack; // @synthesize hasVideoTrack=_hasVideoTrack;
- (void)updateVideoInfo;
- (struct CGSize)bbSize;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1;
- (id)generateThumbnail;
- (id)previewForOrientation:(BOOL)arg1;
- (int)mediaType;

@end

