//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, TSPObjectContext, TSPPersistedObjectUUIDMap;
@protocol OS_dispatch_queue;

@interface TSPObjectUUIDMap : NSObject
{
    // Error parsing type: Ai, name: _assertOnReadCount
    TSPObjectContext *_context;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_inMemoryUUIDDictionary;
    NSMutableSet *_UUIDsWithSuppressedAssertions;
    TSPPersistedObjectUUIDMap *_persistedUUIDMap;
}

- (void).cxx_destruct;
- (void)endAssertOnRead;
- (void)beginAssertOnRead;
- (void)object:(id)arg1 didChangeUUIDToValue:(id)arg2 fromValue:(id)arg3;
- (id)objectWithUUID:(id)arg1 onlyIfLoaded:(BOOL)arg2 validateNewObjects:(BOOL)arg3 identifier:(long long *)arg4;
- (void)objectWillBeRemovedFromDocument:(id)arg1;
- (void)objectWasAddedToDocument:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)shouldSuppressAssertionForObjectUUID:(id)arg1;
- (BOOL)objectUUIDIsInDocument:(id)arg1;
- (void)setPersistedUUIDMap:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

