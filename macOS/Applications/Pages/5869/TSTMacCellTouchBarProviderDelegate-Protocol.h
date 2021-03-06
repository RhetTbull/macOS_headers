//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TSULocale, TSWPTextEditor;

@protocol TSTMacCellTouchBarProviderDelegate <NSObject>
- (TSULocale *)documentLocale;
- (TSWPTextEditor *)touchBarTextEditorForCandidateList;
- (BOOL)touchBarShouldShowCandidateList;
- (void)touchBarCollapseGroup;
- (void)touchBarExpandGroup;
- (BOOL)touchBarCanCollapseGroup;
- (BOOL)touchBarCanExpandGroup;
- (void)touchBarSetAggregateType:(unsigned char)arg1;
- (void)touchBarAddColumns;
- (BOOL)touchBarCanAddColumns;
- (void)touchBarAddRows;
- (BOOL)touchBarCanAddRows;
- (void)touchBarBeginAutofilling;
- (BOOL)touchBarShouldShowAutofill;
- (void)touchBarInsertRangeFunctionWithIndex:(int)arg1;
- (void)touchBarOpenFormulaEditor;
- (BOOL)touchBarCanInsertRangeFunction;
- (BOOL)touchBarCanEditFormula;
- (BOOL)touchBarCanOpenFormulaEditor;
- (void)touchBarSortDescending;
- (void)touchBarSortAscending;
- (BOOL)touchBarCanSortDescending;
- (BOOL)touchBarCanSortAscending;
- (long long)touchBarSelectionType;
@end

