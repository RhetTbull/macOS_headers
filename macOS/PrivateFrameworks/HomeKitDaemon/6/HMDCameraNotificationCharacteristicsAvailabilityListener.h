//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"

@class HMDHAPAccessory, HMDNotificationRegistration, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface HMDCameraNotificationCharacteristicsAvailabilityListener : HMFObject <HMFLogging>
{
    NSSet *_availableCharacteristics;
    id <HMDCameraNotificationCharacteristicsAvailabilityListenerDelegate> _delegate;
    HMDHAPAccessory *_accessory;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDNotificationRegistration *_notificationRegistration;
}

+ (id)logCategory;
@property(readonly) HMDNotificationRegistration *notificationRegistration; // @synthesize notificationRegistration=_notificationRegistration;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property __weak id <HMDCameraNotificationCharacteristicsAvailabilityListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSSet *availableCharacteristics; // @synthesize availableCharacteristics=_availableCharacteristics;
- (void).cxx_destruct;
- (void)handleAccessoryAdded:(id)arg1;
- (void)handleAccessoryRoomChange:(id)arg1;
- (void)handleServicesUpdated:(id)arg1;
- (void)handleCharacteristicsUpdated:(id)arg1;
- (void)_notifyDelegate;
- (id)_accessoryCharacteristicsToObserve;
- (id)_sameRoomAccessoriesCharacteristicsToObserve;
- (id)_recordingTriggerCharacteristicTypeForServiceType:(id)arg1;
- (void)_registerForNotifications;
- (void)start;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

