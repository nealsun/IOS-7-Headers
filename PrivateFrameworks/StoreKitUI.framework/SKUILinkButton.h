/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIButton.h"

@interface SKUILinkButton : UIButton
{
    int _arrowStyle;
}

@property(readonly, nonatomic) int arrowStyle; // @synthesize arrowStyle=_arrowStyle;
- (float)_linkImagePaddingLeft;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setTitleColor:(id)arg1 forState:(unsigned int)arg2;
- (id)initWithArrowStyle:(int)arg1;

@end

