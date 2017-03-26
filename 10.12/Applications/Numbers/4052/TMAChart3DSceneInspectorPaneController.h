//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAChartInspectorPaneGroupController.h"

@class NSArrayController, NSStepper, NSTextField, TMAInspectorPopupButton, TMAInspectorTextField, TMAInspectorTextFieldAngleFormatter, TMAMultipleValuesSlider;

@interface TMAChart3DSceneInspectorPaneController : TMAChartInspectorPaneGroupController
{
    NSTextField *mBarShapeLabel;
    TMAInspectorPopupButton *mBarShapePopup;
    NSTextField *mChartDepthLabel;
    TMAMultipleValuesSlider *mChartDepthSlider;
    NSTextField *mRotationLabel;
    NSTextField *mRotationXLabel;
    TMAInspectorTextField *mRotationXTextField;
    NSStepper *mRotationXStepper;
    NSTextField *mRotationYLabel;
    TMAInspectorTextField *mRotationYTextField;
    NSStepper *mRotationYStepper;
    NSTextField *mLightingStyleLabel;
    TMAInspectorPopupButton *mLightingStylePopup;
    TMAInspectorTextFieldAngleFormatter *mRotationXTextFormatter;
    TMAInspectorTextFieldAngleFormatter *mRotationYTextFormatter;
    NSArrayController *mChartsArrayController;
    NSArrayController *mLayoutsArrayController;
    NSArrayController *mColumnShapesArrayController;
    NSArrayController *mLightingPackageArrayController;
}

+ (id)disclosureButtonTitleForEditingState:(id)arg1;
+ (unsigned long long)sortOrder;
+ (id)chartEditorProxyVisibilityKey;
+ (id)tabIdentifier;
+ (id)nibName;
@property(nonatomic) TMAInspectorTextFieldAngleFormatter *rotationYTextFormatter; // @synthesize rotationYTextFormatter=mRotationYTextFormatter;
@property(nonatomic) TMAInspectorTextFieldAngleFormatter *rotationXTextFormatter; // @synthesize rotationXTextFormatter=mRotationXTextFormatter;
@property(nonatomic) TMAInspectorPopupButton *lightingStylePopup; // @synthesize lightingStylePopup=mLightingStylePopup;
@property(nonatomic) NSTextField *lightingStyleLabel; // @synthesize lightingStyleLabel=mLightingStyleLabel;
@property(nonatomic) NSStepper *rotationYStepper; // @synthesize rotationYStepper=mRotationYStepper;
@property(nonatomic) TMAInspectorTextField *rotationYTextField; // @synthesize rotationYTextField=mRotationYTextField;
@property(nonatomic) NSTextField *rotationYLabel; // @synthesize rotationYLabel=mRotationYLabel;
@property(nonatomic) NSStepper *rotationXStepper; // @synthesize rotationXStepper=mRotationXStepper;
@property(nonatomic) TMAInspectorTextField *rotationXTextField; // @synthesize rotationXTextField=mRotationXTextField;
@property(nonatomic) NSTextField *rotationXLabel; // @synthesize rotationXLabel=mRotationXLabel;
@property(nonatomic) NSTextField *rotationLabel; // @synthesize rotationLabel=mRotationLabel;
@property(nonatomic) TMAMultipleValuesSlider *chartDepthSlider; // @synthesize chartDepthSlider=mChartDepthSlider;
@property(nonatomic) NSTextField *chartDepthLabel; // @synthesize chartDepthLabel=mChartDepthLabel;
@property(nonatomic) TMAInspectorPopupButton *barShapePopup; // @synthesize barShapePopup=mBarShapePopup;
@property(nonatomic) NSTextField *barShapeLabel; // @synthesize barShapeLabel=mBarShapeLabel;
@property(retain, nonatomic) NSArrayController *lightingPackageArrayController; // @synthesize lightingPackageArrayController=mLightingPackageArrayController;
@property(retain, nonatomic) NSArrayController *columnShapesArrayController; // @synthesize columnShapesArrayController=mColumnShapesArrayController;
@property(retain, nonatomic) NSArrayController *layoutsArrayController; // @synthesize layoutsArrayController=mLayoutsArrayController;
@property(retain, nonatomic) NSArrayController *chartsArrayController; // @synthesize chartsArrayController=mChartsArrayController;
- (void)dealloc;
- (void)awakeFromNib;

@end

