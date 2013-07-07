/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, SKUIClientContext, SKUIGiftTheme, SKUIItem, SKUIItemArtworkContext, SKUIItemOfferButton, SKUIItemState, UIImage, UIImageView, UILabel;

@interface SKUIGiftItemView : UIView
{
    NSString *_artistName;
    NSString *_categoryName;
    SKUIClientContext *_clientContext;
    SKUIItem *_item;
    UIImageView *_itemImageView;
    SKUIItemOfferButton *_itemOfferButton;
    SKUIItemState *_itemState;
    int _itemStyle;
    int _numberOfUserRatings;
    NSString *_price;
    UIImageView *_starRatingImageView;
    UILabel *_subtitleLabel1;
    UILabel *_subtitleLabel2;
    SKUIGiftTheme *_theme;
    UILabel *_titleLabel;
    float _userRating;
    UILabel *_userRatingCountLabel;
}

@property(nonatomic) float userRating; // @synthesize userRating=_userRating;
@property(copy, nonatomic) SKUIGiftTheme *theme; // @synthesize theme=_theme;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(nonatomic) int numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
@property(retain, nonatomic) SKUIItemState *itemState; // @synthesize itemState=_itemState;
@property(readonly, nonatomic) SKUIItemOfferButton *itemOfferButton; // @synthesize itemOfferButton=_itemOfferButton;
@property(readonly, nonatomic) SKUIItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) int giftItemStyle; // @synthesize giftItemStyle=_itemStyle;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
- (void).cxx_destruct;
- (id)_userRatingColor;
- (id)_titleColor;
- (id)_subtitleColor;
- (void)_reloadUserRatingViews;
- (void)_reloadSubtitles;
- (void)_reloadItemState:(BOOL)arg1;
- (float)_paddingRight;
- (float)_paddingLeft;
- (id)_newLabel;
- (struct CGSize)_imageSize;
- (struct UIEdgeInsets)_imageEdgeInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
- (void)setItemState:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) UIImage *itemImage;
@property(readonly, nonatomic) SKUIItemArtworkContext *artworkContext;
- (id)initWithStyle:(int)arg1 item:(id)arg2 clientContext:(id)arg3;

@end

