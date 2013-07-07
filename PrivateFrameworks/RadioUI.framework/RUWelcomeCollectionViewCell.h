/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UICollectionViewCell.h"

#import "MPUStackViewDataSource.h"

@class MPUStackView, UIImage, UIView;

@interface RUWelcomeCollectionViewCell : UICollectionViewCell <MPUStackViewDataSource>
{
    MPUStackView *_stackView;
    UIImage *_artworkImage;
}

+ (struct CGSize)artworkSize;
@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
- (void).cxx_destruct;
- (void)updateForChangedDistanceFromVanishingPoint;
@property(retain, nonatomic) UIView *perspectiveTargetView;
- (void)stackView:(id)arg1 didCreateItem:(id)arg2;
- (void)stackView:(id)arg1 applyAttributesToItem:(id)arg2 atIndex:(int)arg3;
- (int)numberOfItemsInStackView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

