//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDDecorator-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, TSDInteractiveCanvasController, TSUNoCopyDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface TSDGuideController : NSObject <TSDDecorator>
{
    TSDInteractiveCanvasController *mICC;
    NSObject<OS_dispatch_queue> *mGuideGenerationAccessQueue;
    NSObject<OS_dispatch_semaphore> *mGuideGenerationStateLock;
    unsigned long long mGuideGenerationState;
    struct CGRect mLastIgnoredRectForDisplayingGuides;
    unsigned long long mLastIgnoredKnobTag;
    BOOL mLastIgnoredShouldShowSizeGuides;
    NSMutableDictionary *mVerticalSpacings;
    NSMutableDictionary *mHorizontalSpacings;
    NSMutableArray *mVerticalSizingGuides;
    NSMutableArray *mHorizontalSizingGuides;
    NSMutableArray *mGuidesForSnappingY;
    NSMutableArray *mGuidesForSnappingX;
    NSMutableArray *mSpacingGuidesForSnappingX;
    NSMutableArray *mSpacingGuidesForSnappingY;
    NSMutableArray *mSpacingCenterGuidesForSnappingX;
    NSMutableArray *mSpacingCenterGuidesForSnappingY;
    NSSet *mCurrentGuides;
    NSSet *mCurrentSizingGuides;
    NSMutableSet *mCurrentSizingGuideUILayers;
    struct CGRect mCurrentGuidesRect;
    BOOL mShouldAlignEdges;
    BOOL mShouldAlignCenters;
    BOOL mShouldAlignToSpacingGuides;
    BOOL mShouldAlignToSizingGuides;
    BOOL mShouldAlignEdgesToMasterGuides;
    BOOL mDoNotRemoveExistingGuidesWhenDisplaying;
    BOOL mDidJustSnapInX;
    BOOL mDidJustSnapInY;
    TSUNoCopyDictionary *mAlignmentFrameInRootByLayout;
}

+ (void)p_clearCachedGuideColor;
+ (void)p_updateCachedGuideColor;
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
+ (id)guideColor;
+ (BOOL)shouldAlignEdgesToMasterGuides;
+ (void)setShouldAlignEdgesToMasterGuides:(BOOL)arg1;
+ (BOOL)shouldAlignCenters;
+ (void)setShouldAlignCenters:(BOOL)arg1;
+ (BOOL)shouldAlignToSizingGuides;
+ (void)setGuideColor:(id)arg1;
+ (void)setShouldAlignToSizingGuides:(BOOL)arg1;
+ (BOOL)shouldAlignToSpacingGuides;
+ (void)setShouldAlignToSpacingGuides:(BOOL)arg1;
+ (BOOL)shouldAlignEdges;
+ (void)setShouldAlignEdges:(BOOL)arg1;
+ (id)defaultGuideColor;
+ (void)initialize;
@property(readonly, nonatomic) struct CGRect i_currentGuidesRect; // @synthesize i_currentGuidesRect=mCurrentGuidesRect;
@property(nonatomic) BOOL didJustSnapInY; // @synthesize didJustSnapInY=mDidJustSnapInY;
@property(nonatomic) BOOL didJustSnapInX; // @synthesize didJustSnapInX=mDidJustSnapInX;
@property(nonatomic) BOOL doNotRemoveExistingGuidesWhenDisplaying; // @synthesize doNotRemoveExistingGuidesWhenDisplaying=mDoNotRemoveExistingGuidesWhenDisplaying;
@property(readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=mICC;
- (float)p_spacingForCenterOrSpacingGuide:(id)arg1;
- (id)p_closestGuideForOffset:(double)arg1 predicate:(id)arg2 inArray:(id)arg3;
- (id)p_guideClosestToEdge:(int)arg1 ofFrame:(struct CGRect)arg2;
- (id)p_guidesForOffset:(double)arg1 predicate:(id)arg2 inArray:(id)arg3;
- (id)p_guidesForEdge:(int)arg1 ofFrame:(struct CGRect)arg2;
- (void)p_getOffset:(double *)arg1 andGuidesArray:(id *)arg2 forEdge:(int)arg3 ofFrame:(struct CGRect)arg4;
- (void)p_addGuide:(id)arg1 toSortedArray:(id)arg2;
- (void)p_addSpacingGuidesForFrame:(struct CGRect)arg1 spacing:(id)arg2 isVerticalSpacing:(BOOL)arg3;
- (void)p_addGuidesForLayout:(id)arg1;
- (struct CGRect)p_alignmentFrameInRootForLayout:(id)arg1;
- (BOOL)p_guidesAreRelevantForEdge:(int)arg1 whileDraggingKnobTag:(unsigned long long)arg2;
- (BOOL)p_sizingGuidesAreRelevantForOrientation:(int)arg1 whileDraggingKnobTag:(unsigned long long)arg2;
- (double)p_maxSnap;
- (id)decoratorOverlayLayers;
- (void)endAlignmentOperation;
- (void)hideAlignmentGuides;
- (void)hideSizingGuides;
- (void)showSizingGuideUIForRep:(id)arg1 matchingWidth:(BOOL)arg2 matchingHeight:(BOOL)arg3;
- (void)showSizingGuidesAlignedWithLayout:(id)arg1 forKnobTag:(unsigned long long)arg2;
@property(readonly, nonatomic) NSSet *i_currentGuides; // @dynamic i_currentGuides;
- (void)showGuidesAlignedWithRect:(struct CGRect)arg1 forKnobTag:(unsigned long long)arg2 shouldRenderX:(BOOL)arg3 shouldRenderY:(BOOL)arg4 shouldRenderSizeGuides:(BOOL)arg5;
- (void)showGuidesAlignedWithRect:(struct CGRect)arg1 forKnobTag:(unsigned long long)arg2;
- (void)showGuidesAlignedWithRect:(struct CGRect)arg1 shouldRenderX:(BOOL)arg2 shouldRenderY:(BOOL)arg3;
- (struct CGPoint)snapRectToGuides:(struct CGRect)arg1 forKnobTag:(unsigned long long)arg2 snapSize:(BOOL)arg3;
- (struct CGPoint)snapRectToGuides:(struct CGRect)arg1 forKnobTag:(unsigned long long)arg2;
- (struct CGPoint)snapRectToGuides:(struct CGRect)arg1;
- (void)beginAlignmentOperationForReps:(id)arg1 preventCenterGuides:(BOOL)arg2 preventSpacingGuides:(BOOL)arg3 preventSizingGuides:(BOOL)arg4;
- (void)beginAlignmentOperationForReps:(id)arg1;
- (void)beginAlignmentOperationForRep:(id)arg1;
- (void)dealloc;
- (id)initWithInteractiveCanvasController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

