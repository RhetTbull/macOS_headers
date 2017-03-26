//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ConnectionManager, NSMutableArray, NSTimer;

@interface MIDISetupManager : NSObject
{
    NSMutableArray *mDeviceWidgets;
    ConnectionManager *mConnectionManager;
    unsigned int mMIDIClient;
    unsigned int mMIDIInputPort;
    unsigned int mMIDIOutputPort;
    NSTimer *mBatchCoalescingTimer;
    NSMutableArray *mBatchUpdateArray;
    struct MIDIPacketList *mUniversalInquiryMessage;
}

+ (id)LCDRootWidgetArray:(id)arg1;
+ (int)getMIDIExternalDeviceCount;
+ (int)getMIDIInterfaceDeviceCount;
- (void)clearUpdateQueue;
- (void)convertAMSv1MIDISetupToAMSv2Setup;
- (void)stopMIDIOutputTestForEndpoint:(id)arg1;
- (void)startMIDIOutputTestForEndpoint:(id)arg1;
- (void)disconnectAllConnections;
- (unsigned int)getConnectionCount;
- (id)getConnectionManager;
- (void)moveWidgetToTopOfList:(id)arg1;
- (id)MIDIDeviceWidgets;
- (id)getMIDIDeviceWidgetAtIndex:(int)arg1;
- (int)getMIDIDeviceWidgetCount;
- (void)invalidateCurrentSetup;
- (void)rescanMIDISystem;
- (void)dealloc;
- (id)initWithAppRunLoop:(id)arg1;
- (void)privMIDIInputPortNotificationBroadcaster:(id)arg1;
- (void)privPeriodicUpdater;
- (void)privMIDINotificationHandler:(id)arg1;
- (void)privAddDeviceWidgetToList:(id)arg1;
- (void)privDetectDevicesOnInterface:(unsigned int)arg1;

@end

