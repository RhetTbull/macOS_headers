//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MapsInternalSyncItem-Protocol.h"

@class MapsSyncManager, NSDictionary, NSString;
@protocol MapsSynced;

__attribute__((visibility("hidden")))
@interface MapsSyncedItem : NSObject <MapsInternalSyncItem>
{
    MapsSyncManager *_manager;
    id <MapsSynced> _clientItem;
    NSString *_identifier;
    double _position;
    BOOL _shouldSync;
}

+ (double)positionBetweenItem:(id)arg1 andItem:(id)arg2;
@property(nonatomic) double position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak MapsSyncManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long clientPosition;
- (BOOL)updateFromCloudData:(id)arg1 newlyCreated:(BOOL)arg2 positionChanged:(char *)arg3;
@property(readonly, nonatomic) NSDictionary *cloudData;
- (BOOL)updateFromSyncData:(id)arg1;
@property(retain, nonatomic) id <MapsSynced> clientItem;
@property(readonly, nonatomic) BOOL shouldSync;
- (id)syncData;
@property(readonly, nonatomic) NSString *cloudKey;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

