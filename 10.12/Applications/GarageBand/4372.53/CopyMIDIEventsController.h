//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SmallModalDialogController.h"

@class MAKitSegmentedScrubber, NSButton, NSPopUpButton, NSTextField;

@interface CopyMIDIEventsController : SmallModalDialogController
{
    MAKitSegmentedScrubber *leftLocator;
    MAKitSegmentedScrubber *rightLocator;
    MAKitSegmentedScrubber *destination;
    NSTextField *numberOfCopies;
    NSPopUpButton *mode;
    NSButton *createNewSequence;
}

+ (void)showWithNumberOfCopies;
+ (id)nibName;
- (void)click_OK:(id)arg1;
- (void)change_mode:(id)arg1;
- (void)change_destination:(id)arg1;
- (void)change_locator:(id)arg1;
- (void)updateUI;
- (void)handleUM_LOCAT:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)willBecomeVisible;

@end

