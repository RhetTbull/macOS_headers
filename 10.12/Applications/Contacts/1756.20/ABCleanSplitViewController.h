//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABCleanSplitViewDelegate-Protocol.h"

@class ABCleanGroupsPaneVisibility, ABCleanSplitView, ABCleanSplitViewConstraints, ABCleanSplitViewState, NSString;
@protocol ABBookStateSaving;

@interface ABCleanSplitViewController : NSObject <ABCleanSplitViewDelegate>
{
    ABCleanSplitView *_splitView;
    ABCleanSplitViewConstraints *_constraints;
    ABCleanGroupsPaneVisibility *_groupsPaneVisibility;
    ABCleanSplitViewState *_state;
    _Bool _didUserUpdateSplitViewDivider;
}

@property(readonly) id <ABBookStateSaving> state; // @synthesize state=_state;
@property(readonly) ABCleanSplitView *splitView; // @synthesize splitView=_splitView;
- (void)ab_splitView:(id)arg1 restoreStateWithCoder:(id)arg2;
- (id)ab_splitViewDividerColor:(id)arg1;
- (void)ab_splitViewDidEndLiveResize:(id)arg1;
- (void)ab_splitViewWillStartLiveResize:(id)arg1;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (void)setGroupsPaneHidden:(_Bool)arg1 withAnimation:(_Bool)arg2;
- (void)setGroupsPaneHidden:(_Bool)arg1;
@property(readonly, nonatomic, getter=isGroupsPaneHidden) _Bool groupsPaneHidden;
- (void)updateWidthsFromSplitViewController:(id)arg1;
- (void)dealloc;
- (id)initWithSplitView:(id)arg1 identifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

