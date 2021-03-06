//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NUStoragePoolStats;

@interface NUPurgeableStoragePool : NSObject
{
    NUStoragePoolStats *_stats;
    unsigned long long _nonPurgeableActivityCounter;
    BOOL _migrationTimerScheduled;
    long long _nonPurgeableLimit;
    long long _purgeableLimit;
    double _migrationDelay;
    NSMutableArray *_volatileList;
    NSMutableArray *_nonPurgeableList;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_migrationQueue;
    Class _storageClass;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) Class storageClass; // @synthesize storageClass=_storageClass;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *migrationQueue; // @synthesize migrationQueue=_migrationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(readonly, nonatomic) NSMutableArray *nonPurgeableList; // @synthesize nonPurgeableList=_nonPurgeableList;
@property(readonly, nonatomic) NSMutableArray *volatileList; // @synthesize volatileList=_volatileList;
@property(readonly, nonatomic) double migrationDelay; // @synthesize migrationDelay=_migrationDelay;
@property(readonly, nonatomic) long long purgeableLimit; // @synthesize purgeableLimit=_purgeableLimit;
@property(readonly, nonatomic) long long nonPurgeableLimit; // @synthesize nonPurgeableLimit=_nonPurgeableLimit;
- (id)debugDescription;
- (void)waitForMigration;
- (void)_migrateStorageToPurgeable:(id)arg1;
- (id)_popOldestNonPurgeableStorage;
- (void)_migrateOldestNonPurgeableStorageToPurgeable;
- (void)_migrateAllNonPurgeableStorageIfNoRecentActivity:(unsigned long long)arg1;
- (void)migrateAllNonPurgeableStorage;
- (void)_migrationTimer:(unsigned long long)arg1;
- (void)_scheduleMigrationTimer;
- (void)_resetNonPurgeableStorageMigrationTimer;
- (void)_reapPurged;
- (id)reapPurged;
@property(readonly, copy, nonatomic) NUStoragePoolStats *stats;
- (void)_returnNonPurgeableStorage:(id)arg1;
- (void)_returnVolatileStorage:(id)arg1;
- (void)_enforcePurgableLimit;
- (void)returnStorage:(id)arg1;
- (id)_storageFromPoolWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2 exactMatch:(BOOL)arg3;
- (id)_allocateStorageWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (id)newStorageWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2 exactMatch:(BOOL)arg3;
- (id)newStorageWithMinimumSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (id)newStorageWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (id)initWithStorageClass:(Class)arg1;
- (id)init;

@end

