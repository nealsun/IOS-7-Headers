/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VGLMesh.h>

@class VGLTexture;

__attribute__((visibility("hidden")))
@interface VGLSingleTexturedMesh : VGLMesh
{
    VGLTexture *_texture;
}

@property(retain, nonatomic) VGLTexture *texture; // @synthesize texture=_texture;
- (void)drawTrianglesWithContext:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithVertices:(const CDStruct_3ef7eac3 *)arg1 vertexCount:(int)arg2 indices:(const unsigned short *)arg3 indexCount:(int)arg4;
- (id)initFromAsciiVertexFile:(id)arg1 indexFile:(id)arg2;

@end

