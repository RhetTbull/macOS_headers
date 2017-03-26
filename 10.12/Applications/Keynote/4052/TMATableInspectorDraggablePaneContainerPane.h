//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAInspectorPaneGroupView.h"

@class NSLayoutConstraint, NSView;
@protocol TMATableInspectorDraggablePane, TMATableInspectorPaneDragging;

@interface TMATableInspectorDraggablePaneContainerPane : TMAInspectorPaneGroupView
{
    id <TMATableInspectorPaneDragging> mDraggingController;
    NSView *mPlaceholderView;
    NSView<TMATableInspectorDraggablePane> *mDraggingReferencePane;
    BOOL mBefore;
    double mDragOffset;
    NSLayoutConstraint *mDragHeightConstraint;
    NSLayoutConstraint *mDragLeadingConstraint;
    NSLayoutConstraint *mDragTrailingConstraint;
    NSLayoutConstraint *mDragTopConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *dragTopConstraint; // @synthesize dragTopConstraint=mDragTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dragTrailingConstraint; // @synthesize dragTrailingConstraint=mDragTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dragLeadingConstraint; // @synthesize dragLeadingConstraint=mDragLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dragHeightConstraint; // @synthesize dragHeightConstraint=mDragHeightConstraint;
- (void)p_resetDragState;
- (void)p_teardownDrag;
- (void)p_finishDrag;
- (void)p_cancelDrag;
- (void)p_updateDragAtPosition:(struct CGPoint)arg1;
- (void)p_addDraggingPaneViewAsASubViewAtPosition:(struct CGPoint)arg1;
- (void)p_beginDragWithPaneView:(id)arg1 atPosition:(struct CGPoint)arg2;
- (void)p_clearShadowOnPaneView:(id)arg1;
- (void)p_setShadowOnPaneView:(id)arg1;
- (void)p_mouseUp:(id)arg1;
- (void)p_mouseDragged:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)p_keyDown:(id)arg1;
- (void)p_handleDragInATrackingLoop;
- (void)mouseDown:(id)arg1;
- (id)p_paneViewForDragWithEvent:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 draggingController:(id)arg2;

@end

