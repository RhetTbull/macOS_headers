//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNMovieTimeline.h"

@class NSArray, NSMutableDictionary;

@interface KNMutableMovieTimeline : KNMovieTimeline
{
    double mDuration;
    NSMutableDictionary *mTimeMappingArraysForMovieIdentifiers;
    NSArray *mBackgroundMovieIdentifiers;
    BOOL mLoopsBackgroundMovies;
}

@property(nonatomic) BOOL loopsBackgroundMovies; // @synthesize loopsBackgroundMovies=mLoopsBackgroundMovies;
@property(copy, nonatomic) NSArray *backgroundMovieIdentifiers; // @synthesize backgroundMovieIdentifiers=mBackgroundMovieIdentifiers;
@property(nonatomic) double duration; // @synthesize duration=mDuration;
- (void)addTimeMappingsLoopingMovieFromStartTime:(double)arg1 toEndTime:(double)arg2 untilTimelineTime:(double)arg3 loopBackAndForth:(BOOL)arg4 forMovieIdentifier:(id)arg5;
- (void)addTimeMapping:(id)arg1 forMovieIdentifier:(id)arg2;
- (id)timeMappingsForMovieIdentifier:(id)arg1;
- (id)movieIdentifiers;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDuration:(double)arg1 timeMappingArraysForMovieIdentifiers:(id)arg2 backgroundMovieIdentifiers:(id)arg3 loopsBackgroundMovies:(BOOL)arg4;

@end

