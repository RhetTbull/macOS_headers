//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

#import <CloudPhotoLibrary/CPLEngineLibraryAttachedObject-Protocol.h>
#import <CloudPhotoLibrary/CPLEngineLibraryOwner-Protocol.h>
#import <CloudPhotoLibrary/CPLLibraryManagerImplementation-Protocol.h>

@class CPLEngineLibrary, NSCountedSet, NSObject, NSString;
@protocol CPLEngineTransportRampingRequestTask, OS_dispatch_queue;

@interface CPLDirectLibraryManager : CPLPlatformObject <CPLEngineLibraryOwner, CPLLibraryManagerImplementation, CPLEngineLibraryAttachedObject>
{
    BOOL _ownsLibrary;
    BOOL _closing;
    unsigned long long _foregroundCalls;
    unsigned long long _significantWorkCalls;
    NSCountedSet *_disablingReasons;
    unsigned long long _disablingMinglingCount;
    id <CPLEngineTransportRampingRequestTask> _currentRampingRequest;
    CPLEngineLibrary *_engineLibrary;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
- (void).cxx_destruct;
- (void)engineLibrary:(id)arg1 getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)engineLibrary:(id)arg1 getStatusWithCompletionHandler:(CDUnknownBlockType)arg2;
- (id)ownerNameForEngineLibrary:(id)arg1;
- (void)engineLibrary:(id)arg1 noteClientIsInForeground:(BOOL)arg2;
- (void)unblockEngineElementOnce:(id)arg1;
- (void)unblockEngineElement:(id)arg1;
- (void)blockEngineElement:(id)arg1;
- (BOOL)isLibraryManager;
- (id)displayableName;
- (void)addInfoToLog:(id)arg1;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 related:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getCloudCacheForRecordWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getListOfComponentsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetCacheWithOption:(unsigned long long)arg1 reason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, copy) NSString *description;
- (void)engineLibrary:(id)arg1 sizeOfResourcesToUploadDidChangeToSize:(unsigned long long)arg2 sizeOfOriginalResourcesToUpload:(unsigned long long)arg3 numberOfImages:(unsigned long long)arg4 numberOfVideos:(unsigned long long)arg5 numberOfOtherItems:(unsigned long long)arg6;
- (void)engineLibrary:(id)arg1 uploadTask:(id)arg2 didFinishWithError:(id)arg3;
- (void)engineLibrary:(id)arg1 uploadTask:(id)arg2 didProgress:(float)arg3;
- (void)engineLibrary:(id)arg1 didStartUploadTask:(id)arg2;
- (void)engineLibrary:(id)arg1 didFailBackgroundDownloadOfResource:(id)arg2;
- (void)engineLibrary:(id)arg1 didDownloadResourceInBackground:(id)arg2;
- (void)engineLibraryHasStatusChanges:(id)arg1;
- (void)engineLibraryHasChangesInPullQueue:(id)arg1;
- (void)engineLibrary:(id)arg1 didCloseWithError:(id)arg2;
- (void)setDiagnosticsEnabled:(BOOL)arg1;
- (BOOL)diagnosticsEnabled;
- (void)compactFileCacheWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getResourcesForItemWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteResources:(id)arg1 checkServerIfNecessary:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)safeResourcesToDeleteFromProposedResources:(id)arg1 checkServerIfNecessary:(BOOL)arg2 allowUnconfirmed:(BOOL)arg3 resourcesToCheckOnServer:(id *)arg4 unsafeResources:(id)arg5;
- (void)checkServerForResources:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addStatusChangesForRecordsWithIdentifiers:(id)arg1 persist:(BOOL)arg2;
- (void)acknowledgeChangedStatuses:(id)arg1;
- (void)getChangedStatusesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusForRecordsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableMingling;
- (void)disableMingling;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsBeginningSignificantWork;
- (void)setShouldOverride:(BOOL)arg1 forSystemBudgets:(unsigned long long)arg2;
- (id)_overrideStringDescriptionForSystemBudgets:(unsigned long long)arg1;
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableSynchronizationWithReason:(id)arg1;
- (void)disableSynchronizationWithReason:(id)arg1;
- (void)noteClientReceivedNotificationOfServerChanges;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)startSyncSession;
- (void)resetStatus;
- (void)getMappedIdentifiersForIdentifiers:(id)arg1 inAreLocalIdentifiers:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginInMemoryDownloadOfResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)publishResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(BOOL)arg3 proposedTaskIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)deactivateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

