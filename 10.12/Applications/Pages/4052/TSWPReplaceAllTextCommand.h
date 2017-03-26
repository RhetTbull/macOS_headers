//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKReplaceAllChildCommand.h"

@class TSWPStorage;

@interface TSWPReplaceAllTextCommand : TSKReplaceAllChildCommand
{
    TSWPStorage *_storage;
    struct TSWPStorageTransaction *_undoRedoTransaction;
}

- (void)p_invalidateSelection:(id)arg1;
- (void)p_invalidateRange:(struct _NSRange)arg1;
- (struct TSWPStorageTransaction *)undoRedoTransaction;
- (void)redo;
- (void)undo;
- (void)undoRedo;
- (void)commit;
- (BOOL)process;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ReplaceAllTextCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct ReplaceAllTextCommandArchive *)arg1 archiver:(id)arg2;
- (void)dealloc;
- (id)actionString;
- (id)initWithStorage:(id)arg1 parentCommand:(id)arg2;

@end

