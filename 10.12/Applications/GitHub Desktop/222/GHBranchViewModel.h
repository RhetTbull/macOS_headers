//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ReactiveViewModel/RVMViewModel.h>

@class GTBranch, NSString, RACScopedDisposable, RACSignal;

@interface GHBranchViewModel : RVMViewModel
{
    BOOL _currentBranch;
    GTBranch *_model;
    NSString *_name;
    NSString *_dateString;
    RACSignal *_targetCommitDateSignal;
    RACSignal *_currentBranchSignal;
    RACScopedDisposable *_dateStringDisposable;
    RACScopedDisposable *_currentBranchDisposable;
}

@property(retain, nonatomic) RACScopedDisposable *currentBranchDisposable; // @synthesize currentBranchDisposable=_currentBranchDisposable;
@property(retain, nonatomic) RACScopedDisposable *dateStringDisposable; // @synthesize dateStringDisposable=_dateStringDisposable;
@property(readonly, nonatomic) RACSignal *currentBranchSignal; // @synthesize currentBranchSignal=_currentBranchSignal;
@property(readonly, nonatomic) RACSignal *targetCommitDateSignal; // @synthesize targetCommitDateSignal=_targetCommitDateSignal;
@property(readonly, nonatomic, getter=isCurrentBranch) BOOL currentBranch; // @synthesize currentBranch=_currentBranch;
@property(readonly, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) GTBranch *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToBranchViewModel:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (id)initWithModel:(id)arg1 targetCommitDateSignal:(id)arg2 currentBranchSignal:(id)arg3 trackingBranchSignal:(id)arg4 forkParentSignal:(id)arg5;

@end

