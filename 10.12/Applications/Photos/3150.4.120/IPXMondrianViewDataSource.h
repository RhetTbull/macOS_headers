//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IPXSectionsCollection, MOLRUCache, NSMutableArray;

@interface IPXMondrianViewDataSource : NSObject
{
    IPXSectionsCollection *_sectionsCollection;
    NSMutableArray *_mediaSectionsArray;
    MOLRUCache *_mediaItemReuseCache;
    unsigned long long _needsUpdateCounter_ONLY_ACCESS_WHEN_SYNCHRONIZED;
    unsigned long long _updatedCounter_ONLY_ACCESS_WHEN_SYNCHRONIZED;
}

- (void).cxx_destruct;
- (id)mediaItemWithIdentifier:(id)arg1 foundAtIndexPath:(id *)arg2;
- (id)identifierForMediaItem:(id)arg1;
- (CDUnknownBlockType)sectionItemsEquivalencyComparator;
- (id)newMediaSectionForItemsCollection:(id)arg1;
- (id)requestMediaItemForItemKey:(id)arg1;
- (void)recycleMediaItem:(id)arg1 withItemKey:(id)arg2;
- (id)allItems;
- (long long)numberOfItems;
- (BOOL)hasAtLeastOneItem;
- (id)indexPathsForItems:(id)arg1 foundItems:(id *)arg2;
- (id)foundItems:(id)arg1;
- (void)_enumerateFoundItems:(id)arg1 itemsNeedUpdate:(BOOL)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)indexPathForItem:(id)arg1;
- (id)itemsAtIndexPaths:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)removeItemsAtIndexPaths:(id)arg1;
- (id)moveItemsAtIndexPaths:(id)arg1 toIndexPath:(id)arg2;
- (void)_updateToSectionsCollection:(id)arg1;
- (void)updateWithChangeSet:(id)arg1;
- (id)changeSetForTransformationToCurrentSectionsCollection:(id)arg1 withModifiedItems:(id)arg2 pinnedItems:(id)arg3;
- (id)_mediaSectionsForSectionsCollection:(id)arg1;
- (id)_mediaSectionsForItemCollectionsArray:(id)arg1;
- (void)_applyChange:(id)arg1 toMediaSectionAtIndex:(long long)arg2;
- (void)_moveMediaSectionAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)_insertMediaSectionsWithItemCollections:(id)arg1 atIndexes:(id)arg2;
- (void)_deleteMediaSectionsAtIndexes:(id)arg1;
- (void)updateItems:(id)arg1 atIndexPaths:(id)arg2;
- (void)updateItems:(id)arg1;
- (BOOL)needsUpdate;
- (void)setNeedsUpdate;
- (id)indexPathsForMediaItemsPassingTest:(CDUnknownBlockType)arg1 foundMediaItems:(id *)arg2;
- (id)indexPathsForMediaItems:(id)arg1 foundMediaItems:(id *)arg2;
- (id)_exhaustiveSearch_indexPathsForMediaItems:(id)arg1 foundMediaItemsArray:(id)arg2;
- (id)_mapTableLookupBasedSearch_indexPathsForMediaItems:(id)arg1 foundMediaItemsArray:(id)arg2;
- (id)indexesOfSectionsWithCollectionUUIDs:(id)arg1;
- (long long)indexOfSectionWithCollectionUUID:(id)arg1;
- (long long)indexOfMediaSection:(id)arg1;
- (id)mediaSectionAtIndex:(long long)arg1;
- (long long)numberOfSections;
- (id)sectionsCollection;
- (void)setSectionsCollection:(id)arg1;
- (void)_recordUpdatedCounter:(unsigned long long)arg1;
- (id)init;

@end

