//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTPlaybackQueueFactory : NSObject
{
}

+ (id)_uuidForEpisode:(id)arg1;
+ (id)_latestOrOldestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(BOOL)arg2 excludeExplicit:(long long)arg3 latest:(BOOL)arg4 ctx:(id)arg5;
+ (id)_oldestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(BOOL)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4;
+ (id)_latestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(BOOL)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4;
+ (id)_episodeToPlayForPodcastUuid:(id)arg1 playbackOrder:(long long)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4;
+ (id)episodeUuidsForPlayStationUuid:(id)arg1 limit:(long long)arg2;
+ (id)episodeUuidsForPlayPodcastUuid:(id)arg1 order:(long long)arg2 limit:(long long)arg3 error:(long long *)arg4;
+ (BOOL)_isContinuousPlaybackEnabledForLimit:(long long)arg1;
+ (id)_manifestForPlayMyOldestPodcasts;
+ (id)_manifestForPlayMyLatestPodcasts;
+ (id)_manifestForPlayMyPodcasts;
+ (id)playEpisodeUuid:(id)arg1 context:(long long)arg2 sortType:(long long)arg3 limit:(long long)arg4 pubDateLimit:(long long)arg5;
+ (id)playEpisodeUuid:(id)arg1 context:(long long)arg2 limit:(long long)arg3;
+ (id)playEpisodeUuid:(id)arg1 limit:(long long)arg2;
+ (id)playEpisodeUuid:(id)arg1 context:(long long)arg2;
+ (id)playEpisodeUuid:(id)arg1;
+ (id)playStationUuid:(id)arg1 episodeUuid:(id)arg2 limit:(long long)arg3;
+ (id)playStationUuid:(id)arg1 limit:(long long)arg2;
+ (id)playStationUuid:(id)arg1 episodeUuid:(id)arg2;
+ (id)playStationUuid:(id)arg1;
+ (id)playPodcastUuid:(id)arg1 order:(long long)arg2 limit:(long long)arg3;
+ (id)playPodcastUuid:(id)arg1 order:(long long)arg2 limit:(long long)arg3 error:(long long *)arg4;
+ (id)playPodcastUuid:(id)arg1 limit:(long long)arg2;
+ (id)playPodcastUuid:(id)arg1 order:(long long)arg2;
+ (id)playPodcastUuid:(id)arg1;
+ (id)playMyPodcastsWithOrder:(long long)arg1;
+ (id)playListenNow;

@end

