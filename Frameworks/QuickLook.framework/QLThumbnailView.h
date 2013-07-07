/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class QLThumbnailOperation, UIImage;

@interface QLThumbnailView : UIView
{
    QLThumbnailOperation *_thumbnailOperation;
    UIImage *_image;
    int _pageNumber;
    BOOL _alwaysVisible;
    struct CGRect unselectedFrame;
    struct CGRect _unselectedFrame;
}

@property struct CGRect unselectedFrame; // @synthesize unselectedFrame=_unselectedFrame;
@property BOOL alwaysVisible; // @synthesize alwaysVisible=_alwaysVisible;
@property int pageNumber; // @synthesize pageNumber=_pageNumber;
@property(retain) UIImage *image; // @synthesize image=_image;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setFrame:(struct CGRect)arg1;
@property(retain) QLThumbnailOperation *thumbnailOperation;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

