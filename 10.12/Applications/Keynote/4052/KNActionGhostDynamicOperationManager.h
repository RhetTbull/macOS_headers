//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KNInteractiveCanvasController, NSMutableArray, NSSet, TSDResizeKnobTracker;

@interface KNActionGhostDynamicOperationManager : NSObject
{
    KNInteractiveCanvasController *mICC;
    NSSet *mRepsToEndDynamicOperationFor;
    NSSet *mRepsToEndDynamicDragFor;
    NSSet *mRepsToEndDynamicResizeFor;
    BOOL mIsInDynamicOperation;
    BOOL mIsInDynamicDrag;
    BOOL mIsInDynamicRotate;
    BOOL mIsInDynamicResize;
    BOOL mDidOpenCommandGroup;
    TSDResizeKnobTracker *mResizeKnobTracker;
    NSMutableArray *mCommandsToEnqueueAtEnd;
}

- (void)p_enqueueDynamicOperationEndCommands;
- (void)registerCommandsForDynamicOperationEnd:(id)arg1;
- (void)dynamicResizeDidEnd;
- (void)updateLayoutsForActionSequenceWithResizeTransform:(struct CGAffineTransform)arg1 forChangedLayout:(id)arg2;
- (void)dynamicResizeDidBeginForRep:(id)arg1 withTracker:(id)arg2;
- (void)dynamicRotateDidEnd;
- (void)updateLayoutsForActionSequenceWithRotateTransform:(struct CGAffineTransform)arg1 forChangedLayout:(id)arg2;
- (void)dynamicRotateDidBeginForRep:(id)arg1;
- (void)dynamicDragDidEnd;
- (void)updateForDragWithChangedGhostLayout:(id)arg1 isFirstNodeDrag:(BOOL)arg2;
- (void)dynamicDragDidBeginForRep:(id)arg1 fromPathNode:(BOOL)arg2;
- (void)dynamicOperationDidEnd;
- (id)p_repsToConsiderForDynamicOperationAssociatedWithRep:(id)arg1 forcingOriginalRepInclusion:(BOOL)arg2 forcingOriginalRepExclusion:(BOOL)arg3;
- (void)dynamicOperationDidBeginForRep:(id)arg1 fromPathNode:(BOOL)arg2;
- (void)dealloc;
- (id)initWithInteractiveCanvasController:(id)arg1;

@end

