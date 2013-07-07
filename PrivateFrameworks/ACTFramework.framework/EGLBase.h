/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "ESRenderer.h"

@class EAGLContext;

@interface EGLBase : NSObject <ESRenderer>
{
    EAGLContext *mGLContext;
    EAGLContext *mGLBackupContext;
    unsigned int mFramebuffer;
    unsigned int mTextureArray[32];
}

- (int)checkProgramValidity:(unsigned int)arg1;
- (int)checkLinkStatusForProgram:(unsigned int)arg1;
- (int)checkCompileStatusForShader:(unsigned int)arg1;
- (int)renderInto16bitYBuffer:(unsigned short *)arg1 width:(unsigned long)arg2 height:(unsigned long)arg3 usingProgram:(unsigned int)arg4;
- (int)renderIntoBuffer:(struct __IOSurface *)arg1 planeIndex:(unsigned int)arg2 usingProgram:(unsigned int)arg3 viewportOrigX:(int)arg4 viewportOrigY:(int)arg5 viewportWidth:(int)arg6 viewportHeight:(int)arg7;
- (int)loadBuffer:(struct __IOSurface *)arg1 inTextureUnit:(unsigned int)arg2 uniformName:(const char *)arg3 planeIndex:(unsigned int)arg4 usingProgram:(unsigned int)arg5;
- (int)renderBuffer:(struct __IOSurface *)arg1 intoBuffer:(struct __IOSurface *)arg2 planeIndex:(unsigned int)arg3 usingProgram:(unsigned int)arg4 interpolate:(unsigned int)arg5 viewportOrigX:(int)arg6 viewportOrigY:(int)arg7 viewportWidth:(int)arg8 viewportHeight:(int)arg9 numIters:(unsigned int)arg10;
- (int)create:(unsigned char)arg1 destinationBuffers:(struct __CVBuffer **)arg2 ofWidth:(int)arg3 andHeight:(int)arg4;
- (unsigned int)createProgramWithVertexShader:(const char *)arg1 fragmentShader:(const char *)arg2;
- (void)dealloc;
- (id)context;
- (void)setCurrentContext;
- (void)restoreContext;
- (void)backupContext;
- (void)releaseTextures;
- (void)deleteBuffers;
- (BOOL)initializeOffScreenBuffers;
- (id)init;

@end

