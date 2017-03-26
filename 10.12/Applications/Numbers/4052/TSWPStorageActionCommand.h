//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "NSCopying-Protocol.h"
#import "TSDCommandInducedForPropagation-Protocol.h"
#import "TSWPSelectionBehaviorCommand-Protocol.h"
#import "TSWPStorageTransactionDelegate-Protocol.h"

@class NSArray, NSObject, NSString, TSUUUIDPath, TSWPSelection, TSWPStorage;
@protocol TSWPStorageActionCommandDelegate;

@interface TSWPStorageActionCommand : TSKCommand <GSSPAutoEncodable, TSWPSelectionBehaviorCommand, TSWPStorageTransactionDelegate, TSDCommandInducedForPropagation, NSCopying>
{
    int _commandKind;
    TSUUUIDPath *_textStorageIdPath;
    struct TSWPStorageTransaction *_storageTransaction;
    BOOL _coalesceable;
    BOOL _coalescingText;
    BOOL _isForwardInverseCommand;
    TSWPStorage *_storage;
    unsigned int _flags;
    NSObject<TSWPStorageActionCommandDelegate> *_delegate;
    NSArray *_addedCustomFormatKeys;
    BOOL _shouldMigrateStyles;
    TSWPSelection *_selectionForCommitBehavior;
    TSWPSelection *_selectionForForwardBehavior;
    TSWPSelection *_selectionForReverseBehavior;
    unsigned long long _selectionFlagsAfterCommit;
    BOOL _selectionBehaviorHasReadSelections;
    TSWPSelection *_selectionForInitialCommit;
}

+ (id)newObjectForUnarchiver:(id)arg1;
@property(retain, nonatomic) TSWPSelection *selectionForInitialCommit; // @synthesize selectionForInitialCommit=_selectionForInitialCommit;
@property(nonatomic) id <TSWPStorageActionCommandDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long selectionFlagsAfterCommit; // @synthesize selectionFlagsAfterCommit=_selectionFlagsAfterCommit;
@property(nonatomic) BOOL selectionBehaviorHasReadSelections; // @synthesize selectionBehaviorHasReadSelections=_selectionBehaviorHasReadSelections;
@property(retain, nonatomic) TSWPSelection *selectionForForwardSelectionPath; // @synthesize selectionForForwardSelectionPath=_selectionForForwardBehavior;
@property(retain, nonatomic) TSWPSelection *selectionForReverseSelectionPath; // @synthesize selectionForReverseSelectionPath=_selectionForReverseBehavior;
@property(retain, nonatomic) TSWPSelection *selectionForCommitSelectionPath; // @synthesize selectionForCommitSelectionPath=_selectionForCommitBehavior;
- (BOOL)didTransformFromOperation:(id)arg1 toOperation:(id)arg2 objectAddress:(id)arg3 firstPass:(BOOL)arg4;
- (void)transformStorageActionForIdPlacementPlacementOperation:(const struct TSWPStorageAction *)arg1 transformedOperation:(id)arg2 transformedActions:(vector_e5fc8613 *)arg3 firstPass:(BOOL)arg4;
- (BOOL)willTransformFromOperation:(id)arg1 objectAddress:(id)arg2 firstPass:(BOOL)arg3;
- (id)willAddOperation:(id)arg1 objectAddress:(id)arg2 firstPass:(BOOL)arg3;
- (BOOL)transformationRequiresTwoPasses;
- (BOOL)wasObjectMoved:(id)arg1;
- (void)didRunAttachmentTableAction:(const struct TSWPStorageAction *)arg1 currentObject:(id)arg2;
- (void)willRunAttachmentTableAction:(const struct TSWPStorageAction *)arg1 objectToApply:(id)arg2;
- (void)setIndex:(int)arg1 forObject:(id)arg2;
- (BOOL)delegateShouldAssignPlacementIndex;
- (id)actionObjectForUUIDPath:(id)arg1;
- (id)UUIDPathForObject:(id)arg1 inStorage:(id)arg2 index:(out int *)arg3;
@property(readonly, nonatomic) TSUUUIDPath *storageUUIDPath;
- (BOOL)shouldInvokeDelegateOnSelector:(SEL)arg1;
- (void)transformWithOperationTransformer:(id)arg1;
- (void)didTransformOperations;
- (void)didTransformOperationsWithTransaction:(struct TSWPStorageTransaction *)arg1;
- (void)willTransformOperations;
- (void)willTransformOperationsWithTransaction:(struct TSWPStorageTransaction *)arg1;
- (BOOL)hasStorageTransaction;
@property(readonly, nonatomic) struct TSWPStorageTransaction *storageTransaction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)makeInverse;
- (struct TSWPStorageTransaction)inverseStorageTransaction;
- (BOOL)shouldDeepCopyUndoObjects;
- (void)replaceStorageObjectsWithDeepCopiesForMakeInverse;
- (id)operationsWithStorageTransaction:(struct TSWPStorageTransaction *)arg1;
- (id)operations;
- (id)updateIdOperation;
- (void)rollback;
- (void)didRollbackWithTransaction:(struct TSWPStorageTransaction *)arg1;
- (void)willRollbackWithTransaction:(struct TSWPStorageTransaction *)arg1;
- (void)didInitFromSOS;
- (BOOL)supportsCollaboration;
- (id)p_undoSelectionFromSelection:(id)arg1;
@property(readonly, nonatomic) NSArray *objectsBeingModified;
@property(readonly, nonatomic) TSWPStorage *storage;
- (void)p_reloadStorageFromDocument;
- (void)coalesceWithCommand:(id)arg1 coalescingKind:(long long)arg2;
- (BOOL)canCoalesceWithCommand:(id)arg1 coalescingKind:(long long)arg2;
- (void)didCoalesceWithCommand:(id)arg1 coalescingKind:(long long)arg2;
- (void)redo;
- (void)undo;
- (struct _NSRange)undoRedo:(BOOL)arg1;
- (void)didUndoRedoWithTransaction:(struct TSWPStorageTransaction *)arg1 isUndo:(BOOL)arg2;
- (void)willUndoRedoWithTransaction:(struct TSWPStorageTransaction *)arg1 isUndo:(BOOL)arg2;
- (void)invalidateAnchoredDrawablesForTransaction:(const struct TSWPStorageTransaction *)arg1;
- (void)commit;
- (BOOL)p_shouldHandleCustomFormats;
- (void)didCommitWithTransaction:(struct TSWPStorageTransaction *)arg1 changedRange:(struct _NSRange)arg2;
- (void)willCommitWithTransaction:(struct TSWPStorageTransaction *)arg1;
- (struct _NSRange)doCommitWithNewTransaction:(struct TSWPStorageTransaction *)arg1;
- (void)didInvalidateRange;
- (void)invalidateSelection:(id)arg1;
- (void)invalidateRange:(struct _NSRange)arg1;
- (void)invalidateRange:(struct _NSRange)arg1 onStorage:(id)arg2;
- (void)invalidateSelection:(id)arg1 onStorage:(id)arg2;
@property(nonatomic) BOOL suppressChangeNotifications;
- (void)removeFlag:(int)arg1;
- (void)addFlag:(int)arg1;
- (unsigned int)flags;
- (void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3;
- (BOOL)process;
- (id)initFromUnarchiver:(id)arg1;
- (const struct StorageActionCommandArchive *)storageActionCommandArchiveFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct StorageActionCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
@property(readonly, nonatomic) BOOL requiresCustomFormatHandling;
@property(readonly, nonatomic) int persistenceKind;
- (void)saveToArchive:(struct StorageActionCommandArchive *)arg1 archiver:(id)arg2;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 storageTransaction:(struct TSWPStorageTransaction *)arg3;
- (id)initWithStorage:(id)arg1 selection:(id)arg2;
- (void)setRestoreRangeWithSelection:(id)arg1;
@property(retain, nonatomic) NSArray *addedCustomFormatKeys;
@property(nonatomic) BOOL shouldMigrateStyles;
@property(nonatomic) BOOL coalescingText;
@property(nonatomic) BOOL coalesceable;
@property(nonatomic) BOOL isForwardInverseCommand;
- (BOOL)isValidForCollaborationWithInvalidReason:(out id *)arg1;
- (void)deallocSOS;
- (void)populateGSSPCmdTextStorageAction:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *otherSerializationClasses;
@property(readonly) Class superclass;

@end

