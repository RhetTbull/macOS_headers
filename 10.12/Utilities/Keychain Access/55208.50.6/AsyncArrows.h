//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface AsyncArrows : NSView
{
    void *_surface;
    struct {
        unsigned int _isSpinning:1;
        unsigned int _delayedStartup:1;
        unsigned int _orderOutForResize:1;
        unsigned int _lastImageIndex:3;
        unsigned int _reserved:26;
    } _aaFlags;
}

- (void)heartBeat:(CDStruct_fadd2e06 *)arg1;
- (BOOL)isSpinning;
- (void)stopAnimation:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)startAnimation:(id)arg1;
- (void)dealloc;
- (void)_setupSurfaceAndStartSpinning;
- (id)_resizedImage:(unsigned long long)arg1;

@end

