//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CALNNotificationStorage.h"

@class CALNInMemoryNotificationStorage, NSObject<OS_dispatch_queue>, NSString;

@interface CALNPersistentNotificationStorage : NSObject <CALNNotificationStorage>
{
    NSString *_path;
    CALNInMemoryNotificationStorage *_inMemoryStorage;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)notificationRecordsFromPersistentNotificationStorageWithPath:(id)arg1 error:(id *)arg2;
+ (id)persistentNotificationStorageWithPath:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) CALNInMemoryNotificationStorage *inMemoryStorage; // @synthesize inMemoryStorage=_inMemoryStorage;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (BOOL)_saveNotificationsWithError:(id *)arg1;
- (BOOL)_loadNotificationsWithError:(id *)arg1;
- (void)removeNotificationRecordsPassingTest:(CDUnknownBlockType)arg1;
- (id)notificationRecords;
- (void)addNotificationRecord:(id)arg1;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

