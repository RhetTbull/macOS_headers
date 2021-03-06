//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMKeyValueCollectionStorage.h"
#import "NSCopying.h"

@class NSMutableDictionary, NSString;

@interface IMKeyValueCollection : NSObject <IMKeyValueCollectionStorage, NSCopying>
{
    long long _batchCount;
    id <IMKeyValueCollectionStorage> _keyValueStorage;
    id <IMKeyValueCollectionDelegate> _delegate;
    NSMutableDictionary *_recordedChanges;
}

- (void).cxx_destruct;
@property(readonly) NSMutableDictionary *recordedChanges; // @synthesize recordedChanges=_recordedChanges;
@property(nonatomic) __weak id <IMKeyValueCollectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <IMKeyValueCollectionStorage> keyValueStorage; // @synthesize keyValueStorage=_keyValueStorage;
@property(readonly, copy) NSString *description;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (id)stringForKey:(id)arg1 withDefault:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (double)doubleForKey:(id)arg1;
- (double)doubleForKey:(id)arg1 withDefault:(double)arg2;
- (void)setUint64:(long long)arg1 forKey:(id)arg2;
- (unsigned long long)uint64ForKey:(id)arg1;
- (unsigned long long)uint64ForKey:(id)arg1 withDefault:(unsigned long long)arg2;
- (void)setInt64:(long long)arg1 forKey:(id)arg2;
- (long long)int64ForKey:(id)arg1;
- (long long)int64ForKey:(id)arg1 withDefault:(long long)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (long long)integerForKey:(id)arg1;
- (long long)integerForKey:(id)arg1 withDefault:(long long)arg2;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1 withDefault:(BOOL)arg2;
- (void)_commitBatchWrite;
- (void)_startBatchWrite;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)_recordChange:(id)arg1 forKey:(id)arg2;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1 withDefault:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)_broadcastIfNeeded;
- (void)_notifyListeners;
- (id)initWithKeyValueStorage:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)errorArrayForKey:(id)arg1;
- (void)addErrorToArray:(id)arg1 forKey:(id)arg2;
- (id)errorForKey:(id)arg1;
- (void)setError:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

