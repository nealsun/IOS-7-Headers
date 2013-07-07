/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, NSTimer, UIFont, UIImage;

@interface TPLockTextView : UIView
{
    NSString *_label;
    struct CGImage *_textCache;
    char *_textData;
    NSTimer *_maskTimer;
    double _maskStartTime;
    UIFont *_labelFont;
    float _deltaFromDefaultTrackWidth;
    UIImage *_maskImage;
    float _fps;
}

@property(readonly) float deltaFromDefaultTrackWidth; // @synthesize deltaFromDefaultTrackWidth=_deltaFromDefaultTrackWidth;
- (void)movedFromWindow:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isAnimating;
- (float)fps;
- (void)setFPS:(float)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (id)label;
- (id)initWithLabel:(id)arg1 fontSize:(float)arg2 trackWidthDelta:(float)arg3;
- (void)_cacheLabel:(id)arg1 size:(struct CGSize)arg2;
- (void)dealloc;

@end

