//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISyncNameNumberProvider.h"
#import "NSKeyedUnarchiverDelegate.h"

@class ISDAdminDatabase, ISDDataDirectoryVersion, ISDNameNumberProvider, NSMutableDictionary, NSString;

@interface ISDDataManager : NSObject <ISyncNameNumberProvider, NSKeyedUnarchiverDelegate>
{
    NSString *_dataDirectory;
    NSString *_adminDatabasePath;
    NSString *_schemasArchivePath;
    ISDAdminDatabase *_adminDatabase;
    NSString *_syncingClientListPath;
    unsigned int _anchor;
    BOOL _shouldBumpAnchorOnNextChange;
    BOOL _shouldUpdateMetadataOnEnableFlush;
    NSMutableDictionary *_clients;
    NSMutableDictionary *_schemas;
    NSMutableDictionary *_dataClasses;
    NSMutableDictionary *_entities;
    unsigned int _syncGeneration;
    BOOL _clientAdminDataChanged;
    BOOL _clientSyncStateChanged;
    BOOL _schemaAdminDataChanged;
    ISDDataDirectoryVersion *_dataVersion;
    ISDNameNumberProvider *_associatedNameNumberProvider;
    BOOL _shouldWriteSchemasArchiveToDisk;
}

+ (void)setDataVersionIsPreNameNumber:(BOOL)arg1;
+ (BOOL)dataVersionIsPreNameNumber;
+ (void)initialize;
- (void)purgeSyncPlanDetailBefore:(id)arg1;
- (void)setShouldWriteSchemasArchiveToDisk:(BOOL)arg1;
- (BOOL)shouldWriteSchemasArchiveToDisk;
- (BOOL)resetClientsWithLastSyncDatesEarlierThanDate:(id)arg1 purgeTruth:(BOOL)arg2 andVacuum:(BOOL)arg3;
- (id)syncDatesForClientsEarlierThanDate:(id)arg1;
- (void)resetClientWithIdentifier:(id)arg1;
- (id)resetSyncModesForAllClientsSyncingEntities:(id)arg1;
- (void)checkForInconsistentRunningStateAndRepairIfNeeded;
- (void)checkForInconsistentResetDataStateAndRepairIfNeeded;
- (void)probeClientDatabasesForStaleLocksAndRepairIfNecessary;
- (void)probeTruthAndAdminDatabasesForStaleLocksAndRepairIfNecessary;
- (void)resetSyncModesForClientWithIdentifier:(id)arg1;
- (void)resetSyncHistory;
- (void)resetSyncData;
- (void)purgeDeletedRecordsAndTuplesInTruth;
- (void)purgeDeletedRecordsAndTuplesInTruth:(BOOL)arg1;
- (void)resetSyncDataIncludingClientsAndSchemas:(BOOL)arg1;
- (void)createTruthSegmentsIfNecessaryInDirectory:(id)arg1 usingFileManager:(id)arg2;
- (void)removeTruthSegmentDatabasesInDirectory:(id)arg1 usingFileManager:(id)arg2;
- (void)_clearClientStateForClientWithDirectory:(id)arg1;
- (void)noteSyncServicesDirectoryNeedsToBeResetRemovingAdminDB:(BOOL)arg1;
- (void)noteSyncServicesDirectoryNeedsToBeReset;
- (id)_recoveryTempFileInfo;
- (unsigned int)nextSyncGeneration;
- (unsigned int)syncGeneration;
- (void)unregisterSchemaWithName:(id)arg1 helper:(id)arg2;
- (void)registerSchemaWithDescription:(id)arg1 descriptionFilePath:(id)arg2 bundlePath:(id)arg3 helper:(id)arg4 linkedOnTiger:(BOOL)arg5;
- (void)_ensureTruthDatabasesExistForDataclasses:(id)arg1 andNoteDeletedDataclasses:(id)arg2;
- (void)registerSchemaWithDescription:(id)arg1 descriptionFilePath:(id)arg2 helper:(id)arg3 linkedOnTiger:(BOOL)arg4;
- (void)_processChangesForSchemas:(id)arg1 ecDeletions:(id)arg2 ecModifications:(id)arg3 ecIncompatibleModifications:(id)arg4 dcDeletions:(id)arg5 helper:(id)arg6;
- (void)_removeSyncStates:(id)arg1 forClient:(id)arg2;
- (id)_entityNamesSetFromEntities:(id)arg1;
- (void)_updateClientSyncStatesForModifiedEntities:(id)arg1 incompatiblyModifiedEntities:(id)arg2;
- (BOOL)_shouldUpdateSyncStateForClient:(id)arg1 entityName:(id)arg2;
- (void)_getDataClassesDeleted:(id)arg1 dataClassesAdded:(id)arg2 inParsedSchemas:(id)arg3;
- (void)_getEntityComponentsDeleted:(id)arg1 modified:(id)arg2 incompatiblyModified:(id)arg3 inParsedSchemas:(id)arg4;
- (void)_whackDeletedEntityComponents:(id)arg1;
- (void)_whackDeletedDataClasses:(id)arg1;
- (void)_applyChangesFromSchemas:(id)arg1;
- (void)_applyChangesFromEntityComponentsFromSchema:(id)arg1;
- (void)_applyChangesFromDataClassesFromSchema:(id)arg1;
- (void)_validateParsedSchemas:(id)arg1 schemaBundlePath:(id)arg2;
- (void)_validateExtensionNameSuppliedInParsedSchemas:(id)arg1 schemaBundlePath:(id)arg2;
- (void)_validateNoCrossDataClassRelationshipsInParsedSchemas:(id)arg1 schemaBundlePath:(id)arg2;
- (id)_dataClassNameFromStubEntity:(id)arg1;
- (void)_validateUndefinedObjectsInParsedSchemas:(id)arg1 schemaBundlePath:(id)arg2;
- (id)schemaDefiningEntityComponentWithExtensionName:(id)arg1 entityName:(id)arg2;
- (id)schemaNameForDataclass:(id)arg1;
- (id)schemaWithName:(id)arg1;
- (id)schemas;
- (id)entityWithName:(id)arg1;
- (id)entitiesMapping;
- (id)entities;
- (id)dataClassWithName:(id)arg1;
- (id)dataClasses;
- (id)computeClosureOfEntityNames:(id)arg1 includeReferringEntities:(BOOL)arg2;
- (id)computeConservativeClosureOfEntityNames:(id)arg1;
- (id)entitiesIncludingRelatedEntities:(id)arg1;
- (id)dataClassNamesForEntities:(id)arg1;
- (id)entityNamesToTruthSegmentNames:(id)arg1;
- (id)_entityNamesToDataclassNames:(id)arg1;
- (id)dataclassNamesForEntitiesWithNames:(id)arg1;
- (id)entitiesWithDataClassName:(id)arg1;
- (BOOL)shouldSyncClient:(id)arg1 forEntityNames:(id)arg2;
- (id)clientsToAlertForClient:(id)arg1 entityNames:(id)arg2;
- (BOOL)shouldSyncClient:(id)arg1 withClient:(id)arg2 entityNames:(id)arg3;
- (void)unregisterClientWithIdentifier:(id)arg1;
- (void)registerClientWithIdentifier:(id)arg1 description:(id)arg2 descriptionFilePath:(id)arg3 descriptionBundleId:(id)arg4 descriptionBundleRelativePath:(id)arg5 descriptionBinRelativePath:(id)arg6 wasChanged:(char *)arg7;
- (void)updateClientIfDescriptionFileChanged:(id)arg1;
- (void)_validateClientDescriptionFilesAndUnregisterIfNecessary;
- (BOOL)shouldReparseDescriptionFileForObject:(id)arg1;
- (BOOL)shouldParseDescriptionForObject:(id)arg1 withDescriptionFilePath:(id)arg2 descriptionBundleId:(id)arg3 descriptionBundleRelativePath:(id)arg4 descriptionBinRelativePath:(id)arg5 updateFileReference:(BOOL)arg6;
- (void)_updateClient:(id)arg1 fromDescription:(id)arg2 forceRefresh:(BOOL)arg3;
- (void)_validateClient:(id)arg1;
- (void)_unregisterInvalidatedClientsRegisteredForEntities:(id)arg1 usingHelper:(id)arg2;
- (id)_isInvalidClient:(id)arg1;
- (BOOL)_shouldValidateClient:(id)arg1;
- (void)_updateClientInfoForClient:(id)arg1 fromDescription:(id)arg2;
- (id)latestGenerationForEntitiesNamed:(id)arg1;
- (void)_updatePushOnlyEntitiesForClient:(id)arg1 fromDescription:(id)arg2;
- (void)_updatePullOnlyEntitiesForClient:(id)arg1 fromDescription:(id)arg2;
- (void)_updateSyncStatesForClient:(id)arg1 fromDescription:(id)arg2 forceRefresh:(BOOL)arg3;
- (void)_updateSyncAlertToolForClient:(id)arg1 fromDescription:(id)arg2;
- (void)_removeDataDirectoryForClientWithId:(id)arg1;
- (void)_ensureTruthDirectoryExistsForDataclassNamed:(id)arg1;
- (void)_ensureDataDirectoryExistsForClientWithId:(id)arg1;
- (void)_replaceFileReferenceInObject:(id)arg1 forKey:(id)arg2 withPath:(id)arg3 relativeToAnchorFilePath:(id)arg4 bundleId:(id)arg5 bundleRelativePath:(id)arg6;
- (void)_replaceFileReferenceInObject:(id)arg1 forKey:(id)arg2 withPath:(id)arg3 bundleId:(id)arg4 bundleRelativePath:(id)arg5;
- (void)_replaceFileReferenceInObject:(id)arg1 forKey:(id)arg2 withPath:(id)arg3 bundleId:(id)arg4 bundleRelativePath:(id)arg5 binRelativePath:(id)arg6;
- (id)clientWithIdentifier:(id)arg1;
- (id)clientsSyncingEntityNames:(id)arg1;
- (id)clientIdentifiersThatSyncEntityNamesForMingler:(id)arg1;
- (id)allClientIdentifiers;
- (id)allClients;
- (id)dataDirectoryForClientWithIdentifier:(id)arg1;
- (id)dataDirectory;
- (id)fileReferenceWithPath:(id)arg1 bundleId:(id)arg2 bundleRelativePath:(id)arg3 windowsBinRelativePath:(id)arg4;
- (id)fileReferenceWithPath:(id)arg1 bundleId:(id)arg2 bundleRelativePath:(id)arg3;
- (id)replacementObjectForObject:(id)arg1;
- (void)noteChangesFromSyncState:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)noteChangesFromEntity:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)noteChangesFromDataClass:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)noteChangesFromSchema:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)noteChangesFromFileReference:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)noteChangesFromClient:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)bumpAnchor;
- (void)setShouldBumpAnchorOnNextChange:(BOOL)arg1;
- (unsigned int)anchor;
- (void)recordSyncPlanInformation:(id)arg1;
- (BOOL)_releaseAdminDBLockIfNecessary;
- (void)rollback;
- (void)enableFlush;
- (void)disableFlush;
- (void)readObjectGraph;
- (id)nameNumberProvider;
- (void)readSchemasArchive;
- (void)refreshNameNumberProvider:(id)arg1;
- (void)assignNameNumberMappings:(id)arg1;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
- (void)updateMetadataAndPostChangeNotifications;
- (void)writeSchemasArchive;
- (void)_updateListOfClientsThatSyncWithOtherClients;
- (void)_updateDataClassNamesToClientIdentifiers:(id)arg1 forClient:(id)arg2;
- (void)dealloc;
- (void)loadAdminDatabaseWithoutNotifications;
- (void)loadAdminDatabase;
- (void)rememberIfDataVersionIsPreNameNumber;
- (BOOL)dataVersionIsLeopard;
- (BOOL)dataVersionIsTigerOrOlder;
- (id)initWithDataDirectory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

