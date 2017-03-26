//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPMessageBase.h"

#import "GSSPAutoDecodable-Protocol.h"

@class GSSPCellFormats, GSSPCellValue, NSString, TSWPStorage;

@interface GSSPCellFormatAndValue : GSSPMessageBase <GSSPAutoDecodable>
{
    int mValueType;
    GSSPCellValue *mCellValue;
    BOOL mUseAllSpareFormats;
    GSSPCellFormats *mCellFormats;
    BOOL mApplySpareFormatOnly;
    TSWPStorage *mRichTextStorage;
    NSString *mFormattedValue;
    TSWPStorage *mFormattedRichTextValue;
    int mSpareFormatType;
    BOOL mDefinedRichTextStorage;
    BOOL mDefinedFormattedValue;
    BOOL mDefinedFormattedRichTextValue;
    BOOL mDefinedSpareFormatType;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
+ (CDUnknownFunctionPointerType)defaultDecodeConversionFunc;
+ (CDUnknownFunctionPointerType)autoDecodeConversionFunc;
+ (void)setAutoDecodeConversionFuncForDocServer:(CDUnknownFunctionPointerType)arg1;
+ (Class)autoDecodedClass;
@property(readonly, nonatomic) BOOL definedSpareFormatType; // @synthesize definedSpareFormatType=mDefinedSpareFormatType;
@property(readonly, nonatomic) BOOL definedFormattedRichTextValue; // @synthesize definedFormattedRichTextValue=mDefinedFormattedRichTextValue;
@property(readonly, nonatomic) BOOL definedFormattedValue; // @synthesize definedFormattedValue=mDefinedFormattedValue;
@property(readonly, nonatomic) BOOL definedRichTextStorage; // @synthesize definedRichTextStorage=mDefinedRichTextStorage;
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
- (BOOL)clearSpareFormatType;
- (BOOL)clearFormattedRichTextValue;
- (BOOL)clearFormattedValue;
- (BOOL)clearRichTextStorage;
- (void)setSpareFormatType:(int)arg1;
- (int)spareFormatType;
- (void)setFormattedRichTextValue:(id)arg1;
- (id)formattedRichTextValue;
- (void)setFormattedValue:(id)arg1;
- (id)formattedValue;
- (void)setRichTextStorage:(id)arg1;
- (id)richTextStorage;
- (void)setApplySpareFormatOnly:(BOOL)arg1;
- (BOOL)applySpareFormatOnly;
- (void)setCellFormats:(id)arg1;
- (id)cellFormats;
- (void)setUseAllSpareFormats:(BOOL)arg1;
- (BOOL)useAllSpareFormats;
- (void)setCellValue:(id)arg1;
- (id)cellValue;
- (void)setValueType:(int)arg1;
- (int)valueType;

@end

