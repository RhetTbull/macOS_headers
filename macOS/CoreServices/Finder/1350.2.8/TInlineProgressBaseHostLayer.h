//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TLayer.h"

#import "CAAnimationDelegate-Protocol.h"

@class NSObject, NSString, TInlineProgressBarLayer;
@protocol CAAnimationDelegate;

@interface TInlineProgressBaseHostLayer : TLayer <CAAnimationDelegate>
{
    TInlineProgressBarLayer *_progressLayer;
    unsigned long long _animationCount;
    _Bool _cleanupWhenFinished;
    NSObject<CAAnimationDelegate> *_animationDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<CAAnimationDelegate> *animationDelegate; // @synthesize animationDelegate=_animationDelegate;
- (void)setUserInterfaceLayoutDirection:(long long)arg1;
- (long long)userInterfaceLayoutDirection;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(id)arg1;
- (void)completeAnimation;
- (void)setSelected:(BOOL)arg1;
- (void)setProgressFrame:(struct CGRect)arg1;
@property(nonatomic) unsigned int state;
@property(nonatomic) double percentComplete;
- (void)setPercentComplete:(double)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;
- (id)init;
- (id)initVariant:(int)arg1 percentComplete:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

