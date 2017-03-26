//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMALayoutInspectingInspectorPaneController.h"

@class NSButton, NSTextField, TMAInspectorTextField, TMAMultipleValuesStepper;

@interface TMASizeInspectorPaneController : TMALayoutInspectingInspectorPaneController
{
    NSTextField *_sizeLabel;
    NSTextField *_widthLabel;
    TMAInspectorTextField *_widthTextField;
    TMAMultipleValuesStepper *_widthStepper;
    NSTextField *_heightLabel;
    TMAInspectorTextField *_heightTextField;
    TMAMultipleValuesStepper *_heightStepper;
    NSButton *_constrainProportionsCheckbox;
}

@property(nonatomic) NSButton *constrainProportionsCheckbox; // @synthesize constrainProportionsCheckbox=_constrainProportionsCheckbox;
@property(nonatomic) TMAMultipleValuesStepper *heightStepper; // @synthesize heightStepper=_heightStepper;
@property(nonatomic) TMAInspectorTextField *heightTextField; // @synthesize heightTextField=_heightTextField;
@property(nonatomic) NSTextField *heightLabel; // @synthesize heightLabel=_heightLabel;
@property(nonatomic) TMAMultipleValuesStepper *widthStepper; // @synthesize widthStepper=_widthStepper;
@property(nonatomic) TMAInspectorTextField *widthTextField; // @synthesize widthTextField=_widthTextField;
@property(nonatomic) NSTextField *widthLabel; // @synthesize widthLabel=_widthLabel;
@property(nonatomic) NSTextField *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
- (void)dealloc;
- (void)loadView;
- (id)nibName;
- (id)keyPathForLayouts;

@end

