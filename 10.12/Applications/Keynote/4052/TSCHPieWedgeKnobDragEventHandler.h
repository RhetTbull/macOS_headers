//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDKnobDragEventHandler.h"

@class NSEvent;

@interface TSCHPieWedgeKnobDragEventHandler : TSDKnobDragEventHandler
{
    BOOL mOKToDoDrag;
    BOOL mDidHandleInMouseDown;
    struct CGPoint mUnscaledPointForMouseDown;
    NSEvent *mEventForMouseDown;
}

- (void)cancelMouseDown;
- (BOOL)mouseHandlingHasCompleted;
- (BOOL)handlesEventLoop;
- (BOOL)handleDoubleClickAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)handleSingleClickAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)handleKeyDownWithEvent:(id)arg1;
- (void)flagsChangedWithEvent:(id)arg1;
- (void)mouseUpAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseDraggedAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseDownAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (unsigned long long)p_pieSeriesHitAtPoint:(struct CGPoint)arg1;
- (id)p_currentlySelectedSeries;
- (id)p_chartEditor;
- (id)chartRep;
- (void)dealloc;

@end

