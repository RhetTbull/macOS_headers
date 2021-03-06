//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

@interface TSTMergeRegionMap : TSPObject
{
    unordered_map_ddbde191 mCellIDToMergeOrigin;
    unordered_map_89444acf mMergeOriginToSize;
    struct TSUCellRect mUnionedMergeRange;
}

+ (id)mergeRegionMapWithContext:(id)arg1 andCellRangesSet:(const unordered_set_ea210bc4 *)arg2;
+ (id)mergeRegionMapWithContext:(id)arg1 andCellRanges:(const vector_e87daf7b *)arg2;
+ (id)mergeRegionMapFromMap:(id)arg1 intersectingRange:(struct TSUCellRect)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const unordered_map_89444acf *)mergeOriginToSize;
- (const unordered_map_ddbde191 *)cellIDToMergeOrigin;
- (BOOL)hasRangeSpanningRows;
- (BOOL)find:(struct TSUCellRect)arg1;
- (struct TSUCellRect)mergedRangeForCellID:(struct TSUCellCoord)arg1;
- (unsigned long long)count;
- (void)enumerateRangesUsingBlock:(CDUnknownBlockType)arg1;
- (id)iterator;
- (BOOL)remove:(struct TSUCellRect)arg1;
- (BOOL)insert:(struct TSUCellRect)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initRegionMapFromMap:(id)arg1 intersectingRange:(struct TSUCellRect)arg2;
- (id)initRegionMapFromMap:(id)arg1 rowRemapping:(id)arg2;

@end

