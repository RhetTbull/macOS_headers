//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "StepByStepNSViewController.h"

@class NSPopUpButton, NSView, NetworkAndDeviceNameNSViewController;

@interface StepByStepNSViewController_ExtendWired_Config : StepByStepNSViewController
{
    NSView *selectionView;
    NSPopUpButton *baseSelectionPopup;
    NetworkAndDeviceNameNSViewController *networkAndDeviceNameView;
}

@property NSPopUpButton *baseSelectionPopup; // @synthesize baseSelectionPopup;
@property NSView *selectionView; // @synthesize selectionView;
- (id)outResultsDict;
- (void)handleBasePopupChanged:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;

@end

