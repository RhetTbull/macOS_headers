//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KNIrisBase.h"

#import "KNTransitionMetalAnimator-Protocol.h"
#import "KNTransitionOpenGLAnimator-Protocol.h"

@class NSString;

@interface KNTransitionIris : KNIrisBase <KNTransitionOpenGLAnimator, KNTransitionMetalAnimator>
{
}

+ (id)defaultAttributes;
+ (id)supportedTypes;
+ (BOOL)isTransition;
- (void)animationDidEndWithContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

