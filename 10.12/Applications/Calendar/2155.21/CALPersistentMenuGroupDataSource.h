//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface CALPersistentMenuGroupDataSource : NSObject
{
    Class _itemClass;
    NSString *_saveName;
    int _maxCount;
    NSMutableArray *_items;
    NSArray *_tmpItems;
    BOOL _resultingItemsNeedUpdate;
    NSMutableArray *_resultingItems;
}

+ (id)dataSourceWithSaveName:(id)arg1 withItemClass:(Class)arg2;
- (void).cxx_destruct;
- (long long)count;
- (void)updateFromPersistantData;
- (long long)indexOfItem:(id)arg1;
- (id)itemAtIndex:(long long)arg1;
- (long long)maxCount;
- (void)setMaxCount:(long long)arg1;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (void)setTemporaryItems:(id)arg1;
- (id)imageAtIndex:(long long)arg1 forMenuGroup:(id)arg2;
- (id)titleAtIndex:(long long)arg1 forMenuGroup:(id)arg2;
- (long long)numberOfItemsInMenuGroup:(id)arg1;
- (id)resultingItems;
- (void)updateResultingItemsIfNeeded;
- (id)temporaryItems;
- (void)sync;
- (void)reloadWithItemClass:(Class)arg1;
- (id)prefKey;
- (id)saveName;
- (void)setSaveName:(id)arg1;
- (void)dealloc;
- (id)initWithSaveName:(id)arg1 withItemClass:(Class)arg2;

@end

