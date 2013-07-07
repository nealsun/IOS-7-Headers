/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class VGLResource;

__attribute__((visibility("hidden")))
@interface VGLTexture : NSObject
{
    struct CGRect _contentRect;
    struct CGSize _textureSize;
    BOOL _dirty;
    BOOL _isLoaded;
    BOOL _hasMipmap;
    BOOL _anisotropicFiltering;
    int _target;
    int _wrapBehaviorX;
    int _wrapBehaviorY;
    int _minFilter;
    int _magFilter;
    VGLResource *_textureResource;
}

+ (void)purge;
+ (id)textureWithName:(id)arg1 forScale:(float)arg2;
@property(nonatomic) int magnificationFilter; // @synthesize magnificationFilter=_magFilter;
@property(nonatomic) int minificationFilter; // @synthesize minificationFilter=_minFilter;
@property(nonatomic) int wrapBehaviorY; // @synthesize wrapBehaviorY=_wrapBehaviorY;
@property(nonatomic) int wrapBehaviorX; // @synthesize wrapBehaviorX=_wrapBehaviorX;
@property(nonatomic) int target; // @synthesize target=_target;
@property(nonatomic) BOOL hasMipmap; // @synthesize hasMipmap=_hasMipmap;
@property(readonly, nonatomic) BOOL isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) BOOL anisotropicFiltering; // @synthesize anisotropicFiltering=_anisotropicFiltering;
@property(readonly, nonatomic) BOOL dirty; // @synthesize dirty=_dirty;
@property(readonly, nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
@property(readonly, nonatomic) struct CGSize textureSize; // @synthesize textureSize=_textureSize;
- (id).cxx_construct;
- (BOOL)loadTexture;
- (BOOL)decodeTexture;
@property(nonatomic) int wrapBehavior;
@property(readonly, nonatomic, getter=isFlipped) BOOL flipped;
- (id)description;
- (void)useTextureWithContext:(id)arg1;
- (unsigned int)token;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithData:(id)arg1 loadImmediately:(BOOL)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithSize:(struct CGSize)arg1 requirePowerOf2:(BOOL)arg2;
- (id)init;

@end

