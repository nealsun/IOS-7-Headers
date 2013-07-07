/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyFog : GLKEffectProperty
{
    unsigned char _enabled;
    int _mode;
    union _GLKVector4 _color;
    float _density;
    float _start;
    float _end;
    int _modeLoc;
    int _colorLoc;
    int _densityLoc;
    int _startLoc;
    int _endLoc;
}

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;
@property(nonatomic) int endLoc; // @synthesize endLoc=_endLoc;
@property(nonatomic) int startLoc; // @synthesize startLoc=_startLoc;
@property(nonatomic) int densityLoc; // @synthesize densityLoc=_densityLoc;
@property(nonatomic) int colorLoc; // @synthesize colorLoc=_colorLoc;
@property(nonatomic) int modeLoc; // @synthesize modeLoc=_modeLoc;
@property(nonatomic) float end; // @synthesize end=_end;
@property(nonatomic) float start; // @synthesize start=_start;
@property(nonatomic) float density; // @synthesize density=_density;
@property(nonatomic) union _GLKVector4 color; // @synthesize color=_color;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned char enabled; // @synthesize enabled=_enabled;
- (void)dealloc;
- (id)description;
- (void)bind;
- (void)setShaderBindings;
- (_Bool)includeFshShaderTextForRootNode:(id)arg1;
- (_Bool)includeVshShaderTextForRootNode:(id)arg1;
- (void)initializeMasks;
- (void)dirtyAllUniforms;
- (id)init;

@end

