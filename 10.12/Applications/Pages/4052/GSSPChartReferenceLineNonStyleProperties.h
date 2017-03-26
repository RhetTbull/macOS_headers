//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPMessageBase.h"

@class GSSPChartsOptionalDoubleArchive, NSString;

@interface GSSPChartReferenceLineNonStyleProperties : GSSPMessageBase
{
    GSSPChartsOptionalDoubleArchive *mDefaultCustomValue;
    NSString *mDefaultLabel;
    BOOL mDefaultShowLabel;
    BOOL mDefaultShowLine;
    BOOL mDefaultShowValueLabel;
    unsigned long long mDefaultType;
    BOOL mDefinedDefaultCustomValue;
    BOOL mDefinedDefaultLabel;
    BOOL mDefinedDefaultShowLabel;
    BOOL mDefinedDefaultShowLine;
    BOOL mDefinedDefaultShowValueLabel;
    BOOL mDefinedDefaultType;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
@property(readonly, nonatomic) BOOL definedDefaultType; // @synthesize definedDefaultType=mDefinedDefaultType;
@property(readonly, nonatomic) BOOL definedDefaultShowValueLabel; // @synthesize definedDefaultShowValueLabel=mDefinedDefaultShowValueLabel;
@property(readonly, nonatomic) BOOL definedDefaultShowLine; // @synthesize definedDefaultShowLine=mDefinedDefaultShowLine;
@property(readonly, nonatomic) BOOL definedDefaultShowLabel; // @synthesize definedDefaultShowLabel=mDefinedDefaultShowLabel;
@property(readonly, nonatomic) BOOL definedDefaultLabel; // @synthesize definedDefaultLabel=mDefinedDefaultLabel;
@property(readonly, nonatomic) BOOL definedDefaultCustomValue; // @synthesize definedDefaultCustomValue=mDefinedDefaultCustomValue;
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
- (BOOL)clearDefaultType;
- (BOOL)clearDefaultShowValueLabel;
- (BOOL)clearDefaultShowLine;
- (BOOL)clearDefaultShowLabel;
- (BOOL)clearDefaultLabel;
- (BOOL)clearDefaultCustomValue;
- (void)setDefaultType:(unsigned long long)arg1;
- (unsigned long long)defaultType;
- (void)setDefaultShowValueLabel:(BOOL)arg1;
- (BOOL)defaultShowValueLabel;
- (void)setDefaultShowLine:(BOOL)arg1;
- (BOOL)defaultShowLine;
- (void)setDefaultShowLabel:(BOOL)arg1;
- (BOOL)defaultShowLabel;
- (void)setDefaultLabel:(id)arg1;
- (id)defaultLabel;
- (void)setDefaultCustomValue:(id)arg1;
- (id)defaultCustomValue;

@end

