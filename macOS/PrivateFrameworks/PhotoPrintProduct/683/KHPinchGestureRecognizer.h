//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSGestureRecognizer.h>

@interface KHPinchGestureRecognizer : NSGestureRecognizer
{
    double _velocity;
}

@property(readonly, nonatomic) double velocity; // @synthesize velocity=_velocity;
- (void)rightMouseDown:(id)arg1;
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (unsigned long long)numberOfTouches;

@end

