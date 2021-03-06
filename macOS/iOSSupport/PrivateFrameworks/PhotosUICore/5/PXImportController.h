//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PHImportServiceImporterDelegate-Protocol.h>
#import <PhotosUICore/PHImportSourceObserver-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXImportAssetsDataSourceManagerDelegate-Protocol.h>
#import <PhotosUICore/PXMutableImportController-Protocol.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSObject, NSProgress, NSString, NSTimer, PHAssetCollection, PHImportSource, PHPhotoLibrary, PXImportAssetsDataSourceManager, PXImportDeleteAction, PXImportMediaLoadingCoordinator, PXImportMediaProvider, PXImportSessionInfo, PXPowerController, PXSectionedSelectionManager, PXSelectionSnapshot;
@protocol OS_dispatch_queue, PXImportControllerImportCompletionDelegate;

@interface PXImportController : PXObservable <PXImportAssetsDataSourceManagerDelegate, PXMutableImportController, PHImportServiceImporterDelegate, PHImportSourceObserver, PXChangeObserver>
{
    NSArray *_lastSelectedModels;
    BOOL _loadingContent;
    BOOL _hasLoadedInitialBatchOfAssets;
    BOOL _loadingInitialBatchOfAssets;
    BOOL _userRequiredToTrustHostOnSourceDevice;
    BOOL _importingAssets;
    BOOL _deletingAssets;
    BOOL _alreadyImportedItemsSelectable;
    BOOL _hasLoadedAssets;
    BOOL _hasReceivedImportSourceAssetChanges;
    BOOL _isLoadingInitialBatchOfAssets;
    unsigned short _imageFormat;
    unsigned int _importAssetsPowerAssertionIdentifier;
    unsigned int _deleteAssetsPowerAssertionIdentifier;
    unsigned int _loadAssetsPowerAssertionIdentifier;
    PHImportSource *_importSource;
    PHPhotoLibrary *_photoLibrary;
    NSObject<PXImportControllerImportCompletionDelegate> *_importCompletionDelegate;
    PXImportMediaProvider *_importMediaProvider;
    PXImportAssetsDataSourceManager *_dataSourceManager;
    PXImportSessionInfo *_importSessionInfo;
    NSProgress *_importProgress;
    PHAssetCollection *_importDestinationAlbum;
    PXImportDeleteAction *_deleteAction;
    PXSectionedSelectionManager *_selectionManager;
    NSTimer *_initialBatchOfAssetsTimer;
    NSMutableDictionary *_sharedViewModelsById;
    NSObject<OS_dispatch_queue> *_sharedViewModelsUpdateQueue;
    NSMutableSet *_otherDataSourceManagers;
    NSObject<OS_dispatch_queue> *_otherDataSourceManagersQueue;
    PXPowerController *_powerController;
    NSTimer *_assetLoadingPowerAssertionTimer;
    CDUnknownBlockType _importCompletionHandler;
    CDUnknownBlockType _deleteCompletionHandler;
    PXSelectionSnapshot *_lastSelectionSnapshot;
    PXImportMediaLoadingCoordinator *_mediaLoadingCoordinator;
}

+ (void)unregisterPXImportControllerNotificationsReceiver:(struct NSObject *)arg1;
+ (void)registerPXImportControllerNotificationsReceiver:(struct NSObject *)arg1;
+ (id)importFilesAtURLs:(id)arg1 photoLibrary:(id)arg2 collection:(id)arg3 checkDuplicates:(BOOL)arg4 referenced:(BOOL)arg5 delegate:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)favoriteAssetsFromImportResults:(id)arg1 photoLibrary:(id)arg2;
+ (id)itemsConstrainedByAvailableDiskSpaceFromItems:(id)arg1 additionalBytesRequired:(inout long long *)arg2;
+ (id)assetsForModels:(id)arg1;
+ (id)importOperationQueue;
@property(readonly, nonatomic) PXImportMediaLoadingCoordinator *mediaLoadingCoordinator; // @synthesize mediaLoadingCoordinator=_mediaLoadingCoordinator;
@property(retain, nonatomic) PXSelectionSnapshot *lastSelectionSnapshot; // @synthesize lastSelectionSnapshot=_lastSelectionSnapshot;
@property(copy, nonatomic) CDUnknownBlockType deleteCompletionHandler; // @synthesize deleteCompletionHandler=_deleteCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType importCompletionHandler; // @synthesize importCompletionHandler=_importCompletionHandler;
@property(retain, nonatomic) NSTimer *assetLoadingPowerAssertionTimer; // @synthesize assetLoadingPowerAssertionTimer=_assetLoadingPowerAssertionTimer;
@property(nonatomic) unsigned int loadAssetsPowerAssertionIdentifier; // @synthesize loadAssetsPowerAssertionIdentifier=_loadAssetsPowerAssertionIdentifier;
@property(nonatomic) unsigned int deleteAssetsPowerAssertionIdentifier; // @synthesize deleteAssetsPowerAssertionIdentifier=_deleteAssetsPowerAssertionIdentifier;
@property(nonatomic) unsigned int importAssetsPowerAssertionIdentifier; // @synthesize importAssetsPowerAssertionIdentifier=_importAssetsPowerAssertionIdentifier;
@property(retain, nonatomic) PXPowerController *powerController; // @synthesize powerController=_powerController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *otherDataSourceManagersQueue; // @synthesize otherDataSourceManagersQueue=_otherDataSourceManagersQueue;
@property(readonly, nonatomic) NSMutableSet *otherDataSourceManagers; // @synthesize otherDataSourceManagers=_otherDataSourceManagers;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedViewModelsUpdateQueue; // @synthesize sharedViewModelsUpdateQueue=_sharedViewModelsUpdateQueue;
@property(readonly, nonatomic) NSMutableDictionary *sharedViewModelsById; // @synthesize sharedViewModelsById=_sharedViewModelsById;
@property(retain, nonatomic) NSTimer *initialBatchOfAssetsTimer; // @synthesize initialBatchOfAssetsTimer=_initialBatchOfAssetsTimer;
@property(nonatomic) BOOL isLoadingInitialBatchOfAssets; // @synthesize isLoadingInitialBatchOfAssets=_isLoadingInitialBatchOfAssets;
@property(readonly, nonatomic, getter=isLoadingInitialBatchOfAssets) BOOL loadingInitialBatchOfAssets; // @synthesize loadingInitialBatchOfAssets=_loadingInitialBatchOfAssets;
@property(nonatomic) BOOL hasReceivedImportSourceAssetChanges; // @synthesize hasReceivedImportSourceAssetChanges=_hasReceivedImportSourceAssetChanges;
@property(nonatomic) BOOL hasLoadedAssets; // @synthesize hasLoadedAssets=_hasLoadedAssets;
@property(nonatomic) BOOL alreadyImportedItemsSelectable; // @synthesize alreadyImportedItemsSelectable=_alreadyImportedItemsSelectable;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(retain, nonatomic) PXImportDeleteAction *deleteAction; // @synthesize deleteAction=_deleteAction;
@property(readonly, nonatomic, getter=isDeletingAssets) BOOL deletingAssets; // @synthesize deletingAssets=_deletingAssets;
@property(retain, nonatomic) PHAssetCollection *importDestinationAlbum; // @synthesize importDestinationAlbum=_importDestinationAlbum;
@property(retain, nonatomic) NSProgress *importProgress; // @synthesize importProgress=_importProgress;
@property(retain, nonatomic) PXImportSessionInfo *importSessionInfo; // @synthesize importSessionInfo=_importSessionInfo;
@property(readonly, nonatomic, getter=isImportingAssets) BOOL importingAssets; // @synthesize importingAssets=_importingAssets;
@property(nonatomic, getter=isUserRequiredToTrustHostOnSourceDevice) BOOL userRequiredToTrustHostOnSourceDevice; // @synthesize userRequiredToTrustHostOnSourceDevice=_userRequiredToTrustHostOnSourceDevice;
@property(nonatomic) BOOL hasLoadedInitialBatchOfAssets; // @synthesize hasLoadedInitialBatchOfAssets=_hasLoadedInitialBatchOfAssets;
@property(readonly, nonatomic, getter=isLoadingContent) BOOL loadingContent; // @synthesize loadingContent=_loadingContent;
@property(readonly, nonatomic) PXImportAssetsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(readonly, nonatomic) PXImportMediaProvider *importMediaProvider; // @synthesize importMediaProvider=_importMediaProvider;
@property(nonatomic) __weak NSObject<PXImportControllerImportCompletionDelegate> *importCompletionDelegate; // @synthesize importCompletionDelegate=_importCompletionDelegate;
@property(readonly, nonatomic) unsigned short imageFormat; // @synthesize imageFormat=_imageFormat;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) PHImportSource *importSource; // @synthesize importSource=_importSource;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)assetLoadingPowerAssertionTimerFired;
- (void)stopTimedAssetsLoadingPowerAssertion;
- (void)restartTimedAssetsLoadingPowerAssertion;
- (void)stopObservingImportProgress;
- (void)startObservingImportProgress;
- (void)sendActionProgress:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)selectedItems;
- (void)deselectItem:(id)arg1;
- (void)selectItem:(id)arg1;
- (void)setSelected:(BOOL)arg1 forItems:(id)arg2;
- (void)finishDeletingItems;
- (void)deleteItems:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setDeletingAssets:(BOOL)arg1;
- (void)completedImportRecord:(id)arg1;
- (void)finishImportingWithResults:(id)arg1;
- (void)stopImport;
- (void)importItems:(id)arg1 configuration:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setImportingAssets:(BOOL)arg1;
- (id)viewModelMapForImportAssetsDataSourceManager:(id)arg1;
- (void)removeDataSourceManager:(id)arg1;
- (id)createDataSourceManager;
- (void)userHasTrustedHostForImportSource:(id)arg1;
- (void)userRequiredToTrustHostForImportSource:(id)arg1;
- (void)nameDidChangeForImportSource:(id)arg1;
- (void)capabilitiesDidChangeForImportSource:(id)arg1;
- (long long)importAsset:(id)arg1 asDuplicateOfLibraryAsset:(id)arg2 applyToAll:(char *)arg3;
- (void)importSource:(id)arg1 didDeleteAsset:(id)arg2;
- (void)importSource:(id)arg1 didUpdateAsset:(id)arg2 propertyMask:(unsigned short)arg3;
- (void)importSource:(id)arg1 didRemoveAssets:(id)arg2;
- (void)importSource:(id)arg1 didAddAssets:(id)arg2;
- (void)startInitialBatchOfAssetsTimerWithTimeout:(double)arg1;
- (void)handleImportSourceModifiedAssets;
- (void)loadAssets;
- (void)setLoadingInitialBatchOfAssets:(BOOL)arg1;
- (void)setLoadingContent:(BOOL)arg1;
- (id)mutableChangeObject;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)shutdown;
- (id)initWithImportSource:(id)arg1 photoLibrary:(id)arg2 imageFormat:(unsigned short)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

