//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MAToolKit/MAKitView.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSObject, NSScrollView, NSString, ScpbButtonsView, ScpbContentView, ScpbHeaderBtn;
@protocol ScpbDelegateProtocol;

@interface ScpbGroupsView : MAKitView <NSTableViewDataSource, NSTableViewDelegate>
{
    NSObject<ScpbDelegateProtocol> *m_scpbDelegate2;
    ScpbHeaderBtn *m_headerBtn;
    ScpbButtonsView *m_btnsView;
    ScpbContentView *m_entriesContentView;
    NSScrollView *m_scrollView;
    ScpbButtonsView *m_btnsView1;
    BOOL m_doShowFilterBtns;
}

@property(readonly) ScpbButtonsView *btnsView; // @synthesize btnsView=m_btnsView;
- (void)groupBtnAction:(id)arg1;
- (void)updateBtnsState;
- (int)firstVisibleTileGroupID;
- (void)updateCell:(id)arg1;
- (BOOL)doShowFilterBtns;
- (void)setDoShowFilterBtns:(BOOL)arg1;
- (void)updateShowFilterBtns:(BOOL)arg1 forceUpdate:(BOOL)arg2;
- (id)headerBtn;
@property(readonly) ScpbContentView *entriesContentView; // @synthesize entriesContentView=m_entriesContentView;
- (void)inspectorViewResized:(id)arg1;
- (void)tileScrollView:(double)arg1;
- (void)setupContentArea_viewState:(struct ScViewState *)arg1 pbSetData:(struct ScpbPresetData *)arg2 btnsHeight:(double)arg3;
- (void)setupScrollViewInSuperview;
- (void)cleanupGroupsView;
- (void)setupGroupsView_forInspector:(struct ScViewState *)arg1;
- (void)setupGroupsView_forFloatWindow:(struct ScpbPresetData *)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (int)numRows;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initFields;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

