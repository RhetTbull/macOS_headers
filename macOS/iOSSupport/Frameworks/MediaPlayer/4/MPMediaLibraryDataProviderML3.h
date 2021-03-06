//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPMediaLibraryDataProviderPrivate-Protocol.h>
#import <MediaPlayer/MPUserIdentityConsuming-Protocol.h>

@class ICUserIdentity, ML3MusicLibrary, MPMediaEntityCache, MPMediaLibrary, NSArray, NSOperationQueue, NSSet, NSString;
@protocol MPArtworkDataSource, OS_dispatch_queue, OS_dispatch_source;

@interface MPMediaLibraryDataProviderML3 : NSObject <MPMediaLibraryDataProviderPrivate, MPUserIdentityConsuming>
{
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
    NSObject<OS_dispatch_queue> *_cloudUpdateQueue;
    unsigned long long _backgroundTask;
    unsigned long long _backgroundTaskCount;
    BOOL _hasScheduledEventPosting;
    long long _refreshState;
    NSString *_uniqueIdentifier;
    NSOperationQueue *_setValuesWidthLimitedQueue;
    NSObject<OS_dispatch_queue> *_entitiesAddedOrRemovedNotificationQueue;
    NSObject<OS_dispatch_source> *_entitiesAddedOrRemovedCoalescingTimer;
    ML3MusicLibrary *_library;
    MPMediaEntityCache *_entityCache;
    id <MPArtworkDataSource> _artworkDataSource;
    ICUserIdentity *_userIdentity;
    MPMediaLibrary *_mediaLibrary;
}

+ (id)_unadjustedValueForMPProperty:(id)arg1 withDefaultValue:(id)arg2;
+ (id)_unadjustedValueForItemDateWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemTimeWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemPropertyRatingWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemPropertyVolumeAdjustmentWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemPropertyVolumeNormalizationWithDefaultValue:(id)arg1;
+ (id)onDiskProviders;
- (void).cxx_destruct;
@property(nonatomic) __weak MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(readonly, nonatomic) id <MPArtworkDataSource> artworkDataSource; // @synthesize artworkDataSource=_artworkDataSource;
@property(readonly, nonatomic) MPMediaEntityCache *entityCache; // @synthesize entityCache=_entityCache;
@property(retain, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;
- (BOOL)_removeEntitiesWithIdentifiers:(long long *)arg1 count:(unsigned long long)arg2 entityClass:(Class)arg3;
- (void)_loadValueForAggregateFunction:(id)arg1 entityClass:(Class)arg2 property:(id)arg3 query:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_loadProperties:(id)arg1 ofEntityWithIdentifier:(long long)arg2 ML3EntityClass:(Class)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_libraryCloudLibraryAvailabilityDidChange:(id)arg1;
- (void)_libraryUIDDidChange:(id)arg1;
- (void)_syncGenerationDidChange:(id)arg1;
- (void)_displayValuesDidChange:(id)arg1;
- (void)_invisiblePropertiesDidChange:(id)arg1;
- (void)_dynamicPropertiesDidChange:(id)arg1;
- (void)_libraryEntitiesAddedOrRemoved:(id)arg1;
- (void)_libraryPathDidChange:(id)arg1;
- (void)_libraryContentsDidChange:(id)arg1;
- (BOOL)_dataProviderSupportsEntityChangeTracking;
- (void)_postEvents;
- (void)_coalesceEvents;
- (id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3;
- (id)_adjustedItemPropertyVerifiedIntegrityOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyAssetURLOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyEQPresetOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyContentRatingOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyChaptersOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertySeasonNameOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertySeasonNumberOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyChapterArtworkTimesOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyEpisodeNumberOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyMovieInfoOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyFilePathOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemNonnullDateOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemDateOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyRatingOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyVolumeAdjustmentOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyVolumeNormalizationOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemTimeOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedPropertyMediaTypeOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedPlaylistPropertySeedItemsOfEntity:(id)arg1 withDefaultValue:(id)arg2;
@property(copy, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
- (void)performBackgroundTaskWithBlock:(CDUnknownBlockType)arg1;
- (id)ML3SystemFilterPredicatesWithGroupingType:(long long)arg1 cloudTrackFilteringType:(long long)arg2 subscriptionFilteringOptions:(long long)arg3 additionalFilterPredicates:(id)arg4;
- (id)systemFilterPredicatesWithGroupingType:(long long)arg1 cloudTrackFilteringType:(long long)arg2 subscriptionFilteringOptions:(long long)arg3;
- (void)setLibraryPublicContainerFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2;
- (void)setLibraryPublicEntityFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2;
- (void)setLibraryContainerFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2;
- (void)setLibraryEntityFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2;
- (void)clearLocationPropertiesOfItemWithIdentifier:(long long)arg1;
- (void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3;
- (id)itemResultSetForQueryCriteria:(id)arg1;
- (id)collectionResultSetForQueryCriteria:(id)arg1;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(long long)arg2 inUsersLibrary:(BOOL)arg3 itemBlock:(CDUnknownBlockType)arg4 collectionBlock:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) NSString *syncValidity;
@property(readonly, nonatomic) NSArray *preferredSubtitleLanguages;
@property(readonly, nonatomic) NSArray *preferredAudioLanguages;
- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)removeFirstItemFromPlaylistWithIdentifier:(long long)arg1;
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1;
- (void)removeItemsAtIndexes:(id)arg1 inPlaylistWithIdentifier:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)sdk_addItemWithOpaqueIdentifier:(id)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addItemsWithIdentifiers:(id)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setItemsWithIdentifiers:(id)arg1 forPlaylistWithIdentifier:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)removeItemsWithIdentifiers:(long long *)arg1 count:(unsigned long long)arg2;
- (BOOL)deleteItemsWithIdentifiers:(long long *)arg1 count:(unsigned long long)arg2;
- (BOOL)removePlaylistWithIdentifier:(long long)arg1;
- (long long)sdk_addPlaylistWithValuesForProperties:(id)arg1;
- (long long)addPlaylistWithValuesForProperties:(id)arg1;
@property(readonly, nonatomic) long long playbackHistoryPlaylistPersistentID;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofPlaylistWithIdentifier:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofCollectionWithIdentifier:(long long)arg3 groupingType:(long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)setValues:(id)arg1 forProperties:(id)arg2 forItemPersistentIDs:(id)arg3;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (BOOL)isCurrentThreadInTransaction;
- (void)performReadTransactionWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)loadProperties:(id)arg1 ofCollectionWithIdentifier:(long long)arg2 groupingType:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)loadProperties:(id)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)loadValueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)loadValueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)enumerateCollectionIdentifiersForQueryCriteria:(id)arg1 ordered:(BOOL)arg2 cancelBlock:(CDUnknownBlockType)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateItemIdentifiersForQueryCriteria:(id)arg1 ordered:(BOOL)arg2 cancelBlock:(CDUnknownBlockType)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (BOOL)recordPlayEventForPlaylistPersistentID:(long long)arg1;
- (BOOL)recordPlayEventForAlbumPersistentID:(long long)arg1;
- (void)_addGlobalPlaylistsToLibraryDatabase:(id)arg1 asLibraryOwned:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addNonLibraryOwnedPlaylistsWithGlobalIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addGlobalPlaylistWithID:(id)arg1 andAddToCloudLibrary:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned long long)arg5;
- (void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5;
- (void)_importStoreItemElements:(id)arg1 withReferralObject:(id)arg2 andAddTracksToCloudLibrary:(BOOL)arg3 usingCloudAdamID:(long long)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)addPlaylistStoreItemsForLookupItems:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)performStoreItemLibraryImport:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sdk_addItemWithOpaqueID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addTracksToMyLibrary:(id)arg1;
- (id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2;
- (id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
- (BOOL)deleteDatabaseProperty:(id)arg1;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (id)valueForDatabaseProperty:(id)arg1;
@property(readonly, nonatomic) NSArray *localizedSectionIndexTitles;
- (id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(CDUnknownBlockType)arg2;
- (BOOL)collectionExistsContainedWithinSyncIDs:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (BOOL)collectionExistsWithCloudUniversalLibraryID:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (BOOL)collectionExistsWithSagaID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (BOOL)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (BOOL)collectionExistsWithName:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (BOOL)collectionExistsContainedWithinPersistentIDs:(const unsigned long long *)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long *)arg4;
- (BOOL)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (long long)itemPersistentIDForStoreID:(long long)arg1;
- (BOOL)itemExistsWithPersistentID:(unsigned long long)arg1;
- (BOOL)hasUbiquitousBookmarkableItems;
- (BOOL)hasGeniusMixes;
- (BOOL)hasMediaOfType:(unsigned long long)arg1;
- (BOOL)writable;
- (long long)playlistGeneration;
- (unsigned long long)syncGenerationID;
- (unsigned long long)currentEntityRevision;
- (id)lastModifiedDate;
@property(readonly, nonatomic) NSString *databasePath;
@property(readonly, copy, nonatomic) NSString *accountDSID;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) id <MPArtworkDataSource> completeMyCollectionArtworkDataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isGeniusEnabled;
@property(readonly, nonatomic) NSSet *propertiesToCache;
@property(readonly, nonatomic) BOOL requiresAuthentication;
@property(readonly) Class superclass;

@end

