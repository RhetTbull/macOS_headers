//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UXKit/UXNavigationController.h>

#import "UXNavigationControllerDelegate-Protocol.h"
#import "UXViewControllerAnimatedTransitioning-Protocol.h"

@class IPXGettingStartedViewController, IPXLibraryUpgradeViewController, NSString;

@interface IPXPrologueController : UXNavigationController <UXViewControllerAnimatedTransitioning, UXNavigationControllerDelegate>
{
    IPXLibraryUpgradeViewController *_libraryUpgradeViewController;
    long long _operation;
    IPXGettingStartedViewController *_gettingStartedViewController;
}

+ (void)addArrowGlyphToButton:(id)arg1;
+ (id)defaultTitle;
@property(retain) IPXGettingStartedViewController *gettingStartedViewController; // @synthesize gettingStartedViewController=_gettingStartedViewController;
- (void).cxx_destruct;
- (void)_loadGettingStartedViewControllerWithFlowType:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)libraryUpgradeViewController;
- (void)enterGettingStartedModeWithFlowType:(long long)arg1 libraryURL:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

