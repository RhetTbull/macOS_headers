//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModelAction.h>

@class RDUndoRedoChange;

@interface IPXDeleteFolderAction : RDModelAction
{
    RDUndoRedoChange *_folderTrashChange;
}

@property(copy, nonatomic) RDUndoRedoChange *folderTrashChange; // @synthesize folderTrashChange=_folderTrashChange;
- (void).cxx_destruct;
- (BOOL)canRedo;
- (int)performRedo;
- (BOOL)canUndo;
- (int)performUndo;
- (int)performAction;
- (id)defaultActionName;
- (id)initWithFolder:(id)arg1;
- (id)initWithFolders:(id)arg1;

@end

