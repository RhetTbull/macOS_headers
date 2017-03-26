//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage;

@interface SpotlightView : NSView
{
    struct CGRect _spotlightRects[32];
    int _spotlightsCount;
    NSImage *_image;
    double _fraction;
    struct __CFRunLoop *_runLoop;
    BOOL _updateImage;
    struct __CFRunLoopTimer *_fadeAnimTimer;
    double _startTime;
    double _percent;
    BOOL _fadeIn;
    struct __CFRunLoopTimer *_clickAnimTimer;
    double _clickAnimStartTime;
    short _clickAnimCounter;
    BOOL _clickAnimDone;
    BOOL _drawSpotlightCenter;
    struct CGImage *_cgImageRef;
    struct CGImage *_cgImageRef2;
    struct CGImage *_cgImageRef3;
    struct CGRect _clickAnimRect;
}

- (void)fadeOutWithAnimation:(BOOL)arg1;
- (void)fadeInWithAnimation:(BOOL)arg1;
- (void)removeSpotlights;
- (void)addSpotlightWithRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (BOOL)acceptsFirstResponder;
- (id)hitTest:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_fadeAnimTimerCallBack;
- (void)_clickAnimTimerCallBack;
- (void)_stopFadeAnimation;
- (void)_startFadeAnimation;

@end

