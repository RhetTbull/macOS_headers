//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPCmdTableBaseWithTableInfoId.h"

#import "GSSPAutoDecodable-Protocol.h"

@class GSSPCellRange, NSString, TSTCellMap, TSTDefaultCellStylesContainer;

@interface GSSPCmdTableMoveCells : GSSPCmdTableBaseWithTableInfoId <GSSPAutoDecodable>
{
    NSString *mDstTableInfoIdPath;
    TSTDefaultCellStylesContainer *mDstCellStylesContainer;
    TSTCellMap *mSrcCellMap;
    TSTCellMap *mDstCellMap;
    GSSPCellRange *mSrcUidRange;
    GSSPCellRange *mDstUidRange;
    long long mTableDimension;
    BOOL mDefinedTableDimension;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
+ (CDUnknownFunctionPointerType)defaultDecodeConversionFunc;
+ (CDUnknownFunctionPointerType)autoDecodeConversionFunc;
+ (void)setAutoDecodeConversionFuncForDocServer:(CDUnknownFunctionPointerType)arg1;
+ (Class)autoDecodedClass;
@property(readonly, nonatomic) BOOL definedTableDimension; // @synthesize definedTableDimension=mDefinedTableDimension;
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
- (BOOL)clearTableDimension;
- (void)setTableDimension:(long long)arg1;
- (long long)tableDimension;
- (void)setDstUidRange:(id)arg1;
- (id)dstUidRange;
- (void)setSrcUidRange:(id)arg1;
- (id)srcUidRange;
- (void)setDstCellMap:(id)arg1;
- (id)dstCellMap;
- (void)setSrcCellMap:(id)arg1;
- (id)srcCellMap;
- (void)setDstCellStylesContainer:(id)arg1;
- (id)dstCellStylesContainer;
- (void)setDstTableInfoIdPath:(id)arg1;
- (id)dstTableInfoIdPath;

@end

