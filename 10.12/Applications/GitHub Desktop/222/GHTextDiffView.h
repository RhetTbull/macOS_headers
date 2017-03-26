//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GHDiffView.h"

@class GHTextDiffGutterView, GHTextDiffViewModel, GHTextDiffViewTextView, GHWorkingDirectoryFileViewModel, RACSignal;

@interface GHTextDiffView : GHDiffView
{
    BOOL _allowLineSelection;
    GHTextDiffViewTextView *_textView;
    GHTextDiffViewModel *_viewModel;
    GHWorkingDirectoryFileViewModel *_fileViewModel;
    GHTextDiffGutterView *_gutterView;
    RACSignal *_rcl_intrinsicHeightSignal;
}

+ (void)appendDiff:(id)arg1 toAttributedString:(id)arg2;
+ (id)noNewLineMarkerAttributes;
+ (void)appendLine:(id)arg1 toAttributedString:(id)arg2;
@property(readonly, nonatomic) RACSignal *rcl_intrinsicHeightSignal; // @synthesize rcl_intrinsicHeightSignal=_rcl_intrinsicHeightSignal;
@property(readonly, nonatomic) GHTextDiffGutterView *gutterView; // @synthesize gutterView=_gutterView;
@property(readonly, nonatomic) GHWorkingDirectoryFileViewModel *fileViewModel; // @synthesize fileViewModel=_fileViewModel;
@property(readonly, nonatomic) GHTextDiffViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) GHTextDiffViewTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) BOOL allowLineSelection; // @synthesize allowLineSelection=_allowLineSelection;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDiff:(id)arg1 file:(id)arg2;

@end

