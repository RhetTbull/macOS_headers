//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CALNTriggeredEventNotificationDataStorage.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CALNInMemoryTriggeredEventNotificationDataStorage : NSObject <CALNTriggeredEventNotificationDataStorage>
{
    NSMutableDictionary *_notificationDataMap;
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSMutableDictionary *notificationDataMap; // @synthesize notificationDataMap=_notificationDataMap;
- (void)removeNotificationData;
- (void)removeNotificationDataWithIdentifier:(id)arg1;
- (id)notificationDataWithIdentifier:(id)arg1;
- (void)addNotificationData:(id)arg1 withIdentifier:(id)arg2;
- (id)notificationData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

