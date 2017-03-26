//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CAOpenGLLayer.h>

@class ICOpenGLContext, ICOpenGLView;

@interface ICOpenGLLayer : CAOpenGLLayer
{
    ICOpenGLContext *_glContext;
    ICOpenGLView *_view;
    struct _CGLContextObject *_cglContextObj;
    struct _CGLPixelFormatObject *_cglPixelFormatObj;
}

@property(readonly, nonatomic) struct _CGLPixelFormatObject *cglPixelFormatObj; // @synthesize cglPixelFormatObj=_cglPixelFormatObj;
@property(readonly, nonatomic) struct _CGLContextObject *cglContextObj; // @synthesize cglContextObj=_cglContextObj;
@property(nonatomic) __weak ICOpenGLView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)releaseCGLPixelFormat:(struct _CGLPixelFormatObject *)arg1;
- (void)releaseCGLContext:(struct _CGLContextObject *)arg1;
- (void)drawInCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
- (BOOL)canDrawInCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
- (struct _CGLContextObject *)copyCGLContextForPixelFormat:(struct _CGLPixelFormatObject *)arg1;
- (struct _CGLPixelFormatObject *)copyCGLPixelFormatForDisplayMask:(unsigned int)arg1;

@end

