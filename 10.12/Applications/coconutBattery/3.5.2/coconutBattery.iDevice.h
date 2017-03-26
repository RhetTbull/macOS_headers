//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSTimer, _TtC14coconutBattery18CCBiOSDetailViewer;

@interface coconutBattery.iDevice : NSObject
{
    // Error parsing type: , name: historySOC
    // Error parsing type: , name: activeConnectionType
    // Error parsing type: , name: usbConnectionRef
    // Error parsing type: , name: wifiConnectionRef
    // Error parsing type: , name: detailViewer
    // Error parsing type: , name: trustStatus
    // Error parsing type: , name: usb
    // Error parsing type: , name: wifi
    // Error parsing type: , name: usbactive
    // Error parsing type: , name: wifiactive
    // Error parsing type: , name: socket
    // Error parsing type: , name: rawData
    // Error parsing type: , name: uuid
    // Error parsing type: , name: connection
    // Error parsing type: , name: isAvailable
    // Error parsing type: , name: useActualDesignCapacityForCalculationsAndDisplay
    // Error parsing type: , name: deviceData
    // Error parsing type: , name: batteryData
    // Error parsing type: , name: customTemperature
    // Error parsing type: , name: cachedIO
    // Error parsing type: , name: cachedMG
    // Error parsing type: , name: temperatureMode
    // Error parsing type: , name: timer
    // Error parsing type: , name: goodbyeRequest
    // Error parsing type: , name: powerRequest
    // Error parsing type: , name: mobileGestaltRequest
}

- (CDUnknownBlockType).cxx_destruct;
- (void)deviceValidatePairingWithRef:(struct am_device *)arg1;
- (int)deviceIsPairedWithRef:(struct am_device *)arg1;
- (void)deviceConnectWithRef:(struct am_device *)arg1;
- (void)startSecureServiceWithRef:(struct am_device *)arg1;
- (void)stopSessionWithRef:(struct am_device *)arg1;
- (void)startSessionWithRef:(struct am_device *)arg1;
- (id)sendCommandToDeviceWithRequest:(id)arg1;
- (void)getData;
- (void)getIOData;
- (void)getMDData;
- (void)getBasicDataWithDeviceRef:(struct am_device *)arg1;
- (void)startTimer;
- (void)establishConnectionWithRef:(struct am_device *)arg1;
- (id)listConnections;
- (id)getSavingData;
- (id)rawManufactureDateFromSerial;
- (void)test;
- (void)openDetailViewer;
- (id)convertHardwarePlatformWithRawValue:(id)arg1;
- (id)calcDiskSpaceUsedWithTotalDataAvailable:(unsigned long long)arg1 amountDataAvailable:(unsigned long long)arg2;
- (void)toggleTemperature;
- (void)setCustomTemperature;
- (id)batteryManufactureDateWithDeviceAnswerDict:(id)arg1;
- (id)batteryActivationDateWithDeviceAnswerDict:(id)arg1;
- (void)toggleAge;
- (id)setCustomAgeWithManufactureDate:(id)arg1;
- (id)init;
@property(nonatomic, readonly) NSDictionary *mobileGestaltRequest; // @synthesize mobileGestaltRequest;
@property(nonatomic, readonly) NSDictionary *powerRequest; // @synthesize powerRequest;
@property(nonatomic, readonly) NSDictionary *goodbyeRequest; // @synthesize goodbyeRequest;
@property(nonatomic, retain) NSTimer *timer; // @synthesize timer;
@property(nonatomic, copy) NSDictionary *cachedMG; // @synthesize cachedMG;
@property(nonatomic, copy) NSDictionary *cachedIO; // @synthesize cachedIO;
@property(nonatomic, copy) NSString *customTemperature; // @synthesize customTemperature;
@property(nonatomic, copy) NSDictionary *batteryData; // @synthesize batteryData;
@property(nonatomic, copy) NSDictionary *deviceData; // @synthesize deviceData;
@property(nonatomic) BOOL useActualDesignCapacityForCalculationsAndDisplay; // @synthesize useActualDesignCapacityForCalculationsAndDisplay;
@property(nonatomic) BOOL isAvailable; // @synthesize isAvailable;
@property(nonatomic, copy) NSString *connection; // @synthesize connection;
@property(nonatomic, copy) NSString *uuid; // @synthesize uuid;
@property(nonatomic, copy) NSDictionary *rawData; // @synthesize rawData;
@property(nonatomic) struct amd_service_connection *socket; // @synthesize socket;
@property(nonatomic) long long wifiactive; // @synthesize wifiactive;
@property(nonatomic) long long usbactive; // @synthesize usbactive;
@property(nonatomic, copy) NSString *wifi; // @synthesize wifi;
@property(nonatomic, copy) NSString *usb; // @synthesize usb;
@property(nonatomic, retain) _TtC14coconutBattery18CCBiOSDetailViewer *detailViewer; // @synthesize detailViewer;
@property(nonatomic) struct am_device *wifiConnectionRef; // @synthesize wifiConnectionRef;
@property(nonatomic) struct am_device *usbConnectionRef; // @synthesize usbConnectionRef;
@property(nonatomic, copy) NSString *activeConnectionType; // @synthesize activeConnectionType;

@end

