//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ReactiveViewModel/RVMViewModel.h>

@class GHChangedFileViewModel, GHGitStatusItem, GHUsageTracker, NSSet, RACCommand, RACSignal;

@interface GHWorkingDirectoryFileViewModel : RVMViewModel
{
    RACSignal *_latestDiff;
    int _prepared;
    GHChangedFileViewModel *_changedFileViewModel;
    GHGitStatusItem *_statusItem;
    NSSet *_selectedLines;
    RACCommand *_selectionCommand;
    RACSignal *_selectionSignal;
    GHUsageTracker *_usageTracker;
    NSSet *_selectedLinesToValidate;
}

+ (unsigned long long)userFacingStatusForStatusItem:(id)arg1;
+ (id)renamedFileNameForStatusItem:(id)arg1;
+ (id)displayFileNameForStatusItem:(id)arg1;
@property(copy, nonatomic) NSSet *selectedLinesToValidate; // @synthesize selectedLinesToValidate=_selectedLinesToValidate;
@property(readonly, nonatomic) GHUsageTracker *usageTracker; // @synthesize usageTracker=_usageTracker;
@property(readonly, nonatomic) RACSignal *selectionSignal; // @synthesize selectionSignal=_selectionSignal;
@property(readonly, nonatomic) RACCommand *selectionCommand; // @synthesize selectionCommand=_selectionCommand;
@property(copy, nonatomic) NSSet *selectedLines; // @synthesize selectedLines=_selectedLines;
@property(retain) GHGitStatusItem *statusItem; // @synthesize statusItem=_statusItem;
- (void).cxx_destruct;
@property(readonly, nonatomic) RACSignal *patchString;
- (id)patchLinesForHunkHeader:(id)arg1 fromDiffViewModel:(id)arg2;
- (id)changesetMarkerForLine:(id)arg1 fromDiffViewModel:(id)arg2;
- (void)selectLines:(id)arg1;
- (id)diffViewModelForStatusItem:(id)arg1;
@property(readonly, nonatomic) RACSignal *latestDiffstat;
@property(readonly, nonatomic) RACSignal *latestDiff;
- (void)prepare;
- (id)initWithStatusItem:(id)arg1 selectionSignal:(id)arg2 selectionCommand:(id)arg3 usageTracker:(id)arg4;
@property(readonly, nonatomic) unsigned long long userFacingStatus;
@property(readonly, nonatomic) GHChangedFileViewModel *changedFileViewModel; // @synthesize changedFileViewModel=_changedFileViewModel;

@end

