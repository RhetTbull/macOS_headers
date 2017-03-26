//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTableCommand.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDCommandInducedForPropagation-Protocol.h"

@class NSArray, TSTCellDiffMap, TSTChangePropagationMapWrapper, TSTDefaultCellStylesContainer, TSTTableStyleNetwork, TSTTableStylePreset, TSUSparseArray;

@interface TSTCommandApplyTableStylePreset : TSTTableCommand <GSSPAutoEncodable, TSDCommandInducedForPropagation>
{
    unsigned long long _applyPresetOption;
    BOOL _tableClearsAllFlag;
    NSArray *_rowColumnStyles;
    TSTTableStylePreset *_tableStylePreset;
    TSTTableStyleNetwork *_tableStyleNetwork;
    TSTCellDiffMap *_cellDiffMap;
    TSTChangePropagationMapWrapper *_changePropagationMapWrapper;
    BOOL _definedTableStylePreset;
    BOOL _definedTableStyleNetwork;
    BOOL _definedCellDiffMap;
    BOOL _definedChangePropagationMapWrapper;
    TSTTableStylePreset *_undoTableStylePreset;
    TSTTableStyleNetwork *_undoStyleNetwork;
    TSTCellDiffMap *_undoCellDiffMap;
    NSArray *_undoRowColumnStyles;
    BOOL _undoTableClearsAllFlag;
    BOOL _clearOverrides;
    TSTTableStylePreset *_workingTableStylePreset;
    TSTTableStyleNetwork *_workingTableStyleNetwork;
    TSUSparseArray *_oldRowStyles;
    TSUSparseArray *_oldColStyles;
    TSTDefaultCellStylesContainer *_undoCellStylesContainer;
}

@property(retain, nonatomic) TSTDefaultCellStylesContainer *undoCellStylesContainer; // @synthesize undoCellStylesContainer=_undoCellStylesContainer;
@property(retain, nonatomic) NSArray *undoRowColumnStyles; // @synthesize undoRowColumnStyles=_undoRowColumnStyles;
@property(retain, nonatomic) TSTCellDiffMap *undoCellDiffMap; // @synthesize undoCellDiffMap=_undoCellDiffMap;
@property(retain, nonatomic) TSTCellDiffMap *cellDiffMap; // @synthesize cellDiffMap=_cellDiffMap;
@property(retain, nonatomic) TSTTableStyleNetwork *undoStyleNetwork; // @synthesize undoStyleNetwork=_undoStyleNetwork;
@property(retain, nonatomic) TSTTableStylePreset *undoTableStylePreset; // @synthesize undoTableStylePreset=_undoTableStylePreset;
- (BOOL)allowNonNullFromTableID;
@property(readonly, nonatomic) NSArray *objectsBeingModified;
- (void)p_setupWorkingPresetsAndTableStyles;
- (void)p_setTableStyle;
- (void)p_fixCellsWithCellDiffMap:(id)arg1 localCellStylesContainer:(id)arg2;
- (id)p_localDefaultStylesAtCellID:(struct TSUCellCoord)arg1 cellUID:(struct TSTCellUID)arg2 migrationMap:(id)arg3;
- (id)p_handleRowColumnStyles:(id)arg1 saveUndo:(BOOL)arg2;
- (void)redoWork;
- (void)undoWork;
- (id)makeInverse;
- (unsigned long long)p_inverseApplyPresetOption;
- (void)rollback;
- (BOOL)isValidForCommit;
- (BOOL)supportsCollaboration;
- (BOOL)shouldUpdateTimestamp;
- (void)commitWork;
- (id)actionString;
- (void)dealloc;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithTableInfo:(id)arg1 changePropagationMap:(id)arg2;
- (id)initForAddedPresetWithTableInfo:(id)arg1 tableStylePreset:(id)arg2;
- (id)initWithTableInfo:(id)arg1 tableStylePreset:(id)arg2 clearAndApply:(BOOL)arg3;
- (id)initWithTableInfo:(id)arg1 tableStylePreset:(id)arg2 tableStyleNetwork:(id)arg3 rowColStyles:(id)arg4 applyPresetOption:(unsigned long long)arg5 cellDiffMap:(id)arg6 tableClearsAllFlag:(BOOL)arg7 changePropagationMap:(id)arg8;
- (void)populateGSSPCmdTableApplyTableStylePreset:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

// Remaining properties
@property(readonly, nonatomic) NSArray *otherSerializationClasses;

@end

