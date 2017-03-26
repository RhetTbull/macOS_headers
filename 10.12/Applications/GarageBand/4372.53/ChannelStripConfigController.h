//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PopoverViewController.h"

@class NSButton, NSPopUpButton;

@interface ChannelStripConfigController : PopoverViewController
{
    NSButton *audioDeviceControls;
    NSButton *typeAndNumberLabel;
    NSButton *settingMenu;
    NSButton *gainReductionMeter;
    NSButton *EQThumbnail;
    NSButton *MIDIEffects;
    NSButton *inputInstrument;
    NSButton *audioEffects;
    NSButton *sends;
    NSButton *output;
    NSButton *group;
    NSButton *automation;
    NSButton *trackIcon;
    NSButton *panKnob;
    NSButton *VCA;
    NSButton *trackColor;
    NSButton *trackStacks;
    NSButton *trackName;
    NSPopUpButton *numTrackNameLines;
    NSButton *trackNumber;
    NSButton *controlSurfaceBars;
    NSButton *notes;
    NSButton *instrumentName;
    NSButton *program;
    NSButton *bank;
    NSButton *assign1;
    NSButton *assign2;
    NSButton *assign3;
    NSButton *assign4;
    NSButton *assign5;
}

+ (id)nibName;
- (void)change_numNameLines:(id)arg1;
- (void)change_mixThing:(id)arg1;
- (void)updateUI;

@end

