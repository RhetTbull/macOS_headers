//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CustomSearchManagerObserver-Protocol.h"
#import "NanoCompanionXPCAppControlling-Protocol.h"

@class MSPDroppedPin, NSArray, NSHashTable, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MapsPinsController : NSObject <NanoCompanionXPCAppControlling, CustomSearchManagerObserver>
{
    NSObject<OS_dispatch_queue> *_pinsAsyncQueue;
    NSHashTable *_pinObservers;
    NSObject<OS_dispatch_queue> *_writeQ;
    NSXPCConnection *_connection;
    NSArray *_pins;
}

+ (id)sharedController;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *pins; // @synthesize pins=_pins;
- (void)updateDroppedPin:(id)arg1;
- (void)_notifySearchManager;
- (void)_save;
- (void)_handleNewOrModifiedCustomSearchResult:(id)arg1;
- (void)customSearchManager:(id)arg1 didModifyCustomSearchResult:(id)arg2 coordinateChanged:(BOOL)arg3;
- (void)customSearchManager:(id)arg1 didReplaceCustomSearchResult:(id)arg2 animated:(BOOL)arg3 shouldSelectOnMap:(BOOL)arg4 context:(id)arg5;
- (void)removePinsObserver:(id)arg1;
- (void)addPinsObserver:(id)arg1;
- (void)_setDroppedPin:(id)arg1 informGizmo:(BOOL)arg2;
- (void)getDroppedPinWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) MSPDroppedPin *droppedPin;
- (void)_createCompanionConnection;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

