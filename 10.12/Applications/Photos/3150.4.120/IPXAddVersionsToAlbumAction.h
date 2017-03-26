//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModelAction.h>

@class IPXImportFromStreamAction, LiAddress, NSString, RDUndoRedoGroupChange;

@interface IPXAddVersionsToAlbumAction : RDModelAction
{
    RDUndoRedoGroupChange *_undo;
    IPXImportFromStreamAction *_importFromStreamAction;
    NSString *_initialPosterVersionUuid;
    NSString *_finalPosterVersionUuid;
    BOOL _removeVersionsFromTrash;
    LiAddress *_albumAddress;
}

@property BOOL removeVersionsFromTrash; // @synthesize removeVersionsFromTrash=_removeVersionsFromTrash;
@property(retain) LiAddress *albumAddress; // @synthesize albumAddress=_albumAddress;
- (void).cxx_destruct;
- (BOOL)canUndo;
- (int)performRedo;
- (int)performUndo;
- (void)removeVersionsFromTrash:(id)arg1 addingToUndo:(id)arg2;
- (int)performAction;
- (int)performActionWithVersions:(id)arg1;
- (unsigned long long)workUnits;
- (unsigned long long)_batchSize;
- (id)defaultActionName;
- (id)initWithVersions:(id)arg1 destinationAlbum:(id)arg2;
- (id)initWithAddressList:(id)arg1 destinationAlbum:(id)arg2;

@end

