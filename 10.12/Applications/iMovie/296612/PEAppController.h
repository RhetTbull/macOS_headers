//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FFEditActionMgrDelegateProtocol-Protocol.h"
#import "FFEditActionSourceProtocol-Protocol.h"
#import "FFErrorReportingProtocol-Protocol.h"
#import "FFRolesMenuDelegate-Protocol.h"
#import "FFSharePanelAnimationProtocol-Protocol.h"
#import "FFSharedAppControllerInterface-Protocol.h"
#import "NSApplicationDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSUserInterfaceValidations-Protocol.h"
#import "PEFullScreenWindowDelegate-Protocol.h"

@class FFAnchoredSequence, FFEditActionMgr, FFMessageTracer, LKWindow, NSAlert, NSMapTable, NSMenu, NSMenuItem, NSMutableArray, NSString, NSTimer, PEEditorContainerModule, PELayoutsMenuDelegate, PEMarkerEditorContainerModule, PEMediaSourceEditorContainerModule, PESpeedEditorContainerModule, PEVariantsContainerModule, PEVoiceOverWindowController, Stopwatch;

@interface PEAppController : NSObject <FFErrorReportingProtocol, NSApplicationDelegate, NSUserInterfaceValidations, NSMenuDelegate, PEFullScreenWindowDelegate, FFRolesMenuDelegate, FFEditActionMgrDelegateProtocol, FFEditActionSourceProtocol, FFSharePanelAnimationProtocol, FFSharedAppControllerInterface>
{
    NSMenuItem *_openLibraryMenuItem;
    NSMenuItem *_closeLibraryMenuItem;
    NSMenuItem *_copyToLibraryMenuItem;
    NSMenuItem *_moveToLibraryMenuItem;
    NSMenuItem *_importiOSProject;
    NSMenuItem *_videoResolutionMenuItem;
    NSMenuItem *_audioResolutionMenuItem;
    NSMenu *_consumerAppMenu;
    NSMenu *_windowsMenu;
    NSMenuItem *_screenSizeOverrideMenuItem;
    NSMenuItem *_debugToolsSeperatorMenuItem;
    NSMenuItem *_debugToolsMenuItem;
    NSMenuItem *_debugRenderMenuItem;
    NSMenuItem *_clipsGroupByMenuItem;
    NSMenuItem *_clipsArrangeByMenuItem;
    NSMenu *_markMenu;
    NSMenuItem *_markSplitMenuItem;
    NSMenuItem *_clearSplitMenuItem;
    NSMenuItem *_rolesMenuItem;
    NSMenuItem *_applyCustomNameMenuItem;
    NSMenuItem *_debugMenu;
    NSMenuItem *_avOutMenu;
    NSMenu *_videoFiltersMenu;
    NSMenu *_audioEffectsMenu;
    NSMenu *_videoTransitionsMenu;
    NSMenu *_audioTransitionsMenu;
    NSMenu *_videoGeneratorsMenu;
    NSMenu *_timelineRowHeightMenu;
    NSMenu *_tracksMenu;
    NSMenu *_shareMenu;
    NSMenuItem *_showProviderSettingsMenuItem;
    NSMenuItem *_sendToFCPXMenuItem;
    NSMenu *_windowLayoutMenu;
    NSMenuItem *_windowLayoutsSeparator;
    PELayoutsMenuDelegate *_windowLayoutMenuDelegate;
    PEEditorContainerModule *_activeEditorContainer;
    id _projectTranslator;
    PEVoiceOverWindowController *_voiceoverRecordController;
    Stopwatch *_startupTimer;
    LKWindow *_stacksPopOverWindow;
    PEVariantsContainerModule *_stacksMod;
    BOOL _stacksModClosing;
    PEMarkerEditorContainerModule *_markerEditorContainerModule;
    PEMediaSourceEditorContainerModule *_mediaSourceEditorContainerModule;
    PESpeedEditorContainerModule *_speedEditorContainerModule;
    NSMutableArray *_inflightAnimations;
    NSMutableArray *_curtainWindows;
    BOOL _toggleAudioScrubbingIsDown;
    BOOL _toggleSkimmingIsDown;
    BOOL _toggleSnappingIsDown;
    BOOL _cleanUpFromEventMerge;
    BOOL _userIsScrollingThroughFonts;
    NSAlert *_coRunningAlert;
    BOOL _showTheaterAfterLaunch;
    NSTimer *_iOSiMovieProjectImportTimer;
    NSMutableArray *_iOSiMovieProjectUrls;
    struct _flags {
        unsigned int inspectorWasVisible:1;
    } _flags;
    FFEditActionMgr *_editActionMgr;
    FFMessageTracer *_messageTracer;
    NSMapTable *_openDocumentOriginForURL;
}

+ (id)toolTip:(id)arg1 withKeyEquivalent:(id)arg2;
+ (id)appController;
@property(nonatomic) BOOL userIsScrollingThroughFonts; // @synthesize userIsScrollingThroughFonts=_userIsScrollingThroughFonts;
- (struct CGRect)animationStartRectForEditAction:(id)arg1;
- (id)animationViewForEditAction:(id)arg1;
- (struct CGImage *)newAnimationImageForEditAction:(id)arg1;
- (BOOL)writeDataForEditAction:(id)arg1 toPasteboardWithName:(id)arg2;
- (id)dataForEditAction:(id)arg1;
- (BOOL)canSourceDataForEditAction:(id)arg1;
- (id)mediaRangesForReplaceEditAction:(id)arg1;
- (id)editActionMgr;
- (void)hideCurtain;
- (void)showCurtain;
- (void)didEvaluateCoachTipStatePredicates:(id)arg1;
- (void)willEvaluateCoachTipStatePredicates:(id)arg1;
- (void)_shareUserDestinationsChanged:(id)arg1;
- (void)setupShareMenu;
- (BOOL)shareSelectionSupportsAppPreview;
- (void)_setupShareMenu;
- (void)_removeShare:(long long)arg1;
- (void)_moveWorkspaceModulesToFullscreen:(id)arg1 withLabel:(id)arg2 animate:(BOOL)arg3;
- (void)_updateProjectTabOrOpenImportedIosProjects:(id)arg1;
- (void)_importAndOpenIosImovieProjectAtUrls:(id)arg1;
- (void)_triggerIosImovieProjectImport;
- (void)_refreshHDMIVout;
- (CDStruct_1b6d18a9)_playheadForMediaSelection;
- (double)defaultEditDuration;
- (id)_gatherMediaForInsertion;
- (void)mainWindowChangedScreens:(id)arg1;
- (void)appWillUnhide:(id)arg1;
- (void)appWillHide:(id)arg1;
- (void)documentRemoved:(id)arg1;
- (void)documentAdded:(id)arg1;
- (void)moduleLayoutDidChange:(id)arg1;
- (void)moduleLayoutWillChange:(id)arg1;
- (void)reportError:(id)arg1;
- (BOOL)application:(id)arg1 delegateHandlesKey:(id)arg2;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)_validateUserInterfaceItem:(id)arg1 usingModule:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)moduleForAction:(SEL)arg1;
- (BOOL)_isActionDisallowed:(SEL)arg1 forModule:(id)arg2;
- (void)removeFromYouTube:(id)arg1;
- (void)removeFromVimeo:(id)arg1;
- (void)removeFromFacebook:(id)arg1;
- (void)removeFromCNNiReport:(id)arg1;
- (void)showImportiOSProjectPanel:(id)arg1;
- (void)newTrailer:(id)arg1;
- (void)newAppStorePreviewProject:(id)arg1;
- (void)newThemedProject:(id)arg1;
- (void)exportMovieModal:(id)arg1;
- (void)exportShareArchive:(id)arg1;
- (void)shareAnimationDidEnd;
- (void)shareAnimationWillBegin;
- (struct CGRect)shareAnimationDestinationRect;
- (void)exportEffectBrowserThumbnails:(id)arg1;
- (void)editDestinations:(id)arg1;
- (void)newDestination:(id)arg1;
- (void)setOSCTimelineDisplayValue:(id)arg1;
- (void)setOSCTimecodeDisplayValue:(id)arg1;
- (void)summarizeObjectCacheToConsole:(id)arg1;
- (void)showFFDataViewer:(id)arg1;
- (void)rolesMenuController:(id)arg1 shouldAddRole:(id)arg2 toAnchoredObjects:(id)arg3;
- (id)anchoredObjectsForRolesMenuController:(id)arg1;
- (void)editRoles:(id)arg1;
- (void)applyNamePreset:(id)arg1;
- (void)showEditPresetsWindow:(id)arg1;
- (void)showNewPresetsWindow:(id)arg1;
- (void)_updateNamePresetMenuItems;
- (void)favoriteToolAvailable:(BOOL)arg1;
- (void)editToolAvailable:(BOOL)arg1;
- (void)setShowBothFields:(id)arg1;
- (void)showMultiangle:(id)arg1;
- (void)toggleVideoScopes:(id)arg1;
- (void)toggleHiddenEvents:(id)arg1;
- (void)setDisplayBroadcastSafeZones:(id)arg1;
- (void)toggleTimelineSelectionMovesPlayhead:(id)arg1;
- (void)toggleTimelineItemTitlesShown:(id)arg1;
- (void)avEditModeVideo:(id)arg1;
- (void)avEditModeAudio:(id)arg1;
- (void)avEditModeBoth:(id)arg1;
- (void)toggleKeywordEditor:(id)arg1;
- (id)_rangesOfMediaForTimelineEditing;
- (id)_rangesOfMedia;
- (void)insertGap:(id)arg1;
- (void)insertPlaceholder:(id)arg1;
- (void)stamp:(id)arg1;
- (void)lift:(id)arg1;
- (void)whatsNew:(id)arg1;
- (void)toggleSportsTeamEditor:(id)arg1;
- (void)revealProject:(id)arg1;
- (BOOL)canRevealProject;
- (void)snapshotProject:(id)arg1;
- (BOOL)canSnapshotProject;
- (void)duplicate:(id)arg1;
- (BOOL)canDuplicate:(id)arg1;
- (BOOL)timelineHasExplicitSelection;
- (void)showProviderSettings:(id)arg1;
- (void)showLibraryProperties:(id)arg1;
- (id)currentLibraryInSidebar;
- (id)_libraryForCurrentSelectionIncludingOtherModules:(BOOL)arg1;
- (id)_libraryForCurrentSelection;
- (void)switchTemporalResolutionMode:(id)arg1;
- (void)switchPlacementEditingMode:(id)arg1;
- (void)switchTrimEditingMode:(id)arg1;
- (void)selectExternalVideoScreen:(id)arg1;
- (void)toggleVideoOut:(id)arg1;
- (void)toggleVoiceoverRecording:(id)arg1;
- (void)toggleVoiceoverRecordView:(id)arg1;
- (void)toggleConsumerVoiceOver:(id)arg1;
- (void)toggleBackgroundTasksList:(id)arg1;
- (void)goToBackgroundTaskList:(id)arg1;
- (void)goToTimeline:(id)arg1;
- (void)goToCanvas:(id)arg1;
- (void)toggleEventViewer:(id)arg1;
- (void)goToEventViewer:(id)arg1;
- (void)goToViewer:(id)arg1;
- (void)goToOrganizer:(id)arg1;
- (void)goToInspector:(id)arg1;
- (void)auditionSelectedVariant:(id)arg1;
- (void)openStack:(id)arg1 fromModule:(id)arg2;
- (void)toggleVariantsPicker:(id)arg1;
- (void)closeVariantsPicker:(id)arg1;
- (void)showSpeedEditorForObjects:(id)arg1 orObjectsAndRanges:(id)arg2 segmentIndex:(int)arg3 forTransition:(BOOL)arg4 atTime:(CDStruct_1b6d18a9)arg5 forEditorModule:(id)arg6;
- (BOOL)speedEditorIsShown;
- (void)hideSpeedEditor:(id)arg1;
- (void)showMarkerEditorForMarkerLayer:(id)arg1 object:(id)arg2 editorModule:(id)arg3;
- (void)showMarkerEditorAtTime:(CDStruct_1b6d18a9)arg1 forObject:(id)arg2 forEditorModule:(id)arg3;
- (BOOL)markerEditorIsShown;
- (void)hideMarkerEditor:(id)arg1;
- (void)toggleDataList:(id)arg1;
- (void)toggleEventsLibrary:(id)arg1;
- (void)toggleOrganizer:(id)arg1;
- (void)hideOrganizer:(id)arg1;
- (void)showOrganizer:(id)arg1;
- (void)toggleMediaBrowserModeFromMenuTag:(id)arg1;
- (void)toggleMediaBrowser:(id)arg1;
- (void)switchToInspector:(id)arg1;
- (void)goToColorBoard:(id)arg1;
- (BOOL)eventViewerScopesVisible;
- (BOOL)scopesVisible;
- (void)showVectorscope:(id)arg1;
- (void)showWaveform:(id)arg1;
- (void)showHistogram:(id)arg1;
- (void)toggleEnhanceAudio:(id)arg1;
- (void)goToAudioCleanup:(id)arg1;
- (void)toggleAudioMeter:(id)arg1;
- (void)setColorChannelDisplay:(id)arg1;
- (void)showInspectorInfoTab:(id)arg1;
- (void)toggleInspector:(id)arg1;
- (void)findAndReplace:(id)arg1;
- (void)_goToHelpPage:(id)arg1 anchorName:(id)arg2;
- (void)showPreferencesForBackups:(id)arg1;
- (void)showPreferences:(id)arg1;
- (void)_didBecomeKeyFocus:(id)arg1;
- (void)_didResignKeyFocus:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)orderFrontAboutBox:(id)arg1;
- (void)toggleSkimmingUp:(id)arg1;
- (void)toggleSkimmingDown:(id)arg1;
- (void)toggleAudioScrubbingUp:(id)arg1;
- (void)toggleAudioScrubbingDown:(id)arg1;
- (void)toggleSnappingUp:(id)arg1;
- (void)toggleSnappingDown:(id)arg1;
- (void)toggleSnapping:(id)arg1;
- (void)toggleSkimming:(id)arg1;
- (void)toggleAudioScrubbing:(id)arg1;
- (void)fullscreenWindow:(id)arg1 screenNotAvailable:(long long)arg2;
- (void)toggleFullscreenDisplayArea:(id)arg1;
- (void)toggleFullscreenOrganizer:(id)arg1;
- (void)showFCPServiceAndSupport:(id)arg1;
- (void)showFCPFeedback:(id)arg1;
- (void)showPreferencesHelp:(id)arg1;
- (void)showSupportedCameras:(id)arg1;
- (void)showLogicEffectsReference:(id)arg1;
- (void)showKeyboardShortcuts:(id)arg1;
- (void)showUpdatingToLibraries:(id)arg1;
- (void)openLayoutsFolder:(id)arg1;
- (void)currentLayoutSave:(id)arg1;
- (void)currentLayoutSaveAs:(id)arg1;
- (void)resetWindowLayout:(id)arg1;
- (void)swapEventsAndTimeline:(id)arg1;
- (void)hideApplication:(id)arg1;
- (void)exportPosterImage:(id)arg1;
- (void)exportAllTrailers:(id)arg1;
- (void)use2xQCContent:(id)arg1;
- (void)usePreviewMediaForTrailers:(id)arg1;
- (void)showTrailersInTimeline:(id)arg1;
- (void)importClipBundle:(id)arg1;
- (void)exportClipBundle:(id)arg1;
- (void)dumpSelectionAsModelObjectToDotFile:(id)arg1;
- (void)dumpSelectedEventAsModelObjectToDotFile:(id)arg1;
- (BOOL)_dumpSingleObjectToDotFile:(id)arg1;
- (void)exportThumbnailForItem:(id)arg1 url:(id)arg2 thumbnailTime:(CDStruct_1b6d18a9)arg3;
- (struct CGImage *)newResizedCGImage:(struct CGImage *)arg1 toWidth:(int)arg2 andHeight:(int)arg3;
- (void)moveToLibrary:(id)arg1;
- (void)copyToLibrary:(id)arg1;
- (void)upgradeiMovieVolumeMounted:(id)arg1;
- (void)firstRuniMovieUpgrade;
- (void)importAlliMovieEvents:(id)arg1;
- (void)eventImportAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)downloadAdditionalContent:(id)arg1;
- (void)setDisableSnapping:(BOOL)arg1;
- (BOOL)disableSnapping;
- (void)setDisableSkimming:(BOOL)arg1;
- (BOOL)disableSkimming;
@property BOOL disableAudioScrubbing;
@property(readonly) FFAnchoredSequence *currentSequence;
- (id)titleBarAccessoryViewController;
- (id)editorContainerWithID:(id)arg1 createIfNeeded:(BOOL)arg2 withFrame:(struct CGRect)arg3;
- (id)dataListModule;
- (id)colorModule;
- (id)audioCleanupModule;
- (id)audioMeterModule;
- (id)backgroundTaskListModule;
- (id)variantsPicker;
- (id)speedEditor;
- (id)markerEditor;
- (id)mediaBrowserModule;
- (id)consumerTransportControlsModule;
- (id)consumerInspectorModule;
- (id)inspectorModule;
- (id)consumerToolbarModule;
- (BOOL)isMultiAngleEditor;
- (BOOL)isEventBrowserHidden;
- (BOOL)isMediaEventBrowserFullscreen;
- (id)mediaDetailsContainer;
- (id)eventSidebarContainer;
- (id)mediaEventOrganizerContainer;
- (id)consumerActiveEditorContainer;
@property(readonly) PEEditorContainerModule *activeEditorContainer;
- (id)mainEditorContainer;
- (BOOL)isMainDisplayAreaFullscreen;
- (id)eventViewer;
- (id)mainDisplayArea;
- (id)mainWorkspaceContainer;
- (BOOL)_validiMovieLayout:(id)arg1;
- (BOOL)canApplyLayout:(id)arg1;
- (BOOL)shouldInstallModuleLayoutMenu;
- (unsigned long long)currentCompatibleLayoutVersion;
- (BOOL)applicationSystemFontIsMedium;
- (id)_editorSharedPreferences;
- (void)enableAdjustmentInspector;
- (void)showAdjustmentInspector;
- (void)hideAdjustmentInspector;
- (void)stopPlayback;
- (void)haveOrganizerOpenInTimeline;
- (void)mediaProjectsWillBeMerged:(id)arg1;
- (void)cleanupFromMergeIfNeeded;
- (void)cancelActiveNonArrowTool;
- (BOOL)disableGradationChanges;
- (void)applicationWillBecomeActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (id)openDocumentOriginForURL:(id)arg1;
- (void)forgetOpenDocumentOriginForURL:(id)arg1;
- (void)rememberOpenDocumentOriginForURL:(id)arg1 origin:(id)arg2;
- (void)applicationDidMiniaturizeAll:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)appHasStartedProcessing:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (BOOL)_migratePreGodzillaColorPresets;
- (void)restoreOpenDocuments;
- (void)applicationWillFinishLaunching:(id)arg1;
- (BOOL)applicationShouldOpenUntitledFile:(id)arg1;
- (id)copyrightYearString;
- (id)versionCreditsString;
- (void)_registerDefaults;
- (_Bool)_shouldUseHQPlayback;
- (BOOL)_isPowerReducedPlayback;
- (id)activeDestinationForEditAction:(id)arg1;
- (id)activeSourceForEditAction:(id)arg1;
- (id)activeEditSourceForToolBar;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

