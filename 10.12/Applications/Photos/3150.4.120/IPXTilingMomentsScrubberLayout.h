//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXTilingScrubberLayout.h"

@class NSArray;

@interface IPXTilingMomentsScrubberLayout : IPXTilingScrubberLayout
{
    NSArray *_yearBounds;
    unsigned long long _dataSourceSequence;
}

+ (double)momentsVersionOffset;
+ (double)momentsVersionSpacing;
+ (double)momentsVersionWidth;
+ (void)initialize;
- (void).cxx_destruct;
- (struct PXTileGeometry)geometryForItemIdentifier:(id)arg1;
- (struct CGRect)rectForSelectionItemWithUserData:(out id *)arg1;
- (id)indexPathForItemAtIndex:(long long)arg1;
- (long long)tileCount;
- (struct CGRect)rectForItemAtIndex:(long long)arg1;
- (void)calculateBoundsForYears;
- (void)updateContentBounds;
- (double)widthOfYear:(id)arg1;
- (struct CGSize)itemSize;
- (BOOL)needsLayout;
- (void)prepareLayout;
- (double)animationDuration;
- (struct CGPoint)locationForIdentifier:(id)arg1;
- (id)identifierClosestToPoint:(struct CGPoint)arg1;
- (id)identifierAtRect:(struct CGRect)arg1;
- (id)nextTileIdentifier;
- (id)previousTileIdentifier;
- (id)anchorTileIdentifier;
- (struct CGPoint)preferredTargetForContentOffset:(struct CGPoint)arg1;
- (id)init;

@end

