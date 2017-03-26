//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTableCommand.h"

@class TSCECellCoordinateVector, TSCEFormulaRewriteSpec, TSUIntegerKeyDictionary;

@interface TSTCommandRewriteConditionalStylesForRewriteSpec : TSTTableCommand
{
    TSCECellCoordinateVector *_cellsToRewrite;
    TSCEFormulaRewriteSpec *_rewriteSpec;
    TSUIntegerKeyDictionary *_originalConditionalStyleSetMap;
}

- (BOOL)allowNonNullFromTableID;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)dealloc;
- (void)redoWork;
- (void)undoWork;
- (void)commitWork;
- (BOOL)process;
- (id)initWithTableInfo:(id)arg1 rewriteSpec:(id)arg2 cellsToRewrite:(id)arg3;

@end

