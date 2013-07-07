/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <StoreKitUI/SKUIImageDataConsumer.h>

#import "NSCopying.h"

@class SKUIColorScheme, UIColor;

@interface SKUIProductImageDataConsumer : SKUIImageDataConsumer <NSCopying>
{
    UIColor *_backgroundColor;
    struct CGSize _iconSize;
    SKUIColorScheme *_colorScheme;
}

+ (id)wishlistConsumer;
+ (id)smartBannerConsumer;
+ (id)giftResultPosterConsumer;
+ (id)giftResultLetterboxConsumer;
+ (id)giftResultConsumer;
+ (id)giftThemePosterConsumer;
+ (id)giftThemeLetterboxConsumer;
+ (id)giftThemeConsumer;
+ (id)giftComposePosterConsumer;
+ (id)giftComposeLetterboxConsumer;
+ (id)giftComposeConsumer;
+ (id)swooshConsumer;
+ (id)productPageConsumer;
+ (id)purchasedConsumer;
+ (id)updatesConsumer;
+ (id)chartsConsumer;
+ (id)cardConsumer;
+ (id)lockupConsumerWithSize:(int)arg1 itemKind:(int)arg2;
+ (id)gridConsumer;
@property(readonly, nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)imageForImage:(id)arg1;
- (id)imageForColor:(id)arg1;
- (id)imageForSize:(struct CGSize)arg1;

@end

