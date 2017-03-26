//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SmallDialogController.h"

#import "NSOutlineViewDataSource-Protocol.h"

@class CommandsOutline, MAKitSearchField, NSArray, NSButton, NSMatrix, NSMenu, NSPopUpButton, NSString, NSTableView, NSTextField;

@interface KeyCommandsController : SmallDialogController <NSOutlineViewDataSource>
{
    NSPopUpButton *optionsPopUpButton;
    NSPopUpButton *show;
    MAKitSearchField *searchField;
    CommandsOutline *commands;
    NSTextField *key;
    NSMatrix *modifiers;
    NSButton *learnKey;
    NSButton *learnScanCode;
    NSButton *deleteKey;
    NSTableView *assignments;
    NSButton *learnAssignment;
    NSButton *deleteAssignment;
    NSMenu *searchFieldRecentsMenu;
    NSArray *findWords;
}

+ (id)nibName;
+ (id)sharedController;
- (id)commands;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (void)cancelSearch;
- (void)allChanged;
- (void)currBefChanged;
- (BOOL)findInUse;
- (void)changeShowTo:(int)arg1;
- (int)shown;
- (BOOL)learningScan;
- (BOOL)learningKeyOrScan;
- (BOOL)setBefGruppe:(short)arg1 befehl:(short)arg2;
- (short)befehl;
- (short)befGruppe;
- (void)click_deleteAssignment:(id)arg1;
- (void)click_learnAssignment:(id)arg1;
- (void)assignmentsDoubleClick:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (struct Assign_Host *)assignmentAtRow:(long long)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)click_delete:(id)arg1;
- (void)click_learn:(id)arg1;
- (void)change_modifiers:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)change_key:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)hasBefContainerConflict:(id)arg1;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)change_search:(id)arg1;
- (void)change_show:(id)arg1;
- (void)menuInitialize:(id)arg1;
- (void)menuExpandCollapseAll:(id)arg1;
- (void)menuScrollToSelection:(id)arg1;
- (void)menuCopy:(id)arg1;
- (_Bool)befehlFiltered:(const struct BEFEHL *)arg1;
- (_Bool)befehlHidden:(const struct BEFEHL *)arg1;
- (void)menuExport:(id)arg1;
- (void)menuImport:(id)arg1;
- (void)handleLearnModeChanged:(id)arg1;
- (void)updateCommands:(BOOL)arg1 preserveOldExpandState:(BOOL)arg2 scrollToSamePosition:(BOOL)arg3;
- (void)updateCommands:(BOOL)arg1;
- (void)updateUI;
- (void)updateOptionsMenu;
- (id)presetsSubMenu:(BOOL)arg1;
- (long long)checkmarkItem:(id)arg1 withPath:(id)arg2;
- (void)presetMenuAction:(id)arg1;
- (id)localizedKeyCommandsFileNameForPath:(id)arg1;
- (void)updateEditor;
- (void)updateAssigns;
- (struct TAST *)selectedTast;
- (const struct BEFEHL *)selectedBefehl;
- (id)selectedBefContainer;
- (void)updateLearnMode;
- (void)awakeFromNib;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)minimizeToScreenIfNeccessary;
- (void)windowWillClose:(id)arg1;
- (void)cancelLearn;
- (void)cancelLearnKey;
- (void)willBecomeVisible;
- (void)windowDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

