//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICGLContext.h"

@interface ICOpenGLContext : ICGLContext
{
    struct _CGLContextObject *_cglContextObj;
    struct _CGLPixelFormatObject *_cglPixelFormatObj;
    struct _CGLContextObject *_previousContext;
}

+ (id)defaultShareContext;
+ (struct _CGLPixelFormatObject *)copyPixelFormatObjWithDoubleBuffer:(BOOL)arg1;
+ (vector_10364fa1)pixelFormatAttributesAtMultisampleLevel:(unsigned long long)arg1 doubleBuffer:(BOOL)arg2;
@property(readonly, nonatomic) struct _CGLPixelFormatObject *cglPixelFormatObj; // @synthesize cglPixelFormatObj=_cglPixelFormatObj;
@property(readonly, nonatomic) struct _CGLContextObject *cglContextObj; // @synthesize cglContextObj=_cglContextObj;
- (void)restorePreviousContext;
- (void)makeCurrentAndStorePreviousContext;
- (void)makeCurrent;
- (void)dealloc;
- (id)initWithSharedContext:(id)arg1;
- (id)initWithSharedContext:(id)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2;

@end

