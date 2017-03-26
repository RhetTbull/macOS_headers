//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GHControlledView.h"

@class JAListViewItem, NSArray, NSColor, NSIndexSet, NSMutableArray, NSScrollView, NSTrackingArea;
@protocol JAListViewDataSource, JAListViewDelegate, JAListViewDraggingDestinationDelegate, JAListViewDraggingSourceDelegate;

@interface JAListView : GHControlledView
{
    NSMutableArray *cachedViews;
    NSArray *cachedVisibleViews;
    double heightForAllContent;
    id <JAListViewDataSource> dataSource;
    id <JAListViewDelegate> delegate;
    id <JAListViewDraggingSourceDelegate> draggingSourceDelegate;
    id <JAListViewDraggingDestinationDelegate> draggingDestinationDelegate;
    BOOL canCallDataSourceInParallel;
    struct CGPoint margin;
    double *cachedLocations;
    JAListViewItem *viewBeingSelected;
    NSColor *backgroundColor;
    BOOL isResizingManually;
    BOOL conditionallyUseLayerBacking;
    BOOL allowNoSelection;
    NSMutableArray *currentlySelectedViews;
    NSTrackingArea *currentTrackingArea;
    CDUnknownBlockType currentAnimationBlock;
    NSMutableArray *viewsBeingUsedForInertialScrolling;
    unsigned long long minIndexForReLayout;
    CDStruct_3c058996 padding;
}

@property(retain, nonatomic) NSMutableArray *cachedViews; // @synthesize cachedViews;
@property(nonatomic) BOOL allowNoSelection; // @synthesize allowNoSelection;
@property(nonatomic) unsigned long long minIndexForReLayout; // @synthesize minIndexForReLayout;
@property(retain, nonatomic) NSMutableArray *viewsBeingUsedForInertialScrolling; // @synthesize viewsBeingUsedForInertialScrolling;
@property(copy, nonatomic) CDUnknownBlockType currentAnimationBlock; // @synthesize currentAnimationBlock;
@property(retain, nonatomic) NSTrackingArea *currentTrackingArea; // @synthesize currentTrackingArea;
@property(retain, nonatomic) NSMutableArray *currentlySelectedViews; // @synthesize currentlySelectedViews;
@property(nonatomic) BOOL conditionallyUseLayerBacking; // @synthesize conditionallyUseLayerBacking;
@property(readonly, nonatomic) double heightForAllContent; // @synthesize heightForAllContent;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor;
@property(retain, nonatomic) JAListViewItem *viewBeingSelected; // @synthesize viewBeingSelected;
@property(nonatomic) CDStruct_3c058996 padding; // @synthesize padding;
@property(nonatomic) struct CGPoint margin; // @synthesize margin;
@property(nonatomic) BOOL canCallDataSourceInParallel; // @synthesize canCallDataSourceInParallel;
@property(retain, nonatomic) NSArray *cachedVisibleViews; // @synthesize cachedVisibleViews;
@property(nonatomic) id <JAListViewDraggingDestinationDelegate> draggingDestinationDelegate; // @synthesize draggingDestinationDelegate;
@property(nonatomic) id <JAListViewDraggingSourceDelegate> draggingSourceDelegate; // @synthesize draggingSourceDelegate;
@property(nonatomic) id <JAListViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic) id <JAListViewDataSource> dataSource; // @synthesize dataSource;
- (void)clearViewsBeingUsedForInertialScrolling;
- (void)unmarkViewBeingUsedForInertialScrolling:(id)arg1;
- (void)markViewBeingUsedForInertialScrolling:(id)arg1;
- (void)deselectAllViews;
- (void)deselectView:(id)arg1;
- (void)selectViewAtIndex:(unsigned long long)arg1;
- (void)selectView:(id)arg1;
- (id)previousSelectableViewFromIndex:(unsigned long long)arg1;
- (id)nextSelectableViewFromIndex:(unsigned long long)arg1;
- (id)previousSelectableView;
- (id)nextSelectableView;
- (void)getSelectionMinimumIndex:(unsigned long long *)arg1 maximumIndex:(unsigned long long *)arg2;
@property(readonly, nonatomic) NSIndexSet *selectedIndices;
@property(readonly, nonatomic) NSArray *selectedViews;
@property(retain, nonatomic) NSArray *viewsCurrentlyBeingDragged;
@property(readonly, nonatomic) double *cachedLocations;
- (void)clearCachedLocations;
@property(readonly, nonatomic) NSScrollView *scrollView;
- (void)updateCachedVisibleViews;
@property(readonly, nonatomic) NSArray *visibleViews;
- (BOOL)containsViewItem:(id)arg1;
- (BOOL)isViewVisible:(id)arg1;
- (long long)indexForView:(id)arg1;
- (id)viewAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfViews;
- (double)heightForView:(id)arg1 proposedHeight:(double)arg2;
- (double)yForView:(id)arg1 proposedY:(double)arg2;
- (void)recacheAllLocations;
- (void)reloadLayoutWithAnimation:(CDUnknownBlockType)arg1;
- (void)reloadLayoutAnimated:(BOOL)arg1;
- (void)seriouslyShowVisibleViewsWithAnimation;
- (void)reloadLayout;
- (void)standardLayoutAnimated:(BOOL)arg1 removeViews:(id)arg2 addViews:(id)arg3 moveViews:(id)arg4;
- (void)standardLayoutRemoveViews:(id)arg1 addViews:(id)arg2 moveViews:(id)arg3;
- (double)cachedYLocationForView:(id)arg1;
- (void)showVisibleViewsAnimated:(BOOL)arg1;
- (void)reloadAllViews;
- (void)reloadDataWithAnimation:(CDUnknownBlockType)arg1;
- (void)reloadDataAnimated:(BOOL)arg1;
- (void)reloadData;
- (void)sizeToFitIfNeeded;
- (id)viewAtPoint:(struct CGPoint)arg1;
- (void)viewFrameDidChange:(id)arg1;
- (void)viewBoundsDidChange:(id)arg1;
- (void)setup;
- (void)draggingExited:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)keyDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)finalize;

@end

