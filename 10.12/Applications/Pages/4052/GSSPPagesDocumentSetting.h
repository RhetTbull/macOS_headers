//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPMessageBase.h"

@interface GSSPPagesDocumentSetting : GSSPMessageBase
{
    BOOL mHasBody;
    BOOL mHasHeaders;
    BOOL mHasFooters;
    int mFootnoteKind;
    int mFootnoteFormat;
    int mFootnoteNumbering;
    int mFootnoteGap;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
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
- (void)setFootnoteGap:(int)arg1;
- (int)footnoteGap;
- (void)setFootnoteNumbering:(int)arg1;
- (int)footnoteNumbering;
- (void)setFootnoteFormat:(int)arg1;
- (int)footnoteFormat;
- (void)setFootnoteKind:(int)arg1;
- (int)footnoteKind;
- (void)setHasFooters:(BOOL)arg1;
- (BOOL)hasFooters;
- (void)setHasHeaders:(BOOL)arg1;
- (BOOL)hasHeaders;
- (void)setHasBody:(BOOL)arg1;
- (BOOL)hasBody;

@end

