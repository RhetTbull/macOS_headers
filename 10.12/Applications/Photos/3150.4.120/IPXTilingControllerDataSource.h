//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IPXSectionsCollection, NSArray, NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface IPXTilingControllerDataSource : NSObject
{
    NSMutableDictionary *_indexCache;
    NSObject<OS_dispatch_queue> *_tileCacheQueue;
    NSArray *_indexPaths;
    NSSet *_indexPathsSet;
    NSMutableDictionary *_tileCacheKeys;
    unsigned long long _identifier;
    IPXSectionsCollection *_sectionsCollection;
}

@property(readonly, nonatomic) IPXSectionsCollection *sectionsCollection; // @synthesize sectionsCollection=_sectionsCollection;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSMutableDictionary *tileCacheKeys; // @synthesize tileCacheKeys=_tileCacheKeys;
@property(readonly, nonatomic) NSSet *indexPathsSet; // @synthesize indexPathsSet=_indexPathsSet;
@property(readonly, nonatomic) NSArray *indexPaths; // @synthesize indexPaths=_indexPaths;
- (void).cxx_destruct;
- (void)removeObjectsForKeys:(id)arg1;
- (void)clearCache;
- (void)setCache:(id)arg1 forItemKey:(id)arg2;
- (id)cacheForItemKey:(id)arg1;
- (BOOL)hasItemIdentifier:(id)arg1;
- (id)indexPathForItemIdentifier:(id)arg1;
- (long long)indexForItemIdentifier:(id)arg1;
- (id)itemIdentifierForIndex:(long long)arg1;
- (id)itemForItemIdentifier:(id)arg1;
- (id)identifierForVersion:(id)arg1;
- (id)identifierForObject:(id)arg1;
- (id)identifierForItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (BOOL)refreshCollection:(id)arg1;
- (id)initWithSectionsCollection:(id)arg1;
- (id)initWithCollection:(id)arg1;

@end

