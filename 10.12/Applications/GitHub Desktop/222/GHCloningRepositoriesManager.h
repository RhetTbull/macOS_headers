//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, RACSignal, RACSubject;

@interface GHCloningRepositoriesManager : NSObject
{
    RACSubject *_cloneRepositorySignals;
    NSMutableArray *_repositoriesBeingCloned;
    NSMutableDictionary *_cloneExecutionsByLastSeenFileURL;
}

@property(readonly, nonatomic) NSMutableDictionary *cloneExecutionsByLastSeenFileURL; // @synthesize cloneExecutionsByLastSeenFileURL=_cloneExecutionsByLastSeenFileURL;
@property(readonly, nonatomic) RACSignal *cloneRepositorySignals; // @synthesize cloneRepositorySignals=_cloneRepositorySignals;
- (void).cxx_destruct;
- (id)cloneRepository:(id)arg1 fromSourceURLString:(id)arg2;
- (id)prepareToCloneRepository:(id)arg1 fromURLString:(id)arg2 toDirectoryURL:(id)arg3;
- (id)activeCloneExecutionSignalWithRepository:(id)arg1 cloneExecutionSignal:(id)arg2;
- (id)cloneRepositoryAtURLString:(id)arg1 toURL:(id)arg2;
- (id)cloneMissingRepository:(id)arg1 toURL:(id)arg2;
@property(readonly, copy) NSArray *repositoriesBeingCloned;
- (id)cloneSignalForRepository:(id)arg1;
- (id)init;

@end

