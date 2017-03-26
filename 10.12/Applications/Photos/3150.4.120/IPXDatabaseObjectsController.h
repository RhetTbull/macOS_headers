//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXObjectsController.h"

#import "IPXLockedDatabaseObjectsController-Protocol.h"
#import "PFResourceAccessClient-Protocol.h"

@class NSString, RDCustomSortOrder, RDDatabase;

@interface IPXDatabaseObjectsController : IPXObjectsController <PFResourceAccessClient, IPXLockedDatabaseObjectsController>
{
    id _databaseSynchronizationObject;
    long long _objectsSortMode;
    unsigned int _sortAscending:1;
    unsigned int _databaseWasClosed:1;
    unsigned int _shouldUnregisterDatabaseResource:1;
    RDDatabase *_database;
    RDCustomSortOrder *_customSortOrder;
}

+ (id)modelIdsSetForModelIdObjects:(id)arg1;
+ (CDUnknownBlockType)databaseModelComparator;
+ (id)dateForDatabaseModel:(id)arg1;
+ (id)dateForCollectionObject:(id)arg1;
+ (id)databaseModelIdUUIDPrefix;
+ (BOOL)getDatabaseModelId:(unsigned long long *)arg1 forUUID:(id)arg2;
+ (id)uuidForDatabaseModel:(id)arg1;
+ (id)uuidForDatabaseModelIdObject:(id)arg1;
+ (id)uuidForDatabaseModelId:(unsigned long long)arg1;
+ (void)initialize;
@property(retain) RDCustomSortOrder *customSortOrder; // @synthesize customSortOrder=_customSortOrder;
@property(retain) RDDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)customSortContainerUuid;
- (void)_resortCollectionObjects;
- (void)updateCustomSortOrder;
- (struct PFDirectMessagingMulticaster *)newChangeMulticaster;
- (void)didDisconnectFromDatabase;
- (void)willDisconnectFromDatabase;
- (void)_reportDatabaseClosing;
- (void)_disconnectFromDatabase;
- (void)resourceWillShutdown:(id)arg1;
- (id)locked_modelIdsInList:(id)arg1;
- (BOOL)locked_containsObjectWithModelId:(unsigned long long)arg1;
- (BOOL)locked_removeObjectsWithModelIds:(id)arg1;
- (BOOL)locked_removeObjectsWithModelIdObjects:(id)arg1;
- (void)setSortAscending:(BOOL)arg1;
- (void)setSortMode:(long long)arg1;
- (CDUnknownBlockType)objectsCollectionSortingComparator;
- (void)locked_processRepresentativeImageChangesInResponseToChangedKeyPaths:(id)arg1 forVersionReplacements:(id)arg2 withAdditionalProperties:(unsigned long long)arg3;
- (id)locked_updateDatabaseModels:(id)arg1 reportMetdataChanges:(id)arg2;
- (id)locked_updateDatabaseModels:(id)arg1 reportMetdataChanges:(id)arg2 removeUpdates:(BOOL)arg3;
- (BOOL)locked_assignObjects:(id)arg1;
- (CDUnknownBlockType)assignedObjectsComparator;
- (BOOL)locked_canProvideArrangedObjects;
- (void)uninstallObjectsSourceMonitor;
- (void)installObjectsSourceMonitor;
- (void)dealloc;
- (void)locked_disconnectObjectsSourceWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDatabase:(id)arg1 uuid:(id)arg2 arrangedObjects:(id)arg3;
- (id)initWithDatabase:(id)arg1 uuid:(id)arg2;
- (void)_releaseProcessingQueue:(id)arg1 forDatabase:(id)arg2;
- (id)newProcessingQueue;
- (id)_unavailableDatabaseProcessingQueue;
- (void)locked_processSmallPAPreviewImagesUpdatedFromLiveEditForVersionAddress:(id)arg1;
- (void)locked_processSmallPAPreviewImagesUpdatedForVersionAddress:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

