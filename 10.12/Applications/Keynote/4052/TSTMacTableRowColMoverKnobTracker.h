//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTableRowColMoverKnobTracker.h"

#import "TSTTableDragMoveToCanvasStarter-Protocol.h"
#import "TSTTableDragStarter-Protocol.h"

@class NSString, TSTRowColDraggingSource;

@interface TSTMacTableRowColMoverKnobTracker : TSTTableRowColMoverKnobTracker <TSTTableDragStarter, TSTTableDragMoveToCanvasStarter>
{
    BOOL mStartAnimationCompleted;
    BOOL mExceedingBreakawayDistance;
    BOOL mDraggingSessionBegan;
    TSTRowColDraggingSource *mDraggingSource;
    BOOL mCopyMode;
    BOOL mMoveModeAllowed;
    unsigned long long mFinalDragOperation;
    BOOL mDidEndKnobTracking;
    struct CGRect mBreakawayFrame;
}

- (int)allowedAutoscrollDirections;
- (void)didPerformDragOperationMoveOnCanvasWithNewDrawable:(id)arg1;
- (void)willPerformDragOperationMoveOnCanvas;
- (id)contentDescriptionDragDetails;
- (struct CGRect)imageForDraggingFrame:(struct CGPoint)arg1;
- (id)imageForDragging;
- (void)updatingDraggingOperation:(unsigned long long)arg1;
- (void)draggingSessionEnded:(unsigned long long)arg1;
- (void)draggingSessionWillBegin;
- (void)beginDraggingSessionWithEvent:(id)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)readyToBeginDraggingSession;
- (BOOL)cell:(id *)arg1 forCellID:(struct TSUCellCoord)arg2;
- (void)flagsChangedWithEvent:(id)arg1;
- (void)animationObserverTaskCompleted:(id)arg1;
- (id)getAnimationOverlayLayers;
- (void)p_EndMovingKnobWorkAfterNSDragging;
- (void)p_deleteSourceRowsColumns;
- (id)newSelection;
- (void)endMovingKnob;
- (void)moveKnobToRepPosition:(struct CGPoint)arg1;
- (void)p_callEndMovingKnobWorkIfSafe;
- (void)dealloc;
- (id)initWithRep:(id)arg1 knob:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

