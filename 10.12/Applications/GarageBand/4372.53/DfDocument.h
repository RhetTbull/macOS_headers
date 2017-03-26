//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSDocument.h>

@class DfBasicArrangeModel, DfBasicClipsModel, DfGenInstModel, DfLogicModel, NSArray, NSDate, NSImage, NSMutableDictionary, NSString;
@protocol DfLogicModelDelegate;

@interface DfDocument : NSDocument
{
    DfLogicModel *m_logicModel;
    DfBasicArrangeModel *m_arrangeModel;
    DfGenInstModel *m_genInstModel;
    id <DfLogicModelDelegate> m_logicModelDelegate;
    BOOL m_shouldPostNotifications;
    BOOL m_shouldPostModelUpdateNotifications;
    NSString *m_preListenAudioFile;
    long long m_lastTempo;
    int m_virtualCountInTempo;
    BOOL m_isVirtualCountInRunning;
    int m_virtualCountInCancelReason;
    BOOL m_importAsAppleLoop;
    BOOL m_saveAsArchive;
    BOOL m_compressFiles;
    BOOL m_forcePreview;
    BOOL m_preventUndo;
    NSMutableDictionary *m_poolOfChannelFlyweights;
    NSMutableDictionary *m_poolOfPlugInFlyweights;
    int m_dfDocumentVersion;
    int m_cbDocumentVersion;
    NSString *m_documentSystemString;
    NSString *m_documentMachineString;
    NSString *m_documentAppIDString;
    NSString *m_documentCreatedInAppIDString;
    NSArray *m_tunerStrings;
    NSString *m_lastImportOriginalPath;
    long long m_SPL_BufferedClock;
    long long m_lastPlayStartClock;
    long long m_mainFolderEndClockBeforeLastRecordStart;
    long long m_CellRecordingSPL_BufferedClock;
    BOOL m_previewDirty;
    BOOL m_supressProgressOnLoad;
    BOOL m_preventEarlierSongVersionSaveDialog;
    NSImage *m_songScreenShotForNextSavingAction;
    BOOL m_isFreezing;
    BOOL m_ignoreIdleTimerNotifications;
    NSDate *m_lastSaveDate;
    BOOL m_closeCalled;
    BOOL m_lastSaveFailed;
    BOOL m_allowOpeningOlderSongVersionsWithProblems;
    BOOL m_syncedTransportModeEnabled;
    BOOL m_isPrimedForSyncedTransportMode;
    BOOL m_userInteractionDisabled;
    BOOL m_reenableCycleAfterSyncedTransportModeStart;
    BOOL m_syncedPlayCountInEnabled;
    long long m_OpenUndoGroups;
    long long m_GroupedUndoStepCounter;
    long long m_IsUndoingCounter;
    BOOL _gridPerformanceRecordingModeEnabled;
    DfBasicClipsModel *m_clipsModel;
}

+ (BOOL)copySamplerAudioFilesToSongSampleFilesFolderIfNeededForEXSInstrumentAtPath:(id)arg1 songPath:(id)arg2;
+ (void)triggerCurrentRunLoopWithIgnoredIdleCalls:(BOOL)arg1 forProgressController:(id)arg2;
+ (void)triggerCurrentRunLoopWithIgnoredIdleCalls:(BOOL)arg1;
+ (BOOL)globalIgnoreIdleTimerNotifications;
+ (void)endGlobalIgnoreIdleTimerNotifications;
+ (void)beginGlobalIgnoreIdleTimerNotifications;
+ (Class)songConfiguratorClass;
+ (void)initialize;
+ (void)setSongConfiguratorClass:(Class)arg1;
+ (Class)arrangeModelClass;
+ (void)setArrangeModelClass:(Class)arg1;
+ (id)createNewGBDocumentAtURL:(id)arg1 fromTemplateAtURL:(id)arg2 songSettings:(CDStruct_0a279e4b *)arg3 saveNewDocument:(BOOL)arg4 error:(id *)arg5;
+ (id)createEmptyNewGBDocumentAtURL:(id)arg1 songSettings:(CDStruct_0a279e4b *)arg2 saveNewDocument:(BOOL)arg3 error:(id *)arg4;
+ (id)defaultExtensionAndType;
+ (BOOL)createOrValidateDocumentSkelettonBundleAtURL:(id)arg1 ofType:(id)arg2;
+ (BOOL)makeSureDocumentHasValidNoSyncStructureAtURL:(id)arg1;
+ (void)_writePackageInfoToProjectPath:(id)arg1 ofType:(id)arg2;
+ (id)_hiddenTemporaryDirectoryForPath:(id)arg1 create:(BOOL)arg2;
+ (void)updateDocumentCachesUUIDsForDocumentAtPath:(id)arg1;
+ (long long)checkExternalSamplerFilesReferencesForDocumentAtPath:(id)arg1;
+ (int)checkSongVersionForSongAtPath:(id)arg1;
+ (int)checkDocumentVersion:(int)arg1 currentRunningVersion:(int)arg2;
+ (void)setAllowedMaxClock:(long long)arg1;
@property(nonatomic) BOOL gridPerformanceRecordingModeEnabled; // @synthesize gridPerformanceRecordingModeEnabled=_gridPerformanceRecordingModeEnabled;
@property(nonatomic) BOOL syncedPlayCountInEnabled; // @synthesize syncedPlayCountInEnabled=m_syncedPlayCountInEnabled;
@property(readonly, nonatomic) BOOL reenableCycleAfterSyncedTransportModeStart; // @synthesize reenableCycleAfterSyncedTransportModeStart=m_reenableCycleAfterSyncedTransportModeStart;
@property(readonly, nonatomic) BOOL isPrimedForSyncedTransportMode; // @synthesize isPrimedForSyncedTransportMode=m_isPrimedForSyncedTransportMode;
@property(nonatomic) BOOL syncedTransportModeEnabled; // @synthesize syncedTransportModeEnabled=m_syncedTransportModeEnabled;
@property(readonly, nonatomic) long long mainFolderEndClockBeforeLastRecordStart; // @synthesize mainFolderEndClockBeforeLastRecordStart=m_mainFolderEndClockBeforeLastRecordStart;
@property(readonly, nonatomic) BOOL lastSaveFailed; // @synthesize lastSaveFailed=m_lastSaveFailed;
@property(readonly, nonatomic) NSDate *lastSaveDate; // @synthesize lastSaveDate=m_lastSaveDate;
@property(getter=isPreviewDirty) BOOL previewDirty; // @synthesize previewDirty=m_previewDirty;
@property(nonatomic) BOOL ignoreIdleTimerNotifications; // @synthesize ignoreIdleTimerNotifications=m_ignoreIdleTimerNotifications;
@property(nonatomic) BOOL preventUndo; // @synthesize preventUndo=m_preventUndo;
@property(nonatomic) BOOL shouldPostModelUpdateNotifications; // @synthesize shouldPostModelUpdateNotifications=m_shouldPostModelUpdateNotifications;
@property(nonatomic) BOOL shouldPostNotifications; // @synthesize shouldPostNotifications=m_shouldPostNotifications;
@property(readonly, nonatomic) DfBasicClipsModel *clipsModel; // @synthesize clipsModel=m_clipsModel;
@property(readonly, nonatomic) DfBasicArrangeModel *arrangeModel; // @synthesize arrangeModel=m_arrangeModel;
@property(readonly, nonatomic) DfLogicModel *logicModel; // @synthesize logicModel=m_logicModel;
@property(readonly, nonatomic) NSString *documentCreatedInAppIDString; // @synthesize documentCreatedInAppIDString=m_documentCreatedInAppIDString;
@property(readonly, nonatomic) NSString *documentAppIDString; // @synthesize documentAppIDString=m_documentAppIDString;
@property(readonly, nonatomic) NSString *documentMachineString; // @synthesize documentMachineString=m_documentMachineString;
@property(readonly, nonatomic) NSString *documentSystemString; // @synthesize documentSystemString=m_documentSystemString;
- (id)displayName;
- (id)songSamplerInstrumentsPath:(BOOL)arg1;
- (id)songSamplerFilesPath:(BOOL)arg1;
- (id)createEasySamplerInstrumentWithName:(id)arg1 forAudioFileAtPath:(id)arg2;
- (void)traceLogicAudioFiles;
- (BOOL)isRedoMenuItemEnabled;
- (BOOL)isUndoMenuItemEnabled;
- (BOOL)validateMenuItem:(id)arg1;
- (void)makeWindowControllers;
- (void)documentIdleCallHandler:(id)arg1;
- (void)documentPlugInNumVoicesChangedHandler:(id)arg1;
- (void)documentRecordingModeChangeHandler:(id)arg1;
- (void)documentMetronomeModeChangedHandler:(id)arg1;
- (void)documentCountInModeChangedHandler:(id)arg1;
- (void)documentChangedByGBHandler:(id)arg1;
- (BOOL)has24BitAudioFiles;
- (BOOL)duckingScenarioEnabled;
- (void)setSupressProgressOnLoad:(BOOL)arg1;
- (BOOL)supressProgressOnLoad;
- (void)setForcePreview:(BOOL)arg1;
- (BOOL)forcePreview;
- (id)importOriginalPath;
- (void)setImportOriginalPath:(id)arg1;
- (id)imageFullPath;
- (id)movieCacheThumbnailsPath;
- (void)setMovieFullPath:(id)arg1;
- (id)movieFullPath;
- (BOOL)hasMovie;
- (id)movieFullPathBackup;
- (void)setMovieFullPathBackup:(id)arg1;
- (double)songEndTime;
- (BOOL)isDirty;
- (void)clearDirtyFlag;
- (void)setDirty;
- (void)setInitialSongSettings;
- (void)setImportAsAppleLoop:(BOOL)arg1;
- (BOOL)importAsAppleLoop;
- (BOOL)willPostNotifications;
- (id)mainWindowController;
- (BOOL)activateDocument;
- (struct LGDOCUMENT *)logicDocument;
- (id)logicModelDelegate;
- (void)_setLogicModel:(id)arg1;
@property(readonly, nonatomic) DfGenInstModel *genInstModel;
- (void)_setArrangeModel:(id)arg1;
- (int)loadedCbDocumentVersion;
- (int)loadedDfDocumentVersion;
- (void)postDocumentNotificationIfEnabledWithName:(id)arg1;
- (void)postDocumentNotificationIfEnabledWithName:(id)arg1 userInfo:(id)arg2;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (void)close;
- (void)dealloc;
- (BOOL)newDocumentCreated:(BOOL)arg1;
- (BOOL)newDocumentCreated;
- (id)init;
- (id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;
- (id)createPlugInViewDataSourceWithIndex:(int)arg1 andSlot:(long long)arg2 ofType:(int)arg3 usingInputObject:(BOOL)arg4;
- (id)poolOfPlugInFlyweights;
- (id)poolOfChannelFlyweights;
- (BOOL)saveSamplerFilesWithInstID:(int)arg1 withExsName:(id)arg2 atInstrumentPath:(id)arg3 andSamplerFilesPath:(id)arg4;
- (BOOL)setPlugInParameterWithInstID:(int)arg1 andSlot:(long long)arg2 isMidiPlugin:(BOOL)arg3 andParameterIndex:(long long)arg4 inOutParameter:(struct _LGPluginParameter *)arg5 useInputObject:(BOOL)arg6;
- (BOOL)getPlugInParameterWithInstID:(int)arg1 andSlot:(long long)arg2 isMidiPlugin:(BOOL)arg3 andParameterIndex:(long long)arg4 inOutParameter:(struct _LGPluginParameter *)arg5 useInputObject:(BOOL)arg6;
- (long long)numberOfPlugInsWithInstID:(int)arg1 andSlot:(long long)arg2;
- (long long)numberOfSlotsWithInstID:(int)arg1;
- (int)channelTypeWithInstID:(int)arg1;
- (BOOL)destroyPlugInEditorWithInstID:(int)arg1 andSlot:(long long)arg2 withPage:(int)arg3;
- (id)plugInEditorViewForInstID:(int)arg1 forSlot:(long long)arg2 withPage:(int)arg3;
- (id)plugInEditorViewControllerForInstID:(int)arg1 forSlot:(long long)arg2 withPage:(int)arg3;
- (int)controlParamForGinstId:(int)arg1 andControlParamId:(int)arg2;
- (BOOL)setControlParam:(int)arg1 ForGinstId:(int)arg2 andControlParamId:(int)arg3;
- (int)controlSlotForGinstId:(int)arg1 andControlSlotId:(int)arg2;
- (BOOL)setControlSlot:(int)arg1 ForGinstId:(int)arg2 andControlSlotId:(int)arg3;
- (void)convertLoopsOfRegionsToRealRegionsSE;
- (void)songSectionSetLengthWithMarker:(id)arg1 newLength:(long long)arg2 makeUndo:(BOOL)arg3;
- (void)songPartMoveWithMarker:(id)arg1 toClock:(long long)arg2 duplicate:(BOOL)arg3 duplicatedMarkerName:(id)arg4 makeUndo:(BOOL)arg5;
- (void)songPartDeleteWithMarker:(id)arg1 makeUndo:(BOOL)arg2 updateActiveSongPartsIfNecessary:(BOOL)arg3;
- (void)deleteRegionTransfer:(void ***)arg1 stopPreview:(BOOL)arg2;
- (void **)createRegionTransferForRegion:(id)arg1;
- (void)switchLiveMode:(BOOL)arg1 forTrackWithInstID:(int)arg2;
- (BOOL)liveModeIsEnabledForTrackWithInstID:(int)arg1;
- (void)enableLiveModeForTrackWithInstID:(int)arg1;
- (BOOL)setMidiChannel:(int)arg1 channel:(long long)arg2;
- (BOOL)setChaseNotes:(int)arg1 value:(BOOL)arg2;
- (BOOL)chaseNotes:(int)arg1;
- (BOOL)setCanTranspose:(int)arg1 value:(BOOL)arg2;
- (BOOL)canTranspose:(int)arg1;
- (long long)didParameterChange:(int)arg1 outVal:(long long *)arg2;
- (int)getTrackIconID:(int)arg1;
- (BOOL)setTrackIconID:(int)arg1 newID:(int)arg2;
- (long long)inputIndexWithInstID:(int)arg1;
- (BOOL)setInputIndex:(long long)arg1 withInstID:(int)arg2;
- (void)convertPluginsToStereoWithInstID:(int)arg1;
- (long long)numChannelsWithInstID:(int)arg1;
- (BOOL)getChannelRouting:(int)arg1 outChannelIndex:(long long *)arg2 outType:(int *)arg3;
- (BOOL)setChannelRouting:(int)arg1 toChannelIndex:(long long)arg2 ofType:(int)arg3;
- (BOOL)setChannelInputRouting:(int)arg1 toChannelIndex:(long long)arg2 ofType:(int)arg3;
- (BOOL)setMuteSend2:(int)arg1 setFlag:(BOOL)arg2;
- (BOOL)setMuteSend1:(int)arg1 setFlag:(BOOL)arg2;
- (BOOL)setSend2:(int)arg1 setFloatValue:(float)arg2;
- (BOOL)setSend1:(int)arg1 setFloatValue:(float)arg2;
- (BOOL)setPanSigned64:(int)arg1 value:(int)arg2;
- (BOOL)setPan:(int)arg1 value:(float)arg2;
- (BOOL)setVolume:(int)arg1 value:(float)arg2;
- (float)getInputLevelmeter2:(int)arg1;
- (float)getInputLevelmeter:(int)arg1;
- (float)getLevelmeter2:(int)arg1;
- (float)getLevelmeter:(int)arg1;
- (float)getCpuLoad:(int)arg1;
- (BOOL)isMuteSend2:(int)arg1;
- (BOOL)isMuteSend1:(int)arg1;
- (float)getSend2:(int)arg1;
- (float)getSend1:(int)arg1;
- (int)getPanSigned64:(int)arg1;
- (float)getPan:(int)arg1;
- (float)getVolume:(int)arg1;
- (BOOL)setFreeze:(int)arg1 activate:(BOOL)arg2;
- (BOOL)setFreezeBypass:(int)arg1 activate:(BOOL)arg2;
- (long long)isFreezed:(int)arg1;
- (BOOL)setInpMonitor:(BOOL)arg1 withInstID:(int)arg2;
- (BOOL)isInpMonitorWithInstID:(int)arg1;
- (BOOL)setTrackRecordEnable:(CDStruct_3d4e291e)arg1 value:(BOOL)arg2;
- (BOOL)setSolo:(int)arg1 value:(BOOL)arg2;
- (BOOL)setMute:(int)arg1 value:(BOOL)arg2;
- (BOOL)isTrackRecordEnable:(CDStruct_3d4e291e)arg1;
- (BOOL)isSolo:(int)arg1;
- (BOOL)isMute:(int)arg1;
- (BOOL)midiQueueGetEvent:(CDStruct_a06f635e *)arg1 from:(int)arg2;
- (BOOL)midiQueueGetEvent:(CDStruct_a06f635e *)arg1;
- (void)midiQueueReset;
- (void)sendNoteOff:(int)arg1 toInst:(int)arg2 mb3:(unsigned char)arg3;
- (void)sendNoteOn:(int)arg1 toInst:(int)arg2 velocity:(unsigned char)arg3 mb3:(unsigned char)arg4;
- (void)sendNoteOn:(int)arg1 toInst:(int)arg2 velocity:(unsigned char)arg3 mb3:(unsigned char)arg4 eventSource:(int)arg5 eventTimestamp:(unsigned long long)arg6;
- (void)sendNoteOn:(int)arg1 toInst:(int)arg2 velocity:(unsigned char)arg3 mb3:(unsigned char)arg4 eventSource:(int)arg5;
- (void)sendMidiEventToCurrentTrackWithMb0:(unsigned char)arg1 mb1:(unsigned char)arg2 mb2:(unsigned char)arg3 mb3:(unsigned char)arg4;
- (void)sendMidiEventToGInst:(int)arg1 mb0:(unsigned char)arg2 mb1:(unsigned char)arg3 mb2:(unsigned char)arg4 mb3:(unsigned char)arg5;
- (void)sendMidiEventToGInst:(int)arg1 mb0:(unsigned char)arg2 mb1:(unsigned char)arg3 mb2:(unsigned char)arg4 mb3:(unsigned char)arg5 timestamp:(unsigned long long)arg6;
- (void)sendMidiEventToGInst:(int)arg1 mb0:(unsigned char)arg2 mb1:(unsigned char)arg3 mb2:(unsigned char)arg4 mb3:(unsigned char)arg5 eventSource:(int)arg6 timestamp:(unsigned long long)arg7;
- (void)moveAutomationDataSEWithFolderID:(int)arg1 clockDiff:(long long)arg2 trackDiff:(long long)arg3 copy:(BOOL)arg4;
- (void)createEventWithFolderID:(int)arg1 clock:(long long)arg2 length:(long long)arg3 mb0:(unsigned char)arg4 mb1:(unsigned char)arg5 mb2:(unsigned char)arg6 mb3:(unsigned char)arg7 makeUndo:(BOOL)arg8 undoStepName:(id)arg9;
- (void)createEventWithFolderID:(int)arg1 clock:(long long)arg2 length:(long long)arg3 mb0:(unsigned char)arg4 mb1:(unsigned char)arg5 mb2:(unsigned char)arg6 mb3:(unsigned char)arg7 makeUndo:(BOOL)arg8;
- (void)removeRegionOverlaps:(int)arg1 selectedWins:(BOOL)arg2;
- (void)setObjectSolo:(BOOL)arg1;
- (void)loopAutomaticSE:(int)arg1 value:(BOOL)arg2;
- (long long)pasteSEToSeq:(int)arg1 atClock:(long long)arg2 onTrack:(CDStruct_3d4e291e)arg3 makeUndo:(BOOL)arg4 quantizePlayHead:(BOOL)arg5 allowLogicSongEndChanges:(BOOL)arg6 adjustMainSequencerSPL:(BOOL)arg7;
- (void)pasteSEToSeq:(int)arg1 atClock:(long long)arg2 onTrack:(CDStruct_3d4e291e)arg3 makeUndo:(BOOL)arg4 quantizePlayHead:(BOOL)arg5 allowLogicSongEndChanges:(BOOL)arg6;
- (void)copySEInGrid:(int)arg1;
- (void)copySEInSeq:(int)arg1;
- (void)cutSEInSeq:(int)arg1 makeUndo:(BOOL)arg2;
- (void)followTempoSE:(int)arg1 value:(long long)arg2 makeUndo:(BOOL)arg3;
- (void)quantizeSE:(int)arg1 quantizeType:(int)arg2 makeUndo:(BOOL)arg3;
- (void)quantizeRegion:(id)arg1 quantizeType:(int)arg2 editParam:(int)arg3 makeUndo:(BOOL)arg4;
- (void)transposeSE:(int)arg1 valueDiff:(long long)arg2 makeUndo:(BOOL)arg3;
- (void)glueSE:(int)arg1 makeUndo:(BOOL)arg2;
- (void)changeMB2SE:(int)arg1 valueDiff:(long long)arg2 makeUndo:(BOOL)arg3;
- (void)changeMB1SE:(int)arg1 valueDiff:(long long)arg2 makeUndo:(BOOL)arg3;
- (void)divideSE:(int)arg1 clock:(long long)arg2 makeUndo:(BOOL)arg3 divideSelectionFlag:(int)arg4;
- (void)divideSE:(int)arg1 clock:(long long)arg2 makeUndo:(BOOL)arg3;
- (void)deleteSE:(int)arg1 makeUndo:(BOOL)arg2;
- (void)moveSE:(int)arg1 clockDiff:(long long)arg2 makeUndo:(BOOL)arg3;
- (void)changeLoopEndSE:(int)arg1 clockDiff:(long long)arg2 makeUndo:(BOOL)arg3;
- (void)changeStartClockSE:(int)arg1 clockDiff:(long long)arg2 makeUndo:(BOOL)arg3;
- (void)changeEndClockSE:(int)arg1 clockDiff:(long long)arg2 makeUndo:(BOOL)arg3;
- (void)changeTrackSE:(int)arg1 trackDiff:(long long)arg2 makeUndo:(BOOL)arg3;
- (void)iterateEventsWithTarget:(id)arg1 selector:(SEL)arg2 regionID:(CDStruct_ae571156)arg3 pUser:(void *)arg4 pData:(void *)arg5;
- (void)iterateEventsOfRegion:(id)arg1 withEventType:(unsigned long long)arg2 filter:(struct _LgEventFilter *)arg3 target:(id)arg4 selector:(SEL)arg5 pUser:(void *)arg6 pData:(void *)arg7;
- (void)iterateEventsOfRegion:(id)arg1 target:(id)arg2 selector:(SEL)arg3 pUser:(void *)arg4 pData:(void *)arg5;
- (void)iterateNoteEventsOfRegion:(id)arg1 target:(id)arg2 selector:(SEL)arg3 pUser:(void *)arg4 pData:(void *)arg5;
- (void)iterateNoteEventsWithTarget:(id)arg1 selector:(SEL)arg2 regionID:(CDStruct_ae571156)arg3 pUser:(void *)arg4 pData:(void *)arg5;
- (BOOL)findRegionInFolder:(int)arg1 withRegionID:(CDStruct_ae571156)arg2 outRegion:(struct _LgRegion *)arg3;
- (BOOL)findRegionWithID:(CDStruct_ae571156)arg1 outRegion:(struct _LgRegion *)arg2;
- (void)deleteRegionHandle:(struct _LgRegion *)arg1;
- (struct _LgRegion *)createRegionHandle;
- (void)suppressLoadAudioToRam:(BOOL)arg1;
- (void)_setIsFreezing:(BOOL)arg1;
- (BOOL)isFreezing;
- (void)checkForLoopFamilies;
- (void)doLoopAuthoring:(id)arg1 parameter:(struct _LGLOOPAUTHORING *)arg2 realName:(id)arg3;
- (int)exportSelectedRegionAsAppleLoopFileAtPath:(id)arg1 withAuthoringParameters:(struct _LGLOOPAUTHORING *)arg2;
- (void)setRecordingMode:(int)arg1;
- (void)setDataFormatWithResolution:(long long)arg1 sampleRate:(long long)arg2;
- (void)setCountIn:(BOOL)arg1;
- (void)setMetronomModeForPlay:(BOOL)arg1 andRecord:(BOOL)arg2;
- (void)midiReset;
- (float)getCPULoad;
- (float)getGridLowLatencyCPULoad;
- (float)getAutoFreezeCPULoad;
- (int)doBounceToFile:(id)arg1 startClock:(long long)arg2 endClock:(long long)arg3 addEffectTail:(BOOL)arg4 useNormalizer:(BOOL)arg5 useLimiter:(BOOL)arg6 format:(int)arg7 useCurrentSongSampleRate:(BOOL)arg8 createFades:(id)arg9 aacMetaData:(id)arg10 outNormalizeCompensatedVolume:(float *)arg11 aacSilenceFramesAtStart:(unsigned long long)arg12;
- (void)setSignature:(CDStruct_e28e794b)arg1 makeUndo:(BOOL)arg2;
- (CDStruct_e28e794b)signatureAtClock:(long long)arg1;
- (CDStruct_e28e794b)signature;
- (void)checkStretchOwnRecordings;
- (void)clearTempoCurve;
- (void)afterTempoChange;
- (void)beforeTempoChangeWithUndo:(BOOL)arg1;
- (void)beforeTempoChange;
- (void)setFirstTempo:(long long)arg1;
- (long long)tempoForClock:(long long)arg1;
- (long long)firstTempo;
- (BOOL)convertAudioFilesToCafWithEncryption:(BOOL)arg1;
- (BOOL)exchangeAudioFileWithPath:(id)arg1 newPath:(id)arg2;
- (BOOL)compressAudioFileWithID:(long long)arg1 newPath:(id)arg2;
- (void)setAudioFileUserString:(long long)arg1 path:(id)arg2;
- (long long)sampleToClockDiffAtClock:(long long)arg1:(long long)arg2;
- (BOOL)getAudioFileInfo:(id)arg1:(struct DfAudioFileInfo_s *)arg2;
- (BOOL)getAudioFileHandle:(long long)arg1 outHandle:(void **)arg2;
- (struct CGPath *)createLinearOverviewPathForAudioFile:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 size:(struct CGSize)arg4;
- (struct CGPath *)createReshapedOverviewPathForAudioFile:(long long)arg1 startTime:(double)arg2 endTime:(double)arg3 size:(struct CGSize)arg4 reshapingFunction:(CDUnknownFunctionPointerType)arg5;
- (BOOL)getAudioFileUserString:(long long)arg1 path:(id)arg2;
- (long long)getAudioFileAnnotation:(id)arg1 toBuffer:(void *)arg2 ofSize:(long long)arg3;
- (long long)getAudioFileChannelStrip:(id)arg1 pData:(void *)arg2 size:(long long)arg3;
- (long long)getAudioFileMidiChunk:(id)arg1 pData:(void *)arg2 size:(long long)arg3 outBeatCount:(long long *)arg4 outKey:(long long *)arg5;
- (void)checkSoundFxCanTransposeFlag;
- (void)checkMediaTrack;
- (void)checkMasterTrack;
- (void)setupTracks;
- (void)_deleteTrackWithTrackID:(CDStruct_3d4e291e)arg1 makeUndo:(BOOL)arg2;
- (CDStruct_3d4e291e)_createTrackWithFolderID:(int)arg1 andTrackIndex:(long long)arg2 andType:(int)arg3 andChannels:(long long)arg4 makeUndo:(BOOL)arg5;
- (BOOL)createTrackPossible:(int)arg1 showAlert:(BOOL)arg2;
- (BOOL)dropFileToArrange:(id)arg1 onTrackWithID:(CDStruct_3d4e291e)arg2 atClock:(long long)arg3 sourcePath:(id)arg4 properties:(id)arg5 preventLoadInstrument:(BOOL)arg6 trackName:(id)arg7 iconID:(id)arg8 overWriteTrackNameAndIconID:(BOOL)arg9;
- (BOOL)dropFileToArrange:(id)arg1 onTrackWithID:(CDStruct_3d4e291e)arg2 atClock:(long long)arg3 sourcePath:(id)arg4 properties:(id)arg5 preventLoadInstrument:(BOOL)arg6 trackName:(id)arg7;
- (BOOL)dropFileToArrange:(id)arg1 onTrackWithID:(CDStruct_3d4e291e)arg2 atClock:(long long)arg3 sourcePath:(id)arg4 properties:(id)arg5 trackName:(id)arg6;
- (BOOL)dropFileToArrange:(id)arg1 onTrackWithID:(CDStruct_3d4e291e)arg2 atClock:(long long)arg3 trackName:(id)arg4;
- (BOOL)addAudioFile:(id)arg1 onTrackWithID:(CDStruct_3d4e291e)arg2 atClock:(long long)arg3 properties:(id)arg4 ignoreActiveSongParts:(BOOL)arg5;
- (id)projectNameFromAudioFile:(id)arg1;
- (id)fullPathForProjectName:(id)arg1;
- (id)addComponents:(id)arg1 toPathes:(id)arg2;
- (BOOL)addMidiFile:(id)arg1 onTrackWithID:(CDStruct_3d4e291e)arg2 atClock:(long long)arg3 beatCount:(long long)arg4 key:(long long)arg5 isMidiFile:(BOOL)arg6 properties:(id)arg7;
- (void)setupSelectedRegionWithPath:(id)arg1 andProperties:(id)arg2;
- (BOOL)isAACFileProteced:(id)arg1;
- (void)selectAllEvents:(BOOL)arg1 inSeq:(int)arg2;
- (int)rootFolderID;
- (void)createUndoStepForAddTrackAndInstInFolder:(int)arg1 withString:(id)arg2;
- (void)createUndoStepForMultipleTrackDeletionWithString:(id)arg1 ginstIDs:(id)arg2;
- (void)createUndoStepForTrackReorderingWithString:(id)arg1;
- (void)createUndoStepForCSTChangeWithString:(id)arg1 includeSelectedRegions:(BOOL)arg2 ginstID:(int)arg3;
- (void)createUndoStepForMarkerWithString:(id)arg1;
- (void)createUndoStepForArrangeAndMarkerWithString:(id)arg1;
- (void)createUndoStepForArrangeAndAutomationWithString:(id)arg1;
- (void)createUndoStepWithPointerGroup:(int)arg1 andSeqID:(long long)arg2 withString:(id)arg3;
- (void)createUndoStepForSelEvents_Tempo_Sign_WithString:(id)arg1;
- (void)createUndoStepForTempoWithString:(id)arg1;
- (void)createUndoStepForTransposeWithString:(id)arg1;
- (void)createUndoStepForPasteOnNewTracks:(int)arg1 withString:(id)arg2;
- (void)createUndoStepForClipFull:(int)arg1 withString:(id)arg2;
- (void)createUndoStepForClipProperties:(int)arg1 withString:(id)arg2;
- (void)createUndoStepForGridFull:(int)arg1 withString:(id)arg2;
- (void)createUndoStepForGrid:(int)arg1 withString:(id)arg2;
- (void)createUndoStepForGenInstCharacterChangeWithString:(id)arg1;
- (void)createUndoStep:(int)arg1 withString:(id)arg2;
- (void)clearUndoHistory;
- (void)clearUndoHistoryDeferredIfNecessary;
- (void)recoverUndoStackFromLogic;
- (void)clearCurrentRecordingSeq;
- (BOOL)currentRecordingSeqContainsBufferedNoteEvents;
- (BOOL)_recoveringUndoStackFromLogic;
- (BOOL)isUndoing;
- (void)undo:(BOOL)arg1;
- (void)_addObjCUndoStepWithName:(id)arg1;
- (void)endUndoGroupWithUndoStepName:(id)arg1;
- (void)beginUndoGroup;
- (BOOL)hasAutomationForGinstID:(int)arg1 withGenCtrl:(CDStruct_5115be14)arg2;
- (void)copyAutomationFromTrackWithID:(CDStruct_3d4e291e)arg1 toTrackWithID:(CDStruct_3d4e291e)arg2;
- (void)moveTrackWithID:(CDStruct_3d4e291e)arg1 toTrackID:(CDStruct_3d4e291e)arg2 makeUndo:(BOOL)arg3;
- (unsigned int)numTracksInFolderWithID:(int)arg1;
- (long long)countTracksOfType:(int)arg1 inFolderWithID:(int)arg2;
- (int)_countTracksCallBack:(struct _LgSongIterator *)arg1:(const struct _LgTrack *)arg2;
- (int)getChannelTypeWithHandle:(const struct _LgTrack *)arg1;
- (BOOL)findTrackWithHandle:(struct _LgTrack *)arg1 trackID:(CDStruct_3d4e291e)arg2;
- (void)deleteTrackHandle:(struct _LgTrack *)arg1;
- (struct _LgTrack *)createTrackHandle;
- (BOOL)isTrackSelectedWithHandle:(const struct _LgTrack *)arg1;
- (void)deselectAllEventsWithHandle:(const struct _LgTrack *)arg1;
- (void)deselectAllEventsWithID:(CDStruct_3d4e291e)arg1;
- (int)metronomeGInstID;
- (int)getGInstIDWithType:(int)arg1 atIndex:(long long)arg2;
- (int)getGInstIDWithID:(CDStruct_3d4e291e)arg1;
- (int)getGInstIDWithHandle:(const struct _LgTrack *)arg1;
- (CDStruct_3d4e291e)getTrackIDInFolderWithID:(int)arg1 withGInstID:(int)arg2;
- (CDStruct_3d4e291e)getTrackIDWithHandle:(const struct _LgTrack *)arg1;
- (BOOL)getControllerGroupWithHandle:(const struct _LgTrack *)arg1;
- (id)getTrackNameWithHandle:(const struct _LgTrack *)arg1;
- (void)setTrackNameWithHandle:(const struct _LgTrack *)arg1 newName:(id)arg2;
- (id)getTrackNameWithID:(CDStruct_3d4e291e)arg1;
- (void)setTrackNameWithID:(CDStruct_3d4e291e)arg1 newName:(id)arg2;
- (void)_closeAlertSheet:(id)arg1 wasPresentedWithResult:(int)arg2 inContext:(id)arg3;
- (void)duplicateSelectedMarkerAt:(long long)arg1 makeUndo:(BOOL)arg2;
- (void)deleteSelectedMarkerMakeUndo:(BOOL)arg1;
- (void)pasteSelectedMarkerAt:(long long)arg1 makeUndo:(BOOL)arg2;
- (void)copySelectedMarkerMakeUndo:(BOOL)arg1;
- (void)cutSelectedMarkerMakeUndo:(BOOL)arg1;
- (void)glueSelectedMarkerMakeUndo:(BOOL)arg1;
- (void)divideSelectedMarkerAt:(long long)arg1 makeUndo:(BOOL)arg2;
- (void)deleteMarker:(id)arg1 makeUndo:(BOOL)arg2;
- (void)setStartClockOfMarker:(id)arg1 byClock:(long long)arg2 makeUndo:(BOOL)arg3;
- (void)setEndClockOfMarker:(id)arg1 byClock:(long long)arg2 makeUndo:(BOOL)arg3;
- (void)setPositionOfMarker:(id)arg1 byClock:(long long)arg2 makeUndo:(BOOL)arg3;
- (void)setPositionOfSelectedMarker:(long long)arg1 makeUndo:(BOOL)arg2;
- (void)setEndClockOfSelectedMarker:(long long)arg1 makeUndo:(BOOL)arg2;
- (void)setStartClockOfSelectedMarker:(long long)arg1 makeUndo:(BOOL)arg2;
- (void)iterateMarkersOfSongWithTarget:(id)arg1 selector:(SEL)arg2 pUser:(void *)arg3 pData:(void *)arg4;
- (BOOL)findMarkerWithID:(int)arg1 markerOut:(struct _LgMarker *)arg2;
- (struct _LgMarker *)createMarkerAt:(long long)arg1 EndClock:(long long)arg2 Name:(id)arg3 MakeUndo:(BOOL)arg4;
- (void)sortMarker;
- (void)deleteMarkerHandle:(struct _LgMarker *)arg1;
- (struct _LgMarker *)createMarkerHandle;
- (void)_clearDocumentCachesIfUUIDsOutOfSyncForDocumentAtPath:(id)arg1;
- (void)exchangeEHTPlugWithFlexTimeQuantization;
- (long long)_checkExternalAudioFileReferencesForProjectPath:(id)arg1 sourcePath:(id)arg2;
- (long long)copyExternalAudioFilesToProjectBundleIfNeededWithAudioFilesSourcePath:(id)arg1;
- (void)_restoreSvnDirectories:(id)arg1 forURL:(id)arg2;
- (id)_backupSvnDirectoriesForURL:(id)arg1;
- (void)_fixCStringMarkerNames;
- (void)removeUnusedTrackIconImages;
- (void)removeUnusedAudioFiles;
- (void)_removeUnusedAudioFilesForProjectPath:(id)arg1;
- (void)_removeUnusedThumbnailsForProjectPath:(id)arg1;
- (void)_removeUnusedMediaImageFilesForProjectPath:(id)arg1;
- (void)_removeUnusedFreezeFilesForProjectPath:(id)arg1;
- (void)_compressAudioFilesForProjectPath:(id)arg1;
- (void)_doArchivingMovieForProjectPath:(id)arg1;
- (id)_writeScreenshotToPath:(id)arg1 ofType:(id)arg2;
- (void)_writeAdditionalMetaDataToPath:(id)arg1 ofType:(id)arg2;
- (void)_copyOrArchiveAudioFilesFromPath:(id)arg1 toPath:(id)arg2;
- (void)_copyMediaFolderFromPath:(id)arg1 toPath:(id)arg2;
- (BOOL)_doSaveAsToURL:(id)arg1 ofType:(id)arg2 originalContentsURL:(id)arg3 error:(id *)arg4;
- (BOOL)_doSaveToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)_isFile:(id)arg1 inMediaFolderOrAppleLoopLibraryOfProject:(id)arg2;
- (void)checkExternalAudioFileReferencesOnSaveNotificationHandler:(id)arg1;
- (void)checkExternalAudioFileReferencesOnLoadNotificationHandler:(id)arg1;
- (void)saveIfLastSaveOlderThan:(double)arg1 ignoreScreenshot:(BOOL)arg2;
- (void)setSongScreenShotForNextSavingAction:(id)arg1;
- (BOOL)saveMagicMentorShadowCopyToURL:(id)arg1 originalContentsURL:(id)arg2 error:(id *)arg3;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (void)saveDocument:(id)arg1;
- (BOOL)compressFiles;
- (void)setCompressFiles:(BOOL)arg1;
- (BOOL)saveAsArchive;
- (void)setSaveAsArchive:(BOOL)arg1;
- (BOOL)readFromData:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)_checkDocumentSystemAndMachineWithError:(id *)arg1;
- (BOOL)_checkCbDocumentVersion:(int)arg1 error:(id *)arg2;
- (BOOL)_checkDfDocumentVersion:(int)arg1 error:(id *)arg2;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)_loadFile:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)setAllowOpeningOlderSongVersionsWithProblems:(BOOL)arg1;
- (id)getSamplerFileNameForKey:(long long)arg1:(int)arg2;
- (BOOL)setSamplerFileForKey:(long long)arg1:(int)arg2:(long long)arg3:(long long)arg4:(long long)arg5:(BOOL)arg6;
- (BOOL)setSamplerFileNameForKey:(long long)arg1:(int)arg2:(id)arg3;
- (id)currentSamplerInstrumentFromInstID:(int)arg1;
- (BOOL)exportChannelSettingOfChannel:(id)arg1 asPatchToURL:(id)arg2;
- (BOOL)importPatchFromURL:(id)arg1 toChannel:(id)arg2 withCategoryName:(id)arg3;
- (BOOL)isHalfSapleRateForInstID:(int)arg1;
- (unsigned char)setHalfSampleRate:(BOOL)arg1 forInstID:(int)arg2;
- (unsigned char)setChannelStripName:(int)arg1:(id)arg2;
- (unsigned char)setChannelStripCategory:(int)arg1:(id)arg2;
- (id)getChannelStripDictionaryFromCstData:(id)arg1;
- (long long)getChannelStripInfo:(int)arg1 forData:(id)arg2;
- (int)getChannelStripType:(id)arg1;
- (unsigned char)setChannelStrip:(int)arg1 inData:(id)arg2 inFileName:(id)arg3 inCategory:(id)arg4 usePerformanceMode:(BOOL)arg5;
- (id)channelStripData:(int)arg1 outFileName:(char *)arg2 outCategory:(char *)arg3 cStringLength:(unsigned long long)arg4;
- (void)traceTransientsOfSelectedEvents;
- (void)traceWarpMarkersOfSelectedEvents;
- (void)deQuantizeAndRepairFlexOfRegion:(id)arg1;
- (BOOL)grooveMasterEnabled;
- (void)quantizeTrackWithGrooveTemplate:(id)arg1;
- (void)deleteGrooveTemplate;
- (void)createGrooveTemplateForTrack:(id)arg1;
- (void)deselectAllFlexMarkerOfRegion:(id)arg1;
- (BOOL)hasFlexMarkersOfType:(int)arg1 inRegion:(id)arg2 includingBypassed:(BOOL)arg3;
- (BOOL)hasFlexMarkersOfType:(int)arg1 inTrack:(id)arg2 includingBypassed:(BOOL)arg3;
- (id)flexzoneForMarker:(id)arg1 inRegion:(id)arg2 withMode:(int)arg3;
- (void)finalizeSERegionResizingForFlex;
- (void)finalizeFlexMarkerMovementOfSelectedMarkerInRegion:(id)arg1;
- (void)deleteMarkerAtOffsetClock:(long long)arg1 inRegion:(id)arg2 makeUndo:(BOOL)arg3;
- (void)deleteWarpMarkersOfType:(int)arg1 inTrack:(id)arg2;
- (void)deleteWarpMarkersOfType:(int)arg1 inRegion:(id)arg2;
- (void)moveSelFlexMarker:(id)arg1 inRegion:(id)arg2 toOffsetClock:(long long)arg3;
- (void)findAndSelFlexMarker:(struct _LgEvent *)arg1 inRegion:(id)arg2 atClockOffset:(long long)arg3 inRangeLeftOffsetClock:(long long)arg4 rightOffsetClock:(long long)arg5;
- (void)createAndSelFlexMarker:(struct _LgEvent *)arg1 inRegion:(id)arg2 atClockOffset:(long long)arg3 atTransient:(BOOL)arg4 inRangeLeftBorder:(long long)arg5 rightBorder:(long long)arg6 insertAdjacend:(BOOL)arg7;
- (void)createFlexMarkerAtEndOfAudioRegion:(id)arg1;
- (int)setFlexEditsBypassed:(BOOL)arg1 inRegion:(id)arg2;
- (BOOL)flexModeBypassedStateOfTrack:(id)arg1;
- (int)selectedFlexAudioModeOfChannel:(id)arg1;
- (void)selectFlexAudioMode:(int)arg1 ofChannel:(id)arg2;
- (int)prepareFlexForAllRegionsCheckFT:(BOOL)arg1;
- (int)prepareFlexForAllRegionsOfTrack:(id)arg1 checkFT:(BOOL)arg2;
- (int)prepareFlexForSERegionsCheckFT:(BOOL)arg1;
- (int)prepareFlexInRegion:(id)arg1 checkFT:(BOOL)arg2;
- (int)materialTypeOfRegion:(id)arg1;
- (BOOL)regionHasTransients:(id)arg1;
- (int)createTransientsInAudioRegion:(id)arg1 ForceCreation:(BOOL)arg2;
- (int)createTransientsInAllSelectedAudioRegionsForceCreation:(BOOL)arg1;
- (int)createTransientsInAllAudioRegionsOfTrack:(id)arg1 ForceCreation:(BOOL)arg2;
- (int)createTransientsInAllAudioRegionsForceCreation:(BOOL)arg1;
- (id)projectNotes;
- (void)setProjectNotes:(id)arg1;
- (void)setActivePluginWindowForTrackID:(CDStruct_3d4e291e)arg1 slotClass:(int)arg2;
- (BOOL)hasCopyBufferTrackEvents;
- (BOOL)hasCopyBufferNoteEvents;
- (void)deleteMarkedEvents;
- (long long)getBarQuantize:(int)arg1 clock:(long long)arg2;
- (void)getQuantizeGridInfoForGrooveID:(short)arg1 groove_C_array:(long long *)arg2 arrayCount:(int *)arg3 grooveLength:(long long *)arg4;
- (BOOL)globalKeyChangeTransposesRegions;
- (void)setGlobalKeyChangeTransposesRegions:(BOOL)arg1;
- (void)setGlobalKey:(int)arg1 andMajor:(BOOL)arg2 makeUndo:(BOOL)arg3;
- (void)setMajor:(BOOL)arg1 makeUndo:(BOOL)arg2;
- (id)isMajorAsNoLocalizedString;
- (BOOL)isMajor;
- (id)globalKeyAsNonLocalizedString;
- (int)globalKey;
- (void)setGlobalKey:(int)arg1 makeUndo:(BOOL)arg2;
- (id)tunerStringForMidiNote:(BOOL)arg1;
- (id)tunerStrings;
- (void)_updateTunerStrings;
- (BOOL)isSharp;
- (BOOL)isJoinAllowed:(int)arg1;
- (void)setMarqueeBorderWithLeftClock:(long long)arg1 rightClock:(long long)arg2 topTrackID:(CDStruct_3d4e291e)arg3 bottomTrackID:(CDStruct_3d4e291e)arg4;
- (void)getMarqueeBorderWithOutLeftClock:(long long *)arg1 outRightClock:(long long *)arg2 outTopTrackID:(CDStruct_3d4e291e *)arg3 outBottomTrackID:(CDStruct_3d4e291e *)arg4;
- (BOOL)isMarqueeActive;
- (void)resetMarquee;
- (long long)clockFromMilliSeconds:(double)arg1;
- (double)milliSecondsFromClock:(long long)arg1;
- (long long)clockFromDisplay:(long long)arg1 zoomIndex:(float)arg2;
- (long long)clockToDisplay:(long long)arg1 zoomIndex:(float)arg2;
- (void)setDocumentMasterVolume:(float)arg1;
- (float)documentMasterVolume;
- (float)getPrelistenVolume;
- (void)setPrelistenVolume:(float)arg1;
- (id)getPreListenAudioFile;
- (BOOL)preListenAudioFile:(id)arg1 changeFileOnly:(BOOL)arg2;
- (BOOL)isPlayingNotRecording;
- (BOOL)isPlayingOrRecording;
- (BOOL)isRewind;
- (BOOL)isForward;
- (BOOL)isRecordingNotCellRecording;
- (BOOL)isCellRecording;
- (BOOL)isRecording;
- (BOOL)isPause;
- (BOOL)isPlaying;
- (void)return2Clock:(long long)arg1;
- (void)return2Zero;
- (void)rewindWithFeedBackAndPosition:(long long)arg1;
- (void)forwardWithFeedBackAndPosition:(long long)arg1;
- (void)fastRewind;
- (void)fastForward;
- (void)rewind;
- (void)forward;
- (void)pause;
- (void)stop;
- (void)_setSyncWaitFlagForUnprimeHackSequencerDidStart;
- (void)_setSyncWaitFlagForStopCallBack;
- (BOOL)_stopIfNeeded:(BOOL)arg1;
- (BOOL)stopIfNeeded;
- (BOOL)stopIfNeededButKeepClipsPlaying;
- (void)syncToClock:(long long)arg1 withAbsoluteDeviceTimeStamp:(unsigned long long)arg2;
- (long long)syncStartAtAbsoulteHostTimeInNanoSec:(unsigned long long)arg1 withTimeOut:(unsigned long long)arg2;
- (void)_setIsPrimedForSyncedTransportMode:(BOOL)arg1;
- (void)_reenableUserInteractionIfNecessary;
- (void)virtualPlayCallback;
- (void)playCallback;
- (void)playWithVirtualCountIn:(BOOL)arg1;
- (void)play;
- (void)playFromLastStartClock;
- (void)virtualRecordCallback;
- (void)recordCallback;
- (void)stopCellRecordingAndPlayClipAfterwards:(BOOL)arg1;
- (void)startCellRecordingForActiveArrangeClip;
- (void)recordWithVirtualCountIn:(BOOL)arg1;
- (void)record;
- (void)handleVirtualCountInCancel;
- (void)cancelVirtualCountIn:(int)arg1;
- (BOOL)virtualCountInWasCancelled;
- (BOOL)isVirtualCountInRunning;
- (void)setVirtualCountInTempo:(int)arg1;
- (int)virtualCountInTempo;
- (long long)getBufferedSPL;
- (long long)getSPL;
- (long long)rawSPL;
- (void)_setBufferedSPL:(long long)arg1;
- (void)updateBufferedSPL;
- (void)setCellRecordingSPL:(long long)arg1;
- (void)_setBufferedCellRecSPL:(long long)arg1;
- (void)updateBufferedCellRecSPL;
- (long long)bufferedCellRecSPL;
- (long long)rawCellRecSPL;
- (long long)fourQuarterBarLength;
- (long long)barLength;
- (long long)startOffset;
- (void)setSongEndClock:(long long)arg1 postNotification:(BOOL)arg2;
- (long long)songEndClock;
- (long long)songStartClock;
- (void)setPosition:(long long)arg1;
- (long long)clampSongClock:(long long)arg1;
- (long long)clampClock:(long long)arg1;
- (long long)maxClock;
- (long long)maxSongLengthInBars;
- (long long)minClock;
- (void)reviseCycle;
- (void)setRightCycle:(long long)arg1;
- (void)setLeftCycle:(long long)arg1;
- (long long)getRightCycle;
- (long long)getLeftCycle;
- (BOOL)isCycleEnabled;
- (void)enableCycle:(BOOL)arg1;
- (void)iterateRegionsOfFolderWithID:(int)arg1 withTarget:(id)arg2 selector:(SEL)arg3 pUser:(void *)arg4 pData:(void *)arg5;
- (void)iterateTracksOfFolderWithID:(int)arg1 withTarget:(id)arg2 selector:(SEL)arg3 pUser:(void *)arg4 pData:(void *)arg5;
- (void)deleteAllSuperfluousAutomationNodes;
- (void)makeAutomationBorderNodesForTrack:(id)arg1 startClock:(long long)arg2 endClock:(long long)arg3;
- (void)makeTempoAutomationBorderNodesAtStartClock:(long long)arg1 endClock:(long long)arg2;
- (void)makeChordAutomationBorderNodesAtStartClock:(long long)arg1 endClock:(long long)arg2;
- (CDStruct_5115be14)automationController:(CDStruct_3d4e291e)arg1;
- (void)setAutomationController:(CDStruct_3d4e291e)arg1 controller:(CDStruct_5115be14)arg2;
- (int)automationModeForGInstID:(int)arg1;
- (void)setAutomationMode:(int)arg1 forGinstID:(int)arg2;
- (int)transposeAutomationMode;
- (void)setTransposeAutomationMode:(int)arg1;
- (int)tempoAutomationMode;
- (void)setTempoAutomationMode:(int)arg1;
- (void)removeAutomationData:(struct _LgEventFilter *)arg1 ofTrack:(id)arg2;
- (void)addAutomationData:(struct _LgEventFilter *)arg1 ofTrack:(id)arg2 atClock:(long long)arg3 andValue:(long long)arg4;
- (void)documentAudioDriverChangedHandler:(id)arg1;

@end

