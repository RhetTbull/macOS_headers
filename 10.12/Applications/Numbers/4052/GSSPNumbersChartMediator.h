//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPChartMediator.h"

@class NSUUID, TNChartFormulaStorage;

@interface GSSPNumbersChartMediator : GSSPChartMediator
{
    vector_a629cf16 mAxisDataList;
    NSUUID *mEntityID;
    BOOL mAllSeriesLabelFormulasAreStatic;
    BOOL mAllCategoryLabelFormulasAreStatic;
    TNChartFormulaStorage *mFormulas;
    BOOL mDefinedFormulas;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
@property(readonly, nonatomic) BOOL definedFormulas; // @synthesize definedFormulas=mDefinedFormulas;
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
- (void)dealloc;
- (BOOL)clearFormulas;
- (void)setFormulas:(id)arg1;
- (id)formulas;
- (void)setAllCategoryLabelFormulasAreStatic:(BOOL)arg1;
- (BOOL)allCategoryLabelFormulasAreStatic;
- (void)setAllSeriesLabelFormulasAreStatic:(BOOL)arg1;
- (BOOL)allSeriesLabelFormulasAreStatic;
- (void)setEntityID:(id)arg1;
- (id)entityID;
- (void)setAxisDataList:(const vector_a629cf16 *)arg1;
- (vector_a629cf16 *)axisDataList;
- (id)newPersistentMediatorWithContext:(struct GSSPDecodeConversionContext *)arg1;

@end

