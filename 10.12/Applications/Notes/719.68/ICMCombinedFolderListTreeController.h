//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTreeController.h>

#import "ICMFolderTreeCombinerDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSOutlineViewDataSource-Protocol.h"

@class FolderTreeGenerator, ICMCombinedFolderListOutlineView, ICMFolderTreeCombiner, NSArray, NSString;

@interface ICMCombinedFolderListTreeController : NSTreeController <ICMFolderTreeCombinerDelegate, NSMenuDelegate, NSOutlineViewDataSource>
{
    BOOL _refreshingContent;
    BOOL _awokeFromNib;
    BOOL _isAddingOrDeletingFolder;
    BOOL _shouldSuspendUpdates;
    ICMCombinedFolderListOutlineView *_outlineView;
    FolderTreeGenerator *_treeGenerator;
    NSTreeController *_modernNotesTreeController;
    ICMFolderTreeCombiner *_folderTreeCombiner;
    id _legacyContent;
    NSArray *_legacyTreeNodes;
    NSArray *_currentModernTreeLinearizedRepresentation;
    NSString *_persistentIdentifierToSelectAfterDrop;
}

+ (id)keyPathsForValuesAffectingDisplayedAccounts;
+ (id)linearizedRepresentationOfTreeController:(id)arg1;
+ (id)createModernNotesTreeController;
@property(retain, nonatomic) NSString *persistentIdentifierToSelectAfterDrop; // @synthesize persistentIdentifierToSelectAfterDrop=_persistentIdentifierToSelectAfterDrop;
@property(nonatomic) BOOL shouldSuspendUpdates; // @synthesize shouldSuspendUpdates=_shouldSuspendUpdates;
@property(copy, nonatomic) NSArray *currentModernTreeLinearizedRepresentation; // @synthesize currentModernTreeLinearizedRepresentation=_currentModernTreeLinearizedRepresentation;
@property(copy, nonatomic) NSArray *legacyTreeNodes; // @synthesize legacyTreeNodes=_legacyTreeNodes;
@property(retain, nonatomic) id legacyContent; // @synthesize legacyContent=_legacyContent;
@property(retain, nonatomic) ICMFolderTreeCombiner *folderTreeCombiner; // @synthesize folderTreeCombiner=_folderTreeCombiner;
@property(retain, nonatomic) NSTreeController *modernNotesTreeController; // @synthesize modernNotesTreeController=_modernNotesTreeController;
@property(nonatomic) BOOL isAddingOrDeletingFolder; // @synthesize isAddingOrDeletingFolder=_isAddingOrDeletingFolder;
@property(nonatomic) BOOL awokeFromNib; // @synthesize awokeFromNib=_awokeFromNib;
@property(retain, nonatomic) FolderTreeGenerator *treeGenerator; // @synthesize treeGenerator=_treeGenerator;
@property(nonatomic) BOOL refreshingContent; // @synthesize refreshingContent=_refreshingContent;
@property(nonatomic) __weak ICMCombinedFolderListOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *displayedAccounts;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)validateModernDropForDraggedFolder:(id)arg1 modernDestinationTreeNode:(id)arg2 wantsCopyOperation:(BOOL)arg3;
- (BOOL)validateLegacyDropForDraggedFolder:(id)arg1 modernDestinationTreeNode:(id)arg2 wantsCopyOperation:(BOOL)arg3;
- (BOOL)validateLegacyDropForDraggedFolder:(id)arg1 legacyDestinationTreeNode:(id)arg2 wantsCopyOperation:(BOOL)arg3;
- (BOOL)validateLegacyDropForDraggedNotes:(id)arg1 modernDestinationTreeNode:(id)arg2 wantsCopyOperation:(BOOL)arg3;
- (BOOL)validateLegacyDropForDraggedNotes:(id)arg1 legacyDestinationTreeNode:(id)arg2 wantsCopyOperation:(BOOL)arg3;
- (BOOL)validateDropForModernDestinationTreeNode:(id)arg1;
- (BOOL)validateLegacyDropForDraggedFolder:(id)arg1 wantsCopyOperation:(BOOL)arg2;
- (void)showAlertForMovingSharedNotesAcrossAccounts;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (void)outlineView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (void)moveSubfolderIfNecessary:(id)arg1 parentFolder:(id)arg2;
- (BOOL)acceptModernDraggedFolder:(id)arg1 modernDestinationTreeNode:(id)arg2 copyOperation:(BOOL)arg3;
- (BOOL)acceptModernDraggedNotes:(id)arg1 modernDestinationTreeNode:(id)arg2 copyOperation:(BOOL)arg3;
- (BOOL)acceptModernDraggedNotes:(id)arg1 legacyDestinationTreeNode:(id)arg2 copyOperation:(BOOL)arg3;
- (BOOL)acceptLegacyDraggedFolder:(id)arg1 modernDestinationTreeNode:(id)arg2 copyOperation:(BOOL)arg3;
- (BOOL)acceptLegacyDraggedFolder:(id)arg1 legacyDestinationTreeNode:(id)arg2 copyOperation:(BOOL)arg3;
- (BOOL)acceptLegacyDraggedNotes:(id)arg1 modernDestinationTreeNode:(id)arg2 copyOperation:(BOOL)arg3;
- (BOOL)acceptLegacyDraggedNotes:(id)arg1 legacyDestinationTreeNode:(id)arg2 copyOperation:(BOOL)arg3;
- (BOOL)acceptDragForICNotes:(id)arg1 destinationTreeNode:(id)arg2 copyOperation:(BOOL)arg3 acceptOnlyIfHasAnyValidNote:(BOOL)arg4 noteCountForActionName:(long long)arg5 notesCopyBlock:(CDUnknownBlockType)arg6;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)isAccountNode:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)editSelectedFolder:(id)arg1;
- (void)updateAccountMigrationButtonVisibility;
- (void)updateFolderTreeIfNecessary;
- (void)shareFolder:(id)arg1;
- (void)addNewFolder:(id)arg1;
- (void)showDeleteFolderWarningForFolderNamed:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)delete:(id)arg1;
- (void)remove:(id)arg1;
- (BOOL)canRemove;
- (id)newObject;
- (void)add:(id)arg1;
- (BOOL)canAdd;
- (id)selectedNodeByPersistentIdentifier;
- (BOOL)setSelectedNodeByPersistentIdentifier:(id)arg1;
- (void)setDefaultSelection;
- (BOOL)_setSelectedObjects:(id)arg1;
- (BOOL)hasLegacySelection;
- (id)selectedTreeNode;
- (void)_automaticallyExposeFolderListIfNecessary;
- (void)allDescendentTreeNodesFromTreeNode:(id)arg1 resultArray:(id)arg2;
- (void)expandAccountsAndNodesWithPersistentIdentifiers:(id)arg1;
- (void)expandAccountNodesIfNecessary;
- (id)currentExpandedNodePersistentIdentifiers;
- (void)setContent:(id)arg1;
- (id)accountsAddedByNewFolderTreeNodes:(id)arg1 toOldFolderTreeNodes:(id)arg2;
- (id)accountsFromFolderTreeNodes:(id)arg1;
- (id)folderTreeNodeForPersistentIdentifier:(id)arg1 selectableOnly:(BOOL)arg2 fromFolderTreeNodes:(id)arg3;
- (BOOL)setSelectionIndexPaths:(id)arg1;
- (id)trimmedIndexPath:(id)arg1 toLength:(unsigned long long)arg2;
- (unsigned long long)firstIndexWithDifferingObjectForArray:(id)arg1 withArray:(id)arg2;
- (id)selectionIdentifierPathForIndexPath:(id)arg1 adjustedIndexPath:(id *)arg2;
- (id)folderTreeNodeFromTreeNode:(id)arg1;
- (void)enumerateTreeNodesStartingWithNode:(id)arg1 expectedClass:(Class)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateNeighborsOfNode:(id)arg1 expectedClass:(Class)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateTreeNodes:(id)arg1 expectedClass:(Class)arg2 forIndexPath:(id)arg3 allowsIndexAdjustment:(BOOL)arg4 adjustedIndexPath:(id *)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (BOOL)enumerateTreeNodes:(id)arg1 expectedClass:(Class)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)modernNotesChanged:(id)arg1;
- (BOOL)isLocalAccountVisible;
- (void)cancelEditingIfNeeded;
- (void)updateData;
- (void)undoManagerDidUndoOrRedo:(id)arg1;
- (void)localNoteVisibilityDidChange:(id)arg1;
- (void)accountsDidChange:(id)arg1;
- (void)migrationStateChanged:(id)arg1;
- (void)noteContextRefresh:(id)arg1;
- (void)updateModernTreeController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)folderTreeCombinerShouldSuspendUpdatesForUpdatedCombinedTreeNodes:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)folderListTreeControllerCommonInit;
- (id)initWithContent:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

