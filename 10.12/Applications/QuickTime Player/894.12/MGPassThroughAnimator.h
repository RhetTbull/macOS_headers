//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSSet;

@interface MGPassThroughAnimator : NSProxy
{
    id _animationTarget;
    id _defaultAnimator;
    id _currentTarget;
    NSSet *_passThroughSelectorStrings;
    unsigned long long _animatingRefCount;
}

- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)isAnimating;
- (id)initWithAnimationTarget:(id)arg1 defaultAnimator:(id)arg2 passThroughSelectorStrings:(id)arg3;
- (id)initWithAnimationTarget:(id)arg1 defaultAnimator:(id)arg2 passThroughSelectors:(SEL)arg3;

@end

