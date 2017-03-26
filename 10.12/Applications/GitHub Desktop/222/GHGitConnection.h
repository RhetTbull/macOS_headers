//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GHRepository, GTRepository, RACScheduler, RACSignal, RACSubject;

@interface GHGitConnection : NSObject
{
    GTRepository *_GTRepository;
    RACSubject *_benchmarkCompleted;
    RACSubject *_workingDirectoryUpdated;
    RACSubject *_HEADUpdated;
    RACSubject *_branchesUpdated;
    RACSubject *_remoteUpdated;
    RACSubject *_pushCompleted;
    RACSubject *_pullCompleted;
    RACSubject *_fetchCompleted;
    GHRepository *_repository;
    RACScheduler *_scheduler;
}

+ (id)runGitLFSFilterWithMode:(long long)arg1 repositoryURL:(id)arg2 arguments:(id)arg3 inputData:(id)arg4;
+ (id)addGitLFSFilter;
+ (id)setUpGitLFSFilters;
+ (id)writeValue:(id)arg1 forConfigKey:(id)arg2;
+ (id)readValueForConfigKey:(id)arg1;
+ (id)updateDefaultGitIgnore;
+ (id)trackGitLFSProgressWithTask:(id)arg1;
+ (id)progressFromGitLFSWithFileAtPath:(id)arg1;
+ (id)tailFileAtURL:(id)arg1;
+ (id)runShellWithArguments:(id)arg1 scheduler:(id)arg2;
+ (id)trackProgressWithDataSignal:(id)arg1 costsByStep:(id)arg2;
+ (id)launchTask:(id)arg1 inRepository:(id)arg2 scheduler:(id)arg3 connection:(id)arg4;
+ (id)shellTaskWithArguments:(id)arg1;
+ (void)configureTaskEnvironment:(id)arg1;
+ (id)gitExecutableURL;
+ (id)gitLFSExecutableURL;
+ (id)gitLFSFolderURL;
+ (id)gitTemplateFolderURL;
+ (id)gitFolderURL;
+ (long long)schedulerPriority;
+ (id)schedulerName;
+ (id)connectionType;
@property(readonly, nonatomic) RACSignal *benchmarkCompleted; // @synthesize benchmarkCompleted=_benchmarkCompleted;
@property(readonly, nonatomic) RACSignal *fetchCompleted; // @synthesize fetchCompleted=_fetchCompleted;
@property(readonly, nonatomic) RACSignal *pullCompleted; // @synthesize pullCompleted=_pullCompleted;
@property(readonly, nonatomic) RACSignal *pushCompleted; // @synthesize pushCompleted=_pushCompleted;
@property(readonly, nonatomic) RACSubject *remoteUpdated; // @synthesize remoteUpdated=_remoteUpdated;
@property(readonly, nonatomic) RACSignal *branchesUpdated; // @synthesize branchesUpdated=_branchesUpdated;
@property(readonly, nonatomic) RACSignal *HEADUpdated; // @synthesize HEADUpdated=_HEADUpdated;
@property(readonly, nonatomic) RACSignal *workingDirectoryUpdated; // @synthesize workingDirectoryUpdated=_workingDirectoryUpdated;
@property(readonly, nonatomic) RACScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) GHRepository *repository; // @synthesize repository=_repository;
- (void).cxx_destruct;
- (id)lookUpRefWithName:(id)arg1;
- (void)noteWorkingDirectoryChanged;
- (id)mergeBaseBetweenFirstOID:(id)arg1 secondOID:(id)arg2;
- (id)indexByMergingBranch:(id)arg1 into:(id)arg2;
- (id)fastForwardTargetForBranch:(id)arg1;
- (id)fastForwardOtherBranches;
- (id)localBranches;
- (id)fetchFromDefaultRemoteAndUpstream;
- (id)fetchFromRemote:(id)arg1;
- (id)removeStoredStashSHAForBranchNamed:(id)arg1;
- (id)stashSHAForBranchNamed:(id)arg1;
- (id)storeStashSHA:(id)arg1 forBranchNamed:(id)arg2;
- (id)updateUserDefaults:(CDUnknownBlockType)arg1;
- (id)userDefaults;
- (id)userDefaultsKey;
- (id)hasUnstagedChanges;
- (id)currentStatus;
- (id)statusItemsWithRepository:(id)arg1;
- (id)conflictStatusItemsWithIndex:(id)arg1;
- (id)createDetachedCommitWithPaths:(id)arg1 message:(id)arg2;
- (id)writeTreeOfIndex:(id)arg1;
- (id)addTree:(id)arg1 toIndex:(id)arg2;
- (id)clearIndex:(id)arg1;
- (id)createDetachedCommitWithTree:(id)arg1 message:(id)arg2 parents:(id)arg3;
- (id)submoduleWithPath:(id)arg1;
- (id)fetchDiffForLocalChangesToPath:(id)arg1;
- (id)pushToRemoteFromBranch:(id)arg1 trackingBranch:(id)arg2;
- (id)pushToRemoteFromBranch:(id)arg1;
- (id)uploadGitLFSFromBranch:(id)arg1 toRemote:(id)arg2;
- (id)gitLFSSmudgeWithPointerData:(id)arg1;
- (id)runGitLFSFilterWithMode:(long long)arg1 arguments:(id)arg2 inputData:(id)arg3;
- (id)gitLFSInfoWithPointerData:(id)arg1;
- (id)isGitLFSPath:(id)arg1;
- (id)fetchPullRequest:(id)arg1 asBranchNamed:(id)arg2;
- (id)trackFetchProgressWithArguments:(id)arg1;
- (id)updateLastSyncedDate;
- (id)lastSyncedDate;
- (id)fetchHeadURL;
- (id)renameUnbornBranch:(id)arg1;
- (id)uniqueCommitsFromOID:(id)arg1 relativeToOID:(id)arg2 firstParent:(BOOL)arg3;
- (id)commitsWithEnumerator:(id)arg1 firstParent:(BOOL)arg2;
- (id)calculateAheadAndBehindForOID:(id)arg1 relativeToOID:(id)arg2;
- (id)updateBranch:(id)arg1 toRef:(id)arg2 message:(id)arg3;
- (id)localCommitsOnCurrentBranch;
- (id)localCommitsOnBranch:(id)arg1;
- (id)commitsNotInDefaultRemoteOfRepository:(id)arg1 startingWithSHA:(id)arg2;
- (id)deleteBranch:(id)arg1 fromRemote:(id)arg2;
- (id)statusOfSubmodule:(id)arg1 usingIgnoreRule:(long long)arg2;
- (id)submodulesByPath;
- (id)submodules;
- (id)submodulesWithRepository:(id)arg1;
- (id)isHEADUnborn;
- (id)isHEADDetached;
- (id)isEmpty;
- (id)branchWithName:(id)arg1;
- (id)branchWithName:(id)arg1 onRemoteNamed:(id)arg2;
- (id)branches;
- (id)createBranchFromCurrentHEADWithName:(id)arg1;
- (id)createBranchNamed:(id)arg1 fromBranchNamed:(id)arg2;
- (id)createBranchNamed:(id)arg1 fromBranch:(id)arg2;
- (id)createBranchNamed:(id)arg1 fromOID:(id)arg2;
- (id)numberOfCommitsInCurrentBranch;
- (id)currentBranchName;
- (id)currentBranch;
- (id)targetCommitForBranch:(id)arg1;
- (id)trackingBranchForBranch:(id)arg1;
- (id)commitsFromSHAs:(id)arg1;
- (id)commitFromSHA:(id)arg1;
- (id)stashFromSHA:(id)arg1;
- (id)SHAFromRef:(id)arg1;
- (id)gitLFSPathspecs;
- (id)usingGitLFS;
- (id)gitAttributesURLs;
- (id)checkForGitLFSFilterWithURL:(id)arg1;
- (id)preparedCommitMessage;
- (id)commitsAddedFromOID:(id)arg1 toOID:(id)arg2 ignoringOID:(id)arg3 firstParent:(BOOL)arg4;
- (id)fetchDiffOfFile:(id)arg1 betweenLeftTree:(id)arg2 andRightTree:(id)arg3;
- (id)fetchDiffBetweenLeftTree:(id)arg1 andRightTree:(id)arg2;
- (id)diffPatchFromDiffDelta:(id)arg1;
- (id)diffDeltasForDiff:(id)arg1;
- (id)writeGitDescription:(id)arg1;
- (id)readGitDescription;
- (id)gitDescriptionURL;
- (id)writeValue:(id)arg1 forConfigKey:(id)arg2;
- (id)readValueForConfigKey:(id)arg1;
- (id)addRemoteWithName:(id)arg1 URLString:(id)arg2;
- (id)findRemoteWithName:(id)arg1;
- (id)findDefaultBranch;
- (id)findDefaultRemote;
- (id)loadConfiguration;
- (id)HEADCommit;
- (id)trackProgressOfShellWithArguments:(id)arg1 costsByStep:(id)arg2;
- (id)runShellAndCaptureGitLFSProgressWithArguments:(id)arg1;
- (id)runShellWithArguments:(id)arg1;
- (id)gitDirectoryExists;
- (id)gitDirectoryURL;
- (id)GTIndex;
- (id)GTRepository;
- (void)dealloc;
- (id)initWithRepository:(id)arg1;

@end

