//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class GHGraphicalDiffstatViewModel;

@interface GHGraphicalDiffstatView : NSView
{
    GHGraphicalDiffstatViewModel *_viewModel;
    long long _backgroundStyle;
    struct CGSize _intrinsicContentSize;
}

@property(nonatomic) struct CGSize intrinsicContentSize; // @synthesize intrinsicContentSize=_intrinsicContentSize;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(retain, nonatomic) GHGraphicalDiffstatViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

