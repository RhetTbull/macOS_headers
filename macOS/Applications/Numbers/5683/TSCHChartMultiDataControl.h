//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSCHUnretainedParent-Protocol.h"

@class TSCHChartMultiDataControlBackground, TSCHChartMultiDataControlSliderKnob, TSCHChartMultiDataControlStepperKnob, TSCHMultiDataChartRep;

@interface TSCHChartMultiDataControl : NSObject <TSCHUnretainedParent>
{
    TSCHMultiDataChartRep *mParentRep;
    TSCHChartMultiDataControlSliderKnob *mChartMultiDataSliderKnob;
    TSCHChartMultiDataControlBackground *mChartMultiDataControlBackground;
    TSCHChartMultiDataControlStepperKnob *mStepperKnobLeft;
    TSCHChartMultiDataControlStepperKnob *mStepperKnobRight;
    struct CGRect mBackgroundNaturalRect;
    unsigned long long mCurrentDisplayIndex;
    struct CGRect mLastChartBodyFrame;
}

+ (double)approximateUnscaledMinimumWidth;
+ (double)approximateUnscaledHeight;
@property(readonly) unsigned long long currentDisplayIndex; // @synthesize currentDisplayIndex=mCurrentDisplayIndex;
- (void).cxx_destruct;
- (id)p_labelFormat;
- (struct CGPoint)p_tickLocationforDataSetIndex:(unsigned long long)arg1;
- (void)p_setKnobPositionForChevron:(id)arg1;
- (struct CGRect)p_adjustButtonRect:(struct CGRect)arg1 legendRect:(struct CGRect)arg2 chartArea:(struct CGRect)arg3;
- (void)p_setMultiDataSliderKnobPositionsWithYOfffset:(double)arg1;
- (int)p_currentControlType;
- (BOOL)p_inDynamicOperation;
- (unsigned long long)p_currentDataSetIndex;
- (unsigned long long)p_numberOfDataSets;
- (double)editDataButtonDesiredDistanceFromChartRep;
- (double)p_desiredDistanceFromChartRep;
- (id)newTrackerForKnob:(id)arg1;
- (id)newMouseEventHandlerForKnob:(id)arg1 atPoint:(struct CGPoint)arg2 withEvent:(id)arg3;
- (void)updatePositionsOfKnobs:(id)arg1 withYOffset:(double)arg2;
- (void)addKnobsToArray:(id)arg1;
- (void)fadeOutWithDuration:(double)arg1;
- (void)fadeInWithDuration:(double)arg1;
- (double)sliderKnobWidth;
- (struct CGPoint)maximumTickLocation;
- (struct CGPoint)minimumTickLocation;
- (unsigned long long)closestTickIndexForNaturalPoint:(struct CGPoint)arg1;
- (void)endTrackingSliderKnob;
- (void)moveSliderKnobToRepPosition:(struct CGPoint)arg1;
- (void)beginTrackingSliderKnob;
- (void)setSliderKnobPositionForIndex:(unsigned long long)arg1;
- (struct CGRect)naturalBoundsRect;
- (void)chartLayoutChanged;
- (void)updateLabel;
- (void)clearParent;
- (double)p_inverseViewScale;
- (double)p_viewScale;
- (BOOL)containsKnob:(id)arg1;
- (void)postCommandToSetDataSetIndex:(unsigned long long)arg1;
- (void)updateDrawableLayoutDataSetIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithRep:(id)arg1;

@end

