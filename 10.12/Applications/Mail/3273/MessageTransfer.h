//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCActivityTarget-Protocol.h"
#import "MessageDeletionTransfer-Protocol.h"

@class NSArray, NSMutableArray, NSProgress, NSString;
@protocol MessageTransferDelegate;

@interface MessageTransfer : NSObject <MCActivityTarget, MessageDeletionTransfer>
{
    NSMutableArray *_operations;
    BOOL _deleteOriginals;
    BOOL _allowsUndo;
    BOOL _registeredForUndo;
    BOOL _isDeleteOperation;
    BOOL _isArchiveOperation;
    BOOL _undoInProgress;
    BOOL _needToUndoTransfer;
    id <MessageTransferDelegate> _delegate;
    NSArray *_sourceLabels;
    NSProgress *_transferProgress;
}

+ (void)queueMailboxDeletions:(id)arg1;
+ (BOOL)_shouldProceedWithMailboxDeletions:(id)arg1;
+ (void)_redo:(id)arg1;
+ (void)_undo:(id)arg1;
+ (void)initialize;
+ (id)log;
@property(nonatomic) BOOL needToUndoTransfer; // @synthesize needToUndoTransfer=_needToUndoTransfer;
@property(nonatomic) BOOL undoInProgress; // @synthesize undoInProgress=_undoInProgress;
@property(nonatomic) BOOL isArchiveOperation; // @synthesize isArchiveOperation=_isArchiveOperation;
@property(nonatomic) BOOL isDeleteOperation; // @synthesize isDeleteOperation=_isDeleteOperation;
@property(nonatomic) BOOL registeredForUndo; // @synthesize registeredForUndo=_registeredForUndo;
@property(retain, nonatomic) NSProgress *transferProgress; // @synthesize transferProgress=_transferProgress;
@property(copy) NSArray *sourceLabels; // @synthesize sourceLabels=_sourceLabels;
@property BOOL allowsUndo; // @synthesize allowsUndo=_allowsUndo;
@property BOOL deleteOriginals; // @synthesize deleteOriginals=_deleteOriginals;
@property __weak id <MessageTransferDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_undoActionNameForMessageCount:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL anySourceStoreAllowsDeleteInPlace;
@property(readonly, copy, nonatomic) NSArray *sourceStores;
@property(readonly, copy, nonatomic) NSArray *destinationMailboxes;
- (id)_destinationMailboxForOperation:(id)arg1;
- (void)_synchronouslyPerformTransfer;
- (void)_postDidEndDocumentTransferNotification:(id)arg1 result:(long long)arg2 destinationAccount:(id)arg3 missedMessages:(id)arg4;
- (void)_postWillBeginDocumentTransferNotification:(id)arg1;
- (void)_redo;
- (void)_undoSettingFlags:(id)arg1 transferringMessages:(id)arg2;
- (void)_undo;
- (void)_registerForUndoType:(long long)arg1;
- (void)_completedTransferWithError:(id)arg1;
- (void)beginTransfer;
@property(readonly, nonatomic) BOOL canBeginTransfer;
- (void)dealloc;
- (id)init;
- (id)initWithMessages:(id)arg1 targetMailbox:(id)arg2 isDeleteOperation:(BOOL)arg3 isArchiveOperation:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isSmartMailbox;
@property(readonly) Class superclass;

@end

