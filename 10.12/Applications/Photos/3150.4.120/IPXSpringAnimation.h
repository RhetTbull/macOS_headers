//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IPXSpringAnimationDelegate;

@interface IPXSpringAnimation : NSObject
{
    unsigned long long _frameRate;
    struct __CVDisplayLink *_displayLinkRef;
    double _timerStartTime;
    struct {
        unsigned int delegateSpringAnimationDidStop:1;
        unsigned int delegateSpringAnimationDidEnd:1;
        unsigned int delegateSpringAnimationDidUpdatePosition:1;
    } _springAnimationFlags;
    double _initialPosition;
    double _initialVelocity;
    double _amplitude;
    double _period;
    double _stiffness;
    id <IPXSpringAnimationDelegate> _delegate;
}

@property(nonatomic) __weak id <IPXSpringAnimationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property(nonatomic) double period; // @synthesize period=_period;
@property(nonatomic) double amplitude; // @synthesize amplitude=_amplitude;
@property(nonatomic) double initialVelocity; // @synthesize initialVelocity=_initialVelocity;
@property(nonatomic) double initialPosition; // @synthesize initialPosition=_initialPosition;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)stopIfAnimating;
- (void)updateFrame;
@property(readonly, nonatomic, getter=isAnimating) BOOL animating;
- (void)dealloc;
- (id)initWithFrameRate:(unsigned long long)arg1;

@end

