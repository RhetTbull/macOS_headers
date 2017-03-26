//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDMouseEventHandler-Protocol.h"

@class NSEvent, NSString;
@protocol TSDMouseEventHandler;

@interface TSDDeepPressComposingEventHandler : NSObject <TSDMouseEventHandler>
{
    NSObject<TSDMouseEventHandler> *mPrimaryEventHandler;
    NSObject<TSDMouseEventHandler> *mDeepEventHandler;
    unsigned long long mState;
    NSEvent *mMouseDownEvent;
    struct CGPoint mMouseDownPoint;
}

@property(readonly, nonatomic) struct CGPoint mouseDownPoint; // @synthesize mouseDownPoint=mMouseDownPoint;
@property(readonly, retain, nonatomic) NSEvent *mouseDownEvent; // @synthesize mouseDownEvent=mMouseDownEvent;
@property(retain, nonatomic) NSObject<TSDMouseEventHandler> *deepEventHandler; // @synthesize deepEventHandler=mDeepEventHandler;
- (void)cancelMouseDown;
- (BOOL)mouseHandlingHasCompleted;
- (BOOL)handleKeyDownWithEvent:(id)arg1;
- (BOOL)wantsOnlySingleClicks;
- (BOOL)handleMultipleClicksAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)handleDoubleClickAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)handleSingleClickAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)completeTransitionToDeep;
- (void)transitionByAmount:(double)arg1;
- (void)pressureChangeWithEvent:(id)arg1;
- (void)flagsChangedWithEvent:(id)arg1;
- (void)mouseUpAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseScrolledAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseDraggedAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseDownAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)p_selectPrimaryIfIndeterminate;
@property(readonly, nonatomic) NSObject<TSDMouseEventHandler> *p_currentEventHandler;
- (void)dealloc;
- (id)initWithPrimaryEventHandler:(id)arg1 deepEventHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

