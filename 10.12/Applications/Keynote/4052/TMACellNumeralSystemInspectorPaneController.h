//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAInspectorPaneController.h"

@class NSMatrix, NSStepper, NSTextField;

@interface TMACellNumeralSystemInspectorPaneController : TMAInspectorPaneController
{
    NSTextField *_baseLabel;
    NSTextField *_baseTextField;
    NSStepper *_baseStepper;
    NSTextField *_placesLabel;
    NSTextField *_placesTextField;
    NSStepper *_placesStepper;
    NSTextField *_representLabel;
    NSMatrix *_radioButtons;
}

+ (id)nibName;
@property NSMatrix *radioButtons; // @synthesize radioButtons=_radioButtons;
@property NSTextField *representLabel; // @synthesize representLabel=_representLabel;
@property NSStepper *placesStepper; // @synthesize placesStepper=_placesStepper;
@property NSTextField *placesTextField; // @synthesize placesTextField=_placesTextField;
@property NSTextField *placesLabel; // @synthesize placesLabel=_placesLabel;
@property NSStepper *baseStepper; // @synthesize baseStepper=_baseStepper;
@property NSTextField *baseTextField; // @synthesize baseTextField=_baseTextField;
@property NSTextField *baseLabel; // @synthesize baseLabel=_baseLabel;
- (void)loadView;

@end

