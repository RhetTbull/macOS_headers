//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSCH3DSceneDelegate-Protocol.h"
#import "TSCH3DSceneObjectDelegator-Protocol.h"
#import "TSCHUnretainedParent-Protocol.h"

@class NSMutableArray, NSMutableDictionary, TSCH3DAnimationTimeSlice, TSCH3DAnimationTiming, TSCH3DAnimationTimings, TSCH3DAnimationValueTiming, TSCH3DChartElementAnimationTimeSlice, TSCH3DChartRep, TSCH3DOrderedDictionary, TSCH3DScene;

@interface TSCH3DChartAnimation : NSObject <TSCH3DSceneObjectDelegator, TSCH3DSceneDelegate, TSCHUnretainedParent>
{
    TSCH3DChartRep *mRep;
    TSCH3DChartElementAnimationTimeSlice *mTimeSlice;
    TSCH3DScene *mScene;
    struct ChartAnimationTimeRanges mTimeRanges;
    TSCH3DAnimationTimings *mGlobalTimings;
    TSCH3DAnimationTimings *mBackgroundPlaneTimings;
    TSCH3DAnimationTimings *mElementPlaneTimings;
    TSCH3DAnimationTimings *mElementTimings;
    NSMutableDictionary *mTimingContext;
    NSMutableArray *mSceneAnimationClips;
    TSCH3DScene *mLayoutScene;
    TSCH3DOrderedDictionary *mSeparateLayers;
    TSCH3DAnimationValueTiming *mShaderEffectElementsTiming;
    NSMutableArray *mSceneObjectDelegates;
}

+ (id)animationWithRep:(id)arg1;
+ (void)updateScene:(id)arg1;
+ (void)updateLayoutScene:(id)arg1;
+ (void)updateRenderScene:(id)arg1;
+ (BOOL)dynamicShadowsEnabled;
+ (id)animationInfoForBuildType:(int)arg1;
+ (double)animationFPS;
+ (id)animationFilter;
+ (int)chartAnimationType;
@property(readonly, nonatomic) TSCH3DAnimationTiming *elementTimings; // @synthesize elementTimings=mElementTimings;
@property(readonly, nonatomic) TSCH3DAnimationTimeSlice *timeSlice; // @synthesize timeSlice=mTimeSlice;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) TSCH3DOrderedDictionary *separateLayers;
- (id)separateLayerSceneObjectsSelectionBlocks;
- (id)gridlineLabelsSelectionBlock;
- (id)shadowsSelectionBlock;
- (void)addAnimationToClips:(id)arg1 forSceneObject:(id)arg2 scene:(id)arg3;
- (void)addAnimationToClips:(id)arg1 forScene:(id)arg2;
- (void)addToElementTimings:(id)arg1;
- (void)addToElementPlaneTimings:(id)arg1;
- (void)addToBackgroundPlaneTimings:(id)arg1;
- (struct CGRect)adjustBodyCanvasBounds:(struct CGRect)arg1 againstBodyCanvasDrawableFrame:(struct CGRect)arg2;
- (id)globalTimingInterpolation;
- (BOOL)isPie;
- (void)updateTimeRanges;
- (void)updateTimings;
- (void)p_addPlaneTimings:(id)arg1;
- (void)update:(float)arg1;
- (void)p_didUpdateAnimationTime;
@property(readonly, nonatomic) TSCH3DScene *layoutScene;
@property(readonly, nonatomic) TSCH3DScene *scene;
- (BOOL)individualValueLabels;
- (void)clearParent;
- (id)description;
- (void)dealloc;
- (id)initWithRep:(id)arg1;
- (BOOL)needDynamicShadows;
- (void)didRunForScene:(id)arg1 pipeline:(id)arg2;
- (void)willRunForScene:(id)arg1 pipeline:(id)arg2;
- (id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2;
- (id)makeDelegateWithScene:(id)arg1;
- (box_e9f23397)pieDelayedLabelsRange;
- (void)addToRotateAnimClips:(id)arg1 scene:(id)arg2 secondaryAngle:(float)arg3;
- (void)addToRotateTimings:(id)arg1;
- (void)addToBackgroundBlendAnimClips:(id)arg1 sceneObject:(id)arg2;
- (void)addToBackgroundBlendAnimClips:(id)arg1 scene:(id)arg2;
- (void)addStaticBackgroundBlendClipsToClips:(id)arg1 scene:(id)arg2;
- (void)addToBackgroundBlendTimings:(id)arg1;
- (void)addToChartRotationAnimationElementBlendAnimClips:(id)arg1 sceneObject:(id)arg2 shouldUpdateAlwaysRenderFlag:(BOOL)arg3;
- (void)addToChartElementBlendAnimClips:(id)arg1 sceneObject:(id)arg2 shouldUpdateDelayOpaqueFlag:(BOOL)arg3 shouldUpdateBlendOpaqueFlag:(BOOL)arg4 shouldUpdateAlwaysRenderFlag:(BOOL)arg5 needPerElementBlending:(BOOL)arg6;
- (void)addToRadialElementBlendTimings:(id)arg1;
- (void)addToCraneElementBlendTimings:(id)arg1;
- (void)addToRotationBasedElementBlendTimings:(id)arg1;
- (void)addToGrowElementBlendTimings:(id)arg1;
- (void)addToZAxisElementBlendTimings:(id)arg1;
- (void)addToChartElementBlendTimings:(id)arg1 range:(const box_e9f23397 *)arg2 interpolation:(id)arg3;
- (void)addToShadowBlendAnimClips:(id)arg1 sceneObject:(id)arg2;
- (void)addToShadowBlendAnimClips:(id)arg1;
- (void)addToShadowBlendTimings:(id)arg1;
- (id)growGlobalTimingInterpolation;
- (void)addToGrowAnimClips:(id)arg1 sceneObject:(id)arg2;
- (BOOL)p_growClipRequiresShaderBasedInterpolation;
- (void)addToRotatingGrowElementTimings:(id)arg1;
- (void)addToGrowElementTimings:(id)arg1;
- (void)addToGrowElementTimings:(id)arg1 reserveForLabels:(BOOL)arg2;
- (box_e9f23397)p_timeRangeForGrowElements;
- (void)addToGrowElementTimings:(id)arg1 range:(const box_e9f23397 *)arg2;
- (void)updateRotatingGrowTimeRanges;
- (BOOL)p_usesRotatingGrowEaseOut;
- (BOOL)p_isStackedBar;
- (BOOL)p_isBar;
- (BOOL)p_chunkingStyleHasAxes;
- (void)p_updateNoAxesRotatingGrowTimeRanges;
- (void)p_updateAxesOnlyRotatingGrowTimeRanges;
- (void)p_updateAllRotatingGrowTimeRanges;
- (void)p_updateRotatingGrowLabelsRange;
- (void)updateGrowTimeRanges;
- (void)p_updateGrowTimeRangesWithAxesRange:(const box_e9f23397 *)arg1 waitTimeAfterAxes:(float)arg2;
- (BOOL)p_growAnimationLinearInterpolation;
- (BOOL)p_sequenceInOrder;
- (BOOL)p_anySeriesHasLabelsEnabled;
- (void)updateRadialTimeRanges;
- (void)addAllLabelsAnimationToClips:(id)arg1 sceneObject:(id)arg2;
- (void)addToValueLabelsAnimClips:(id)arg1 sceneObject:(id)arg2;
- (void)addToValueLabelsTimings:(id)arg1;
- (void)addToValueLabelsTimings:(id)arg1 range:(const box_e9f23397 *)arg2;
- (void)addTitleAnimationToClips:(id)arg1 sceneObject:(id)arg2;

@end

