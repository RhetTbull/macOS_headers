//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CAKeyframeAnimation, NSColor;

__attribute__((visibility("hidden")))
@interface AMIndeterminateProgressIndicator : NSView
{
    struct CGSize _animationSize;
    NSColor *_color;
    CAKeyframeAnimation *_animation;
}

@property(retain, nonatomic) CAKeyframeAnimation *animation; // @synthesize animation=_animation;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
- (void)drawStep:(int)arg1;
- (void)drawStrokeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 strokeWidth:(double)arg3;
- (long long)numberOfSteps;
- (id)images;
- (void)stopAnimation:(id)arg1;
- (void)startAnimation:(id)arg1;
- (struct CGSize)physicalSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

