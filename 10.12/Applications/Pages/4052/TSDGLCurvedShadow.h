//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDGLShadow.h"

@class CIContext, TSDGLDataBuffer, TSDGLFrameBuffer, TSDGLShader;

@interface TSDGLCurvedShadow : TSDGLShadow
{
    TSDGLFrameBuffer *mAlphaFrameBuffer;
    TSDGLDataBuffer *mAlphaDataBuffer;
    TSDGLShader *mAlphaShader;
    TSDGLShader *mCurvedShader;
    TSDGLFrameBuffer *mCurveInterpolationFrameBuffer;
    TSDGLDataBuffer *mCurveInterpolationDataBuffer;
    TSDGLShader *mCurveInterpolationShader;
    char *mBuffer;
    CIContext *mCIContext;
}

- (id)p_blurredImage:(id)arg1 edgeBlurRadius:(double)arg2 middleBlurRadius:(double)arg3 padding:(double)arg4 edgeOpacity:(double)arg5 middleOpacity:(double)arg6;
- (id)p_curvedImageFromImage:(id)arg1 curveAmount:(double)arg2 padding:(double)arg3;
- (id)p_gradientImageWithExtent:(struct CGRect)arg1 middleWhiteValue:(double)arg2 edgeWhiteValue:(double)arg3 includeAlpha:(BOOL)arg4 padding:(double)arg5;
- (id)p_alphaOnlyImageFromImage:(id)arg1;
- (id)p_debugColorOverlayImageFromImage:(id)arg1;
- (id)p_tintedCIImageFromImage:(id)arg1 withColor:(CDStruct_818bb265)arg2;
- (id)p_imageByMultiplyingImage:(id)arg1 withImage:(id)arg2;
- (BOOL)p_shrinkImageIfNecessary:(struct CGImage *)arg1 originalSize:(struct CGSize)arg2 newImage:(struct CGImage **)arg3 newSize:(struct CGSize *)arg4;
- (void)p_setupCIContext;
- (void)drawShadow:(id)arg1 forImage:(struct CGImage *)arg2 inContext:(struct CGContext *)arg3 forSize:(struct CGSize)arg4;
- (void)p_debugLogImage:(id)arg1 name:(id)arg2;
- (double)baseBlurRadiusForCurve:(double)arg1 framebufferSize:(struct CGSize)arg2;
- (void)dealloc;

@end

