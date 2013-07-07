/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, UIImage;

@interface QLPreviewThumbnailGenerator : NSObject
{
    id <QLPreviewItem> _item;
    struct CGSize _size;
    float _scale;
    UIImage *_thumbnailImage;
    NSString *_contentType;
    int _status;
}

+ (id)generatorForPreviewItem:(id)arg1 size:(struct CGSize)arg2;
+ (BOOL)canGenerateThumbnailForPreviewItem:(id)arg1;
@property(readonly) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
- (void)cancel;
- (id)_thumbnailForMovie;
- (id)_thumbnailForPDF;
- (id)_thumbnailForImage;
- (id)_endContextWithContentFrame:(struct CGRect)arg1;
- (struct CGContext *)_beginContext;
- (struct CGSize)_pixelSize;
- (void)generateWithCompletionBlock:(id)arg1;
- (void)dealloc;

@end

