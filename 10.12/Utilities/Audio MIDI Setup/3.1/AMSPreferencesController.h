//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSBox, NSButton, NSMatrix, NSSlider, NSTabView, NSToolbarItem;

@interface AMSPreferencesController : NSWindowController
{
    NSTabView *preferencesTabView;
    NSMatrix *launchBehaviorMatrix;
    NSButton *toggleShowAudioWindowButton;
    NSButton *toggleShowMIDIWindowButton;
    NSButton *toggleShowNetworkWindowButton;
    NSBox *generalItemsBox;
    NSButton *hqSampleRateConversionButton;
    NSSlider *testToneVolumeSlider;
    NSBox *audioItemsBox;
    NSToolbarItem *generalItem;
    NSToolbarItem *infoItem;
    NSToolbarItem *audioItem;
}

+ (void)createDefaults;
- (id)toolbarSelectableItemIdentifiers:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)setSpeakerConfigurationToneVolume:(id)arg1;
- (void)highQualitySampleRateConversionChanged:(id)arg1;
- (void)toggleShowNetworkWindowOnLaunch:(id)arg1;
- (void)toggleShowMIDIWindowOnLaunch:(id)arg1;
- (void)toggleShowAudioWindowOnLaunch:(id)arg1;
- (void)setOpenSpecificWindowsPreference:(id)arg1;
- (void)setReopenWindowsFromLastSessionPreference:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)activatePreferenceItem:(id)arg1;
- (void)setHighQualitySampleRateConversion:(BOOL)arg1;
- (BOOL)isHighQualitySampleRateEnabled;

@end

