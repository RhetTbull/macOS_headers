//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPChart3dMaterialPackage.h"

#import "GSSPAutoDecodable-Protocol.h"

@class TSCH3DDiffuseMaterial, TSCH3DEmissiveMaterial, TSCH3DModulateMaterial, TSCH3DShininessMaterial, TSCH3DSpecularMaterial;

@interface GSSPChart3dPhongMaterialPackage : GSSPChart3dMaterialPackage <GSSPAutoDecodable>
{
    TSCH3DEmissiveMaterial *mEmissive;
    TSCH3DDiffuseMaterial *mDiffuse;
    TSCH3DModulateMaterial *mModulate;
    TSCH3DSpecularMaterial *mSpecular;
    TSCH3DShininessMaterial *mShininess;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
+ (CDUnknownFunctionPointerType)defaultDecodeConversionFunc;
+ (CDUnknownFunctionPointerType)autoDecodeConversionFunc;
+ (void)setAutoDecodeConversionFuncForDocServer:(CDUnknownFunctionPointerType)arg1;
+ (Class)autoDecodedClass;
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
- (void)setShininess:(id)arg1;
- (id)shininess;
- (void)setSpecular:(id)arg1;
- (id)specular;
- (void)setModulate:(id)arg1;
- (id)modulate;
- (void)setDiffuse:(id)arg1;
- (id)diffuse;
- (void)setEmissive:(id)arg1;
- (id)emissive;

@end

