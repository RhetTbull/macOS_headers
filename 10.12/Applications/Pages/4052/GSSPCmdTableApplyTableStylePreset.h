//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPCmdTableBaseWithTableInfoId.h"

#import "GSSPAutoDecodable-Protocol.h"

@class NSArray, TSTCellDiffMap, TSTChangePropagationMapWrapper, TSTTableStyleNetwork, TSTTableStylePreset;

@interface GSSPCmdTableApplyTableStylePreset : GSSPCmdTableBaseWithTableInfoId <GSSPAutoDecodable>
{
    unsigned long long mApplyPresetOption;
    BOOL mTableClearsAllFlag;
    NSArray *mRowColumnStyles;
    TSTTableStylePreset *mTableStylePreset;
    TSTTableStyleNetwork *mTableStyleNetwork;
    TSTCellDiffMap *mCellDiffMap;
    TSTChangePropagationMapWrapper *mChangePropagationMapWrapper;
    BOOL mDefinedTableStylePreset;
    BOOL mDefinedTableStyleNetwork;
    BOOL mDefinedCellDiffMap;
    BOOL mDefinedChangePropagationMapWrapper;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
+ (CDUnknownFunctionPointerType)defaultDecodeConversionFunc;
+ (CDUnknownFunctionPointerType)autoDecodeConversionFunc;
+ (void)setAutoDecodeConversionFuncForDocServer:(CDUnknownFunctionPointerType)arg1;
+ (Class)autoDecodedClass;
@property(readonly, nonatomic) BOOL definedChangePropagationMapWrapper; // @synthesize definedChangePropagationMapWrapper=mDefinedChangePropagationMapWrapper;
@property(readonly, nonatomic) BOOL definedCellDiffMap; // @synthesize definedCellDiffMap=mDefinedCellDiffMap;
@property(readonly, nonatomic) BOOL definedTableStyleNetwork; // @synthesize definedTableStyleNetwork=mDefinedTableStyleNetwork;
@property(readonly, nonatomic) BOOL definedTableStylePreset; // @synthesize definedTableStylePreset=mDefinedTableStylePreset;
- (id)description;
- (id)dspClassName;
- (id)jsonNSDictionaryValue;
- (void)populateJsonNSDictionaryValueToDictionary:(id)arg1;
- (int)p_getDiffEncodingScoreWith:(id)arg1;
- (void)p_populateStructHashKey:(struct GSSPHashKeyBuilder *)arg1;
- (unsigned long long)p_getStructHashKeyLength;
- (int)getStructHashId;
- (void)serializeRequiredFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (void)serializeOptionalFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (id)dspTypeIdString;
- (void)populateRequiredField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)populateOptionalField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)shallowCopyAllFieldsFrom:(id)arg1;
- (void)dealloc;
- (BOOL)clearChangePropagationMapWrapper;
- (BOOL)clearCellDiffMap;
- (BOOL)clearTableStyleNetwork;
- (BOOL)clearTableStylePreset;
- (void)setChangePropagationMapWrapper:(id)arg1;
- (id)changePropagationMapWrapper;
- (void)setCellDiffMap:(id)arg1;
- (id)cellDiffMap;
- (void)setTableStyleNetwork:(id)arg1;
- (id)tableStyleNetwork;
- (void)setTableStylePreset:(id)arg1;
- (id)tableStylePreset;
- (void)setRowColumnStyles:(id)arg1;
- (id)rowColumnStyles;
- (void)setTableClearsAllFlag:(BOOL)arg1;
- (BOOL)tableClearsAllFlag;
- (void)setApplyPresetOption:(unsigned long long)arg1;
- (unsigned long long)applyPresetOption;

@end

