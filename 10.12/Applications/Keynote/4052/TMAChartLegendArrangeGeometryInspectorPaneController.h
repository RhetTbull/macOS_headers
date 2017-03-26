//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAChartInspectorPaneGroupController.h"

@class NSArrayController, NSStepper, TMARelativeValuesArrayController;

@interface TMAChartLegendArrangeGeometryInspectorPaneController : TMAChartInspectorPaneGroupController
{
    NSArrayController *mLayoutsArrayController;
    TMARelativeValuesArrayController *mLayoutsWithRelativeValuesArrayController;
    NSStepper *_positionXStepper;
    NSStepper *_positionYStepper;
    NSStepper *_widthStepper;
    NSStepper *_heightStepper;
}

+ (unsigned long long)sortOrder;
+ (id)chartEditorProxyVisibilityKey;
+ (id)tabIdentifier;
+ (id)nibName;
@property(nonatomic) NSStepper *heightStepper; // @synthesize heightStepper=_heightStepper;
@property(nonatomic) NSStepper *widthStepper; // @synthesize widthStepper=_widthStepper;
@property(nonatomic) NSStepper *positionYStepper; // @synthesize positionYStepper=_positionYStepper;
@property(nonatomic) NSStepper *positionXStepper; // @synthesize positionXStepper=_positionXStepper;
@property(retain, nonatomic) TMARelativeValuesArrayController *layoutsWithRelativeValuesArrayController; // @synthesize layoutsWithRelativeValuesArrayController=mLayoutsWithRelativeValuesArrayController;
@property(retain, nonatomic) NSArrayController *layoutsArrayController; // @synthesize layoutsArrayController=mLayoutsArrayController;
- (void)loadView;
- (void)dealloc;

@end

