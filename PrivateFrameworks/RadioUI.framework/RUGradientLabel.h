/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UILabel.h"

@class NSArray, UIColor;

@interface RUGradientLabel : UILabel
{
    float _internalShadowBlur;
    UIColor *_internalShadowColor;
    struct CGSize _internalShadowOffset;
    UIColor *_internalTextColor;
    NSArray *_gradientColors;
    NSArray *_gradientLocations;
}

@property(copy, nonatomic) NSArray *gradientLocations; // @synthesize gradientLocations=_gradientLocations;
@property(copy, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
- (void).cxx_destruct;
- (void)setTextColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowBlur:(float)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;

@end

