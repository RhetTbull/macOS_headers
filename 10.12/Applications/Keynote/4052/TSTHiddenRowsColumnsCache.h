//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSTTableHiddenRowColumnProviding-Protocol.h"

@class NSIndexSet, NSMutableIndexSet, NSString, TSTHiddenStateIndexSet;

@interface TSTHiddenRowsColumnsCache : NSObject <TSTTableHiddenRowColumnProviding>
{
    TSTHiddenStateIndexSet *_rowsVisible;
    TSTHiddenStateIndexSet *_rowsUserVisible;
    NSMutableIndexSet *_rowsInvalid;
    unsigned long long _rowMarkIndex;
    TSTHiddenStateIndexSet *_columnsVisible;
    NSMutableIndexSet *_columnsInvalid;
}

@property(retain, nonatomic) NSMutableIndexSet *columnsInvalid; // @synthesize columnsInvalid=_columnsInvalid;
@property(retain, nonatomic) TSTHiddenStateIndexSet *columnsVisible; // @synthesize columnsVisible=_columnsVisible;
@property(nonatomic) unsigned long long rowMarkIndex; // @synthesize rowMarkIndex=_rowMarkIndex;
@property(retain, nonatomic) NSMutableIndexSet *rowsInvalid; // @synthesize rowsInvalid=_rowsInvalid;
@property(retain, nonatomic) TSTHiddenStateIndexSet *rowsUserVisible; // @synthesize rowsUserVisible=_rowsUserVisible;
@property(retain, nonatomic) TSTHiddenStateIndexSet *rowsVisible; // @synthesize rowsVisible=_rowsVisible;
- (void)validateChangeDescriptors:(id)arg1;
- (void)validate:(id)arg1;
- (unsigned short)numberOfVisibleRowsFromHeader:(unsigned short)arg1;
@property(readonly, nonatomic) NSIndexSet *visibleColumnIndices;
@property(readonly, nonatomic) NSIndexSet *userVisibleRowIndices;
@property(readonly, nonatomic) NSIndexSet *visibleRowIndices;
- (struct TSUCellCoord)visibleCellOffsetBy:(CDStruct_1ef3fb1f)arg1 fromCellID:(struct TSUCellCoord)arg2;
- (unsigned char)previousNthVisibleColumn:(unsigned short)arg1 fromColumnIndex:(unsigned char)arg2;
- (unsigned short)previousNthVisibleRow:(unsigned short)arg1 fromRowIndex:(unsigned short)arg2;
- (unsigned char)visibleColumnAfterAndIncludingColumn:(unsigned char)arg1;
- (unsigned char)visibleColumnAfterColumn:(unsigned char)arg1;
- (unsigned char)visibleColumnBeforeAndIncludingColumn:(unsigned char)arg1;
- (unsigned char)visibleColumnBeforeColumn:(unsigned char)arg1;
- (unsigned short)nonUserHiddenRowAfterAndIncludingRow:(unsigned short)arg1;
- (unsigned short)visibleRowAfterAndIncludingRow:(unsigned short)arg1;
- (unsigned short)visibleRowAfterRow:(unsigned short)arg1;
- (unsigned short)visibleRowBeforeAndIncludingRow:(unsigned short)arg1;
- (unsigned short)visibleRowBeforeRow:(unsigned short)arg1;
- (BOOL)anyColumnsHiddenInCellRange:(struct TSUCellRect)arg1;
- (BOOL)anyRowsUserHiddenInCellRange:(struct TSUCellRect)arg1;
- (BOOL)anyRowsHiddenInCellRange:(struct TSUCellRect)arg1;
- (unsigned short)numberColumnsVisibleInCellRange:(struct TSUCellRect)arg1;
- (unsigned short)numberColumnsHiddenInCellRange:(struct TSUCellRect)arg1;
- (unsigned short)numberRowsVisibleInCellRange:(struct TSUCellRect)arg1;
- (unsigned short)numberRowsUserHiddenInCellRange:(struct TSUCellRect)arg1;
- (unsigned short)numberRowsHiddenInCellRange:(struct TSUCellRect)arg1;
- (BOOL)isColumnHidden:(unsigned char)arg1;
- (BOOL)isRowUserHidden:(unsigned short)arg1;
- (BOOL)isRowHidden:(unsigned short)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

