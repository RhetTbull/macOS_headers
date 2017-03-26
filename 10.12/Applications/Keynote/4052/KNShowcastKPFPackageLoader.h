//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KNKPFPackageLoader-Protocol.h"
#import "NSURLSessionDownloadDelegate-Protocol.h"

@class KNShowcastKPFAssetMap, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString, NSURLSession, TSUTemporaryDirectory;
@protocol OS_dispatch_queue;

@interface KNShowcastKPFPackageLoader : NSObject <NSURLSessionDownloadDelegate, KNKPFPackageLoader>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSURLSession *_loadingURLSession;
    NSURLSession *_preloadingURLSession;
    NSMutableDictionary *_downloadTasksForAssetPaths;
    NSMapTable *_contextsForDownloadTasks;
    unsigned long long _maxRunningDownloadTaskCount;
    NSMutableSet *_runningDownloadTasks;
    NSMutableOrderedSet *_pendingDownloadTasks;
    NSMutableSet *_failedSegmentIdentifiers;
    NSMutableArray *_pendingAssetRequests;
    TSUTemporaryDirectory *_localCacheDirectory;
    NSMutableDictionary *_URLsForAssetPaths;
    NSMutableDictionary *_loadingPerformanceForAssetPath;
    KNShowcastKPFAssetMap *_assetMap;
}

+ (id)p_segmentIdentifierForAssetPath:(id)arg1;
@property(copy, nonatomic) KNShowcastKPFAssetMap *assetMap; // @synthesize assetMap=_assetMap;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)slideIdentifiersDidFailToBecomeAvailable:(id)arg1;
- (void)assetsDidBecomeAvailable:(id)arg1;
- (void)logAssetLoadingRetryForError:(id)arg1 didRetryPreviously:(BOOL)arg2;
- (id)loadingPerformanceForAssetPath:(id)arg1;
- (void)resetAssetLoadingFallbackTimeoutInterval:(double)arg1 forAssetPath:(id)arg2;
- (void)p_changeAssetLoadingPriority:(long long)arg1 forAssetPath:(id)arg2 downloadTask:(id)arg3;
- (void)changeAssetLoadingPriority:(long long)arg1 forAssetPath:(id)arg2;
- (void)cancelAssetLoadingForAssetPath:(id)arg1;
- (void)p_downloadAssetForRequest:(id)arg1;
- (void)loadAssetForAssetPath:(id)arg1 priority:(long long)arg2 fallbackTimeoutInterval:(double)arg3 isRetry:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)p_mailboxRequestURLForAssetPath:(id)arg1 isRetry:(BOOL)arg2;
- (id)directURLForAssetPath:(id)arg1;
@property(readonly, nonatomic) BOOL supportsDirectURLs;
- (id)URLForAssetPath:(id)arg1;
- (void)close;
- (void)prepareWithQueue:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

