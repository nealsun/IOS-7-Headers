/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UICollectionViewCell.h"

@class UIColor, UIView;

@interface SKUICollectionViewCell : UICollectionViewCell
{
    UIView *_bottomBorderView;
    int _position;
    UIView *_rightBorderView;
    UIColor *_separatorColor;
    BOOL _showsCellSeparators;
}

@property(nonatomic) BOOL showsCellSeparators; // @synthesize showsCellSeparators=_showsCellSeparators;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
- (void).cxx_destruct;
- (void)_updateBorderVisibility;
- (BOOL)_showsRightBorder;
- (void)_setPosition:(int)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)applyLayoutAttributes:(id)arg1;

@end

