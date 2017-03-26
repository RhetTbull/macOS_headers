//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDContainerRep.h"

#import "TSDMagicMoveMatching-Protocol.h"

@interface TSDGroupRep : TSDContainerRep <TSDMagicMoveMatching>
{
    struct CGRect mLastBoundsForStandardKnobs;
    struct CGAffineTransform mOriginalKnobPositionTransformForInspectorResize;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
- (id)newMouseEventHandlerAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)showGroupEditingCollaborationHUDAtPoint:(struct CGPoint)arg1;
- (id)i_handleDeepSubselectionTapAtPoint:(struct CGPoint)arg1;
- (BOOL)p_handleSubselectionTapAtPoint:(struct CGPoint)arg1;
- (BOOL)p_allowedToEditChildren;
- (BOOL)p_allowedToEditChildrenIgnoringCollaboration;
- (BOOL)handleMultipleTapAtPoint:(struct CGPoint)arg1;
- (BOOL)handleDoubleTapAtPoint:(struct CGPoint)arg1;
- (BOOL)handleSingleTapAtPoint:(struct CGPoint)arg1;
- (BOOL)wantsToHandleTapsWhenLocked;
- (void)dynamicResizeDidEndWithTracker:(id)arg1;
- (void)dynamicallyResizingWithTracker:(id)arg1;
- (id)dynamicResizeDidBegin;
- (void)dynamicOperationDidBegin;
- (id)allRepsContainedInGroup;
- (void)setNeedsDisplay;
- (void)processChangedProperty:(int)arg1;
- (BOOL)intersectsUnscaledRect:(struct CGRect)arg1;
- (BOOL)containsPoint:(struct CGPoint)arg1 withSlop:(struct CGSize)arg2;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertNaturalPointFromUnscaledCanvas:(struct CGPoint)arg1;
- (BOOL)shouldShowCommentHighlight;
- (void)updateFromLayout;
- (struct CGRect)frameInUnscaledCanvas;
- (struct CGColor *)selectionHighlightColor;
- (BOOL)shouldShowSelectionHighlight;
- (struct CGAffineTransform)knobPositionTransformForInspectorResize;
- (void)recursivelyDrawInContext:(struct CGContext *)arg1;
- (struct CGRect)clipRect;
- (void)drawInContext:(struct CGContext *)arg1;
- (Class)layerClass;
- (BOOL)directlyManagesLayerContent;

@end

