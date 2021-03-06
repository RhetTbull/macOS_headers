//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, TSPObjectContext;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, TSPDataDownloadManagerDelegate;

@interface TSPDataDownloadManager : NSObject
{
    TSPObjectContext *_context;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSHashTable *_dataDownloaders;
    NSObject<OS_dispatch_group> *_downloadsGroup;
    NSObject<OS_dispatch_source> *_downloadTimer;
    NSMutableArray *_scheduledItems;
    id <TSPDataDownloadManagerDelegate> _delegate;
}

+ (Class)dataDownloaderClassForScheme:(id)arg1;
+ (void)registerDataDownloaderClassImpl:(Class)arg1 forSchemes:(id)arg2;
+ (void)registerDataDownloaderClass:(Class)arg1 forSchemes:(id)arg2;
+ (void)registerTSPDataDownloaderClassesImpl;
+ (void)registerTSPDataDownloaderClasses;
+ (id)downloaderRegistry;
+ (id)downloaderRegistryQueue;
+ (void)initialize;
@property(nonatomic) __weak id <TSPDataDownloadManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)documentResourceDataWithDigestString:(id)arg1 locator:(id)arg2 filename:(id)arg3;
- (void)downloadScheduledData;
- (void)scheduleDownloadForData:(id)arg1;
- (unsigned long long)downloadTimerIntervalInNanoseconds;
- (void)unscheduleDownloadForData:(id)arg1;
- (void)cancelDownloadTimer;
- (BOOL)shouldRetryDownloadForResponse:(id)arg1 data:(id)arg2;
- (void)retryDownloadUsingDataDownloader:(id)arg1 forData:(id)arg2;
- (void)retryDownloadFromURL:(id)arg1 priority:(long long)arg2 forData:(id)arg3;
- (id)downloadDataFromURL:(id)arg1 filename:(id)arg2 priority:(long long)arg3;
- (id)unmaterializedRemoteData;
- (void)waitForOutstandingRequestsWithTimeout:(double)arg1;
- (void)retryDownloadingMissingData;
- (void)cancelOutstandingRequests;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

