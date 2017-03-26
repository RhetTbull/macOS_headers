//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSDraggingDestination-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TNMacQuickCalcTokenView, TSKMacDividerView;
@protocol TNMacQuickCalcTokenContainerViewDataSource;

@interface TNMacQuickCalcTokenContainerView : NSView <NSDraggingDestination>
{
    NSMutableDictionary *mTokenMap;
    NSMutableArray *mFunctions;
    TNMacQuickCalcTokenView *mTokenViewShowingBeforeCursor;
    TNMacQuickCalcTokenView *mTokenViewShowingAfterCursor;
    id <TNMacQuickCalcTokenContainerViewDataSource> mDataSource;
    TSKMacDividerView *mCursor;
    BOOL mPendingScroll;
}

@property(nonatomic) id <TNMacQuickCalcTokenContainerViewDataSource> dataSource; // @synthesize dataSource=mDataSource;
- (BOOL)wantsPeriodicDraggingUpdates;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)p_tokenViewsForDraggingImageLocation:(struct CGPoint)arg1 outBeforeTokenView:(id *)arg2 outAfterTokenView:(id *)arg3;
- (void)p_hideCursor:(BOOL)arg1;
@property(readonly, nonatomic) NSArray *tokenViews;
- (void)updateConstraints;
- (id)functionNameForTokenView:(id)arg1;
- (id)tokenForFunctionName:(id)arg1;
- (void)removeTokenForFunctionName:(id)arg1;
- (void)p_clipViewBoundsDidChange:(id)arg1;
- (void)addTokenForFunctionName:(id)arg1 index:(id)arg2 dragStarter:(id)arg3 shouldAutoscroll:(BOOL)arg4;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

