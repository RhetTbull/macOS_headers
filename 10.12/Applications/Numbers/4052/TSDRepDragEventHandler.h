//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDAutoscrollDelegate-Protocol.h"
#import "TSDMouseEventHandler-Protocol.h"
#import "TSDTrackerManipulator-Protocol.h"

@class NSString, NSTimer, TSDAutoscroll, TSDInteractiveCanvasController, TSDMacGuideFeedbackManager, TSDRep, TSDRepDragTracker;

@interface TSDRepDragEventHandler : NSObject <TSDMouseEventHandler, TSDTrackerManipulator, TSDAutoscrollDelegate>
{
    TSDRepDragTracker *mTracker;
    struct CGPoint mLastPoint;
    BOOL mMouseIsDown;
    BOOL mNeedToCloseGroup;
    BOOL mHaveDragged;
    BOOL mHaveShownDragUI;
    NSTimer *mShowUITimer;
    TSDAutoscroll *mAutoscroll;
    TSDMacGuideFeedbackManager *mFeedbackManager;
}

@property(retain, nonatomic) TSDAutoscroll *autoscroll; // @synthesize autoscroll=mAutoscroll;
- (void)autoscrollWillNotStart;
- (void)updateAfterAutoscroll:(id)arg1;
@property(nonatomic) struct CGPoint autoscrollPoint;
@property(readonly, nonatomic) TSDInteractiveCanvasController *icc;
- (void)p_endRepDragging;
- (BOOL)p_shouldCopyObjectsForEvent:(id)arg1;
- (BOOL)p_shouldUseGuidesForEvent:(id)arg1;
- (BOOL)p_shouldConstrainForEvent:(id)arg1;
- (void)p_updateTrackerAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)p_showDragUI;
- (void)p_updateTrackerPointsAtPoint:(struct CGPoint)arg1;
- (BOOL)shouldExtendSelectionForEvent:(id)arg1;
- (void)flagsChangedWithEvent:(id)arg1;
- (void)mouseUpAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseDraggedAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseScrolledAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)insertCopiesOfInfos:(id)arg1;
- (void)cancelMouseDown;
- (void)mouseDownAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)operationDidEnd;
- (void)operationWillEnd;
- (BOOL)readyToEndOperation;
- (id)tracker;
- (BOOL)allowTrackerManipulatorToTakeControl:(id)arg1;
@property(readonly, nonatomic) TSDRep *rep;
- (void)dealloc;
- (id)initWithRep:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

