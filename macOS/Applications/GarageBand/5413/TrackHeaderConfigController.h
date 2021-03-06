//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PopoverViewController.h"

@class NSButton, NSDictionary, NSImageView, NSPopUpButton;

@interface TrackHeaderConfigController : PopoverViewController
{
    NSImageView *onOffIcon;
    NSImageView *muteIcon;
    NSImageView *soloIcon;
    NSImageView *trackLockIcon;
    NSImageView *freezeIcon;
    NSImageView *recordEnableIcon;
    NSImageView *inputMonitoringIcon;
    NSImageView *grooveTrackIcon;
    NSButton *trackCSBars;
    NSButton *trackNumbers;
    NSButton *colorBars;
    NSButton *grooveTrack;
    NSButton *instrumentIcons;
    NSButton *trackAlternatives;
    NSButton *name2;
    NSPopUpButton *name2Mode;
    NSButton *on;
    NSButton *recordEnable;
    NSButton *mute;
    NSButton *solo;
    NSButton *protect;
    NSButton *freeze;
    NSButton *input;
    NSButton *knob;
    NSPopUpButton *knobMode;
    NSButton *volume;
    NSButton *m_actionPopUpButton;
    long long wantedWidth;
    NSDictionary *_saveConfiguration;
}

+ (BOOL)canBecomeKey;
+ (void)revertToFactoryDefaults:(struct FENSTER *)arg1;
+ (void)applyUserDefaultsTo:(struct FENSTER *)arg1;
+ (void)setIn:(struct FENSTER *)arg1 fromConfigDict:(id)arg2;
+ (void)storeConfigAsUserDefault:(struct FENSTER *)arg1;
+ (id)createSaveConfigDict:(struct FENSTER *)arg1;
+ (id)nibName;
@property(retain) NSDictionary *saveConfiguration; // @synthesize saveConfiguration=_saveConfiguration;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)revert:(id)arg1;
- (void)revertToFactoryDefaults:(id)arg1;
- (void)applyUserDefaults:(id)arg1;
- (void)storeAsUserDefaults:(id)arg1;
- (void)change_knobMode:(id)arg1;
- (void)change_nameMode:(id)arg1;
- (void)change_trackNumbers:(id)arg1;
- (void)change_trackHeaderBit:(id)arg1;
- (void)changeTrackNum:(BOOL)arg1;
- (void)changeXZone:(long long)arg1;
- (void)updateUI;
- (void)updateIcons;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)dealloc;
- (void)awakeFromNib;
- (void)updateActionMenuShortcuts;
- (void)setFromConfigDict:(id)arg1;
- (id)createSaveConfigDict;
- (BOOL)allowsEnhancedConfiguringTrackHeaders;

@end

