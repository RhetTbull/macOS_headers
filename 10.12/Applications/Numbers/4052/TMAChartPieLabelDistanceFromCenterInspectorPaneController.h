//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAChartInspectorPaneGroupController.h"

@class NSArrayController, NSStepper, NSTextField, TMAInspectorTextField, TMAMultipleValuesSlider;

@interface TMAChartPieLabelDistanceFromCenterInspectorPaneController : TMAChartInspectorPaneGroupController
{
    NSArrayController *mSeriesArrayController;
    NSTextField *_distanceLabel;
    TMAMultipleValuesSlider *_distanceSlider;
    TMAInspectorTextField *_distanceTextField;
    NSStepper *_distanceStepper;
}

+ (id)disclosureButtonTitleForEditingState:(id)arg1;
+ (unsigned long long)sortOrder;
+ (id)chartEditorProxyVisibilityKey;
+ (id)tabIdentifier;
+ (id)nibName;
@property(nonatomic) NSStepper *distanceStepper; // @synthesize distanceStepper=_distanceStepper;
@property(nonatomic) TMAInspectorTextField *distanceTextField; // @synthesize distanceTextField=_distanceTextField;
@property(nonatomic) TMAMultipleValuesSlider *distanceSlider; // @synthesize distanceSlider=_distanceSlider;
@property(nonatomic) NSTextField *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) NSArrayController *seriesArrayController; // @synthesize seriesArrayController=mSeriesArrayController;
- (BOOL)needsPaneDivider;
- (void)dealloc;

@end

