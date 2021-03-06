//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPMessageBase.h"

#import "GSSPAutoDecodable-Protocol.h"

@class NSString, TSKStructuredTextImportSettings;

@interface GSSPStructuredTextImportRecord : GSSPMessageBase <GSSPAutoDecodable>
{
    TSKStructuredTextImportSettings *mImportSettings;
    vector_17f96b92 mImportedRegion;
    NSString *mImportSource;
    double mImportDate;
    NSString *mSourceData;
    float mConfidence;
    unsigned long long mSourceRowCount;
    unsigned long long mSourceColumnCount;
    BOOL mDefinedImportSource;
    BOOL mDefinedImportDate;
    BOOL mDefinedSourceData;
    BOOL mDefinedConfidence;
    BOOL mDefinedSourceRowCount;
    BOOL mDefinedSourceColumnCount;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
+ (CDUnknownFunctionPointerType)defaultDecodeConversionFunc;
+ (CDUnknownFunctionPointerType)autoDecodeConversionFunc;
+ (void)setAutoDecodeConversionFuncForDocServer:(CDUnknownFunctionPointerType)arg1;
+ (Class)autoDecodedClass;
@property(readonly, nonatomic) BOOL definedSourceColumnCount; // @synthesize definedSourceColumnCount=mDefinedSourceColumnCount;
@property(readonly, nonatomic) BOOL definedSourceRowCount; // @synthesize definedSourceRowCount=mDefinedSourceRowCount;
@property(readonly, nonatomic) BOOL definedConfidence; // @synthesize definedConfidence=mDefinedConfidence;
@property(readonly, nonatomic) BOOL definedSourceData; // @synthesize definedSourceData=mDefinedSourceData;
@property(readonly, nonatomic) BOOL definedImportDate; // @synthesize definedImportDate=mDefinedImportDate;
@property(readonly, nonatomic) BOOL definedImportSource; // @synthesize definedImportSource=mDefinedImportSource;
- (id).cxx_construct;
- (void).cxx_destruct;
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
- (BOOL)clearSourceColumnCount;
- (BOOL)clearSourceRowCount;
- (BOOL)clearConfidence;
- (BOOL)clearSourceData;
- (BOOL)clearImportDate;
- (BOOL)clearImportSource;
- (void)setSourceColumnCount:(unsigned long long)arg1;
- (unsigned long long)sourceColumnCount;
- (void)setSourceRowCount:(unsigned long long)arg1;
- (unsigned long long)sourceRowCount;
- (void)setConfidence:(float)arg1;
- (float)confidence;
- (void)setSourceData:(id)arg1;
- (id)sourceData;
- (void)setImportDate:(double)arg1;
- (double)importDate;
- (void)setImportSource:(id)arg1;
- (id)importSource;
- (void)setImportedRegion:(const vector_17f96b92 *)arg1;
- (vector_17f96b92 *)importedRegion;
- (void)setImportSettings:(id)arg1;
- (id)importSettings;

@end

