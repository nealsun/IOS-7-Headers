/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUSongCellConfigurationAbstract.h>

@class NSString;

@interface IUSongCellConfiguration : IUSongCellConfigurationAbstract
{
    NSString *_title;
    NSString *_album;
    NSString *_artist;
    unsigned int _mediaType;
}

+ (void)getRequiredStringProperties:(id)arg1 optionalStringProperties:(id)arg2 forDataSource:(id)arg3;
+ (float)rowHeightForGlobalContext:(id)arg1;
+ (id)backgroundColorWithModifiers:(unsigned int)arg1;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) NSString *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (void)reloadStringsWithProperties:(id)arg1;
- (id)displayProperties;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (BOOL)getShadowColor:(id *)arg1 offset:(struct CGSize *)arg2 forLabelAtIndex:(unsigned int)arg3 withModifiers:(unsigned int)arg4;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (struct CGPoint)downloadProgressIndicatorOrigin;
- (struct CGPoint)downloadButtonOrigin;
- (BOOL)canShowPurchasableMediaViews;
- (id)description;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (id)init;

@end

