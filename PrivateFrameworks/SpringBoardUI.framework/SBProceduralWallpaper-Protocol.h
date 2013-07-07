/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol SBProceduralWallpaper <NSObject>
+ (id)identifier;
- (id)view;
- (void)setAnimating:(BOOL)arg1;

@optional
+ (BOOL)colorChangesSignificantly;
+ (id)presetWallpaperOptions;
+ (id)thumbnailImageName;
- (id)averageColorForRect:(struct CGRect)arg1;
- (id)averageLifetimeColorForRect:(struct CGRect)arg1;
- (void)setWallpaperOptions:(id)arg1;
- (void)setWallpaperVariant:(int)arg1;
@end

