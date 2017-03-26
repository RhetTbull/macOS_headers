//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAudioMix, AVPlayer, KNAVPlayerTimebase;
@protocol KNTimebase;

@interface KNRecordingMoviePlayer : NSObject
{
    AVAsset *mAsset;
    AVAudioMix *mAudioMix;
    CDStruct_1b6d18a9 mSavedCurrentTime;
    AVPlayer *mPlayer;
    KNAVPlayerTimebase *mTimebase;
    BOOL mIsPlaying;
    BOOL mIsObservingCurrentItemStatus;
    BOOL mIsObservingRate;
}

@property(readonly, nonatomic) id <KNTimebase> timebase; // @synthesize timebase=mTimebase;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)seekToCurrentTime:(double)arg1;
- (void)pauseAndUnload;
- (void)pause;
- (void)play;
- (void)p_removePlayerObservers;
- (void)p_playbackDidStop;
- (void)p_playIfNeeded;
- (void)p_loadAndPlayIfNeeded;
- (void)dealloc;
- (id)init;
- (id)initWithShow:(id)arg1 soundtrackAssets:(id)arg2;

@end

