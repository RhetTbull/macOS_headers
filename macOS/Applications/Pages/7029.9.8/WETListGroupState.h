//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSUPointerKeyDictionary, WETListLevelState;
@protocol WETBlockListStateOwner;

@interface WETListGroupState : NSObject
{
    TSUPointerKeyDictionary *_paddedListStyleMap;
    id <WETBlockListStateOwner> _blockListStateOwner;
    WETListLevelState *_rootLevelState;
    WETListLevelState *_currentLevelState;
}

- (void).cxx_destruct;
@property(nonatomic) WETListLevelState *currentLevelState; // @synthesize currentLevelState=_currentLevelState;
@property(readonly, retain, nonatomic) WETListLevelState *rootLevelState; // @synthesize rootLevelState=_rootLevelState;
@property(readonly, nonatomic) id <WETBlockListStateOwner> blockListStateOwner; // @synthesize blockListStateOwner=_blockListStateOwner;
- (BOOL)isNumbered;
- (id)addList;
- (int)listDefinitionId;
- (id)resolvedListDefinition;
- (id)listWithListId:(int)arg1;
- (id)listTable;
- (id)listDefinitionTable;
- (id)targetDocument;
- (id)blockListState;
- (int)mainListId;
- (id)paddedListStyleMap;
- (id)initWithRootLevelState:(id)arg1 blockListState:(id)arg2;

@end

