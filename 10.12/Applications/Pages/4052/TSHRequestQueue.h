//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TSHConnectionFactory;

@interface TSHRequestQueue : NSObject
{
    unsigned long long mMaxConcurrentRequestCount;
    TSHConnectionFactory *mConnectionFactory;
    NSMutableArray *mRequestQueue;
    NSMutableArray *mActiveRequests;
}

- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (id)requestForConnection:(id)arg1;
- (void)setConnectionFactory:(id)arg1;
- (unsigned long long)unblockedQueuedRequestCount;
- (BOOL)isInactive;
- (BOOL)isBusy;
- (void)unregisterDelegate:(id)arg1;
- (unsigned long long)maxConcurrentRequestCount;
- (void)setMaxConcurrentRequestCount:(unsigned long long)arg1;
- (void)cancelRequest:(id)arg1;
- (void)startReadyRequests;
- (void)addRequest:(id)arg1 dependsUpon:(id)arg2 delegate:(id)arg3 startRightAway:(BOOL)arg4;
- (void)addRequest:(id)arg1 dependsUpon:(id)arg2 delegate:(id)arg3;
- (void)addRequest:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)dequeueDependantsOf:(id)arg1;
- (id)dependantsOf:(id)arg1;
- (void)doWork;
- (unsigned long long)nextUnblockedQueueEntryIndex;
- (BOOL)isBlocked:(id)arg1;
- (id)entryForConnection:(id)arg1;
- (id)entryForRequest:(id)arg1;

@end

