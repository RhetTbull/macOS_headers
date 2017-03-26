//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EPEMedia : NSObject
{
}

+ (BOOL)mapMediaInfo:(id)arg1 toTextContainer:(id)arg2 properties:(id)arg3 state:(id)arg4;
+ (BOOL)mapMediaInfo:(id)arg1 toTextContainer:(id)arg2 style:(id)arg3 state:(id)arg4;
+ (BOOL)mapMediaInfo:(id)arg1 toTextContainer:(id)arg2 style:(id)arg3 properties:(id)arg4 state:(id)arg5;
+ (id)decryptedMediaData:(id)arg1 tempFolderURL:(id)arg2 objectContext:(id)arg3;
+ (id)trimMedia:(id)arg1 mediaInfo:(id)arg2 isAudioOnly:(BOOL)arg3 state:(id)arg4;
+ (id)trimMovieData:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 isAudioOnly:(BOOL)arg4 state:(id)arg5;
+ (id)convertVideoAssetContainerToStoreCompliance:(id)arg1 state:(id)arg2;
+ (id)convertAssetTracksToStoreCompliance:(id)arg1 state:(id)arg2;
+ (BOOL)isStoreCompliantAssetTracks:(id)arg1 state:(id)arg2;
+ (BOOL)hasTrimRange:(id)arg1 state:(id)arg2;
+ (double)movieDuration:(id)arg1 state:(id)arg2;

@end

