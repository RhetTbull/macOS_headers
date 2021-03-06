//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "BasicComposeContext.h"

@class PopoutAnimationController;
@protocol ComposeContext, PopoutAnimationContentProvider;

@interface InteractiveComposeContext : BasicComposeContext
{
    id <PopoutAnimationContentProvider> _animationSource;
    PopoutAnimationController *_animationController;
    id <ComposeContext> _snapshotContext;
}

@property(retain, nonatomic) id <ComposeContext> snapshotContext; // @synthesize snapshotContext=_snapshotContext;
@property(retain, nonatomic) PopoutAnimationController *animationController; // @synthesize animationController=_animationController;
@property(readonly, nonatomic) __weak id <PopoutAnimationContentProvider> animationSource; // @synthesize animationSource=_animationSource;
- (void).cxx_destruct;
- (void)loadCompleted:(id)arg1;
- (void)controllerInitialized:(id)arg1;
- (void)presentComposeViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isInteractive;
- (id)initWithType:(long long)arg1 targetMessages:(id)arg2 sourceContentProvider:(id)arg3;
- (id)initWithType:(long long)arg1 targetMessages:(id)arg2;

@end

