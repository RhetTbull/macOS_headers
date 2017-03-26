//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXDatabaseFilterDrivenObjectsController.h"

#import "RDLibraryMessagesReceiver-Protocol.h"

@class NSString;

@interface IPXFavoriteMemoriesObjectsController : IPXDatabaseFilterDrivenObjectsController <RDLibraryMessagesReceiver>
{
}

- (void)libraryDeletedMemory:(id)arg1;
- (void)libraryUpdatedMemory:(id)arg1 forKeyPaths:(id)arg2;
- (void)libraryDeletedVersion:(id)arg1;
- (void)libraryUpdatedVersion:(id)arg1 forKeyPaths:(id)arg2;
- (id)initialObjectsCollectionQueryForDatabase:(id)arg1;
- (id)modelPropertiesToLoadForDatabase:(id)arg1;
- (id)newProcessingQueue;
- (id)initWithDatabase:(id)arg1;
- (id)_memoryChangesAffectContent:(id)arg1 checkUnrejected:(BOOL)arg2;
- (id)_versionChangesAffectThumbnails:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

