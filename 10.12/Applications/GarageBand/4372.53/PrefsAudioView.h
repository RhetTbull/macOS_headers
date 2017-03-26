//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ModuleController.h"

#import "NSOpenSavePanelDelegate-Protocol.h"

@class MAKitPathControl, MAKitSegmentedScrubber, NSArrayController, NSBox, NSButton, NSPopUpButton, NSSlider, NSString, NSTabView, NSTextField, NSView;

@interface PrefsAudioView : ModuleController <NSOpenSavePanelDelegate>
{
    NSTabView *auTabView;
    NSPopUpButton *auSampleAccurateAutomation;
    NSPopUpButton *auRecordingFileType;
    NSPopUpButton *auPlugInDelayCompensation;
    NSButton *auLowLatencyMode;
    NSSlider *auLLMMaxDelaySlider;
    MAKitSegmentedScrubber *auLLMMaxDelay;
    NSButton *auAudioEngineOverloadMessage;
    NSPopUpButton *auProcessorType;
    NSPopUpButton *auMaxScrubSpeed;
    NSPopUpButton *auScrubResponse;
    NSButton *midiScrubbingWithAudio;
    NSButton *auApplyChanges;
    NSPopUpButton *auHyperThreading;
    NSPopUpButton *auProcessBufferRange;
    NSPopUpButton *auMultithreading;
    NSPopUpButton *auRewireBehavior;
    NSSlider *auDimLevelSlider;
    MAKitSegmentedScrubber *auDimLevel;
    NSSlider *auCrossfadeTimeSlider;
    MAKitSegmentedScrubber *auCrossfadeTime;
    NSSlider *auCrossfadeCurveSlider;
    MAKitSegmentedScrubber *auCrossfadeCurve;
    NSButton *auCoreAudioEnabled;
    NSButton *auAlternativeAudioEngine;
    NSPopUpButton *auCoreAudioDriver;
    NSPopUpButton *auCoreAudioInputDriver;
    NSPopUpButton *auCoreAudioIOBufferSize;
    NSTextField *auCoreAudioRoundtripLatencyReport;
    NSSlider *auCoreAudioRecordingDelay;
    MAKitSegmentedScrubber *auCoreAudioRecordingDelayNum;
    NSButton *auCoreAudio24BitRecording;
    NSButton *auCoreAudioSoftwareMonitoring;
    NSButton *auCoreAudioEnableInputMonitoringOnlyFocusedTrack;
    NSButton *auCoreAudioIndepMonitoringLevel;
    NSButton *auWarningBeforeProcessKey;
    NSButton *auClearUndoHistory;
    NSButton *auRecordSelectionChangesInUndo;
    NSButton *auRecordNormalizeinUndo;
    MAKitSegmentedScrubber *auNumberOfUndoStepsInSE;
    MAKitPathControl *auExternalSEPath;
    NSButton *auResetExternalSEPath;
    NSPopUpButton *auSurrOutStereo;
    NSTextField *auSurrBounceExtStereoLeft;
    NSTextField *auSurrBounceExtStereoRight;
    NSButton *auSurrOutInitializeDefault;
    NSButton *auSurrOutInitializeITU;
    NSButton *auSurrOutInitializeWG4;
    NSView *auSurrOutSeparator;
    NSBox *auSurrOutBox;
    NSTextField *auSurrOutTextSurround;
    NSTextField *auSurrOutTextShowAs;
    NSTextField *auSurrOutTextInitialize;
    NSButton *auSurrBounceExtInitializeReset;
    NSView *auSurrBounceExtSeparator;
    NSBox *auSurrBounceExtBox;
    NSTextField *auSurrBounceExtTextSurround;
    NSTextField *auSurrBounceExtTextShowAs;
    NSTextField *auSurrBounceExtTextInitialize;
    NSTextField *auSurrBounceExtTextInformation;
    NSButton *auSurrInInitializeDefault;
    NSButton *auSurrInInitializeITU;
    NSButton *auSurrInInitializeWG4;
    NSView *auSurrInSeparator;
    NSBox *auSurrInBox;
    NSTextField *auSurrInTextSurround;
    NSTextField *auSurrInTextShowAs;
    NSTextField *auSurrInTextInitialize;
    NSTabView *auSurrTabView;
    NSPopUpButton *auSurrInShowAs;
    NSPopUpButton *auSurrInL;
    NSPopUpButton *auSurrInC;
    NSPopUpButton *auSurrInR;
    NSPopUpButton *auSurrInSL;
    NSPopUpButton *auSurrInLFE;
    NSPopUpButton *auSurrInSR;
    NSPopUpButton *auSurrInSBL;
    NSPopUpButton *auSurrInSBM;
    NSPopUpButton *auSurrInSBR;
    NSPopUpButton *auSurrInCL;
    NSPopUpButton *auSurrInCR;
    NSTextField *auSurrInTextCenter;
    NSTextField *auSurrInTextLeft;
    NSTextField *auSurrInTextRight;
    NSTextField *auSurrInTextLFE;
    NSTextField *auSurrInTextMidRear;
    NSTextField *auSurrInTextLCenter;
    NSTextField *auSurrInTextRCenter;
    NSTextField *auSurrInTextLMid;
    NSTextField *auSurrInTextRMid;
    NSTextField *auSurrInTextLSurround;
    NSTextField *auSurrInTextRSurround;
    NSPopUpButton *auSurrShowAs;
    NSPopUpButton *auSurrOutL;
    NSPopUpButton *auSurrOutC;
    NSPopUpButton *auSurrOutR;
    NSPopUpButton *auSurrOutSL;
    NSPopUpButton *auSurrOutLFE;
    NSPopUpButton *auSurrOutSR;
    NSPopUpButton *auSurrOutSBL;
    NSPopUpButton *auSurrOutSBM;
    NSPopUpButton *auSurrOutSBR;
    NSPopUpButton *auSurrOutCL;
    NSPopUpButton *auSurrOutCR;
    NSTextField *auSurrTextCenter;
    NSTextField *auSurrTextLeft;
    NSTextField *auSurrTextRight;
    NSTextField *auSurrTextLFE;
    NSTextField *auSurrTextMidRear;
    NSTextField *auSurrTextLCenter;
    NSTextField *auSurrTextRCenter;
    NSTextField *auSurrTextLMid;
    NSTextField *auSurrTextRMid;
    NSTextField *auSurrTextLSurround;
    NSTextField *auSurrTextRSurround;
    NSButton *auSurrMirroring;
    NSPopUpButton *auSurrBounceExtShowAs;
    NSTextField *auSurrBounceExtL;
    NSTextField *auSurrBounceExtC;
    NSTextField *auSurrBounceExtR;
    NSTextField *auSurrBounceExtSL;
    NSTextField *auSurrBounceExtLFE;
    NSTextField *auSurrBounceExtSR;
    NSTextField *auSurrBounceExtSBL;
    NSTextField *auSurrBounceExtSBM;
    NSTextField *auSurrBounceExtSBR;
    NSTextField *auSurrBounceExtCL;
    NSTextField *auSurrBounceExtCR;
    NSTextField *auSurrBounceExtTextCenter;
    NSTextField *auSurrBounceExtTextLeft;
    NSTextField *auSurrBounceExtTextRight;
    NSTextField *auSurrBounceExtTextLFE;
    NSTextField *auSurrBounceExtTextMidRear;
    NSTextField *auSurrBounceExtTextLCenter;
    NSTextField *auSurrBounceExtTextRCenter;
    NSTextField *auSurrBounceExtTextLMid;
    NSTextField *auSurrBounceExtTextRMid;
    NSTextField *auSurrBounceExtTextLSurround;
    NSTextField *auSurrBounceExtTextRSurround;
    NSPopUpButton *auMP3BitRateMono;
    NSPopUpButton *auMP3BitRateStereo;
    NSButton *auMP3UseVBR;
    NSPopUpButton *auMP3Quality;
    NSButton *auMP3UseBestEncoding;
    NSButton *auMP3Filter;
    NSPopUpButton *auMP3StereoMode;
    NSButton *auUseAudioUnitsBtn;
    NSTextField *auNumberOfMIDIInputs;
    NSButton *auResetAllMIDIDrivers;
    NSTextField *auLuaDeviceLabel;
    NSPopUpButton *auLuaDevice;
    NSArrayController *csLuaScriptEnabledArrayController;
    _Bool fOpenExternalSEWhenChosen;
}

+ (float)calcLatencyForRoundtrip:(BOOL)arg1;
- (void)change_auLuaDevice:(id)arg1;
- (void)click_auResetAllMIDIDrivers:(id)arg1;
- (void)change_auUseAudioUnitsBtn:(id)arg1;
- (void)setupAndOpenExternalSE;
- (void)change_auMP3StereoMode:(id)arg1;
- (void)change_auMP3Filter:(id)arg1;
- (void)change_auMP3UseBestEncoding:(id)arg1;
- (void)change_auMP3Quality:(id)arg1;
- (void)change_auMP3UseVBR:(id)arg1;
- (void)change_auMP3BitRateStereo:(id)arg1;
- (void)change_auMP3BitRateMono:(id)arg1;
- (void)change_auSurrMirroring:(id)arg1;
- (void)click_auSurrBounceExtensionsInit:(id)arg1;
- (void)click_auSurrInInit:(id)arg1;
- (void)click_auSurrInit:(id)arg1;
- (void)change_auSurrBounceExt:(id)arg1;
- (void)change_auSurrIn:(id)arg1;
- (void)change_auSurrOut:(id)arg1;
- (void)change_auSurrBounceExtensionsShowAs:(id)arg1;
- (void)change_auSurrInShowAs:(id)arg1;
- (void)change_auSurrShowAs:(id)arg1;
- (void)change_auSurrOutStereo:(id)arg1;
- (void)change_auSurrBounceExtStereo:(id)arg1;
- (void)click_auResetExternalSEPath:(id)arg1;
- (void)click_auExternalSEPath:(id)arg1;
- (void)savePanelDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)change_auNumberOfUndoStepsInSE:(id)arg1;
- (void)change_auRecordNormalizeinUndo:(id)arg1;
- (void)change_auRecordSelectionChangesInUndo:(id)arg1;
- (void)change_auClearUndoHistory:(id)arg1;
- (void)change_auWarningBeforeProcessKey:(id)arg1;
- (void)change_auCoreAudioIndepMonitoringLevel:(id)arg1;
- (void)change_auCoreAudioEnableInputMonitoringOnlyFocusedTrack:(id)arg1;
- (void)change_auCoreAudioSoftwareMonitoring:(id)arg1;
- (void)change_auCoreAudio24BitRecording:(id)arg1;
- (void)change_auCoreAudioRecordingDelay:(id)arg1;
- (void)change_auCoreAudioIOBufferSize:(id)arg1;
- (void)change_auCoreAudioInputDriver:(id)arg1;
- (void)change_auCoreAudioDriver:(id)arg1;
- (void)change_auAlternativeAudioEngine:(id)arg1;
- (void)change_auCoreAudioEnabled:(id)arg1;
- (void)change_auCrossfadeCurve:(id)arg1;
- (void)change_auCrossfadeTime:(id)arg1;
- (void)change_auDimLevel:(id)arg1;
- (void)click_auApplyChanges:(id)arg1;
- (void)change_auRewireBehavior:(id)arg1;
- (void)change_auMultithreading:(id)arg1;
- (void)change_auProcessBufferRange:(id)arg1;
- (void)change_midiScrubbingWithAudio:(id)arg1;
- (void)change_auHyperThreading:(id)arg1;
- (void)change_auScrubResponse:(id)arg1;
- (void)change_auMaxScrubSpeed:(id)arg1;
- (void)change_auProcessorType:(id)arg1;
- (void)change_auAudioEngineOverloadMessage:(id)arg1;
- (void)change_auLLMMaxDelay:(id)arg1;
- (void)change_auLowLatencyMode:(id)arg1;
- (void)change_auPlugInDelayCompensation:(id)arg1;
- (void)change_auRecordingFileType:(id)arg1;
- (void)change_auSampleAccurateAutomation:(id)arg1;
- (void)updateUI;
- (void)updateMP3UI;
- (void)updateSurrUI;
- (void)updateSEUI;
- (void)updateDriversUI;
- (void)updateCoreAudioUI;
- (void)updateDriverGlobalUI;
- (void)updateGlobalUI;
- (void)awakeFromNib;
- (void)willDisappear;
- (void)willAppear;
- (void)handleUM_SONG:(id)arg1;
- (void)handleUM_AUDIOPREFS:(id)arg1;
- (void)handleUM_AUDIODEVICE_:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setupLuaDevicePopUpButton;
- (id)menuItemTitleForLuaDevice:(id)arg1;
- (void)setupIOAssignmentsPopUpButtons;
- (void)setupStereoAssignmentPopUpButton:(id)arg1 isInput:(BOOL)arg2;
- (void)setupSurroundAssignmentPopUpButton:(id)arg1 isInput:(BOOL)arg2;
- (void)updateRoundtripLatencyReportToolTip;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

