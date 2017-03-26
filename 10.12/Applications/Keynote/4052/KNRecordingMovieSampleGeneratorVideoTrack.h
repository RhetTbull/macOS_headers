//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KNMovieSampleGeneratorTrack-Protocol.h"

@class KNAnimatedOffscreenPlaybackController, KNCALayerMovieSampleGeneratorTrack, KNDocumentRoot, KNMovieTimelineMovieSampleGenerator, KNOffscreenLaserOverlayController, KNRecordingSynchronizedOffscreenEventEnumerator, NSArray, NSError, NSString;

@interface KNRecordingMovieSampleGeneratorVideoTrack : NSObject <KNMovieSampleGeneratorTrack>
{
    KNDocumentRoot *mDocumentRoot;
    struct CGSize mSize;
    CDStruct_1b6d18a9 mVideoFrameDuration;
    KNAnimatedOffscreenPlaybackController *mOffscreenPlaybackController;
    KNOffscreenLaserOverlayController *mLaserOverlayController;
    NSArray *mOffscreenEventPlayers;
    KNRecordingSynchronizedOffscreenEventEnumerator *mEventEnumerator;
    KNCALayerMovieSampleGeneratorTrack *mLayerMovieSampleGeneratorTrack;
    KNMovieTimelineMovieSampleGenerator *mMovieTimelineMovieSampleGenerator;
    CDStruct_1b6d18a9 mLastSampleBufferTime;
    NSError *mError;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=mError;
@property(readonly, nonatomic) struct CGSize mediaSize; // @synthesize mediaSize=mSize;
- (void)cancel;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (void)p_setupMovieSampleGenerator;
@property(readonly, nonatomic) NSString *mediaType;
- (void)dealloc;
- (id)init;
- (id)initWithDocumentRoot:(id)arg1 size:(struct CGSize)arg2 movieTimelineMovieSampleGenerator:(id)arg3 videoFrameDuration:(CDStruct_1b6d18a9)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

