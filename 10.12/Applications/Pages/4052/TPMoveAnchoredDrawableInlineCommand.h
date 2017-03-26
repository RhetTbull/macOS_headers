//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPAttachmentOperationsCommand.h"

#import "GSSPAutoEncodable-Protocol.h"

@class TPDocumentRoot, TSDExteriorTextWrap, TSKIdPlacementOperationArgs, TSUUUIDPath;

@interface TPMoveAnchoredDrawableInlineCommand : TSWPAttachmentOperationsCommand <GSSPAutoEncodable>
{
    TSKIdPlacementOperationArgs *_idPlacementOperationArgs;
    struct _NSRange _replacementRange;
    TSUUUIDPath *_drawableInfoIdPath;
    TSDExteriorTextWrap *_exteriorTextWrap;
    TSDExteriorTextWrap *_originalExteriorTextWrap;
}

- (void)p_invalidateCharIndexForAttachedDrawable:(id)arg1;
- (void)protected_setRangeList:(id)arg1;
- (id)protected_rangeList;
- (unsigned long long)protected_replacementLength;
- (id)protected_textStorageIdPathList;
- (void)protected_setPrunedUpdateDataLists:(id)arg1;
- (id)protected_updateDataListsToPrune;
- (void)protected_setUpdateIdPathList:(id)arg1;
- (id)protected_updateIdPathList;
- (void)protected_setIdPlacementOperationArgsList:(id)arg1;
- (id)protected_idPlacementOperationArgsList;
- (struct _NSRange)doCommitWithNewTransaction:(struct TSWPStorageTransaction *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)makeInverse;
- (void)rollback;
- (void)didInitFromSOS;
@property(readonly, nonatomic) TPDocumentRoot *documentRoot;
- (void)redo;
- (void)undo;
- (void)commit;
- (BOOL)process;
- (id)actionString;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct MoveAnchoredDrawableInlineCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct MoveAnchoredDrawableInlineCommandArchive *)arg1 archiver:(id)arg2;
- (int)persistenceKind;
- (void)dealloc;
- (id)initWithContext:(id)arg1 idPlacementOperationArgs:(id)arg2 textStorageIdPath:(id)arg3 replacementRange:(struct _NSRange)arg4 drawableInfoIdPath:(id)arg5 exteriorTextWrap:(id)arg6;
- (void)deallocSOS;
- (void)populateGSSPCmdPageMoveAnchoredDrawableInline:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

