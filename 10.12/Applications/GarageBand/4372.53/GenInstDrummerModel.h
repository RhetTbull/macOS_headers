//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GenInstDrummerLibrary, GenInstDrummer_AsyncGeneratorJobManager, GenInstModelUICoordinator, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GenInstDrummerModel : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    GenInstDrummer_AsyncGeneratorJobManager *_generatorJobManager;
    GenInstDrummerLibrary *_library;
    struct CSong *_song;
    NSMutableDictionary *_drummerModelsForTrackUUID;
    GenInstModelUICoordinator *_modelUICoordinator;
    NSMutableDictionary *_stateCache;
    struct map<std::__1::basic_string<char>, CGenDrumMapBase *, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, CGenDrumMapBase *>>> _drumMapsMap;
    BOOL _autoSelectRegions;
}

+ (BOOL)isDrummerContentAvailable;
+ (unsigned long long)numberOfDrummerTracksInSong:(struct CSong *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGenDrumMapBase *)drumMapForRegion:(const struct CMSeq *)arg1;
- (void)clearDrumMapsMap;
- (void)setupDrumMapsMap;
- (void)forceLoadLibrary;
- (BOOL)clampEventsToRegionStart;
- (id)library;
- (struct CVirtualTrack)legacyDrumTrack;
- (void)purgeUnneededTrackModels;
- (id)UUIDsForAllDrummerTronClips;
- (void)purgeUnneededStyles;
- (id)allDrummerTrackModels;
- (unsigned long long)numberOfDrummerTracks;
- (vector_e94a763c)allDrumTracksInSong;
- (void)setUndoState:(id)arg1;
- (id)undoState;
- (void)setAutoSelectRegions:(BOOL)arg1;
- (BOOL)autoSelectRegions;
- (void)registerLastSelectedGenre:(id)arg1 character:(id)arg2;
- (void)regenerateAllDrummerRegions;
- (void)cancelAllGenerateJobs;
- (BOOL)hasRunningGenerateJobs;
- (void)generateEventsOnTrack:(struct CVirtualTrack)arg1 seedMode:(int)arg2 generateWhat:(int)arg3 forRegions:(const vector_e75b7d21 *)arg4;
- (void)generateEventsOnTrack:(struct CVirtualTrack)arg1 withOption:(int)arg2 seedMode:(int)arg3 generateWhat:(int)arg4;
- (void)generateEventsWithNewSeedsForSelectedRegionsInFolder:(int)arg1;
- (void)prepareGenerateToSpeedUpFirstPlayOnTrack:(struct CVirtualTrack)arg1;
- (void)convertSelectedMidiRegionsToDrummerRegionsInFolder:(int)arg1;
- (void)convertSelectedDrummerRegionsToMidiRegionsInFolder:(int)arg1;
- (void)iterateAllTrackModelsForSelectedRegionsInFolder:(int)arg1 withBlock:(CDUnknownBlockType)arg2 filterPredicate:(CDUnknownBlockType)arg3;
- (void)handleStoreDownloaderNotification:(id)arg1;
- (void)handleTrackTypeChangedFromGenInst:(id)arg1;
- (void)handleTrackTypeChangedToGenInst:(id)arg1;
- (void)removeNotifications;
- (void)addNotifications;
- (void)genInstDrummerTrackModel:(id)arg1 didChangeTrackWithUUID:(id)arg2 toTrackWithUUID:(id)arg3;
- (void)setStateFromStateVersion1:(id)arg1;
- (void)setStateFromLegacyState:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;
- (BOOL)drumTrackExists;
- (BOOL)allowCreationOfAdditionalAnimalTrack;
- (BOOL)allowCreationOfAdditionalAnimalTrackForSong:(struct CSong *)arg1;
- (id)genInstDrummerTrackModelForMSeq:(const struct CMSeq *)arg1;
- (id)genInstDrummerTrackModelForSeqID:(int)arg1;
- (id)genInstDrummerTrackModelForVirtualTrack:(struct CVirtualTrack)arg1;
- (struct CVirtualTrack)virtualTrackForTrack:(const struct CTrack *)arg1;
- (id)modelUICoordinator;
- (id)dispatchQueue;
- (struct CSong *)song;
- (void)detachSong;
- (void)dealloc;
- (void)cleanup;
- (id)initWithSong:(struct CSong *)arg1;
- (id)init;

@end

