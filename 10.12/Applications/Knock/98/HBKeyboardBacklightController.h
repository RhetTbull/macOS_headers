//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface HBKeyboardBacklightController : NSObject
{
    unsigned int _dataPort;
    unsigned int _dataport;
    float _previousKeyboardBacklightBrightness;
    NSMutableArray *_animationQueue;
}

+ (id)sharedInstance;
@property float previousKeyboardBacklightBrightness; // @synthesize previousKeyboardBacklightBrightness=_previousKeyboardBacklightBrightness;
@property(readonly) unsigned int dataport; // @synthesize dataport=_dataport;
@property(retain) NSMutableArray *animationQueue; // @synthesize animationQueue=_animationQueue;
- (unsigned int)dataPort;
- (void)animateKeyboardUsingAnimation:(id)arg1;
- (float)getCurrentKeyboardBrightness;
- (void)animateNext;
- (void)animate;
- (void)blink;
- (void)clearAnimationQueue;
- (void)addAnimation:(id)arg1;
- (void)dealloc;
- (id)init;

@end

