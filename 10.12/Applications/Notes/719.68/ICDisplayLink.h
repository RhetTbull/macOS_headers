//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICDisplayLink : NSObject
{
    struct __CVDisplayLink *_displayLink;
    BOOL _paused;
    CDUnknownBlockType _block;
}

@property(nonatomic) BOOL paused; // @synthesize paused=_paused;
- (void).cxx_destruct;
- (void)setCurrentCGDisplayFromOpenGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2;
- (void)trigger;
- (void)invalidate;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

