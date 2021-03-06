//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSIndexSet, NSOrderedSet, NSSet;

@interface WFChangeset : NSObject <NSCopying>
{
    NSIndexSet *_deletedIndexes;
    NSIndexSet *_insertedIndexes;
    NSOrderedSet *_insertedObjects;
    NSSet *_movedIndexes;
}

+ (id)changesetFromStart:(id)arg1 toEnd:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *movedIndexes; // @synthesize movedIndexes=_movedIndexes;
@property(readonly, copy, nonatomic) NSOrderedSet *insertedObjects; // @synthesize insertedObjects=_insertedObjects;
@property(readonly, copy, nonatomic) NSIndexSet *insertedIndexes; // @synthesize insertedIndexes=_insertedIndexes;
@property(readonly, copy, nonatomic) NSIndexSet *deletedIndexes; // @synthesize deletedIndexes=_deletedIndexes;
- (void).cxx_destruct;
- (id)endResultByApplyingToStart:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithDeletedIndexes:(id)arg1 insertedIndexes:(id)arg2 insertedObjects:(id)arg3 movedIndexes:(id)arg4;
- (id)init;
- (id)changesetByMergingChangeset:(id)arg1;

@end

