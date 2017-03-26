//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GLObject.h"

@class GLFBO, GLSLProgram;

@interface FrameReader : GLObject
{
    unsigned long long _rowBytes;
    unsigned long long _pixelsWide;
    unsigned long long _pixelsHigh;
    unsigned int _glPixelBufferId;
    void *_frameBuffer;
    void *_flipBuffer;
    GLFBO *_fbo;
    GLSLProgram *_shader;
}

+ (BOOL)_isIntel950Graphics:(id)arg1;
+ (unsigned int)nativePixelType;
+ (unsigned int)nativePixelFormat;
- (struct CGSize)size;
- (void)copyFrameTo:(struct __CVBuffer *)arg1;
- (void)copyFrameTo:(struct __CVBuffer *)arg1 flipBuffer:(BOOL)arg2;
- (id)bitmap;
- (void)_readFrameIntoBuffer:(void *)arg1 wantYuv:(BOOL)arg2 rowBytes:(long long)arg3 flipBuffer:(BOOL)arg4;
- (void)_PBuffer_readFrameIntoBuffer:(void *)arg1 wantYuv:(BOOL)arg2 rowBytes:(long long)arg3;
- (void)_glReadPixels_readFrameIntoBuffer:(void *)arg1 wantYuv:(BOOL)arg2 rowBytes:(long long)arg3;
- (void)handleVirtualScreenChangedNotificiation:(int)arg1;
- (void)dealloc;
- (id)initWithOpenGLContext:(id)arg1 pixelsWide:(unsigned int)arg2 pixelsHigh:(unsigned int)arg3;
- (void)_destroyResources;
- (void)_initResources;

@end

