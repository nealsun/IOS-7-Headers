/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class UIColor, UIFont, UIImage;

@interface ABMonogrammer : NSObject
{
    UIImage *_defaultMonogram;
    BOOL _textKnockout;
    float _diameter;
    UIColor *_backgroundColor;
    UIFont *_font;
    UIColor *_textColor;
}

@property(nonatomic) BOOL textKnockout; // @synthesize textKnockout=_textKnockout;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) float diameter; // @synthesize diameter=_diameter;
- (id)monogramWithInitials:(id)arg1;
- (id)monogramWithImageData:(struct __CFData *)arg1;
- (id)initialsForFirstName:(id)arg1 lastName:(id)arg2;
- (id)initialsForPerson:(void *)arg1;
- (void)clearMonogramCache;
- (id)defaultMonogram;
- (id)monogramForPersonWithFirstName:(id)arg1 lastName:(id)arg2;
- (id)monogramForPerson:(void *)arg1;
- (BOOL)hasMonogramForPerson:(void *)arg1;
- (id)init;

@end

