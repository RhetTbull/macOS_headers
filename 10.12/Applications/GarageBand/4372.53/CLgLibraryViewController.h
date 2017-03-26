//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CLgLibBrowserViewDelegate-Protocol.h"
#import "CLgLibraryDataSourceObserver-Protocol.h"
#import "CLgLibraryStageViewDataSource-Protocol.h"
#import "MABrowserDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"

@class CLgLibBrowserView, CLgLibraryDataSource, CLgLibraryPatchMergingView, CLgLibraryStageView, LgLibraryBrowser, MABorderView, MABrowserCell, MAButton, MAKitPathControl, MAKitSearchField, MAKitTableView, MASplitView, MATextField, NSArray, NSDateFormatter, NSMenu, NSMutableArray, NSString, NSTabView, NSTimer;

@interface CLgLibraryViewController : NSObject <NSTableViewDataSource, NSTableViewDelegate, CLgLibBrowserViewDelegate, NSTextFieldDelegate, NSMenuDelegate, CLgLibraryStageViewDataSource, MABrowserDelegate, CLgLibraryDataSourceObserver>
{
    CLgLibBrowserView *mView;
    MABorderView *mHeaderView;
    MATextField *m_HeaderTitleTextField;
    MASplitView *m_stageAndBrowserSplitview;
    CLgLibraryStageView *m_stageView;
    MAKitSearchField *mSearchField;
    NSTabView *mTabView;
    MAKitPathControl *m_pathControl;
    LgLibraryBrowser *m_browserView;
    MAKitTableView *mSearchResultsTableView;
    CLgLibraryPatchMergingView *m_mergeView;
    MABorderView *mFooterView;
    MAButton *mRevertButton;
    MAButton *mSaveButton;
    MAButton *mDeleteButton;
    MAButton *mToolButton;
    MABrowserCell *m_browserPrototypeCell;
    NSMutableArray *mSearchResults;
    NSDateFormatter *mDateFormatter;
    NSMenu *mContextMenu;
    NSTimer *mCurrentBrowserTimer;
    NSTimer *mCurrentArrangeTimer;
    NSTimer *mDataStatusTimer;
    BOOL mDeferredUpdate;
    BOOL mDocIsClosing;
    BOOL m_libraryConnected;
    BOOL m_observerRegistered;
    CLgLibraryDataSource *m_dataSource;
    NSArray *m_currentPathComponents;
    MABrowserCell *m_currentSelectedLeafCell;
    BOOL m_reloadColumns;
    BOOL _hideIncompleteItems;
    struct CDocumentLogic *_documentLogic;
    NSString *_currentLibraryPath;
}

@property(retain, nonatomic) NSString *currentLibraryPath; // @synthesize currentLibraryPath=_currentLibraryPath;
@property(nonatomic) BOOL hideIncompleteItems; // @synthesize hideIncompleteItems=_hideIncompleteItems;
@property(nonatomic) struct CDocumentLogic *documentLogic; // @synthesize documentLogic=_documentLogic;
@property(readonly, nonatomic) MATextField *headerTitleTextField; // @synthesize headerTitleTextField=m_HeaderTitleTextField;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (void)menuNeedsUpdate:(id)arg1;
- (void)_updateMenu:(id)arg1;
- (void)_addToolMenuItemsToMenu:(id)arg1;
- (BOOL)_patchMergingIsEnabled;
- (int)_patchMergeFilterFlags;
- (void)closeMergeView:(id)arg1;
- (void)_showPatchMerginView:(BOOL)arg1 animated:(BOOL)arg2;
- (void)openPluginWindow;
- (void)selectPreviousChannelStrip;
- (void)selectNextChannelStrip;
- (void)_selectNextPreviousPatch:(BOOL)arg1;
- (id)stageAssetSetNameForIconID:(long long)arg1;
- (long long)iconIDForInstrumentIconOnStageView;
- (id)titleOnStageView;
- (void)browser:(id)arg1 quickHelpForCell:(id)arg2 col:(long long)arg3 row:(long long)arg4;
- (BOOL)browser:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
- (double)browser:(id)arg1 shouldSizeColumn:(long long)arg2 forUserResize:(BOOL)arg3 toWidth:(double)arg4;
- (id)browser:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 inColumn:(long long)arg3;
- (void)browserColumnConfigurationDidChange:(id)arg1;
- (BOOL)browser:(id)arg1 isColumnValid:(long long)arg2;
- (void)browser:(id)arg1 createRowsForColumn:(long long)arg2 inMatrix:(id)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)basicViewFrameChanged:(id)arg1;
- (void)documentWillBeClosed:(id)arg1;
- (void)documentWasSaved:(id)arg1;
- (void)handleUM_UPDATEONGINSTCHANGE_:(id)arg1;
- (void)doSearchSelection:(id)arg1 closeSearch:(BOOL)arg2;
- (void)searchSelectionDidChange:(id)arg1;
- (void)searchTimerAction:(id)arg1;
- (void)search_Changed:(id)arg1;
- (void)_resetSearch;
- (void)controlTextDidChange:(id)arg1;
- (void)browserTimerAction:(id)arg1;
- (void)libraryDataSourceDidChange:(id)arg1;
- (void)libraryDataSourceFocusDidChange:(id)arg1;
- (void)libraryDataSourceDidBecameAvailable:(id)arg1;
- (void)libraryDataSourceDidBecameUnAvailable:(id)arg1;
- (void)_disconnectLibrary;
- (void)_connectLibrary;
- (void)_removeObserver;
- (void)_registerObserver;
- (id)_dataSource;
- (CDStruct_9e44aee5)_currentSelectionInfo;
- (int)_currentDataSourceMode;
- (struct CMenu *)_browserMenu;
- (void)_updateSubViewFrames;
- (void)_updateUIForDocument:(struct CDocumentLogic *)arg1 displayMode:(int)arg2 selectionInfo:(CDStruct_9e44aee5)arg3 withSearch:(BOOL)arg4;
- (void)_updateSaveButtonStateForDocument:(struct CDocumentLogic *)arg1 displayMode:(int)arg2 andSelectionInfo:(CDStruct_9e44aee5)arg3;
- (void)_updateDeleteButtonStateForDisplayMode:(int)arg1;
- (void)_updateBrowserWithPath:(id)arg1;
- (void)_updateCurrentSelectedLeafBrowserCellForBrowserCell:(id)arg1 needsDisplay:(BOOL)arg2;
- (id)_quickHelpIDForCell:(id)arg1;
- (struct CTrack *)_currentSelectedTrack;
- (id)_defaultLibraryPathSelectedTrack;
- (id)_browserPathForDisplayMode:(int)arg1 withSearch:(BOOL)arg2;
- (id)_trackCreatorKeyForTrack:(struct CTrack *)arg1 inSong:(struct CSong *)arg2;
- (struct CMenuEntry *)getCMenuEntryForSelectedItem;
- (struct CMenuEntry *)getCMenuEntryForCell:(id)arg1;
- (struct CSong *)_song;
- (id)_songDocument;
- (void)_setPathControlPath:(id)arg1 removeLastPathComponent:(BOOL)arg2;
- (void)_completePatchLoadingWithFreezeDialog:(id)arg1;
- (id)_removeLastBrowserComponentFromBrowserPath:(id)arg1;
- (void)downloadAction:(id)arg1;
- (void)showInAppPurchaseDialog:(id)arg1;
- (void)pathControlAction:(id)arg1;
- (void)headerViewDoubleClickAction:(id)arg1;
- (void)applyBrowserSelectionChange:(id)arg1;
- (BOOL)currentPatchWasModified;
- (void)browserSelectionDidChange:(id)arg1;
- (void)searchField_Changed:(id)arg1;
- (void)applySearchSelectionChange:(id)arg1;
- (void)toolAction:(id)arg1;
- (void)revertAction:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)debugLogActionForMenuEntry:(id)arg1;
- (void)debugLogActionForMenu:(id)arg1;
- (id)_reverseDebugLogsInFolder:(id)arg1;
- (id)_debugLogOneMenuEntry:(struct CMenuEntry *)arg1;
- (void)saveAction:(id)arg1;
- (BOOL)keyUp:(id)arg1 inView:(id)arg2;
- (BOOL)keyDown:(id)arg1 inView:(id)arg2;
- (void)viewVisibilityChange:(BOOL)arg1;
- (void)willBecomeFocus;
- (void)subResponderWasChanged:(id)arg1;
- (id)currentSubResponder;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewWillBeRemovedFromWindow;
- (void)viewWillBeAddedToWindow;
- (id)view;
- (void)dealloc;
- (void)removeBrowserTimer;
- (void)eatKeyEvents;
- (id)initWithDocument:(struct CDocumentLogic *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

