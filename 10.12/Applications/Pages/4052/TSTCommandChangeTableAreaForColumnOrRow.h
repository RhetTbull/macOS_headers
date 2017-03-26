//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTCommandRowColumnRange.h"

#import "GSSPAutoEncodable-Protocol.h"

@class NSString, TSKCommandContainer, TSTCellDiffMap, TSTDefaultCellStylesContainer, TSUSparseArray;

@interface TSTCommandChangeTableAreaForColumnOrRow : TSTCommandRowColumnRange <GSSPAutoEncodable>
{
    unsigned long long _tableAreaTransition;
    TSTCellDiffMap *_cellDiffMap;
    BOOL _definedCellDiffMap;
    TSTCellDiffMap *_undoCellDiffMap;
    TSKCommandContainer *_undoContainer;
    unsigned long long _activeTableAreaTransition;
    NSString *_actionString;
    TSTDefaultCellStylesContainer *_undoCellStylesContainer;
    TSUSparseArray *_oldRowStyles;
    TSUSparseArray *_oldColStyles;
}

@property(retain, nonatomic) TSUSparseArray *oldColStyles; // @synthesize oldColStyles=_oldColStyles;
@property(retain, nonatomic) TSUSparseArray *oldRowStyles; // @synthesize oldRowStyles=_oldRowStyles;
@property(retain, nonatomic) TSTDefaultCellStylesContainer *undoCellStylesContainer; // @synthesize undoCellStylesContainer=_undoCellStylesContainer;
@property(retain, nonatomic) NSString *actionString; // @synthesize actionString=_actionString;
@property(nonatomic) unsigned long long activeTableAreaTransition; // @synthesize activeTableAreaTransition=_activeTableAreaTransition;
@property(nonatomic) unsigned long long tableAreaTransition; // @synthesize tableAreaTransition=_tableAreaTransition;
@property(retain, nonatomic) TSKCommandContainer *undoContainer; // @synthesize undoContainer=_undoContainer;
@property(retain, nonatomic) TSTCellDiffMap *undoCellDiffMap; // @synthesize undoCellDiffMap=_undoCellDiffMap;
@property(retain, nonatomic) TSTCellDiffMap *cellDiffMap; // @synthesize cellDiffMap=_cellDiffMap;
- (id)p_localDefaultStylesAtCellID:(struct TSUCellCoord)arg1 cellUID:(struct TSTCellUID)arg2 migrationMap:(id)arg3;
- (void)p_captureOldRowColumnStyles;
- (void)p_setNumberOfHeadersWithRange:(struct _NSRange)arg1;
- (void)p_fixupFilters:(struct _NSRange)arg1;
- (struct _NSRange)p_validRangeForUIDs;
- (struct _NSRange)p_validRangeForBodyToHeaderColumnTransition;
- (struct _NSRange)p_validRangeForHeaderColumnToBodyTransition;
- (struct _NSRange)p_validRangeForBodyToFooterRowTransition;
- (struct _NSRange)p_validRangeForFooterRowToBodyTransition;
- (struct _NSRange)p_validRangeForBodyToHeaderRowTransition;
- (struct _NSRange)p_validRangeForHeaderRowToBodyTransition;
- (BOOL)p_willRangesAllowForNewHeadersFootersWithConvertingRange:(struct _NSRange)arg1 andBodyRange:(struct _NSRange)arg2;
- (BOOL)p_canAddHeaderColumns:(unsigned long long)arg1 withLeadingBodyColumnRange:(struct _NSRange)arg2 andColumnRange:(struct _NSRange)arg3;
- (BOOL)p_canAddHeaderRows:(unsigned long long)arg1 withLeadingBodyRowRange:(struct _NSRange)arg2 andRowRange:(struct _NSRange)arg3;
- (BOOL)p_canAddFooterRows:(unsigned long long)arg1 withTrailingBodyRowRange:(struct _NSRange)arg2 andRowRange:(struct _NSRange)arg3;
- (void)p_updateAndDirtyRefsInRange:(struct _NSRange)arg1;
- (void)p_notifyAtRange:(struct _NSRange)arg1;
- (void)p_applyStyleAndCellDiffMap:(id)arg1 toRange:(struct _NSRange)arg2 localCellStylesContainer:(id)arg3;
- (void)didInitFromSOS;
- (BOOL)supportsCollaboration;
- (BOOL)isValidForCommit;
- (id)makeInverse;
- (void)undoWork;
- (void)redoWork;
- (void)rollback;
- (void)commitWork;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)dealloc;
- (id)initWithTableInfo:(id)arg1 operatingOn:(unsigned long long)arg2 number:(unsigned short)arg3;
- (id)initWithTableInfo:(id)arg1 transition:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (id)initWithTableInfo:(id)arg1 uidArray:(const vector_dadc1b26 *)arg2 isRow:(BOOL)arg3;
- (id)initWithTableInfo:(id)arg1 transition:(unsigned long long)arg2 uidList:(const vector_dadc1b26 *)arg3 cellDiffMap:(id)arg4;
- (void)populateGSSPCmdTableChangeTableAreaForColumnOrRow:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

