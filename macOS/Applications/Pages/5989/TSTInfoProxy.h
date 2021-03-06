//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDDrawableInfoProxy.h"

#import "TSKAnchorValueResolvable-Protocol.h"

@class TSDStrokePattern;

@interface TSTInfoProxy : TSDDrawableInfoProxy <TSKAnchorValueResolvable>
{
    TSDStrokePattern *mDefaultPlaceholderStrokePattern;
}

- (id)keyPathsToInvalidateForChangeRecords:(id)arg1;
- (BOOL)p_invalidateSortStateForSelectionChange:(id)arg1;
- (BOOL)p_invalidateColumnNamesForChange:(id)arg1;
- (BOOL)enqueueCommandToChangeOldValue:(id)arg1 toNewValue:(id)arg2 forKeyPath:(id)arg3;
- (id)columnNames;
- (id)groupBy;
- (BOOL)canSortTable;
- (id)sortOrder;
- (id)filterSet;
- (id)tableNameBorderEnabled;
- (id)borderStroke;
- (BOOL)footerRowLinesEnabled;
- (BOOL)headerColumnLinesEnabled;
- (BOOL)horizontalLinesEnabled;
- (BOOL)verticalLinesEnabled;
- (BOOL)headerRowLinesEnabled;
- (id)currentFontName;
- (BOOL)tableAutoResizeEnabled;
- (id)defaultPlaceholderStrokePattern;
- (void)willSetValue:(id)arg1 forKeyPath:(id)arg2;
- (id)p_cmdToSetBoolStyleProperty:(int)arg1 value:(BOOL)arg2;
- (id)commandToChangeOldValue:(id)arg1 toNewValue:(id)arg2 forKeyPath:(id)arg3;
- (id)anchorValueForKeyPath:(id)arg1;
- (id)tableEditor;
- (id)editor;
- (id)newProxyForValue:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 editor:(id)arg2 documentRoot:(id)arg3;

@end

