//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSArray, NSButton, NSString, NSTableColumn, NSTableView, iTermEditSnippetWindowController;

@interface iTermSnippetsEditingViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate>
{
    NSTableView *_tableView;
    NSTableColumn *_titleColumn;
    NSTableColumn *_valueColumn;
    NSButton *_removeButton;
    NSButton *_editButton;
    NSArray *_snippets;
    iTermEditSnippetWindowController *_windowController;
}

- (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (id)viewForValueColumnOnRow:(long long)arg1;
- (id)viewForTitleColumnOnRow:(long long)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (void)edit:(id)arg1;
- (void)remove:(id)arg1;
- (void)add:(id)arg1;
- (void)doubleClickOnTableView:(id)arg1;
- (void)updateEnabled;
- (void)snippetsDidChange:(id)arg1;
- (void)pushUndo;
- (void)setSnippets:(id)arg1;
- (id)selectedSnippets;
- (void)defineControlsInContainer:(id)arg1 containerView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

