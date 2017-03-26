//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPCmdMutateCellFormat.h"

#import "GSSPAutoDecodable-Protocol.h"

@class NSString;

@interface GSSPCmdTableSetDateTimeFormat : GSSPCmdMutateCellFormat <GSSPAutoDecodable>
{
    NSString *mDateFormatString;
    NSString *mTimeFormatString;
    BOOL mDefinedDateFormatString;
    BOOL mDefinedTimeFormatString;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
+ (CDUnknownFunctionPointerType)defaultDecodeConversionFunc;
+ (CDUnknownFunctionPointerType)autoDecodeConversionFunc;
+ (void)setAutoDecodeConversionFuncForDocServer:(CDUnknownFunctionPointerType)arg1;
+ (Class)autoDecodedClass;
@property(readonly, nonatomic) BOOL definedTimeFormatString; // @synthesize definedTimeFormatString=mDefinedTimeFormatString;
@property(readonly, nonatomic) BOOL definedDateFormatString; // @synthesize definedDateFormatString=mDefinedDateFormatString;
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
- (BOOL)clearTimeFormatString;
- (BOOL)clearDateFormatString;
- (void)setTimeFormatString:(id)arg1;
- (id)timeFormatString;
- (void)setDateFormatString:(id)arg1;
- (id)dateFormatString;

@end

