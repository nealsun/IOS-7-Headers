/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, SKUIGiftItemView, UIButton, UIImage, UIImageView, UILabel;

@interface SKUIGiftResultView : UIView
{
    UIButton *_giftAgainButton;
    UIImageView *_imageView;
    SKUIGiftItemView *_itemView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) SKUIGiftItemView *itemView; // @synthesize itemView=_itemView;
@property(readonly, nonatomic) UIButton *giftAgainButton; // @synthesize giftAgainButton=_giftAgainButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *image;
- (id)initWithFrame:(struct CGRect)arg1;

@end

