//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TPPageControllerLayoutObserver-Protocol.h"
#import "_TtP5Pages32TPCanvasPageAnimatorActionTarget_-Protocol.h"

@class TPInteractiveCanvasController;
@protocol _TtP5Pages28TPCanvasPageAnimatorDelegate_;

@interface _TtC5Pages20TPCanvasPageAnimator : NSObject <_TtP5Pages32TPCanvasPageAnimatorActionTarget_, TPPageControllerLayoutObserver>
{
    // Error parsing type: , name: interactiveCanvasController
    // Error parsing type: , name: delegate
    // Error parsing type: , name: options
    // Error parsing type: , name: animatorState
    // Error parsing type: , name: nextAnimator
}

+ (void)performAnimationsWithDelegate:(id)arg1 interactiveCanvasController:(id)arg2 options:(unsigned long long)arg3 applyingActions:(CDUnknownBlockType)arg4 updateCanvas:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)performAnimationsWithDelegate:(id)arg1 interactiveCanvasController:(id)arg2 options:(unsigned long long)arg3 applyingActions:(CDUnknownBlockType)arg4 updateCanvas:(CDUnknownBlockType)arg5 shouldContinue:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (double)performAnimationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)waitForCanvasUpdateThenTakeAfterSnapshotCheckingValidity:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)waitForCanvasUpdateThenTakeAfterSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)takeAfterSnapshot;
- (void)addActionToMapPageAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)addActionToDeletePageAtIndex:(unsigned long long)arg1 withAnimation:(long long)arg2;
- (void)addActionToInsertPageAtIndex:(unsigned long long)arg1 withAnimation:(long long)arg2;
- (BOOL)takeBeforeSnapshot;
@property(nonatomic, readonly) long long state;
@property(nonatomic) unsigned long long options; // @synthesize options;
@property(nonatomic) __weak id <_TtP5Pages28TPCanvasPageAnimatorDelegate_> delegate; // @synthesize delegate;
@property(nonatomic) __weak TPInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController;
- (id)initWithInteractiveCanvasController:(id)arg1 delegate:(id)arg2 options:(unsigned long long)arg3;

@end

