//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MapsSyncedClient-Protocol.h"

@class MapsSyncManager, NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface NVPlacesManager : NSObject <MapsSyncedClient>
{
    NSMutableArray *_elements;
    MapsSyncManager *_syncManager;
}

+ (id)keyPathsForValuesAffectingAllTrips;
+ (id)keyPathsForValuesAffectingAllPlaces;
+ (id)keyPathsForValuesAffectingElements;
+ (id)acceptedDraggedElementUTIs;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_saveElements;
- (void)_didSaveElements;
- (id)elementsFromPropertyList:(id)arg1;
- (id)propertyListFromCurrentElements;
- (id)persistenceURL;
- (void)_saveElementsSoon;
- (BOOL)isValidElement:(id)arg1;
- (void)removeElement:(id)arg1;
- (id)addElement:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_unregisterElement:(id)arg1;
- (void)_registerElement:(id)arg1;
- (void)removeObjectFromSyncedItemsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inSyncedItemsAtIndex:(unsigned long long)arg2;
- (void)removeObjectFromElementsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inElementsAtIndex:(unsigned long long)arg2;
- (id)allTrips;
- (BOOL)isBookmarkedPlace:(id)arg1;
- (BOOL)containsPlaceSameAsLabelMarker:(id)arg1;
- (id)allPlaces;
@property(readonly) NSArray *elements;
- (id)newSyncedItemForSyncData:(id)arg1;
@property(readonly, nonatomic) NSArray *syncedItems;
@property(readonly, nonatomic) NSString *syncIdentifier;
@property(readonly, nonatomic) BOOL syncSupportsKVO;
@property(readonly, nonatomic) BOOL syncShouldUseCustomStore;
- (void)_appendElementsFromArrayIfPossible:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BOOL syncInvertedOrdering;
@property(readonly, nonatomic) BOOL syncShouldUseItemPositions;

@end

