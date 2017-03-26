//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNMacVerticalAutoscrollingView.h"

#import "KNMacSlideDragControllerDelegate-Protocol.h"
#import "KNSlideNavigatorLayerHost-Protocol.h"
#import "NSDraggingDestination-Protocol.h"

@class CALayer, KNMacBaseSlideNavigatorViewController, KNMacSlideDragController, KNNavigatorLayer, NSString;

@interface KNMacBaseSlideNavigatorView : KNMacVerticalAutoscrollingView <NSDraggingDestination, KNMacSlideDragControllerDelegate, KNSlideNavigatorLayerHost>
{
    double mLayerHeight;
    unsigned long long mContextIndex;
    KNMacSlideDragController *mDragController;
    unsigned long long mRowIndexWhereDragOccurred;
    unsigned long long mIndentLevelOfDraggedRow;
    struct CGPoint mMouseDownPoint;
    struct CGRect mVisibleRectBeforeDrag;
    BOOL mIgnoreScrollingToSelection;
    BOOL mViewWasTornDown;
    BOOL mDraggingEntered;
    BOOL mDragDidNotOriginateInView;
    CALayer *mDropIndicatorLayer;
    KNMacBaseSlideNavigatorViewController *_viewController;
}

+ (void)registerUserDefaults;
+ (Class)dropIndicatorLayerClass;
@property(nonatomic) KNMacBaseSlideNavigatorViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) struct CGPoint mouseDownPoint; // @synthesize mouseDownPoint=mMouseDownPoint;
@property(nonatomic) unsigned long long indentLevelOfDraggedRow; // @synthesize indentLevelOfDraggedRow=mIndentLevelOfDraggedRow;
@property(nonatomic) unsigned long long rowIndexWhereDragOccurred; // @synthesize rowIndexWhereDragOccurred=mRowIndexWhereDragOccurred;
@property(readonly, nonatomic) KNMacSlideDragController *dragController; // @synthesize dragController=mDragController;
@property(retain, nonatomic) CALayer *p_dropIndicatorLayer; // @synthesize p_dropIndicatorLayer=mDropIndicatorLayer;
@property(readonly, nonatomic) unsigned long long contextIndex; // @synthesize contextIndex=mContextIndex;
- (void)p_windowDidResignKeyWindow:(id)arg1;
- (void)p_windowDidBecomeKeyWindow:(id)arg1;
- (void)deselectAll:(id)arg1;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)scrollSelectionRectIntoViewIfNeeded:(struct CGRect)arg1;
- (void)p_setNeedsToIgnoreScrollingToSelection;
- (struct CGRect)thumbnailFrameForSlideLayer:(id)arg1 forDragController:(id)arg2;
- (void)insertNewSlideNodeAfterSlideNodesInContext:(id)arg1;
- (void)insertNewSlideNode:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)duplicateSlideNodesInContext:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)deleteSlideNodesInContext:(id)arg1;
- (void)delete:(id)arg1;
- (void)cutSlideNodesInContext:(id)arg1;
- (void)cut:(id)arg1;
- (void)pasteValues:(id)arg1;
- (void)pasteAsPlainText:(id)arg1;
- (void)pasteAfterSlideNodesInContext:(id)arg1;
- (void)paste:(id)arg1;
- (void)copySlideNodesInContext:(id)arg1;
- (void)copy:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (id)contextMenu;
- (unsigned long long)nominalIndentLevelUnderDragInfo:(id)arg1;
- (unsigned long long)p_slideIndexUnderDragInfo:(id)arg1 withOperation:(unsigned long long)arg2;
- (void)p_updateDragPositionForInfo:(id)arg1 withOperation:(unsigned long long)arg2;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)p_updateDropIndicator;
- (void)p_cleanUpDragIfNeeded:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)p_leaveGapInNavigatorForDragInfo:(id)arg1 withDragOperation:(unsigned long long)arg2;
- (void)snapbackWillBeginForDragController:(id)arg1;
- (void)dragSessionDidEndForDragController:(id)arg1;
- (void)dragSessionWillBeginForDragController:(id)arg1;
- (id)slideLayersForDragController:(id)arg1;
- (void)p_returnDraggingLayersToNavigatorLayer;
- (BOOL)deactivateDragController;
- (void)activateNewDragControllerWithEvent:(id)arg1;
- (BOOL)handleSlideSelectionForMouseEventAtIndex:(unsigned long long)arg1 forEvent:(id)arg2;
- (void)p_scrollVerticalToYPosition:(double)arg1;
- (double)p_verticalPageScrollDistance;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)insertText:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (BOOL)canBecomeKeyView;
- (void)keyDown:(id)arg1;
- (int)operationForSlideSelectionEvent:(id)arg1;
- (struct CGRect)visibleRectForNavigatorLayer:(id)arg1;
- (void)updateLayerHeightTo:(double)arg1 forNavigatorLayer:(id)arg2;
@property(readonly, nonatomic) KNNavigatorLayer *navigatorLayer;
- (struct CGRect)rowRectForSlideAtIndex:(unsigned long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)p_enclosingClipViewFrameDidChangeNotification:(id)arg1;
- (void)p_enclosingClipViewBoundsDidChangeNotification:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (BOOL)p_canScroll;
- (void)p_windowDidChangeBackingProperties:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)isFlipped;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)teardown;
- (void)p_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

