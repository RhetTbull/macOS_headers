//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MACore/ECSingleton.h>

@class NSMutableDictionary, NSString, NSUserDefaults;

@interface DfPreferences : ECSingleton
{
    NSUserDefaults *m_standardDefaults;
    NSMutableDictionary *m_queuedMentorDownloadsCache;
}

+ (id)defaultNewProjectDestination;
+ (id)appDisplayName;
+ (id)appName;
+ (id)sharedPreferences;
+ (id)singleton;
+ (void)setSingleton:(id)arg1;
+ (void)initialize;
+ (id)defaultButtons2;
+ (id)defaultButtons;
- (BOOL)showNEWIndicator;
- (void)setShowNEWIndicator:(BOOL)arg1;
- (BOOL)storeUsesDevelopmentSigning;
- (int)storeNumberOfParallelDownloads;
- (double)storeWebKitURLTimeout;
- (id)storeInfoUrl;
- (BOOL)storeWebKitDebug;
- (BOOL)shouldRetryMentorDownloadForPackage:(id)arg1;
- (BOOL)hasVisitedLessonStore;
- (void)setHasVisitedLessonStore:(BOOL)arg1;
- (void)setNumberOfLastSeenLessonsInStore:(long long)arg1;
- (long long)numberOfLastSeenLessonsInStore;
- (void)removeQueuedMentorDownloadPackage:(id)arg1;
- (void)markQueuedMentorDownloadPackage:(id)arg1 asDownloading:(BOOL)arg2;
- (void)addQueuedMentorDownloadPackage:(id)arg1 fromURL:(id)arg2;
- (void)_setQueuedMentorStoreDownloads:(id)arg1;
- (id)queuedMentorStoreDownloads;
- (BOOL)isStoreAlwaysAvailable;
- (BOOL)doesMentorMeetsMinimalSystemRequirements;
- (id)basicMBGContentDownloadURL;
- (id)basicContentDownloadURL;
- (id)iLifeWelcomeScreenURL;
- (id)videoTutorialsURL;
- (id)debugUpdateURL;
- (BOOL)useAutomaticSectionLengthInSongCreation;
- (id)glossaryBaseURL;
- (id)cafScramblerPath;
- (void)setCafScramblerPath:(id)arg1;
- (id)afConvertPath;
- (void)setAfConvertPath:(id)arg1;
- (long long)lastSelectedMentorInputChannelIndex;
- (void)setLastSelectedMentorInputChannelIndex:(long long)arg1;
- (BOOL)dontShowMentorResetLessonAlert;
- (void)setDontShowMentorResetLessonAlert:(BOOL)arg1;
- (BOOL)dontShowMentorTempoScaleAlert;
- (void)setDontShowMentorTempoScaleAlert:(BOOL)arg1;
- (BOOL)dontShowMentorMidiInputsAlert;
- (void)setDontShowMentorMidiInputsAlert:(BOOL)arg1;
- (BOOL)dontShowHidingTrackLocksAlert;
- (void)setDontShowHidingTrackLocksAlert:(BOOL)arg1;
- (void)setProtonDefaultVolume:(float)arg1;
- (float)protonDefaultVolume;
- (void)setProtonProductionEnabled:(BOOL)arg1;
- (BOOL)isProtonProductionEnabled;
- (BOOL)shouldShowFlattenTakesOnJoinAlert;
- (void)setShouldShowFlattenTakesOnJoinAlert:(BOOL)arg1;
- (BOOL)shouldShowDeleteActualTakeAlert;
- (void)setShouldShowDeleteActualTakeAlert:(BOOL)arg1;
- (BOOL)shouldShowDeleteUnwantedTakesAlert;
- (void)setShouldShowDeleteUnwantedTakesAlert:(BOOL)arg1;
- (BOOL)doAskAboutILifeUpgradeVersion:(id)arg1 checkUserWantsUpdate:(BOOL)arg2;
- (void)setDoAskAboutILifeUpgrade:(BOOL)arg1 forVersion:(id)arg2;
- (BOOL)doAskAboutUpgradeVersion:(id)arg1;
- (void)setDoAskAboutUpgrade:(BOOL)arg1 forVersion:(id)arg2;
- (BOOL)timeForAutoUpgradeCheck;
- (void)setDoUpgradeCheck:(BOOL)arg1;
- (BOOL)doUpgradeCheck;
- (BOOL)showFlexModeMenu;
- (BOOL)showTransients;
- (BOOL)quantizeAudioParamIsRange;
- (void)setDontShowDialog:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)dontShowDialogForKey:(id)arg1;
- (void)resetDontShowDialogs;
- (void)setGridHighLatencyMode:(BOOL)arg1;
- (BOOL)gridHighLatencyMode;
@property(readonly, nonatomic) BOOL openGBSongs;
- (BOOL)debugMasterHSRReverb;
- (BOOL)debugMasterHSREcho;
- (BOOL)debugMasterEffectsBypass;
- (BOOL)debugSpeakerEnhancer;
- (void)setDefaultDragLoopToWrongInstrumentBehavior:(int)arg1;
- (int)defaultDragLoopToWrongInstrumentBehavior;
- (BOOL)exitWhenOSVersionCheckFails;
- (BOOL)exitWhenQuickTimeCheckFails;
- (BOOL)useAudibleExportMethod;
- (void)setShowBurnMovieAudioOnlyWarning:(BOOL)arg1;
- (BOOL)showBurnMovieAudioOnlyWarning;
- (void)setOptimizeForiPhoneCheckboxEnabled:(BOOL)arg1;
- (BOOL)optimizeForiPhoneCheckboxEnabled;
- (void)setShowNoEnhancedPodcastWarning:(BOOL)arg1;
- (BOOL)showNoEnhancedPodcastWarning;
- (void)setDontShowILifeWelcomePanel:(BOOL)arg1;
- (BOOL)dontShowILifeWelcomePanel;
- (void)setShowJamPackNotifications:(BOOL)arg1;
- (BOOL)showJamPackNotifications;
- (void)setMovieThumbnailResolution:(int)arg1;
- (int)movieThumbnailResolution;
- (BOOL)renderThumbnails;
- (void)setMixSIOnCycleRecording:(BOOL)arg1;
- (BOOL)mixSIOnCycleRecording;
- (void)setImportAppleLoops:(BOOL)arg1;
- (BOOL)forceImportAppleLoops;
- (void)setLogPerformanceValues:(BOOL)arg1;
- (BOOL)logPerformanceValues;
- (void)setDisplayPerformanceValues:(BOOL)arg1;
- (BOOL)displayPerformanceValues;
- (void)setDataFormatPresetIndex:(int)arg1;
- (int)dataFormatPresetIndex;
- (long long)dataFormatRate;
- (long long)dataFormatResolution;
- (int)numberOfInstrumentTracks;
- (int)numberOfAudioTracks;
- (void)setShowAutomationParameterRemoveAlert:(BOOL)arg1;
- (BOOL)showAutomationParameterRemoveAlert;
- (void)setNormalizeBounce:(BOOL)arg1;
- (BOOL)normalizeBounce;
- (void)setUse24BitExport:(BOOL)arg1;
- (BOOL)use24BitExport;
- (void)setUse24BitRecording:(BOOL)arg1;
- (BOOL)use24BitRecording;
- (void)setAudiobusEnabled:(BOOL)arg1;
- (BOOL)isAudiobusEnabled;
- (BOOL)useCrosstalkCompensation;
- (void)setOneBarCountInEnabled:(BOOL)arg1;
- (BOOL)isOneBarCountInEnabled;
- (void)setShowRenderOnSaveAlert:(BOOL)arg1;
- (BOOL)showRenderOnSaveAlert;
- (void)setShowRTCycleAlert:(BOOL)arg1;
- (BOOL)showRTCycleAlert;
- (void)setShowRTLaunchScreen:(BOOL)arg1;
- (BOOL)showRTLaunchScreen;
- (BOOL)podWarningsEnabled;
- (void)setPodWarningsEnabled:(BOOL)arg1;
- (void)setDiscardChangesForInstrAndPresets:(BOOL)arg1;
- (BOOL)isDiscardChangesForInstrAndPresets;
- (BOOL)isLoopSearchKeyLimited;
- (void)setLoopSearchKeyLimited:(BOOL)arg1;
- (BOOL)indexToUserDirectoryEnabled;
- (void)setIndexToUserDirectoryEnabled:(BOOL)arg1;
- (float)tuning;
- (void)setTuning:(float)arg1;
- (void)setAlbumName:(id)arg1;
- (id)albumName;
- (void)setComposerName:(id)arg1;
- (id)composerName;
- (void)setArtistName:(id)arg1;
- (id)artistName;
- (void)setiTunesPlaylistName:(id)arg1;
- (id)iTunesPlaylistName;
- (void)setAudioFormat:(int)arg1;
- (int)audioFormat;
- (BOOL)useSafetyBuffer;
- (int)audioLatency;
- (void)setSEngineTableViewTempoAndKeyColumnsHidden:(BOOL)arg1;
- (BOOL)sEngineTableViewTempoAndKeyColumnsHidden;
- (id)webDatabasePath;
- (id)localStorageDatabasePath;
- (id)cookieStorage;
- (id)oldFactoryDemoSongsFolder;
- (id)factoryDemoSongsFolder;
- (id)applicationTemporaryPath;
- (id)localizationBundlePath;
- (id)previousSaveDestination;
- (void)setPreviousSaveDestination:(id)arg1;
- (id)previousProjectID;
- (void)setPreviousProjectID:(id)arg1;
- (int)previousSubCategoryID;
- (void)setPreviousSubCategoryID:(int)arg1;
- (int)previousCategoryID;
- (void)setPreviousCategoryID:(int)arg1;
- (id)userLoopIndexFolder;
- (void)setUserLoopIndexFolder:(id)arg1;
- (id)oldFactoryLoopIndexFolder;
- (id)factoryLoopIndexFolder;
- (void)setFactoryLoopIndexFolder:(id)arg1;
- (id)userLoopLibrarySingleFileFolder;
- (id)oldFactoryLoopLibrarySingleFileFolder;
- (id)factoryLoopLibrarySingleFileFolder;
- (id)userLoopLibraryFolder;
- (id)oldFactoryLoopLibraryFolder;
- (id)sharedUserLoopLibraryFolder;
- (id)appleFactoryLoopLibraryFolder;
- (id)factoryTemplatesFolderChordTrainerLessons;
- (id)factoryTemplatesFolderMentorUpdates;
- (id)interSongClipboardFolder;
- (id)defaultArrangeScreenshotPath;
- (id)factoryGridsFolder;
- (id)factoryDrumsGeneratorLib;
- (id)userMagicMentorWorkingCopyFolder;
- (id)sharedTemplatesFolderMentor;
- (id)temporaryTemplatesFolderMentorArtistLessons;
- (id)temporaryTemplatesFolderMentorBasicLessons;
- (id)temporaryTemplatesFolderMentor;
- (id)factoryTemplatesFolderMentorArtistLessons;
- (id)factoryTemplatesFolderMentorBasicLessons;
- (id)factoryTemplatesFolderMentor;
- (id)factoryTemplatesFolderMagicGarageBand;
- (id)factoryTemplatePathNewMovieScore;
- (id)factoryTemplatesFolderRingtone;
- (id)factoryTemplatesFolderNewProject;
- (id)factoryLoopLibraryFolder;
- (void)setFactoryLoopLibraryFolder:(id)arg1;
- (id)factoryLibraryFolder;
- (id)factorySamplerFilesFolder;
- (id)factorySamplerInstrumentsFolder;
- (id)factorySamplerFolder;
- (id)defaultOnlineStoreAppBundleContentPath;
- (id)defaultGbSystemApplicationSupportPath;
- (id)defaultMasterLiveRemixToolFullPath;
- (id)defaultMasterChaStripFullPath;
- (id)defaultSoftwareInstrumentFullPath;
- (id)defaultChordTrainerInstrumentFullPath;
- (id)defaultGuitarInstrumentFullPath;
- (id)defaultRealInstrumentFullPath;
- (id)defaultChatInstrumentFullPath;
- (id)userMasterTrackSettingsFolder;
- (id)userSamplerFilesFolder;
- (id)userSamplerInstrumentsFolder;
- (id)userSamplerFolder;
- (id)userSoftTrackSettingsFolder;
- (id)userGuitarTrackSettingsCategoryFolder;
- (id)userGuitarTrackSettingsFolder;
- (id)userRealTrackSettingsFolder;
- (id)userTrackSettingsFolder;
- (id)factoryMasterTrackSettingsFolder;
- (id)factorySoftTrackSettingsFolder;
- (id)factoryGuitarTrackSettingsFolder;
- (id)factoryRealTrackSettingsFolder;
- (id)factoryTrackSettingsFolder;
- (id)userPlugInFolder;
- (id)factoryPlugInFolder;
- (id)checkLocalizedFolder:(id)arg1;
- (BOOL)checkBasicMBGContentAvailability;
- (BOOL)checkLearnToPlayHiddenUpdatesFolder;
- (BOOL)checkLearnToPlayFolder;
- (BOOL)checkFactoryFolder;
- (BOOL)checkPath:(id)arg1;
- (void)setFavoritePaths:(id)arg1;
- (id)favoritePaths;
- (void)setFactoryInstrLibFolder:(id)arg1;
- (id)factoryInstrLibFolder;
- (id)userInstrLibFolder;
- (void)setUseColumnViewForFxLoopBrowser:(BOOL)arg1;
- (BOOL)useColumnViewForFxLoopBrowser;
- (void)setUseMainThreadVideoThumbnailGeneration:(BOOL)arg1;
- (BOOL)useMainThreadVideoThumbnailGeneration;
- (void)setLongTimeSpeakerImageRepeat:(int)arg1;
- (int)longTimeSpeakerImageRepeat;
- (void)setLevelDifferenceForSpeakerSwitch:(float)arg1;
- (float)levelDifferenceForSpeakerSwitch;
- (void)setMinSpeakerMonopolTime:(int)arg1;
- (int)minSpeakerMonopolTime;
- (void)setMaxMediaMarkerGapCleanupTime:(int)arg1;
- (int)maxMediaMarkerGapCleanupTime;
- (void)setTrackLevelTransitionDelay:(int)arg1;
- (int)trackLevelTransitionDelay;
- (void)setChatRegionDelayCompensation:(int)arg1;
- (int)chatRegionDelayCompensation;
- (void)setTrackLevelChangeLowMark:(float)arg1;
- (float)trackLevelChangeLowMark;
- (void)setTrackLevelChangeHighMark:(float)arg1;
- (float)trackLevelChangeHighMark;
- (void)setLastSelectedCompressedPodcastExportEncoder:(int)arg1;
- (int)lastSelectedCompressedPodcastExportEncoder;
- (void)setLastSelectedPodcastExportEncoder:(int)arg1;
- (int)lastSelectedPodcastExportEncoder;
- (void)setLastSelectedExportEncoder:(int)arg1;
- (int)lastSelectedExportEncoder;
- (void)setLastSelectedCompressedExportEncoder:(int)arg1;
- (int)lastSelectedCompressedExportEncoder;
- (void)setLastSelectedVideoExportToiWebPreset:(int)arg1;
- (int)lastSelectedVideoExportToiWebPreset;
- (void)setLastSelectedVideoExportToiTunesPreset:(int)arg1;
- (int)lastSelectedVideoExportToiTunesPreset;
- (void)setLastSelectedVideoExportToDiskPreset:(int)arg1;
- (int)lastSelectedVideoExportToDiskPreset;
- (void)setLastSelectedAACPodcastPreset:(int)arg1;
- (int)lastSelectedAACPodcastPreset;
- (void)setLastSelectedAACPreset:(int)arg1;
- (int)lastSelectedAACPreset;
- (void)setLastSelectedMP3PodcastPreset:(int)arg1;
- (int)lastSelectedMP3PodcastPreset;
- (void)setLastSelectedMP3Preset:(int)arg1;
- (int)lastSelectedMP3Preset;
- (void)setLastSelectedMP3CustomFormat:(struct _LGMP3FORMAT)arg1 isStereo:(BOOL)arg2;
- (struct _LGMP3FORMAT)lastSelectedMP3CustomFormat:(char *)arg1;
- (void)setLastSelectedAACCustomFormat:(struct _LGAACFORMAT)arg1;
- (struct _LGAACFORMAT)lastSelectedAACCustomFormat;
- (void)setSizePodcastArtwork:(BOOL)arg1;
- (BOOL)sizePodcastArtwork;
- (BOOL)applicationVersionNumber:(double *)arg1 forBundle:(id)arg2;
- (id)applicationVersionStringForBundle:(id)arg1;
- (BOOL)isApplicationInstalled:(id)arg1;
- (id)nameOfTyphus;
- (void)setCreateMediaPreviewOnSave:(BOOL)arg1;
- (BOOL)createMediaPreviewOnSave;
- (void)setKeyboardSensitivity:(int)arg1;
- (int)keyboardSensitivity;
- (BOOL)isARLCEnabledByDefault;
- (void)setSelectedInputAudioDriverName:(id)arg1;
- (void)setSelectedInputAudioDriverIndex:(int)arg1;
- (id)selectedInputAudioDriverName;
- (int)selectedInputAudioDriverIndex;
- (void)setSelectedOutputAudioDriverName:(id)arg1;
- (void)setSelectedOutputAudioDriverIndex:(int)arg1;
- (id)selectedOutputAudioDriverName;
- (int)selectedOutputAudioDriverIndex;
- (long long)maxAllowedDrummerTracks;
- (long long)maxAllowedTracks;
- (void)setCustomKeywords:(id)arg1;
- (id)customKeywords;
- (void)setCustomKeywords2:(id)arg1;
- (id)customKeywords2;
- (BOOL)trackInspectorDetailsVisible;
- (void)setTrackInspectorDetailsVisible:(BOOL)arg1;
- (struct CGPoint)plugInFrameTopLeftPoint;
- (void)setPlugInFrameTopLeftPoint:(struct CGRect)arg1;
- (int)numVoicesIntValue;
@property(readonly, nonatomic) NSString *tempDirectory;
- (id)init;
- (id)fixedButtons;

@end

