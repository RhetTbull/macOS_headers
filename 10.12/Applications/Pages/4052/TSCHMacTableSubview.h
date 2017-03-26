//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "TSCHUnretainedParent-Protocol.h"

@class NSMutableArray, TSCHMacTableFloatingCellsView, TSCHMacTableHighlightView, TSCHMacTableView;

@interface TSCHMacTableSubview : NSView <TSCHUnretainedParent>
{
    TSCHMacTableView *mTableView;
    TSCHMacTableHighlightView *mHighlightView;
    TSCHMacTableFloatingCellsView *mMovingItem;
    TSCHMacTableFloatingCellsView *mMovingItemLessThan;
    TSCHMacTableFloatingCellsView *mMovingItemGreaterThan;
    struct CGPoint mDragOffset;
    hash_map_3fa342e8 *mSTLCellCache;
    struct CGPoint mTableViewOffset;
    BOOL mOKToAddCellView;
    NSMutableArray *mCollaboratorHighlightStorage;
}

@property(readonly, nonatomic) NSView *highlightView; // @synthesize highlightView=mHighlightView;
@property(readonly, nonatomic) TSCHMacTableFloatingCellsView *movingItemGreaterThan; // @synthesize movingItemGreaterThan=mMovingItemGreaterThan;
@property(readonly, nonatomic) TSCHMacTableFloatingCellsView *movingItemLessThan; // @synthesize movingItemLessThan=mMovingItemLessThan;
- (id)findCellInRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id)tableViewCellsEnumerator;
- (void)didAddSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)clearParent;
- (void)endMoving;
- (void)assignLessThanToGreaterThan;
- (void)assignGreaterThanToLessThan;
- (void)swapMoverTranslationWithGreaterThan;
- (void)releaseGreaterThanView;
- (void)translateGreaterThan;
- (void)swapMoverTranslationWithLessThan;
- (void)p_SwapTranslation:(id)arg1 with:(id)arg2;
- (void)p_animateView:(id)arg1 withStartFrame:(struct CGRect)arg2 withEndFrame:(struct CGRect)arg3;
- (void)releaseLessThanView;
- (void)translateLessThan;
- (void)p_translateMoveItemByDeltaX:(double)arg1 deltaY:(double)arg2;
- (void)trackMoveColumnForMouseLocation:(struct CGPoint)arg1;
- (void)trackMoveRowForMouseLocation:(struct CGPoint)arg1;
- (void)showHighlight;
- (void)hideHighlight;
- (int)highlightLocation;
- (void)removeAllKeyedHighlights;
- (void)removeHighlightForKey:(id)arg1;
- (void)updateHighlightForKey:(id)arg1 userName:(id)arg2 color:(id)arg3 type:(int)arg4 frame:(struct CGRect)arg5;
- (void)p_updateHighlightView:(id)arg1 type:(int)arg2 frame:(struct CGRect)arg3;
- (id)p_fetchHighlightForKey:(id)arg1;
@property(readonly, nonatomic) BOOL isDraggingCells;
@property(readonly, nonatomic) NSView *buttonView;
@property(readonly, nonatomic) NSView *shadowView;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)addViewToTableSubview:(id)arg1;
- (BOOL)containsCell:(id)arg1;
- (BOOL)isFlipped;
- (void)addSubview:(id)arg1;
- (BOOL)canAddSubview:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)p_adjustShadowFrames;
- (void)tableViewScrolledToOffset:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 forTable:(id)arg2;

@end

