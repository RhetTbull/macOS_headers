//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DEDPairingProtocol-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface FBADeviceManager : NSObject <DEDPairingProtocol>
{
    BOOL _isScanning;
    BOOL _hasScannedAtLeastOnce;
    BOOL _hidesNotConfiguredDevices;
    NSMutableDictionary *__notConfiguredDevicesMatchingPlatformCache;
    NSArray *__notConfiguredDevicesCache;
    long long _scanRequestCount;
    NSMutableArray *_postScanTaskQueue;
    NSMutableDictionary *_beginPairingBlocks;
    NSMutableDictionary *_tryPinBlocks;
    NSMutableDictionary *_devicePinAttemptCount;
}

+ (id)supportedPlatforms;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property BOOL hidesNotConfiguredDevices; // @synthesize hidesNotConfiguredDevices=_hidesNotConfiguredDevices;
@property(retain) NSMutableDictionary *devicePinAttemptCount; // @synthesize devicePinAttemptCount=_devicePinAttemptCount;
@property(retain) NSMutableDictionary *tryPinBlocks; // @synthesize tryPinBlocks=_tryPinBlocks;
@property(retain) NSMutableDictionary *beginPairingBlocks; // @synthesize beginPairingBlocks=_beginPairingBlocks;
@property(retain) NSMutableArray *postScanTaskQueue; // @synthesize postScanTaskQueue=_postScanTaskQueue;
@property BOOL hasScannedAtLeastOnce; // @synthesize hasScannedAtLeastOnce=_hasScannedAtLeastOnce;
@property BOOL isScanning; // @synthesize isScanning=_isScanning;
@property long long scanRequestCount; // @synthesize scanRequestCount=_scanRequestCount;
@property(retain) NSArray *_notConfiguredDevicesCache; // @synthesize _notConfiguredDevicesCache=__notConfiguredDevicesCache;
@property(retain) NSMutableDictionary *_notConfiguredDevicesMatchingPlatformCache; // @synthesize _notConfiguredDevicesMatchingPlatformCache=__notConfiguredDevicesMatchingPlatformCache;
- (id)groupedDevicesSortDescriptors;
- (id)dedDevicesSortDescriptors;
- (id)devicesMatchingPlatform:(id)arg1 withDevices:(id)arg2;
- (void)decrementScanRequest;
- (void)incrementScanRequest;
- (BOOL)canStopScan;
- (void)_invalidateCaches;
- (void)_updateStoredDevicesWithConfiguredDevices:(id)arg1;
- (void)_updateStoredDevices;
- (void)_postDeviceChangeNotification;
- (id)ded;
- (id)devicesFromDefaults;
- (void)_drainPostScanTaskQueue;
- (void)runAfterScan:(CDUnknownBlockType)arg1;
- (void)stopScannning;
- (void)beginScanning;
- (void)tryPairingDevice:(id)arg1 withPin:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginPairingDevice:(id)arg1 showUIBlock:(CDUnknownBlockType)arg2;
- (void)_incrementPinChallengeAttemptForDevice:(id)arg1;
- (unsigned long long)_pinAttemptCountForDevice:(id)arg1;
- (void)_reportPinAttemptForDevice:(id)arg1 success:(BOOL)arg2;
- (void)_failedPinChallengeForDevice:(id)arg1;
- (void)_showPinChallengeForDevice:(id)arg1;
- (void)successPINForDevice:(id)arg1;
- (void)promptPINForDevice:(id)arg1;
- (id)groupedDeviceWithIdentifier:(id)arg1;
- (id)groupedDeviceForDEDDevice:(id)arg1;
- (id)thisDevice;
- (id)allDevices;
- (id)_allDevicesFromDEDDevices:(id)arg1;
- (id)_availableDevicesWithUserVisiblePlatforms:(id)arg1;
- (id)availableDevices;
- (id)_configuredDevicesWithAvailableDevices:(id)arg1;
- (id)configuredDevices;
- (id)notConfiguredDevices;
- (id)notConfiguredDevicesMatchingPlatform:(id)arg1;
- (BOOL)hasAnyConfiguredDevicesMatchingPlatform:(id)arg1;
- (id)_preferredTargetDevicesForFollowup:(id)arg1 withConfiguredDevices:(id)arg2;
- (id)preferredTargetDevicesForFollowup:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

