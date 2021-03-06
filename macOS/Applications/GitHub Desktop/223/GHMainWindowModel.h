//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ReactiveViewModel/RVMViewModel.h>

@class GHCloningRepositoriesManager, GHRepositoryListViewModel, GHRepositoryViewModel, GHUsageTracker, NSString, RACCommand, RACSignal, RACSubject;

@interface GHMainWindowModel : RVMViewModel
{
    RACSubject *_recoverableErrors;
    GHRepositoryListViewModel *_repositoryListViewModel;
    GHRepositoryViewModel *_currentViewModel;
    GHUsageTracker *_usageTracker;
    NSString *_uncommittedChangesTitle;
    RACCommand *_locateRepositoryCommand;
    RACCommand *_trackRepositoryCommand;
    RACCommand *_showRepositoryFromWebCommand;
    RACSignal *_existingRepositorySyncedSignal;
    GHCloningRepositoriesManager *_cloningRepositoriesManager;
    RACCommand *_createLocalRepositoryCommand;
}

@property(readonly, nonatomic) RACCommand *createLocalRepositoryCommand; // @synthesize createLocalRepositoryCommand=_createLocalRepositoryCommand;
@property(readonly, nonatomic) GHCloningRepositoriesManager *cloningRepositoriesManager; // @synthesize cloningRepositoriesManager=_cloningRepositoriesManager;
@property(readonly, nonatomic) RACSignal *existingRepositorySyncedSignal; // @synthesize existingRepositorySyncedSignal=_existingRepositorySyncedSignal;
@property(readonly, nonatomic) RACSignal *recoverableErrors; // @synthesize recoverableErrors=_recoverableErrors;
@property(readonly, nonatomic) RACCommand *showRepositoryFromWebCommand; // @synthesize showRepositoryFromWebCommand=_showRepositoryFromWebCommand;
@property(readonly, nonatomic) RACCommand *trackRepositoryCommand; // @synthesize trackRepositoryCommand=_trackRepositoryCommand;
@property(readonly, nonatomic) RACCommand *locateRepositoryCommand; // @synthesize locateRepositoryCommand=_locateRepositoryCommand;
@property(readonly, nonatomic) NSString *uncommittedChangesTitle; // @synthesize uncommittedChangesTitle=_uncommittedChangesTitle;
@property(readonly, nonatomic) GHUsageTracker *usageTracker; // @synthesize usageTracker=_usageTracker;
@property(readonly, nonatomic) GHRepositoryViewModel *currentViewModel; // @synthesize currentViewModel=_currentViewModel;
@property(readonly, nonatomic) GHRepositoryListViewModel *repositoryListViewModel; // @synthesize repositoryListViewModel=_repositoryListViewModel;
- (void).cxx_destruct;
- (id)addLocalRepositoryViewModel;
- (id)createRepositoryViewModel;
- (id)cloneRepositoryViewModel;
- (id)validateRepositoryCreationForDirectoryAtURL:(id)arg1 recoverySignal:(id)arg2;
- (id)validateRepositoryCreationForDirectoryAtURL:(id)arg1;
- (void)dealloc;
- (id)initWithCloningRepositoriesManager:(id)arg1 usageTracker:(id)arg2;

@end

