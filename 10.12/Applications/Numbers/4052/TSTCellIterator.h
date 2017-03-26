//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSTCellIterating-Protocol.h"

@class NSString, TSTCell, TSTCellRegion, TSTMutableCellIteratorData, TSTTableDataStore, TSTTableModel, TSTTableTile, TSTTableTileRowInfo;

@interface TSTCellIterator : NSObject <TSTCellIterating>
{
    TSTTableModel *mTableModel;
    TSTCellRegion *mModelRegion;
    struct NSObject *mModelRegionIterator;
    TSTTableDataStore *mTableDataStore;
    TSTTableTileRowInfo *mCurRow;
    TSTTableTile *mCurTile;
    unsigned short mCurRowID;
    struct _NSRange mCurTileRange;
    TSTCell *mCell;
    TSTMutableCellIteratorData *mCellData;
    BOOL mSkipStyleOnlyCells;
    BOOL mSkipCommentStorageOnlyCells;
    BOOL mDontExpandCellRefs;
    long long mRowWalkDirection;
    BOOL mDontCheckSize;
    BOOL mDontReturnMergeRegions;
    BOOL mReturnHiddenCells;
    BOOL mDontInflateFormulas;
    BOOL mReturnEmptyCells;
    BOOL mReturnCellBorder;
}

@property(readonly) BOOL dontExpandCellRefs; // @synthesize dontExpandCellRefs=mDontExpandCellRefs;
@property(readonly, nonatomic) TSTTableModel *tableModel; // @synthesize tableModel=mTableModel;
@property(readonly) long long rowWalkDirection; // @synthesize rowWalkDirection=mRowWalkDirection;
@property(readonly, nonatomic) TSTTableTileRowInfo *currentRowInfo; // @synthesize currentRowInfo=mCurRow;
- (void)terminate;
- (id)nextCellData;
- (BOOL)getNextCellData:(id *)arg1;
- (BOOL)p_updateDataForCellID:(struct TSUCellCoord)arg1;
- (void)iterateCellsUsingBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithTableModel:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3;
- (id)initWithTableModel:(id)arg1 flags:(unsigned long long)arg2;
- (id)initWithTableModel:(id)arg1;
- (id)initWithTableModel:(id)arg1 range:(struct TSUCellRect)arg2 flags:(unsigned long long)arg3;
- (id)initWithTableModel:(id)arg1 range:(struct TSUCellRect)arg2;
- (id)initWithTableModel:(id)arg1 region:(id)arg2;
- (id)initWithTableModel:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 clampingRange:(struct TSUCellRect)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

