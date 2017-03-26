//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MAToolKit/MALastClickedParameterViewController.h>

@class MABackgroundView, MAButton, MAKitMenu, MAKitPopUpButton, MAKitTabView, MASegmentedControl, MASlider, MATextField, NSBox, NSTextField, NSView;

@interface CLgAudioEditorInspectorViewController : MALastClickedParameterViewController
{
    MASegmentedControl *switchLevelSegmentedControl;
    MASegmentedControl *_pitchQuantizeSegmentedControl;
    MASegmentedControl *_timeQuantizeSegmentedControl;
    MASlider *_quantizeStrengthSlider;
    MAButton *followTempoButton;
    MAButton *followKeyButton;
    MAButton *enableFlexButton;
    MAButton *reversePlaybackButton;
    NSBox *pitchQuantizeBox;
    NSBox *timeQuantizeBox;
    NSBox *pitchSliderBox;
    NSBox *velocitySliderBox;
    NSBox *transposeSliderBox;
    MABackgroundView *pitchQuantizeBackgroundView;
    NSTextField *strengthSliderReadout;
    NSTextField *velocitySliderReadout;
    NSTextField *transposeSliderReadout;
    NSTextField *quantizePitchStrengthSliderReadout;
    MATextField *regionNameTextField;
    MASlider *quantizePitchStrenghtSlider;
    MASlider *transposeSlider;
    MAKitPopUpButton *scaleTypePopup;
    MAKitMenu *majorMenu;
    MAKitTabView *mainTabView;
    NSView *mainView;
    int quantizationMode;
    int lastQStrengthSliderVal;
    int scaleType;
    int lastPitchQStrengthSliderVal;
    MASlider *gainSlider;
    int prevGainSliderVal;
    int prevTransposeSliderVal;
    long long quantizeStrength;
    long long quantizePitchStrength;
    long long gainVal;
    long long transposeVal;
    int followTempo;
    BOOL fUserDidSwitchLevel;
    BOOL fContentNeedsUpdate;
}

@property(nonatomic) MASlider *quantizeStrengthSlider; // @synthesize quantizeStrengthSlider=_quantizeStrengthSlider;
@property(nonatomic) MASegmentedControl *pitchQuantizeSegmentedControl; // @synthesize pitchQuantizeSegmentedControl=_pitchQuantizeSegmentedControl;
@property(nonatomic) MASegmentedControl *timeQuantizeSegmentedControl; // @synthesize timeQuantizeSegmentedControl=_timeQuantizeSegmentedControl;
@property long long transposeVal; // @synthesize transposeVal;
@property long long gainVal; // @synthesize gainVal;
@property long long quantizePitchStrength; // @synthesize quantizePitchStrength;
@property long long quantizeStrength; // @synthesize quantizeStrength;
- (void)setQuantizationPopUpStrings;
- (void)initScaleTypePopup;
- (id)LocalizedScaleNameForScaleAtIndex:(int)arg1;
- (int)tagOfSelectedItemInMenu:(id)arg1;
- (void)pitchQuantizeSelectedEvents:(id)arg1;
- (void)limitToSongKeyClicked:(id)arg1;
- (void)pitchQuantizeOneLaunch:(struct CEvLaunchAudio *)arg1 withSong:(struct CSong *)arg2 Fenster:(struct FENSTER *)arg3;
- (void)qPitchStrengthSliderDidEndEditing:(id)arg1;
- (void)change_mode:(id)arg1;
- (int)currentScale;
- (int)currentRootNote;
- (void)change_key:(id)arg1;
- (void)updateUI;
- (void)setRootNoteMenu:(id)arg1;
- (id)rootNoteMenu;
- (id)scaleTypeMenu;
- (void)quantizeSelectedEvents:(id)arg1;
- (void)checkDisableGrooveSlave;
- (void)reversePlaybackButtonPressed:(id)arg1;
- (void)quantizeOneLaunch:(struct CEvLaunchAudio *)arg1 withSong:(struct CSong *)arg2 Fenster:(struct FENSTER *)arg3 grooveID:(int)arg4;
- (void)handleSelectionChange;
- (void)setAllElementsEnabled:(BOOL)arg1;
- (void)setControl:(int)arg1 value:(int)arg2;
- (void)selectRegionsOnEditorTrack;
- (void)qStrengthSliderMoved:(id)arg1;
- (void)gainSliderMoved:(id)arg1;
- (void)changeQStrength:(id)arg1;
- (void)changeGain:(id)arg1;
- (void)followTempoChanged:(id)arg1;
- (struct TPosOneBasedTrackNr)displayedTrack;
- (void)qPitchStrengthSliderMoved:(id)arg1;
- (void)transposeSliderDidEndEditing:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)regionNameWasEdited:(id)arg1;
- (void)viewVisibilityChange:(BOOL)arg1;
- (void)registerMessObservers;
- (void)sliderWillBeginDragging:(id)arg1;
- (struct CSong *)currentSong;
- (void)checkContentNeedsUpdateNotification:(id)arg1;
- (void)switchInspectorTab;
- (double)minHeaderWidthFlexPitchWithInspector;
- (void)switchEditorLevel:(id)arg1;
- (void)enableFlexClicked:(id)arg1;
- (void)setSelectedQuantizeMenuEntry:(int)arg1;
- (void)setSelectedRootNoteWithTag:(int)arg1;
- (void)setSelectedRootNoteFromMenuItem:(id)arg1;
- (void)setSelectedScaleTypeWithTag:(int)arg1;
- (void)frameDidChange:(id)arg1;
- (void)switchInspectorBasedOnSelection;
- (void)handleUM_ELASTICMODE:(id)arg1;
- (void)handleUM_CHSEL:(id)arg1;
- (void)handleUM_MARQUEE:(id)arg1;
- (void)handleUM_CHEV:(id)arg1;
- (void)handleUM_MSEQPAR:(id)arg1;
- (void)handleUM_CHMNAME:(id)arg1;
- (void)dealloc;
- (void)RemoveAllMessObservers;
- (void)awakeFromNib;
- (BOOL)isGarageBand;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

