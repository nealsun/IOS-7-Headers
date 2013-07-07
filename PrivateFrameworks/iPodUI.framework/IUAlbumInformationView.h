/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIButton, UIColor, UIImage, UIImageView, UILabel, _UIReflectingView;

@interface IUAlbumInformationView : UIView
{
    UILabel *_albumLabel;
    UILabel *_artistLabel;
    _UIReflectingView *_artworkImageReflectingView;
    UIImageView *_artworkImageView;
    UILabel *_copyrightLabel;
    UILabel *_overviewLabel;
    UILabel *_releaseDateLabel;
    UIColor *_albumTextColor;
    UIColor *_artistTextColor;
    UIView *_backgroundView;
    UIColor *_copyrightTextColor;
    UIColor *_overviewTextColor;
    UIColor *_releaseDateTextColor;
    UIButton *_cloudDownloadButton;
    UIButton *_shuffleButton;
}

@property(readonly, nonatomic) UIButton *shuffleButton; // @synthesize shuffleButton=_shuffleButton;
@property(readonly, nonatomic) UIButton *cloudDownloadButton; // @synthesize cloudDownloadButton=_cloudDownloadButton;
@property(retain, nonatomic) UIColor *releaseDateTextColor; // @synthesize releaseDateTextColor=_releaseDateTextColor;
@property(retain, nonatomic) UIColor *overviewTextColor; // @synthesize overviewTextColor=_overviewTextColor;
@property(retain, nonatomic) UIColor *copyrightTextColor; // @synthesize copyrightTextColor=_copyrightTextColor;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIColor *artistTextColor; // @synthesize artistTextColor=_artistTextColor;
@property(retain, nonatomic) UIColor *albumTextColor; // @synthesize albumTextColor=_albumTextColor;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *releaseDateText;
@property(copy, nonatomic) NSString *overviewText;
@property(copy, nonatomic) NSString *copyright;
@property(retain, nonatomic) UIImage *artwork;
@property(copy, nonatomic) NSString *artist;
@property(copy, nonatomic) NSString *album;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

