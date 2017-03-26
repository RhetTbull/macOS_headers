//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSTimer, PSMTabBarCell, PSMTabBarControl, PSMTabDragWindow;

@interface PSMTabDragAssistant : NSObject
{
    PSMTabBarControl *_sourceTabBar;
    PSMTabBarControl *_destinationTabBar;
    NSMutableSet *_participatingTabBars;
    PSMTabBarCell *_draggedCell;
    int _draggedCellIndex;
    BOOL _isDragging;
    PSMTabDragWindow *_dragTabWindow;
    PSMTabDragWindow *_dragViewWindow;
    struct CGSize _dragWindowOffset;
    NSTimer *_fadeTimer;
    NSTimer *_animationTimer;
    NSMutableArray *_sineCurveWidths;
    struct CGPoint _currentMouseLoc;
    PSMTabBarCell *_targetCell;
}

+ (id)sharedDragAssistant;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)removeAllPlaceholdersFromTabBar:(id)arg1;
- (void)distributePlaceholdersInTabBar:(id)arg1;
- (void)distributePlaceholdersInTabBar:(id)arg1 withDraggedCell:(id)arg2;
- (void)calculateDragAnimationForTabBar:(id)arg1;
- (void)animateDrag:(id)arg1;
- (void)fadeOutDragWindow:(id)arg1;
- (void)fadeInDragWindow:(id)arg1;
- (void)draggingMovedTo:(struct CGPoint)arg1;
- (void)draggingBeganAt:(struct CGPoint)arg1;
- (void)finishDrag;
- (void)draggedImageEndedAt:(struct CGPoint)arg1 operation:(unsigned long long)arg2;
- (void)performDragOperation:(id)arg1;
- (void)draggingExitedTabBar:(id)arg1;
- (void)draggingUpdatedInTabBar:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)draggingEnteredTabBar:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)startDraggingCell:(id)arg1 fromTabBar:(id)arg2 withMouseDownEvent:(id)arg3;
- (void)startAnimationWithOrientation:(int)arg1 width:(double)arg2;
- (void)startAnimation;
- (void)addSineCurveWidthsWithOrientation:(int)arg1 size:(struct CGSize)arg2;
- (void)setTargetCell:(id)arg1;
- (id)targetCell;
- (void)setCurrentMouseLoc:(struct CGPoint)arg1;
- (struct CGPoint)currentMouseLoc;
- (void)setIsDragging:(BOOL)arg1;
- (BOOL)isDragging;
- (void)setDraggedCellIndex:(int)arg1;
- (int)draggedCellIndex;
- (void)setDraggedCell:(id)arg1;
- (id)draggedCell;
- (void)setDestinationTabBar:(id)arg1;
- (id)destinationTabBar;
- (void)setSourceTabBar:(id)arg1;
- (id)sourceTabBar;
- (void)dealloc;
- (id)init;

@end

