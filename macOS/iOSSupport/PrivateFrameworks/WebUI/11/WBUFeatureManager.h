//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore;
@protocol OS_dispatch_queue;

@interface WBUFeatureManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    ACAccountStore *_accountStore;
    ACAccount *_account;
    BOOL _autoFillAvailable;
    BOOL _bookmarksAvailable;
    BOOL _readingListAvailable;
    BOOL _offlineReadingListAvailable;
    BOOL _cloudSyncAvailable;
    BOOL _inMemoryBookmarkChangeTrackingAvailable;
}

+ (BOOL)shouldOfferVirtualCards;
+ (id)webui_sharedFeatureManager;
+ (long long)accessLevel;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isInMemoryBookmarkChangeTrackingAvailable) BOOL inMemoryBookmarkChangeTrackingAvailable; // @synthesize inMemoryBookmarkChangeTrackingAvailable=_inMemoryBookmarkChangeTrackingAvailable;
@property(readonly, nonatomic, getter=isCloudSyncAvailable) BOOL cloudSyncAvailable; // @synthesize cloudSyncAvailable=_cloudSyncAvailable;
@property(readonly, nonatomic, getter=isOfflineReadingListAvailable) BOOL offlineReadingListAvailable; // @synthesize offlineReadingListAvailable=_offlineReadingListAvailable;
@property(readonly, nonatomic, getter=isReadingListAvailable) BOOL readingListAvailable; // @synthesize readingListAvailable=_readingListAvailable;
@property(readonly, nonatomic, getter=isBookmarksAvailable) BOOL bookmarksAvailable; // @synthesize bookmarksAvailable=_bookmarksAvailable;
@property(readonly, nonatomic, getter=isAutoFillAvailable) BOOL autoFillAvailable; // @synthesize autoFillAvailable=_autoFillAvailable;
@property(readonly, nonatomic, getter=isAirDropPasswordsAvailable) BOOL airDropPasswordsAvailable;
@property(readonly, nonatomic, getter=isPrivateBrowsingAvailable) BOOL privateBrowsingAvailable;
@property(readonly, nonatomic, getter=isCloudTabsAvailable) BOOL cloudTabsAvailable;
@property(readonly, nonatomic, getter=isCloudHistorySyncAvailable) BOOL cloudHistorySyncAvailable;
@property(readonly, nonatomic, getter=isCloudKitBookmarksAvailable) BOOL cloudKitBookmarksAvailable;
@property(readonly, nonatomic, getter=isCreditCardStorageAvailable) BOOL creditCardStorageAvailable;
- (BOOL)_isUsingManagedAppleID;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_updateAppleAccount;
- (void)_setupAccountStore;
- (void)_updateFeatureAvailabilityByAccessLevel;
- (void)dealloc;
- (id)init;

@end

