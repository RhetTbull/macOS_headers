//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXTilingScrubberLayout.h"

@class NSIndexPath, NSMutableDictionary, NSTimer;

__attribute__((visibility("hidden")))
@interface IPXTilingExpandedScrubberLayout : IPXTilingScrubberLayout
{
    double _expandedItemDelta;
    struct CGRect _targetFrame;
    id _targetId;
    NSMutableDictionary *_selectionUserData;
    int _selectionMediaType;
    NSTimer *_expansionFrequencyTimer;
    BOOL _pendingExpandedState;
    BOOL _isExpanded;
    double _expandedSpacing;
    NSIndexPath *_centerTileIndexPath;
    id _centerTileIdentifier;
    double _playableTileWidth;
}

@property(readonly, nonatomic) double playableTileWidth; // @synthesize playableTileWidth=_playableTileWidth;
@property(readonly, nonatomic) id centerTileIdentifier; // @synthesize centerTileIdentifier=_centerTileIdentifier;
@property(readonly, nonatomic) NSIndexPath *centerTileIndexPath; // @synthesize centerTileIndexPath=_centerTileIndexPath;
@property(readonly, nonatomic) BOOL isExpanded; // @synthesize isExpanded=_isExpanded;
@property(nonatomic) double expandedSpacing; // @synthesize expandedSpacing=_expandedSpacing;
- (void).cxx_destruct;
- (struct CGRect)rectForSelectionItemWithUserData:(out id *)arg1;
- (void)scrubberTouchesEnded;
- (void)scrubberTouchesBegan;
- (void)scrubberDidEndScrolling;
- (void)scrubberWillEndScrollingAtItemId:(id)arg1;
- (void)scrubberPrepareForScrollCalculation;
- (void)scrubberDidScrollWithContentOffset:(double)arg1;
- (void)scrubberWillBeginScrolling;
- (void)scrubberWillScrollToPosition:(double)arg1;
- (void)scrubberWillScrollToItem:(id)arg1;
- (BOOL)_isItemNearCenter:(id)arg1;
- (BOOL)_isXPointNearCenter:(double)arg1;
- (double)_centerPoint;
- (void)scrubberDidSelectItem:(id)arg1 animate:(BOOL)arg2;
- (void)_updateTargetWithItem:(id)arg1;
- (void)_updateExpandedItemDelta;
- (struct CGSize)targetMediaSizeForItemIdentifier:(id)arg1;
- (struct CGRect)rectForItemAtIndexPath:(id)arg1;
- (BOOL)_isMovieItem:(id)arg1;
- (BOOL)_isLivePhotoItem:(id)arg1;
- (int)_mediaTypeForItemIdentifier:(id)arg1;
- (void)updateContentBounds;
- (void)invalidateLayoutWithContext:(id)arg1;
- (double)animationDuration;
- (BOOL)_updateMediaType;
- (void)_highFrequencyArrowExpirationTimer:(id)arg1;
- (BOOL)_updateExpandedState:(BOOL)arg1;
- (BOOL)_updateCenterTile:(id)arg1;
- (void)_updateExpandedState:(BOOL)arg1 withCenterIdentifier:(id)arg2 animate:(BOOL)arg3;
- (id)identifierAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)scrollPointForItemIdentifier:(id)arg1;
- (BOOL)isAtValidScrollPoint;
- (BOOL)_selectedMediaNeedsExtraSpacing;
- (void)setAvInProgress:(BOOL)arg1;
- (void)setAvExpansionState:(long long)arg1;
- (id)anchorTileIdentifier;
- (void)prepareForChangeFromLayout:(id)arg1 currentSelectionSnapshot:(id)arg2;
- (void)_setupInitialStateWithSelectionSnapshot:(id)arg1;
- (id)initWithDataSource:(id)arg1 selectionSnapshot:(id)arg2 configuration:(id)arg3;

@end

