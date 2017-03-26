//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

@class NSMutableSet, NSObject, NSSet;
@protocol OS_dispatch_queue;

@interface TSPSupportMetadata : TSPObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_acknowledgedServerData;
    BOOL _isInCollaborationModeForArchiving;
    NSSet *_acknowledgedServerDataForArchiving;
}

- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)takeSnapshotWithCollaborationMode:(BOOL)arg1;
- (id)packageLocator;
- (long long)tsp_identifier;
- (id)initFromUnarchiver:(id)arg1;
- (void)setData:(id)arg1 acknowledgedByServer:(BOOL)arg2;
- (void)isDataAcknowledgedByServer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isDataAcknowledgedByServer:(id)arg1;
- (void)resetAcknowledgedServerData;
- (id)initWithContext:(id)arg1;
- (id)initCommon;

@end

