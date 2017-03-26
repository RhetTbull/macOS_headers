//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <LunaKit/LKViewModule.h>

#import "FFEditorModuleDelegate-Protocol.h"
#import "NSPopoverDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class CEZoomSlider, FFAnchoredSequence, FFAnchoredTimelineModule, FFEditorModule, FFIMovieHeaderView, FFProject, FFVideoEffectTool, LKButton, LKImageView, LKPopUpButton, LKSegmentedControl, LKSlider, LKTextField, NSArray, NSImageView, NSPopover, NSString, NSTextField, NSView, PEViewedClipSet;

@interface CEEditorContainerModule : LKViewModule <FFEditorModuleDelegate, NSWindowDelegate, NSPopoverDelegate>
{
    FFIMovieHeaderView *_headerView;
    NSView *_timelineView;
    LKButton *_breadcrumbButton;
    NSView *_movieTLPositionAndLengthHeaderView;
    LKImageView *_documentIconView;
    LKTextField *_playheadPositionField;
    LKTextField *_documentDurationField;
    LKTextField *_trailerTitleAndLengthTextField;
    LKButton *_swapEditorMediaButton;
    LKButton *_clipAttributesButton;
    LKButton *_projectPropertiesButton;
    CEZoomSlider *_zoomControl;
    NSString *_lastOpenSequenceID;
    LKSegmentedControl *_auditionPalette;
    LKSegmentedControl *_viewMenu;
    BOOL _isActive;
    BOOL _startPlaybackAtSkimmer;
    BOOL _skimmingIsPaused;
    BOOL _editToolActive;
    FFEditorModule *_editorModule;
    NSArray *_selectedItems;
    PEViewedClipSet *_skimmingClipSet;
    LKSlider *_heightAdjustmentDisplaySlider;
    LKButton *_showWaveformButton;
    NSView *_clipAttributesPopOverView;
    NSPopover *_clipAttributesPopOver;
    NSImageView *_minClipHeightImage;
    NSImageView *_maxClipHeightImage;
    NSView *_projectPropertiesPopOverView;
    NSTextField *_projectVideoFormatTextField;
    LKImageView *_projectVideoFormatBadge;
    LKButton *_projectFilterPickerButton;
    LKPopUpButton *_photosPlacementPopup;
    LKSlider *_editDurationSlider;
    NSTextField *_editDurationTextField;
    LKSlider *_transitionDurationSlider;
    NSTextField *_transitionDurationTextField;
    LKButton *_trimBackgroundMusicCheckBox;
    LKButton *_fadeInFromBlackCheckBox;
    LKButton *_fadeOutFromBlackCheckBox;
    LKTextField *_selectThemeLabel;
    LKButton *_selectThemeButton;
    LKButton *_automaticContentCheckbox;
    FFAnchoredSequence *_observedSequence;
    FFProject *_observedProject;
    BOOL _observing;
    BOOL _duringLoadEditorForLastOpenSequence;
    NSPopover *_projectPropertiesHUD;
    FFVideoEffectTool *_videoEffectTool;
}

@property BOOL duringLoadEditorForLastOpenSequence; // @synthesize duringLoadEditorForLastOpenSequence=_duringLoadEditorForLastOpenSequence;
@property(retain, nonatomic) FFVideoEffectTool *videoEffectTool; // @synthesize videoEffectTool=_videoEffectTool;
@property(retain, nonatomic) NSPopover *projectPropertiesHUD; // @synthesize projectPropertiesHUD=_projectPropertiesHUD;
@property(readonly, nonatomic) FFIMovieHeaderView *headerView; // @synthesize headerView=_headerView;
- (double)rightDraggableExclusionMargin;
- (double)leftDraggableExclusionMargin;
- (double)topDraggableMargin;
- (void)playReverse:(id)arg1;
- (void)playToOut:(id)arg1;
- (void)playInToOut:(id)arg1;
- (void)playAroundCurrentFrame:(id)arg1;
- (void)playFromStart:(id)arg1;
- (void)rewindDown:(id)arg1;
- (void)rewind:(id)arg1;
- (void)fastForwardDown:(id)arg1;
- (void)fastForward:(id)arg1;
- (void)playPause:(id)arg1;
- (void)playSelected:(id)arg1;
- (void)timeRateChangedForContext:(id)arg1;
- (void)_resumeSkimmingIfNecessary;
- (void)pauseSkimmingForPlayback;
- (void)_forwardSelectorToPlayer:(SEL)arg1 withObject:(id)arg2;
- (id)contentViewMenuSegmentedControlAndIndex:(long long *)arg1;
- (id)_consumerTimecodeFromFigTime:(CDStruct_1b6d18a9)arg1;
- (void)_updateCurrentOpenSequenceIdentifier;
- (void)_updateOpenSequenceIdentifier:(id)arg1;
- (void)_updateWindowControllerDocument;
- (id)_timelineView;
- (id)_editorModuleWithSequence:(id)arg1;
- (void)_timelineViewSuperViewBoundsChanged:(id)arg1;
- (void)_makeEditorActive:(id)arg1;
- (void)_stopObservingEditorModule;
- (BOOL)hasFadeObject:(int)arg1;
- (void)setShowWaveForms:(BOOL)arg1;
- (BOOL)showWaveForms;
- (void)_startObservingEditorModule;
- (void)_stopObservingEditorSequence;
- (void)_startObservingEditorSequence;
- (void)hideSportsTeamOSC;
- (BOOL)speedEditorIsShown;
- (void)hideSpeedEditor;
- (void)showSpeedEditorForObjects:(id)arg1 orObjectsAndRanges:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 segmentIndex:(int)arg4 forTransition:(BOOL)arg5;
- (BOOL)canBeginPlaying;
- (BOOL)canSkimWithAudio;
- (BOOL)canBeginSkimming;
- (BOOL)markerEditorIsShown;
- (void)hideMarkerEditor;
- (void)showMarkerEditorForMarkerLayer:(id)arg1 object:(id)arg2;
- (void)showMarkerEditorAtTime:(CDStruct_1b6d18a9)arg1 forObject:(id)arg2;
- (void)openSpeedAdjustmentPanel;
- (void)openInspectorToSubmodule:(id)arg1;
- (void)toggleAdjustmentsPanel;
- (void)openAdjustmentsPanel;
- (void)durationOfRootItemChanged;
- (void)openStack:(id)arg1;
- (void)sequenceChangedForEditorModule:(id)arg1;
- (void)viewChangedForEditorModule:(id)arg1;
- (void)editorModule:(id)arg1 didSelectItems:(id)arg2;
- (BOOL)editorModuleShouldShow2UpDisplay:(id)arg1;
- (void)stopNUpViewer;
- (void)replaceNUpMedia:(struct NSObject *)arg1 context:(id)arg2 withMedia:(struct NSObject *)arg3 context:(id)arg4;
- (void)startNUpViewerWithMedia:(id)arg1 contexts:(id)arg2 effectCounts:(id)arg3;
- (void)openSettingsWithModule:(id)arg1;
- (void)makeSequenceActive:(id)arg1 withTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)revealBinObject:(id)arg1 andRange:(CDStruct_e83c9415)arg2;
- (void)stopUsingMedia:(id)arg1;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 unloadingBlock:(CDUnknownBlockType)arg4;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 loadingBlock:(CDUnknownBlockType)arg4 unloadingBlock:(CDUnknownBlockType)arg5;
- (void)setNumericEntryShowsSubframes:(BOOL)arg1;
- (void)setNumericEntryDirection:(int)arg1;
- (void)setNumericEntryType:(int)arg1;
- (void)setNumericEntryValue:(id)arg1;
- (void)numericEntryDidEnd;
- (void)numericEntryWillBegin;
- (BOOL)isSkimmingSkimmable:(struct NSObject *)arg1 owner:(id)arg2;
- (void)stopSkimmingForOwner:(id)arg1;
- (BOOL)replaceSkimmedObject:(struct NSObject *)arg1 context:(id)arg2 withSkimmable:(struct NSObject *)arg3 context:(id)arg4 effectCount:(long long)arg5 allowPlayback:(BOOL)arg6 controlCanvas:(BOOL)arg7 showAngles:(BOOL)arg8 owner:(id)arg9;
- (BOOL)startSkimmingWithSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 allowPlayback:(BOOL)arg4 controlCanvas:(BOOL)arg5 showAngles:(BOOL)arg6 owner:(id)arg7;
- (CDStruct_1b6d18a9)requestedDuration;
- (void)activeToolChanged:(id)arg1;
- (void)updateToActiveTool;
- (void)_assetsChangedNotification:(id)arg1;
- (void)_soloChangedNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateDocumentName;
- (id)humanReadableDurationString;
- (CDStruct_1b6d18a9)correctedProjectDuration;
- (void)_updateSoloState:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)documentWasRemoved:(id)arg1;
- (void)documentWasAdded:(id)arg1;
- (void)layoutDidChange:(id)arg1;
- (void)firstResponderChanged:(id)arg1;
- (void)projectDoSelectThemeApplyingAutomaticContent:(id)arg1;
- (void)projectThemeAutomaticContent:(id)arg1;
- (void)projectSelectTheme:(id)arg1;
- (void)projectShowAudioWaveforms:(id)arg1;
- (void)projectFadeOutFromBlack:(id)arg1;
- (void)projectFadeInFromBlack:(id)arg1;
- (void)_enableFadeObject:(int)arg1 state:(BOOL)arg2;
- (void)projectTrimBackgroundMusic:(id)arg1;
- (void)projectTransitionDuration:(id)arg1;
- (void)projectEditDuration:(id)arg1;
- (void)projectPhotoPlacementPopup:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)showProjectProperties:(id)arg1;
- (void)editViewAttributes:(id)arg1;
- (void)finishEditingProject:(id)arg1;
- (void)selectAudioPercentage:(id)arg1;
- (void)popUpClipAttributes:(id)arg1;
- (void)showProjectShareStatusInfo:(id)arg1;
- (void)setDisplayBroadcastSafeZones:(id)arg1;
- (void)setColorChannelDisplay:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)moduleForAction:(SEL)arg1;
- (void)setLabel:(id)arg1;
- (id)selectionOwner;
- (void)selectNextTimelineItem:(id)arg1;
- (void)selectPreviousTimelineItem:(id)arg1;
- (void)setRootItem:(id)arg1;
- (void)setPreviousRootItem:(id)arg1;
- (void)toggleTimelineNavigation:(id)arg1;
- (void)zoomOut:(id)arg1;
- (void)zoomIn:(id)arg1;
- (void)toggleEditModuleOptions:(id)arg1;
- (void)toggleTimelineIndex:(id)arg1;
- (void)closePrecisionEditor:(id)arg1;
- (void)toggleItemSkimming:(id)arg1;
- (void)toggleAudioScrubbing:(id)arg1;
- (void)toggleEditAccessoryPanel:(id)arg1;
@property(readonly) FFAnchoredTimelineModule *timelineModule;
@property(nonatomic) FFEditorModule *editorModule;
- (id)contentLayoutDictionary;
- (void)takeContentLayoutFromDictionary:(id)arg1;
- (id)toolTip:(id)arg1 forProCommand:(id)arg2;
- (id)moduleFooterAccessoryView;
- (BOOL)wantsFooterBar;
- (id)moduleAccessoryView;
- (BOOL)wantsHeaderBar;
- (id)lastKeyView;
- (id)firstKeyView;
- (id)targetModules;
- (void)insertSubmodule:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)moduleDidUnhide;
- (void)moduleDidHide;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (BOOL)wantsTransparentBackground;
- (void)awakeFromNib;
- (id)submoduleLayoutArray;
- (unsigned long long)revealAnimationStyle;
- (void)viewDidLoad;
- (void)loadEditorForSequence:(id)arg1;
- (void)runModalProjectFilterPicker:(id)arg1;
- (void)_loadProjectFilterPickerButton;
- (void)_setThemeAndAutomaticContentButtons;
- (void)_setProjectFormatBadgeWithCurrentTimelineSequence;
- (void)_setProjectFormatBadgeWithSequence:(id)arg1;
- (void)loadEditorForLastOpenSequence;
- (struct CGSize)viewMinSize;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

