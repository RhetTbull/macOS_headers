//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDRepDragTrackerDelegate-Protocol.h"

@class KNActionGhostDynamicOperationManager, KNInteractiveCanvasController, NSString;

@interface KNRepDragTrackerDelegate : NSObject <TSDRepDragTrackerDelegate>
{
    KNInteractiveCanvasController *mICC;
    BOOL mIsResponsibleForEndingDynamicOperation;
}

- (double)dragTracker:(id)arg1 verticalOffsetForDrawable:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)dragTrackerDidFinishDragging:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)dragTrackerWillFinishDragging:(id)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)dragTrackerContinuedDragging:(id)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)dragTracker:(id)arg1 willBeginDraggingDrawable:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)dragTrackerWillBeginDragging:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)p_firstGhostRepInActionSequenceAssociatedWithDragTracker:(id)arg1;
- (BOOL)p_shouldHandleDraggingForRep:(id)arg1;
@property(readonly, nonatomic) KNActionGhostDynamicOperationManager *p_actionGhostDynamicOperationManager;
- (id)dragTracker:(id)arg1 drawablesToDrag:(id)arg2 atPoint:(struct CGPoint)arg3;
- (BOOL)p_repsContainsOnlyGhostReps:(id)arg1;
- (id)selectionBehaviorForReps:(id)arg1;
- (id)p_motionActionInfosInReps:(id)arg1;
- (id)p_nonMotionActionInfosInReps:(id)arg1;
- (id)initWithInteractiveCanvasController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

