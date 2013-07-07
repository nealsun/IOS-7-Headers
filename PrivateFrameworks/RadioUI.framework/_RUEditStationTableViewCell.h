/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewCell.h"

#import "MPUStackViewDataSource.h"

@class MPImageCache, MPImageCacheRequest, MPUStackView, NSString, UIImage, UILabel;

@interface _RUEditStationTableViewCell : UITableViewCell <MPUStackViewDataSource>
{
    UIImage *_image;
    MPUStackView *_stackView;
    UILabel *_textLabel;
    MPImageCache *_imageCache;
    MPImageCacheRequest *_imageRequest;
}

@property(retain, nonatomic) MPImageCacheRequest *imageRequest; // @synthesize imageRequest=_imageRequest;
@property(retain, nonatomic) MPImageCache *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;
- (id)_newStackView;
- (void)_applyImageToStackItems:(id)arg1;
- (void)updateForChangedDistanceFromVanishingPoint;
@property(copy, nonatomic) NSString *stationName;
- (void)stackView:(id)arg1 didCreateItem:(id)arg2;
- (void)stackView:(id)arg1 applyAttributesToItem:(id)arg2 atIndex:(int)arg3;
- (int)numberOfItemsInStackView:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

