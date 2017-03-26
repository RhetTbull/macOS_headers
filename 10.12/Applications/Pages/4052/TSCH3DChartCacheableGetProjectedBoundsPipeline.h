//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DChartGetProjectedBoundsPipeline.h"

@class TSCH3DGetBoundsProjector;

@interface TSCH3DChartCacheableGetProjectedBoundsPipeline : TSCH3DChartGetProjectedBoundsPipeline
{
    BOOL mUseIndividualBounds;
    BOOL mLayoutBoundsValid;
    box_a3bd9649 mShadowsLayout3DBounds;
    box_a3bd9649 mLayout3DBounds;
    box_a3bd9649 mBodyLayout3DBounds;
    box_a3bd9649 mConstantDepthBodyLayout3DBounds;
    TSCH3DGetBoundsProjector *mProjector;
}

+ (BOOL)includesDepthForUnitScaleForScene:(id)arg1;
+ (void)setIncludesDepthForUnitScale:(BOOL)arg1 forScene:(id)arg2;
@property(nonatomic) BOOL useIndividualBounds; // @synthesize useIndividualBounds=mUseIndividualBounds;
- (id).cxx_construct;
- (void)updateBounds;
- (void)updateRenderBounds;
- (void)calculateBounds;
- (void)updateLayoutBounds;
- (void)calculateLayoutLabelsBounds;
- (void)calculateLayoutBounds;
- (id)updatedConstantDepthSceneFromScene:(id)arg1;
- (box_a3bd9649)boundsFromObjectBoundsOfType:(int)arg1;
- (void)invalidateCachedBounds;
- (void)dealloc;
- (id)initWithScene:(id)arg1;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1;

@end

