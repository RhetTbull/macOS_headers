//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPPersistableObject.h"

#import "GSSPAutoDecodable-Protocol.h"

@class KNSlideStyle, NSArray, NSUUID;

@interface GSSPPrototypeForUndoMasterChange : GSSPPersistableObject <GSSPAutoDecodable>
{
    KNSlideStyle *mStyle;
    NSUUID *mMasterSlideId;
    NSArray *mDrawableInfoIdList;
    NSArray *mPlaceholders;
    vector_a093891c mPlaceholderTagsList;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
+ (CDUnknownFunctionPointerType)defaultDecodeConversionFunc;
+ (CDUnknownFunctionPointerType)autoDecodeConversionFunc;
+ (void)setAutoDecodeConversionFuncForDocServer:(CDUnknownFunctionPointerType)arg1;
+ (Class)autoDecodedClass;
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
- (void)setPlaceholderTagsList:(const vector_a093891c *)arg1;
- (vector_a093891c *)placeholderTagsList;
- (void)setPlaceholders:(id)arg1;
- (id)placeholders;
- (void)setDrawableInfoIdList:(id)arg1;
- (id)drawableInfoIdList;
- (void)setMasterSlideId:(id)arg1;
- (id)masterSlideId;
- (void)setStyle:(id)arg1;
- (id)style;

@end

