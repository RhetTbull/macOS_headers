//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDInfoImporter.h"

@class AVAsset, AVAssetImageGenerator, NSError, NSObject, TSDDrawableInfo, TSDMovieCompatibilityChecker, TSDMovieCompatibilityConverter, TSPData, TSUScaledProgress;
@protocol OS_dispatch_queue;

@interface TSDMovieInfoImporter : TSDInfoImporter
{
    NSObject<OS_dispatch_queue> *mImportQueue;
    CDUnknownBlockType mCompletionHandler;
    TSUScaledProgress *mProgress;
    TSPData *mMovieData;
    TSPData *mReadonlyMovieData;
    AVAsset *mAsset;
    TSDMovieCompatibilityChecker *mCompatibilityChecker;
    TSDMovieCompatibilityConverter *mCompatibilityConverter;
    AVAssetImageGenerator *mPosterImageGenerator;
    TSDDrawableInfo *mInfo;
    NSError *mError;
    BOOL mIsCancelled;
    BOOL mDidMessageDelegateAboutMovieCompatibility;
}

+ (id)supportedMovieRemoteURLSchemes;
+ (BOOL)i_canImportFileWithData:(id)arg1 type:(id)arg2;
+ (BOOL)i_canImportFileAtURL:(id)arg1 type:(id)arg2;
+ (id)i_supportedFileTypesForSubclass;
- (id)error;
- (id)info;
- (id)progress;
- (unsigned long long)p_onlyMovieFileDataLength;
- (unsigned long long)dataLength;
- (void)cancel;
- (void)p_finishImportingWithInfo:(id)arg1 error:(id)arg2;
- (void)p_tellMovieCompatibilityProviderToIgnoreCompatibilityLevelIfNeeded;
- (void)p_importInfoFromAnimatedGIF;
- (void)p_importInfoFromAsset;
- (void)p_importInfoFromAssetConvertingIfNeededToRequiredCompatibilityLevel:(long long)arg1 fromCompatibilityLevel:(long long)arg2;
- (void)importInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)p_isURLRemote;
- (void)dealloc;
- (id)initWithContext:(id)arg1 data:(id)arg2 theme:(id)arg3;
- (id)initWithContext:(id)arg1 URL:(id)arg2 theme:(id)arg3;

@end

