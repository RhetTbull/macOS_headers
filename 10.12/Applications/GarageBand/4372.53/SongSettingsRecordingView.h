//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ModuleController.h"

#import "NSOpenSavePanelDelegate-Protocol.h"

@class MAKitButton, MAKitPathControl, MAKitSegmentedScrubber, MAKitTextField, NSButton, NSMatrix, NSPopUpButton, NSString, NSView;

@interface SongSettingsRecordingView : ModuleController <NSOpenSavePanelDelegate>
{
    NSPopUpButton *recOptionsMidiCycleOn;
    NSPopUpButton *recOptionsMidiCycleOff;
    NSPopUpButton *recOptionsAudioCycleOn;
    NSPopUpButton *recOptionsAudioCycleOff;
    NSButton *recAutoDemix;
    NSButton *recAllowTempoChange;
    NSButton *recAutoColorizeTakes;
    NSButton *recMIDIDataReduction;
    NSMatrix *recRecordPreRollEnable;
    NSPopUpButton *recCountIn;
    MAKitSegmentedScrubber *recRecordPreRoll;
    NSView *coreAudioBox;
    MAKitButton *setCoreAudioPath;
    MAKitButton *resetCoreAudioPath;
    MAKitPathControl *coreAudioLocation;
    MAKitTextField *coreAudioTitle;
    BOOL m_init;
    struct CGRect m_origFrame;
}

- (BOOL)setAuConfDirForPath:(id)arg1 device:(int)arg2;
- (void)initGlobalOrCoreAudioPath;
- (BOOL)panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;
- (void)resetCoreAudioPathClicked:(id)arg1;
- (void)setCoreAudioPathClicked:(id)arg1;
- (void)openSheet:(void *)arg1;
- (void)change_recCountIn:(id)arg1;
- (void)change_recRecordPreRoll:(id)arg1;
- (void)change_recRecordPreRollEnable:(id)arg1;
- (void)change_recMIDIDataReduction:(id)arg1;
- (void)change_autoColorizeTakes:(id)arg1;
- (void)change_recAllowTempoChange:(id)arg1;
- (void)change_recAutoDemix:(id)arg1;
- (void)change_recOptionsAudioCycleOff:(id)arg1;
- (void)change_recOptionsAudioCycleOn:(id)arg1;
- (void)change_recOptionsMidiCycleOff:(id)arg1;
- (void)change_recOptionsMidiCycleOn:(id)arg1;
- (void)handleUM_KEYCMD:(id)arg1;
- (void)handleUM_REC:(id)arg1;
- (void)updateUI;
- (void)updateCountInUI;
- (void)awakeFromNib;
- (void)willDisappear;
- (void)willAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

