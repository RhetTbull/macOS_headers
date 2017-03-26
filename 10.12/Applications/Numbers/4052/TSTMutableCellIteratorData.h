//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSTCellIteratorData-Protocol.h"

@class NSString, TSTCell, TSTTableDataStore;

@interface TSTMutableCellIteratorData : NSObject <TSTCellIteratorData>
{
    BOOL _styleOnly;
    BOOL _commentStorageOnly;
    BOOL _rowHidden;
    BOOL _columnHidden;
    struct TSUCellCoord _cellID;
    TSTCell *_cell;
    struct TSTCellStorage *_cellRef;
    struct TSUCellRect _mergeRange;
    TSTTableDataStore *_tableDataStore;
    TSTCell *_cellForExpanding;
}

@property(retain, nonatomic) TSTCell *cellForExpanding; // @synthesize cellForExpanding=_cellForExpanding;
@property(retain, nonatomic) TSTTableDataStore *tableDataStore; // @synthesize tableDataStore=_tableDataStore;
@property(nonatomic) BOOL columnHidden; // @synthesize columnHidden=_columnHidden;
@property(nonatomic) BOOL rowHidden; // @synthesize rowHidden=_rowHidden;
@property(nonatomic) BOOL commentStorageOnly; // @synthesize commentStorageOnly=_commentStorageOnly;
@property(nonatomic) BOOL styleOnly; // @synthesize styleOnly=_styleOnly;
@property(nonatomic) struct TSUCellRect mergeRange; // @synthesize mergeRange=_mergeRange;
@property(nonatomic) struct TSTCellStorage *cellRef; // @synthesize cellRef=_cellRef;
@property(retain, nonatomic) TSTCell *cell; // @synthesize cell=_cell;
@property(nonatomic) struct TSUCellCoord cellID; // @synthesize cellID=_cellID;
- (void)takeValuesFromCellIteratorData:(id)arg1;
- (void)expandCell;
- (void)expandCellSuppressingFormulaInflation:(BOOL)arg1;
@property(readonly, nonatomic) BOOL cellHasCommentStorage;
@property(readonly, nonatomic) BOOL cellHasCustomFormat;
@property(readonly, nonatomic) BOOL cellHasConditionalStyle;
@property(readonly, nonatomic) BOOL cellHasFormula;
@property(readonly, nonatomic) int cellValueType;
@property(readonly, nonatomic) BOOL hidden;
- (void)reset;
- (void)dealloc;
- (id)initWithTableModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

