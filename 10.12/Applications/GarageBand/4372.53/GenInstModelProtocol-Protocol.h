//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;
@protocol GenInstDrummer_TrackModelProtocol, GenInstModelUICoordinatorProtocol;

@protocol GenInstModelProtocol <NSObject>
- (void)persistentIO:(struct TPersistentIOPrms *)arg1;
- (void)registerLastSelectedGenre:(NSDictionary *)arg1 character:(NSDictionary *)arg2;
- (BOOL)clampEventsToRegionStart;
- (void)setClampEventsToRegionStart:(BOOL)arg1;
- (struct CGenDrumMapBase *)drumMapForRegion:(const struct CMSeq *)arg1;
- (void)purgeUnneededTrackModels;
- (void)cancelAllGenerateJobs;
- (BOOL)hasRunningGenerateJobs;
- (void)forceLoadLibrary;
- (BOOL)isDrummerContentAvailable;
- (void)setUndoState:(NSDictionary *)arg1;
- (NSDictionary *)undoState;
- (void)generateEventsWithNewSeedsForSelectedRegionsInFolder:(int)arg1;
- (void)prepareGenerateToSpeedUpFirstPlayOnTrack:(struct CVirtualTrack)arg1;
- (void)convertSelectedMidiRegionsToDrummerRegionsInFolder:(int)arg1;
- (void)convertSelectedDrummerRegionsToMidiRegionsInFolder:(int)arg1;
- (vector_e94a763c)allDrumTracksInSong;
- (unsigned long long)numberOfDrummerTracks;
- (BOOL)allowCreationOfAdditionalAnimalTrackForSong:(struct CSong *)arg1;
- (BOOL)drumTrackExists;
- (void)setAutoSelectRegions:(BOOL)arg1;
- (BOOL)autoSelectRegions;
- (id <GenInstDrummer_TrackModelProtocol>)genInstDrummerTrackModelForMSeq:(const struct CMSeq *)arg1;
- (id <GenInstDrummer_TrackModelProtocol>)genInstDrummerTrackModelForSeqID:(int)arg1;
- (id <GenInstDrummer_TrackModelProtocol>)genInstDrummerTrackModelForVirtualTrack:(struct CVirtualTrack)arg1;
- (id <GenInstModelUICoordinatorProtocol>)modelUICoordinator;
- (void)detachSong;
- (struct CSong *)song;
@end

