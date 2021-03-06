//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MRSViewController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class MRSCyclingTextField, MRSFileIconManager, MRSFileKindManager, MRSReadOnlyCompactTableView, MRSTree, MRSTreeNode, NSButton, NSFormatter, NSImageView, NSLayoutConstraint, NSMutableArray, NSString, NSTextField;

@interface MRSScriptsInfoViewController : MRSViewController <NSTableViewDataSource, NSTableViewDelegate>
{
    MRSTree *_tree;
    NSFormatter *_sizeFormatter;
    NSMutableArray *_argNameCells;
    NSMutableArray *_argDescriptionCells;
    double _whereFieldPaddingForPreferredMaxLayoutWidth;
    double _whenToArgTableConstantForSearchButtonVisible;
    id <MRSScriptsInfoViewControllerDelegate> _delegate;
    MRSTreeNode *_currentNode;
    MRSFileIconManager *_iconManager;
    MRSFileKindManager *_kindManager;
    NSImageView *_iconView;
    NSTextField *_nameField;
    MRSCyclingTextField *_kindField;
    NSTextField *_sizeField;
    NSTextField *_whereField;
    MRSCyclingTextField *_asUserField;
    NSTextField *_whenField;
    NSButton *_searchForReferencesButton;
    NSButton *_searchForReferencesHelpButton;
    NSLayoutConstraint *_whenToArgTableConstraint;
    NSTextField *_argTableLabel;
    MRSReadOnlyCompactTableView *_argTableView;
}

@property(nonatomic) __weak MRSReadOnlyCompactTableView *argTableView; // @synthesize argTableView=_argTableView;
@property(nonatomic) __weak NSTextField *argTableLabel; // @synthesize argTableLabel=_argTableLabel;
@property(nonatomic) __weak NSLayoutConstraint *whenToArgTableConstraint; // @synthesize whenToArgTableConstraint=_whenToArgTableConstraint;
@property(nonatomic) __weak NSButton *searchForReferencesHelpButton; // @synthesize searchForReferencesHelpButton=_searchForReferencesHelpButton;
@property(nonatomic) __weak NSButton *searchForReferencesButton; // @synthesize searchForReferencesButton=_searchForReferencesButton;
@property(nonatomic) __weak NSTextField *whenField; // @synthesize whenField=_whenField;
@property(nonatomic) __weak MRSCyclingTextField *asUserField; // @synthesize asUserField=_asUserField;
@property(nonatomic) __weak NSTextField *whereField; // @synthesize whereField=_whereField;
@property(nonatomic) __weak NSTextField *sizeField; // @synthesize sizeField=_sizeField;
@property(nonatomic) __weak MRSCyclingTextField *kindField; // @synthesize kindField=_kindField;
@property(nonatomic) __weak NSTextField *nameField; // @synthesize nameField=_nameField;
@property(nonatomic) __weak NSImageView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) MRSFileKindManager *kindManager; // @synthesize kindManager=_kindManager;
@property(readonly, nonatomic) MRSFileIconManager *iconManager; // @synthesize iconManager=_iconManager;
@property(retain, nonatomic) MRSTreeNode *currentNode; // @synthesize currentNode=_currentNode;
@property(nonatomic) __weak id <MRSScriptsInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableViewColumnDidResize:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_updateArgDescriptionCellsForCurrentColumnSize;
- (void)_rebuildArgumentsTableCellsForCurrentNode;
- (id)_asUserStringsForNode:(id)arg1 orPlaceholder:(id)arg2;
- (id)_kindStringsForNode:(id)arg1 orPlaceholder:(id)arg2;
- (id)_formattedSizeForNode:(id)arg1 orPlaceholder:(id)arg2;
- (id)_iconForNode:(id)arg1;
- (void)_updateUIForCurrentNode;
- (void)didCycleTextField:(id)arg1;
- (void)didClickSearchForReferencesHelpButton:(id)arg1;
- (void)didClickSearchForReferencesButton:(id)arg1;
- (void)_updateUIForResizedPane:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithScriptsBomTree:(id)arg1 iconManager:(id)arg2 kindManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

