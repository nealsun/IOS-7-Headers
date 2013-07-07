/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoBoothEffects/PBContext.h>

@class CIContext, EAGLContext;

@interface PBCoreImageContext : PBContext
{
    EAGLContext *_glesContext;
    struct __CVOpenGLESTextureCache *_textureCache;
    struct __CVBuffer *_inputTexture;
    struct __CVBuffer *_outputTexture;
    struct __CVPixelBufferPool *_smallPool;
    struct __CVPixelBufferPool *_largePool;
    struct CGSize _smallPoolSize;
    struct CGSize _largePoolSize;
    struct _CAImageQueue *_outputImageQueue;
    CIContext *_ciContext;
    struct __CVBuffer *_inputPixelBuffer;
    struct __CVBuffer *_outputPixelBuffer;
    _Bool _render9Up;
    _Bool _renderForSave;
    struct CGSize _outputSize;
}

- (void)renderNineUp:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 mirrored:(BOOL)arg3;
- (void)renderNineUp:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2;
- (void)renderFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 mirrored:(BOOL)arg3;
- (void)renderFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2;
- (struct __CVBuffer *)createCVPixelBufferForFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 mirrored:(BOOL)arg3;
- (void)setOutputImageQueue:(struct _CAImageQueue *)arg1;
- (struct _CAImageQueue *)outputImageQueue;
- (struct CGSize)outputSize;
- (void)setOutputSize:(struct CGSize)arg1;
- (_Bool)renderForSave;
- (void)setRenderForSave:(_Bool)arg1;
- (_Bool)render9Up;
- (void)setRender9Up:(_Bool)arg1;
- (unsigned int)outputTexture;
- (unsigned int)inputTexture;
- (struct __CVBuffer *)outputPixelBuffer;
- (void)setOutputPixelBuffer:(struct __CVBuffer *)arg1 mapTexture:(BOOL)arg2;
- (void)setOutputPixelBuffer:(struct __CVBuffer *)arg1;
- (struct __CVBuffer *)inputPixelBuffer;
- (void)setInputPixelBuffer:(struct __CVBuffer *)arg1 mapTexture:(BOOL)arg2;
- (void)setInputPixelBuffer:(struct __CVBuffer *)arg1;
- (id)ciContext;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (struct __CVPixelBufferPool *)largePool;
- (struct __CVPixelBufferPool *)smallPool;
- (void)setLargePool:(struct __CVPixelBufferPool *)arg1;
- (void)setSmallPool:(struct __CVPixelBufferPool *)arg1;
- (void)_createPixelBuffer:(struct __CVBuffer **)arg1 withSize:(struct CGSize)arg2;

@end

