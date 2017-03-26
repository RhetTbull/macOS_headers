//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPTextBaseCommand.h"

@class TSWPStorage;

@interface TSWPRemoveRubyTextCommand : TSWPTextBaseCommand
{
    struct _NSRange _range;
    struct TSWPStorageTransaction *_undoRedoTransaction;
    TSWPStorage *_storage;
}

@property(readonly, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
- (void)redo;
- (void)undo;
- (void)p_undoRedo;
- (void)commit;
- (BOOL)process;
- (id)actionString;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct RemoveRubyTextCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct RemoveRubyTextCommandArchive *)arg1 archiver:(id)arg2;
- (void)dealloc;
- (id)initWithRubyField:(id)arg1;

@end

