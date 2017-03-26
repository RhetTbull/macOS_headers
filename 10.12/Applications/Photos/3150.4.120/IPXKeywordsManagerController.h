//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXKeywordDragProtocol-Protocol.h"
#import "IPXVersionsMonitorDelegate-Protocol.h"
#import "RDLibraryMessagesReceiver-Protocol.h"

@class IPXKeywordManager, IPXKeywordsGroupView, IPXKeywordsWindow, IPXLibrary, IPXVersionsMonitor, NSButton, NSMutableIndexSet, NSSegmentedControl, NSString, NSTableView, NSTextField, NSUndoManager, NSView, PFCoalescer, PFDispatchQueue;
@protocol OS_dispatch_queue;

@interface IPXKeywordsManagerController : NSObject <IPXVersionsMonitorDelegate, RDLibraryMessagesReceiver, IPXKeywordDragProtocol>
{
    IPXKeywordsWindow *mWindow;
    NSView *mKeywordEditingView;
    NSView *mKeywordUsingView;
    NSTextField *mKeywordShortcutHint;
    NSView *mKeywordsView;
    NSButton *mEditKeywordsButton;
    IPXKeywordsGroupView *mKeywordsWithShortcuts;
    IPXKeywordsGroupView *mKeywordsWithoutShortcuts;
    NSTableView *mKeywordTable;
    NSSegmentedControl *mAddRemoveSegmentedControl;
    NSButton *mRenameButton;
    NSButton *mShortcutButton;
    NSString *mOriginalWindowTitle;
    BOOL mUserIntendsToDelete;
    BOOL mKeywordJustCreated;
    struct CGSize mOriginalWindowSize;
    BOOL mIgnoreWindowResize;
    BOOL mIgnoreSelectionChanged;
    BOOL mAbortDoneWithEditing;
    IPXKeywordManager *_keywordManager;
    IPXLibrary *_library;
    IPXVersionsMonitor *_versionsMonitor;
    PFDispatchQueue *_databaseUpdateQueue;
    unsigned long long _currentUpdateID;
    NSObject<OS_dispatch_queue> *_serialUpdateQueue;
    PFCoalescer *_updateCoalescer;
    BOOL _keywordsLoaded;
    NSMutableIndexSet *_keywordsInAllPhotos;
    NSMutableIndexSet *_keywordsInSomePhotos;
    unsigned long long _selectedPhotoCount;
    BOOL _selectionIsReadOnly;
    BOOL _ignoreDatabaseMessages;
    NSUndoManager *_undoManager;
}

@property(retain) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
- (void).cxx_destruct;
- (void)libraryDeletedKeyword:(id)arg1;
- (void)libraryCreatedKeyword:(id)arg1;
- (void)versionsMonitor:(id)arg1 metadataChanged:(id)arg2 forVersions:(id)arg3;
- (id)reportedMetadataChangesForVersionsMonitor:(id)arg1;
- (id)changeReportingDispatchQueueForVersionsMonitor:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)changeShortcut:(id)arg1;
- (void)renameKeyword:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(int)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(int)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (void)addOrRemoveKeyword:(id)arg1;
- (void)deleteKeyword:(id)arg1;
- (void)addKeyword:(id)arg1;
- (void)selectKeywordInEditor:(id)arg1 forEditing:(BOOL)arg2;
- (void)_selectKeywordInEditorWithIndex:(long long)arg1 forEditing:(BOOL)arg2;
- (void)_syncKeywordButtonStates;
- (void)doneEditKeywords:(id)arg1;
- (BOOL)control:(id)arg1 textShouldBeginEditing:(id)arg2;
- (void)_setupKeywordEditor;
- (void)_reloadEditor;
- (id)_keywordButtons;
- (void)_layOutCategoriesWithAutosize:(BOOL)arg1;
- (void)_reloadKeywordGroupViewsWithAutoResize:(BOOL)arg1;
- (id)_keywordsWithShortcuts:(BOOL)arg1;
- (void)_setWindowSizeToOriginal:(BOOL)arg1;
- (BOOL)performDragOperation:(id)arg1 view:(id)arg2;
- (unsigned long long)draggingEntered:(id)arg1 view:(id)arg2;
- (unsigned long long)draggingUpdated:(id)arg1 view:(id)arg2;
- (id)keystroke:(id)arg1;
- (void)keywordPressed:(id)arg1;
- (void)_toggleKeyword:(id)arg1;
- (void)_invokeToggleAnimationForKeyword:(id)arg1 versions:(id)arg2 add:(BOOL)arg3;
- (void)_add:(BOOL)arg1 keyword:(id)arg2 versions:(id)arg3;
- (id)_keywordsStringForKeywordSet:(id)arg1;
- (void)groupPressed:(id)arg1;
- (void)groupDisclosurePressed:(id)arg1;
- (void)_keywordChanged:(id)arg1;
- (void)_reloadUIAfterKeywordListChange;
- (void)selectionChanged:(id)arg1;
- (void)_updateForSelectionWhenPossible;
- (void)editKeywords:(id)arg1;
- (void)_updateForSelectionChange:(id)arg1 updateId:(unsigned long long)arg2;
- (void)_updateButtonStates;
- (void)_listenForNotifications:(BOOL)arg1;
- (id)windowWillReturnUndoManager:(id)arg1;
- (struct CGRect)windowWillUseStandardFrame:(id)arg1 defaultFrame:(struct CGRect)arg2;
- (void)windowDidResize:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (BOOL)editingKeywords;
- (BOOL)isVisible;
- (void)toggleVisible:(id)arg1;
- (void)hide;
- (void)show;
- (void)awakeFromNib;
- (void)_librarySwitched:(id)arg1;
- (void)reset;
- (void)setWorkspace:(id)arg1;
- (void)_switchToLibrary:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

