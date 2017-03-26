//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDDecorator-Protocol.h"
#import "TSDMouseEventHandler-Protocol.h"

@class CALayer, NSMutableSet, NSString, TSDInteractiveCanvasController, TSDPathEditor;

@interface TSDPathDragSelectionEventHandler : NSObject <TSDDecorator, TSDMouseEventHandler>
{
    CALayer *mSelectionOverlay;
    TSDInteractiveCanvasController *mICC;
    TSDPathEditor *mPathEditor;
    struct CGPoint mStartingPoint;
    struct CGRect mSelectionRect;
    NSMutableSet *mPendingSelection;
    NSMutableSet *mOriginalSelection;
}

- (void)flagsChangedWithEvent:(id)arg1;
- (void)mouseUpAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseDraggedAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseDownAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)decoratorOverlayLayers;
- (void)dealloc;
- (id)initWithPathEditor:(id)arg1 andInteractiveCanvasController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

