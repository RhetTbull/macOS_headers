//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPMessageBase.h"

@class NSString;

@interface GSSPFormulaPredicateArg : GSSPMessageBase
{
    int mArgType;
    BOOL mBoolean;
    double mNumber;
    NSString *mDate;
    NSString *mString;
    double mDurationValue;
    int mDurationUnits;
    BOOL mDefinedBoolean;
    BOOL mDefinedNumber;
    BOOL mDefinedDate;
    BOOL mDefinedString;
    BOOL mDefinedDurationValue;
    BOOL mDefinedDurationUnits;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
@property(readonly, nonatomic) BOOL definedDurationUnits; // @synthesize definedDurationUnits=mDefinedDurationUnits;
@property(readonly, nonatomic) BOOL definedDurationValue; // @synthesize definedDurationValue=mDefinedDurationValue;
@property(readonly, nonatomic) BOOL definedString; // @synthesize definedString=mDefinedString;
@property(readonly, nonatomic) BOOL definedDate; // @synthesize definedDate=mDefinedDate;
@property(readonly, nonatomic) BOOL definedNumber; // @synthesize definedNumber=mDefinedNumber;
@property(readonly, nonatomic) BOOL definedBoolean; // @synthesize definedBoolean=mDefinedBoolean;
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
- (BOOL)clearDurationUnits;
- (BOOL)clearDurationValue;
- (BOOL)clearString;
- (BOOL)clearDate;
- (BOOL)clearNumber;
- (BOOL)clearBoolean;
- (void)setDurationUnits:(int)arg1;
- (int)durationUnits;
- (void)setDurationValue:(double)arg1;
- (double)durationValue;
- (void)setString:(id)arg1;
- (id)string;
- (void)setDate:(id)arg1;
- (id)date;
- (void)setNumber:(double)arg1;
- (double)number;
- (void)setBoolean:(BOOL)arg1;
- (BOOL)boolean;
- (void)setArgType:(int)arg1;
- (int)argType;

@end

