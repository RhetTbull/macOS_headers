//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSPDocumentResourceDownloader-Protocol.h"
#import "TSPFileCoordinatorDelegate-Protocol.h"
#import "TSPLazyReferenceDelegate-Protocol.h"
#import "TSPObjectDelegate-Protocol.h"
#import "TSPPassphraseConsumer-Protocol.h"
#import "TSPSupportDirectoryDelegate-Protocol.h"

@class NSData, NSHashTable, NSMapTable, NSProgress, NSRecursiveLock, NSSet, NSString, NSURL, NSUUID, SFUCryptoKey, TSPComponentManager, TSPDataDownloadManager, TSPDataManager, TSPDocumentDataWatcher, TSPDocumentMetadata, TSPDocumentProperties, TSPDocumentResourceDataProvider, TSPDocumentResourceManager, TSPDocumentRevision, TSPDocumentSaveOperationState, TSPObject, TSPObjectContainer, TSPObjectUUIDMap, TSPPackage, TSPPackageWriteCoordinator, TSPRegistry, TSPSupportManager, TSPSupportMetadata, TSUTemporaryDirectory;
@protocol NSFilePresenter, OS_dispatch_group, OS_dispatch_queue, TSPObjectContextDelegate;

@interface TSPObjectContext : NSObject <TSPFileCoordinatorDelegate, TSPObjectDelegate, TSPLazyReferenceDelegate, TSPSupportDirectoryDelegate, TSPDocumentResourceDownloader, TSPPassphraseConsumer>
{
    // Error parsing type: Aq, name: _lastObjectIdentifier
    // Error parsing type: Aq, name: _modifyObjectToken
    // Error parsing type: Ai, name: _modifyObjectCount
    unsigned int _mode;
    SFUCryptoKey *_decryptionKey;
    NSURL *_documentURL;
    TSPPackage *_documentPackage;
    TSPPackage *_supportPackage;
    NSURL *_supportURL;
    TSPDocumentProperties *_documentProperties;
    NSMapTable *_objects;
    TSPObjectUUIDMap *_objectUUIDMap;
    TSPDocumentRevision *_documentRevision;
    long long _preferredPackageType;
    NSObject<OS_dispatch_queue> *_objectsQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSRecursiveLock *_readLock;
    NSObject<OS_dispatch_queue> *_documentStateQueue;
    NSObject<OS_dispatch_queue> *_dataAttributesQueue;
    NSObject<OS_dispatch_queue> *_loadObserversQueue;
    NSObject<OS_dispatch_queue> *_runLoadObserversQueue;
    NSObject<OS_dispatch_queue> *_runLoadObserversForKnownObjectQueue;
    NSObject<OS_dispatch_queue> *_documentResourceDataProviderQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    TSPDocumentResourceDataProvider *_documentResourceDataProvider;
    NSProgress *_nextSaveProgress;
    TSPDocumentSaveOperationState *_saveOperationState;
    TSPPackageWriteCoordinator *_packageWriteCoordinator;
    NSHashTable *_objectsToIgnoreModifications;
    NSHashTable *_objectModifyDelegates;
    BOOL _isWaitingForEndSave;
    NSObject<OS_dispatch_group> *_pendingEndSaveGroup;
    NSObject<OS_dispatch_group> *_outstandingReadsGroup;
    NSObject<OS_dispatch_queue> *_temporaryDirectoryQueue;
    TSUTemporaryDirectory *_temporaryDirectory;
    struct unordered_map<const long long, NSMutableArray *, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, NSMutableArray *>>> _loadObservers;
    NSObject<OS_dispatch_queue> *_asynchronousObjectModifierQueue;
    long long _suspendAsynchronousObjectModifiersCount;
    NSHashTable *_asynchronousObjectModifiers;
    NSHashTable *_suspendedAsynchronousObjectModifiers;
    TSPObject *_supportObject;
    TSPPackageWriteCoordinator *_supportWriteCoordinator;
    struct {
        unsigned int delegateRespondsToAdditionalDocumentPropertiesForWrite:1;
        unsigned int delegateRespondsToAdditionalDocumentSupportPropertiesForWrite:1;
        unsigned int delegateRespondsToDocumentPasswordHintForWrite:1;
        unsigned int delegateRespondsToPackageDataForWrite:1;
        unsigned int delegateRespondsToAreNewExternalReferencesToDataAllowed:1;
        unsigned int delegateRespondsToAreExternalReferencesToDataAllowedAtURL:1;
        unsigned int delegateRespondsToBaseUUIDForObjectUUID:1;
        unsigned int delegateRespondsToPreserveDocumentRevisionIdentifierForSaveURL:1;
        unsigned int delegateRespondsToFilePresenter:1;
        unsigned int delegateRespondsToSupportDirectoryURLReturningIsUnique:1;
        unsigned int delegateRespondsToSupportDirectoryURL:1;
        unsigned int delegateRespondsToIgnoreDocumentSupport:1;
        unsigned int delegateRespondsToIsDocumentSupportTemporary:1;
        unsigned int delegateRespondsToNewObjectUUID:1;
        unsigned int delegateRespondsToIsInCollaborationModeForContext:1;
        unsigned int delegateRespondsToIsInReadOnlyModeForContext:1;
        unsigned int skipDocumentUpgrade:1;
    } _flags;
    BOOL _losesDataOnWrite;
    NSSet *_unsupportedFeatureIdentifiers;
    NSString *_documentPasswordHint;
    TSPObject *_documentObject;
    id <TSPObjectContextDelegate> _delegate;
    TSPRegistry *_registry;
    TSPComponentManager *_componentManager;
    TSPDataManager *_dataManager;
    TSPDataDownloadManager *_dataDownloadManager;
    TSPDocumentResourceManager *_documentResourceManager;
    TSPDocumentDataWatcher *_documentDataWatcher;
    TSPSupportManager *_supportManager;
    TSPObjectContainer *_documentObjectContainer;
    TSPObjectContainer *_supportObjectContainer;
    TSPDocumentMetadata *_documentMetadata;
    TSPSupportMetadata *_supportMetadata;
    unsigned long long _saveToken;
    NSData *_passwordVerifier;
}

+ (void)waitForPendingEndSaveGroup:(id)arg1;
+ (BOOL)dumpMessagesForDocument:(id)arg1 decryptionKey:(id)arg2 toURL:(id)arg3;
+ (id)requestDownloadingDocumentResourcesForURL:(id)arg1 decryptionKey:(id)arg2;
+ (BOOL)requestDownloadingDocumentResourcesForURL:(id)arg1 decryptionKey:(id)arg2 usingDataProvider:(id)arg3;
+ (void)garbageCollectDocumentSupportWithKnownDocumentUUIDs:(id)arg1 delegate:(id)arg2;
+ (id)supportBundleURLForDocumentUUID:(id)arg1 delegate:(id)arg2;
+ (void)removeDefaultSupportDirectory;
+ (id)documentRevisionAtURL:(id)arg1 passphrase:(id)arg2 error:(id *)arg3;
+ (BOOL)isTangierEditingFormatURL:(id)arg1;
+ (BOOL)isNativeDirectoryFormatURL:(id)arg1;
+ (BOOL)isNativeOrTangierEditingFormatURL:(id)arg1;
+ (id)releaseQueue;
+ (BOOL)hasUnmaterializedRemoteDataAtURL:(id)arg1;
+ (BOOL)requestDownloadingDocumentResourcesForTemplateContainerURL:(id)arg1 usingDataProvider:(id)arg2;
+ (id)requestDownloadingDocumentResourcesForTemplateContainerURL:(id)arg1;
@property(readonly, nonatomic) NSData *passwordVerifier; // @synthesize passwordVerifier=_passwordVerifier;
@property(readonly, nonatomic) unsigned long long saveToken; // @synthesize saveToken=_saveToken;
@property(readonly, nonatomic) TSPSupportMetadata *supportMetadata; // @synthesize supportMetadata=_supportMetadata;
@property(readonly, nonatomic) TSPDocumentMetadata *documentMetadata; // @synthesize documentMetadata=_documentMetadata;
@property(readonly, nonatomic) TSPObjectContainer *supportObjectContainer; // @synthesize supportObjectContainer=_supportObjectContainer;
@property(readonly, nonatomic) TSPObjectContainer *documentObjectContainer; // @synthesize documentObjectContainer=_documentObjectContainer;
@property(readonly, nonatomic) TSPSupportManager *supportManager; // @synthesize supportManager=_supportManager;
@property(readonly, nonatomic) TSPDocumentDataWatcher *documentDataWatcher; // @synthesize documentDataWatcher=_documentDataWatcher;
@property(readonly, nonatomic) TSPDocumentResourceManager *documentResourceManager; // @synthesize documentResourceManager=_documentResourceManager;
@property(readonly, nonatomic) TSPDataDownloadManager *dataDownloadManager; // @synthesize dataDownloadManager=_dataDownloadManager;
@property(readonly, nonatomic) TSPDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(readonly, nonatomic) TSPComponentManager *componentManager; // @synthesize componentManager=_componentManager;
@property(readonly, nonatomic) TSPRegistry *registry; // @synthesize registry=_registry;
@property(nonatomic) __weak id <TSPObjectContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TSPObject *documentObject; // @synthesize documentObject=_documentObject;
@property(readonly, nonatomic) NSString *documentPasswordHint; // @synthesize documentPasswordHint=_documentPasswordHint;
@property(readonly, nonatomic) NSSet *unsupportedFeatureIdentifiers; // @synthesize unsupportedFeatureIdentifiers=_unsupportedFeatureIdentifiers;
@property(readonly, nonatomic) BOOL losesDataOnWrite; // @synthesize losesDataOnWrite=_losesDataOnWrite;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forObjectIdentifier:(long long)arg3 objectOrNil:(id)arg4;
- (id)addLoadedObjectsAndEnqueueNotifications:(id)arg1;
- (long long)updateModifyObjectToken;
- (id)objectWithUUID:(id)arg1 onlyIfLoaded:(BOOL)arg2 validateNewObjects:(BOOL)arg3 identifier:(long long *)arg4;
- (BOOL)isObjectInDocument:(id)arg1;
- (id)objectUUIDMap;
- (BOOL)canSetObjectUUIDForObject:(id)arg1;
- (id)newObjectUUIDForObject:(id)arg1;
- (long long)incrementLastObjectIdentifier:(long long)arg1;
@property(nonatomic) long long lastObjectIdentifier;
- (long long)newObjectIdentifier;
- (id)baseUUIDForObjectUUID;
@property(readonly, nonatomic) NSUUID *versionUUID;
- (BOOL)updateDocumentUUIDPreserveOriginalDocumentSupport:(BOOL)arg1 preserveShareUUID:(BOOL)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSUUID *documentUUID;
@property(readonly, nonatomic) TSPPackage *supportPackage;
@property(readonly, nonatomic) TSPPackage *documentPackage;
- (void)didReadDocumentObject:(id)arg1;
- (void)setDocumentObject:(id)arg1;
@property(readonly, nonatomic) BOOL shouldLoadAllComponents;
@property(readonly, nonatomic) BOOL ignoreDocumentResourcesWhileReading;
@property(readonly, nonatomic) BOOL ignoreVersionCheckingWhileReading;
@property(readonly, nonatomic) BOOL ignoreUnknownContentWhileReading;
@property(readonly, nonatomic) BOOL isDocumentSupportTemporary;
@property(readonly, nonatomic) BOOL ignoreDocumentSupport;
- (id)supportDirectoryURLReturningIsBundleURL:(char *)arg1;
- (void)willModifyObject:(id)arg1 duringReadOperation:(BOOL)arg2;
- (void)endIgnoringModificationsForObject:(id)arg1;
- (void)beginIgnoringModificationsForObject:(id)arg1;
- (long long)modifyObjectTokenForNewObject;
@property(readonly, nonatomic) TSPObjectContext *context;
- (void)performReadUsingAccessorImpl:(CDUnknownBlockType)arg1;
- (void)performReadUsingAccessor:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <NSFilePresenter> filePresenter;
- (void)prepareForDocumentReplacementWithSuccess:(BOOL)arg1 forSafeSave:(BOOL)arg2;
- (void)prepareForDocumentReplacement;
- (void)waitForSaveToFinishIfNeeded;
- (id)initForQuickLookWithURL:(id)arg1 appDocumentResourcesURL:(id)arg2 appDocumentResourcesMetadataURL:(id)arg3 registry:(id)arg4 delegate:(id)arg5 passphrase:(id)arg6 error:(id *)arg7;
- (id)initForSpotlightWithURL:(id)arg1 delegate:(id)arg2 registry:(id)arg3 error:(id *)arg4;
- (void)registerAsynchronousObjectModifier:(id)arg1;
- (void)resumeAsynchronousModifications;
- (void)suspendAsynchronousModificationsForObjectTargetType:(unsigned long long)arg1;
- (void)removeObjectModifyDelegate:(id)arg1;
- (void)addObjectModifyDelegate:(id)arg1;
- (BOOL)containsDataConformingToUTI:(id)arg1;
@property(readonly, nonatomic) BOOL isInReadOnlyMode;
- (BOOL)isInCollaborationMode;
@property(readonly, nonatomic) SFUCryptoKey *decryptionKey;
@property(readonly, nonatomic) BOOL isPasswordProtected;
- (void)cancelDownloads;
- (id)downloadWithDelegate:(id)arg1 description:(id)arg2;
@property(readonly, nonatomic) BOOL isEstimatedDownloadSizePrecise;
@property(readonly, nonatomic) long long estimatedDownloadSize;
@property(readonly, nonatomic) BOOL needsDownload;
- (void)enumerateDocumentResourcesUsingBlock:(CDUnknownBlockType)arg1;
- (void)didFinishUsingDocumentResourceDataProvider:(id)arg1 withSuccess:(BOOL)arg2;
- (id)newDocumentResourceDataProvider;
- (BOOL)areExternalReferencesToDataAllowedAtURL:(id)arg1;
@property(readonly, nonatomic) BOOL areNewExternalReferencesToDataAllowed;
- (BOOL)areExternalReferencesSupported;
- (BOOL)readObjectForIdentifier:(long long)arg1 isWeakReference:(BOOL)arg2 rootObjectComponent:(id)arg3 object:(id *)arg4 error:(id *)arg5;
- (id)readObjectIfNeededForIdentifier:(long long)arg1 isWeakReference:(BOOL)arg2 componentIdentifier:(long long)arg3;
- (BOOL)readLazyReference:(id)arg1 object:(id *)arg2 error:(id *)arg3;
- (BOOL)readComponent:(id)arg1 isWeakReference:(BOOL)arg2 rootObject:(id *)arg3 allObjects:(id *)arg4 error:(id *)arg5;
- (BOOL)readComponent:(id)arg1 isWeakReference:(BOOL)arg2 documentPackage:(id)arg3 supportPackage:(id)arg4 rootObject:(id *)arg5 allObjects:(id *)arg6 error:(id *)arg7;
- (void)resumeLoadingModifiedFlushedComponents;
- (void)suspendLoadingModifiedFlushedComponentsAndWait;
- (void)prepareToReadSupportObjectWithDocumentResourceDataProvider:(id)arg1 areExternalDataReferencesAllowed:(BOOL)arg2 accessor:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) BOOL isSupportModified;
@property(readonly, nonatomic) BOOL isDocumentModified;
- (void)didReadSupportObject:(id)arg1;
- (void)setSupportObjectImpl:(id)arg1;
@property(retain, nonatomic) TSPObject *supportObject;
- (void)endWatchingDocumentData;
- (void)beginWatchingDocumentDataAtURL:(id)arg1;
- (BOOL)isWatchingDocumentData;
@property long long preferredPackageType;
- (void)resetDocumentRevision;
- (id)incrementDocumentRevisionWithIdentifier:(id)arg1;
@property(retain) TSPDocumentRevision *documentRevision;
- (void)didMoveSupportToURL:(id)arg1;
- (void)didMoveToURL:(id)arg1;
@property(readonly, nonatomic) NSURL *documentURL;
- (void)endIgnoringCachedObjectEviction;
- (void)beginIgnoringCachedObjectEviction;
- (id)dataWithContentsOfPackagePath:(id)arg1;
- (void)checkforDataWarningsWithPackageURL:(id)arg1;
- (id)temporaryDirectory;
- (void)performReadOperationOnKnownObjects:(CDUnknownBlockType)arg1;
- (id)objectForIdentifier:(long long)arg1;
- (BOOL)didFinishSuccessfullyReadingObjects:(id)arg1 readCoordinator:(id)arg2 finalizeHandlerQueue:(id)arg3;
- (BOOL)readWithReadCoordinator:(id)arg1 finalizeHandlerQueue:(id)arg2 rootObject:(id *)arg3 error:(id *)arg4 readCompletion:(CDUnknownBlockType)arg5;
- (BOOL)readDocumentObjectFromDatabasePackageURL:(id)arg1 error:(id *)arg2;
- (BOOL)continueReadingDocumentObjectFromPackageURL:(id)arg1 documentResourceDataProvider:(id)arg2 areExternalDataReferencesAllowed:(BOOL)arg3 error:(id *)arg4;
- (BOOL)readDocumentObjectFromPackageURL:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long documentDataSize;
- (unsigned long long)documentObjectSize;
@property(readonly, nonatomic) unsigned long long documentSize;
- (unsigned long long)estimatedDocumentSize;
@property(readonly, nonatomic) long long packageType;
@property(readonly, nonatomic) TSPDocumentProperties *documentProperties;
@property(readonly, nonatomic) NSString *passphraseHint;
@property(readonly, nonatomic) NSString *service;
@property(readonly, nonatomic) NSData *keychainGenericItem;
@property(readonly, nonatomic) NSString *lastPasswordAttempted;
- (BOOL)setPassphrase:(id)arg1;
- (BOOL)setDecryptionKey:(id)arg1;
- (void)endAssertOnModify;
- (void)beginAssertOnModify;
- (void)replaceDocumentObject:(id)arg1;
- (void)requestAutosaveForExpensiveCalculation;
- (void)requestAutosave;
- (void)resumeAutosaveWithReason:(id)arg1;
- (void)suspendAutosaveWithReason:(id)arg1;
- (BOOL)saveToURL:(id)arg1 packageType:(long long)arg2 encryptionKey:(id)arg3 originalURL:(id)arg4 error:(id *)arg5;
- (void)endSaveWithSuccess:(BOOL)arg1;
- (BOOL)endWriteWithSuccess:(BOOL)arg1 error:(id *)arg2;
- (id)currentPackageDataWriter;
- (BOOL)writeToURL:(id)arg1 originalPackage:(id)arg2 supportURL:(id)arg3 originalSupportPackage:(id)arg4 encryptionKey:(id)arg5 error:(id *)arg6;
- (BOOL)writeToURL:(id)arg1 encryptionKey:(id)arg2 error:(id *)arg3;
- (void)beginWriteWithOriginalURL:(id)arg1 relativeURLForExternalData:(id)arg2;
- (void)beginWriteWithOriginalURL:(id)arg1;
- (void)beginSaveToURL:(id)arg1 updateType:(long long)arg2 packageType:(long long)arg3 documentUUID:(id)arg4;
- (void)beginSaveToURL:(id)arg1 updateType:(long long)arg2 packageType:(long long)arg3;
- (id)prepareSaveProgress;
- (void)performAsynchronousWriteOperationOnDataAttributes:(CDUnknownBlockType)arg1;
- (void)performReadOperationOnDataAttributes:(CDUnknownBlockType)arg1;
- (void)performAsynchronousWriteOperationOnDocumentState:(CDUnknownBlockType)arg1;
- (void)performReadOperationOnDocumentState:(CDUnknownBlockType)arg1;
- (void)performReadOperation:(CDUnknownBlockType)arg1;
- (void)endWriteOperation;
- (void)beginWriteOperation;
- (void)closeFromDealloc:(BOOL)arg1;
- (void)close;
- (void)dealloc;
- (void)createInternalMetadataIfNeeded;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 registry:(id)arg3 documentResourceManager:(id)arg4 mode:(unsigned int)arg5 passphrase:(id)arg6 skipDocumentUpgrade:(BOOL)arg7 error:(id *)arg8;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 mode:(unsigned int)arg3 passphrase:(id)arg4 skipDocumentUpgrade:(BOOL)arg5 error:(id *)arg6;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 passphrase:(id)arg3 skipDocumentUpgrade:(BOOL)arg4 error:(id *)arg5;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 passphrase:(id)arg3 error:(id *)arg4;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (id)initWithDelegate:(id)arg1 registry:(id)arg2 documentResourceManager:(id)arg3;
- (id)initWithDelegate:(id)arg1;
- (id)init;
- (id)objectWithIdPath:(id)arg1;
- (id)objectWithUUIDString:(id)arg1;
- (id)unmaterializedRemoteData;
- (void)retryDownloadingMissingData;
- (id)documentResourceDataWithDigestString:(id)arg1 locator:(id)arg2 filename:(id)arg3;
- (id)dataWithDigest:(id)arg1 preferredFilename:(id)arg2 canDownload:(BOOL)arg3 downloadPriority:(long long)arg4;
- (id)dataWithDigest:(id)arg1;
- (id)deterministicObjectUUIDRelativeToObject:(id)arg1 offset:(unsigned long long)arg2;
- (id)UUIDsFromObjects:(id)arg1;
- (id)objectsFromUUIDs:(id)arg1;
- (id)objectWithUUIDPath:(id)arg1;
- (id)objectWithUUIDIfAvailableAndLoaded:(id)arg1;
- (id)objectWithUUIDIfAvailable:(id)arg1;
- (id)objectWithUUID:(id)arg1;
- (id)decodeViewStateObjectWithData:(id)arg1 needsDocumentVersionUUID:(BOOL)arg2 validator:(id)arg3;
- (id)encodeViewStateObject:(id)arg1 error:(id *)arg2;
- (void)encodeViewStateObject:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)objectLocale;
- (id)documentRoot;
- (void)proxyObjectMapping:(id)arg1 willProxyReferencedObject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

