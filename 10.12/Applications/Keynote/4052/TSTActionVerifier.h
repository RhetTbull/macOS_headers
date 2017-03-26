//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSTTableInfo;

@interface TSTActionVerifier : NSObject
{
    TSTTableInfo *mTableInfo;
}

@property(readonly, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=mTableInfo;
- (BOOL)canSetFilterSet:(id)arg1;
- (BOOL)canFilterTable;
- (BOOL)verifySortFromRows:(vector_dadc1b26 *)arg1 toRows:(vector_dadc1b26 *)arg2 byColumns:(id)arg3;
- (BOOL)verifySortByColumns:(id)arg1 inRows:(id)arg2;
- (BOOL)verifyOrderedRowUIDs:(const vector_dadc1b26 *)arg1;
- (BOOL)verifyAllValidCellUIDInDiffMap:(id)arg1;
- (BOOL)verifyAllValidCellUIDInMap:(id)arg1;
- (BOOL)verifyAllValidCellUID:(id)arg1;
- (BOOL)verifyAllValidColumnUIDs:(const vector_dadc1b26 *)arg1;
- (BOOL)verifyAllValidRowUIDs:(const vector_dadc1b26 *)arg1;
- (BOOL)verifyAnyValidCellUIDInDiffMap:(id)arg1;
- (BOOL)verifyAnyValidCellUIDInMap:(id)arg1;
- (BOOL)verifyAnyValidCellUID:(id)arg1;
- (BOOL)verifyAnyValidColumnUIDs:(const vector_dadc1b26 *)arg1;
- (BOOL)verifyAnyValidRowUIDs:(const vector_dadc1b26 *)arg1;
- (BOOL)canHideColumns:(id)arg1;
- (BOOL)canHideRows:(id)arg1;
- (BOOL)canUnmergeRegion:(id)arg1;
- (BOOL)canUnmergeUIDRange:(const struct TSTCellUIDRange *)arg1;
- (BOOL)canMergeRegion:(id)arg1;
- (BOOL)canMergeUIDList:(id)arg1;
- (BOOL)verifyNoVerticalMergesInRowIndices:(id)arg1;
- (BOOL)canInsertColumns:(unsigned short)arg1;
- (BOOL)canInsertRows:(unsigned short)arg1;
- (BOOL)verifyRemoveColumnsInRange:(struct _NSRange)arg1;
- (BOOL)verifyRemoveRowsInRange:(struct _NSRange)arg1;
- (BOOL)verifyMoveColumnsFromRange:(struct _NSRange)arg1 toDestIndex:(unsigned char)arg2;
- (BOOL)verifySequentialColumnUIDs:(const vector_dadc1b26 *)arg1;
- (BOOL)verifySequentialRowUIDs:(const vector_dadc1b26 *)arg1;
- (BOOL)verifyMoveRowsFromRange:(struct _NSRange)arg1 toDestIndex:(unsigned short)arg2;
- (id)tableModel;
- (id)initWithTableInfo:(id)arg1;

@end

