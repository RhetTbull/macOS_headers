//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPStylePropertyChangeSet.h"

#import "GSSPAutoDecodable-Protocol.h"

@class TSDSpecShadow, TSDSpecStroke, TSSSpecBool, TSSSpecDouble, TSSSpecInteger;

@interface GSSPChartAxisStylePropertyChangeSet : GSSPStylePropertyChangeSet <GSSPAutoDecodable>
{
    TSSSpecDouble *mCategory3dGridlineOpacity;
    TSSSpecDouble *mValue3dGridlineOpacity;
    TSDSpecStroke *mCategory3dGridlineStroke;
    TSDSpecStroke *mValue3dGridlineStroke;
    TSSSpecInteger *mCategoryHorizontalSpacing;
    TSSSpecInteger *mCategoryLabelParagraphStyleIndex;
    TSSSpecInteger *mDefaultLabelParagraphStyleIndex;
    TSSSpecInteger *mValueLabelParagraphStyleIndex;
    TSSSpecDouble *mCategoryLabelsOrientation;
    TSSSpecDouble *mDefaultLabelsOrientation;
    TSSSpecDouble *mValueLabelsOrientation;
    TSSSpecDouble *mCategoryMajorGridlineOpacity;
    TSSSpecDouble *mValueMajorGridlineOpacity;
    TSDSpecShadow *mCategoryMajorGridlineShadow;
    TSDSpecShadow *mValueMajorGridlineShadow;
    TSDSpecStroke *mCategoryMajorGridlineStroke;
    TSDSpecStroke *mValueMajorGridlineStroke;
    TSSSpecDouble *mCategoryMinorGridlineOpacity;
    TSSSpecDouble *mValueMinorGridlineOpacity;
    TSDSpecShadow *mCategoryMinorGridlineShadow;
    TSDSpecShadow *mValueMinorGridlineShadow;
    TSDSpecStroke *mCategoryMinorGridlineStroke;
    TSDSpecStroke *mValueMinorGridlineStroke;
    TSSSpecBool *mCategoryShowAxis;
    TSSSpecBool *mValueShowAxis;
    TSSSpecBool *mCategoryShowLastLabel;
    TSSSpecBool *mCategoryShowMajorGridlines;
    TSSSpecBool *mValueShowMajorGridlines;
    TSSSpecBool *mCategoryShowMajorTickmarks;
    TSSSpecBool *mValueShowMajorTickmarks;
    TSSSpecBool *mValueShowMinimumLabel;
    TSSSpecBool *mCategoryShowMinorGridlines;
    TSSSpecBool *mValueShowMinorGridlines;
    TSSSpecBool *mCategoryShowMinorTickmarks;
    TSSSpecBool *mValueShowMinorTickmarks;
    TSSSpecInteger *mCategoryTickmarkLocation;
    TSSSpecInteger *mValueTickmarkLocation;
    TSSSpecInteger *mCategoryTitleParagraphStyleIndex;
    TSSSpecInteger *mDefaultTitleParagraphStyleIndex;
    TSSSpecInteger *mValueTitleParagraphStyleIndex;
    TSSSpecInteger *mCategoryVerticalSpacing;
    BOOL mDefinedCategory3dGridlineOpacity;
    BOOL mDefinedValue3dGridlineOpacity;
    BOOL mDefinedCategory3dGridlineStroke;
    BOOL mDefinedValue3dGridlineStroke;
    BOOL mDefinedCategoryHorizontalSpacing;
    BOOL mDefinedCategoryLabelParagraphStyleIndex;
    BOOL mDefinedDefaultLabelParagraphStyleIndex;
    BOOL mDefinedValueLabelParagraphStyleIndex;
    BOOL mDefinedCategoryLabelsOrientation;
    BOOL mDefinedDefaultLabelsOrientation;
    BOOL mDefinedValueLabelsOrientation;
    BOOL mDefinedCategoryMajorGridlineOpacity;
    BOOL mDefinedValueMajorGridlineOpacity;
    BOOL mDefinedCategoryMajorGridlineShadow;
    BOOL mDefinedValueMajorGridlineShadow;
    BOOL mDefinedCategoryMajorGridlineStroke;
    BOOL mDefinedValueMajorGridlineStroke;
    BOOL mDefinedCategoryMinorGridlineOpacity;
    BOOL mDefinedValueMinorGridlineOpacity;
    BOOL mDefinedCategoryMinorGridlineShadow;
    BOOL mDefinedValueMinorGridlineShadow;
    BOOL mDefinedCategoryMinorGridlineStroke;
    BOOL mDefinedValueMinorGridlineStroke;
    BOOL mDefinedCategoryShowAxis;
    BOOL mDefinedValueShowAxis;
    BOOL mDefinedCategoryShowLastLabel;
    BOOL mDefinedCategoryShowMajorGridlines;
    BOOL mDefinedValueShowMajorGridlines;
    BOOL mDefinedCategoryShowMajorTickmarks;
    BOOL mDefinedValueShowMajorTickmarks;
    BOOL mDefinedValueShowMinimumLabel;
    BOOL mDefinedCategoryShowMinorGridlines;
    BOOL mDefinedValueShowMinorGridlines;
    BOOL mDefinedCategoryShowMinorTickmarks;
    BOOL mDefinedValueShowMinorTickmarks;
    BOOL mDefinedCategoryTickmarkLocation;
    BOOL mDefinedValueTickmarkLocation;
    BOOL mDefinedCategoryTitleParagraphStyleIndex;
    BOOL mDefinedDefaultTitleParagraphStyleIndex;
    BOOL mDefinedValueTitleParagraphStyleIndex;
    BOOL mDefinedCategoryVerticalSpacing;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
+ (CDUnknownFunctionPointerType)defaultDecodeConversionFunc;
+ (CDUnknownFunctionPointerType)autoDecodeConversionFunc;
+ (void)setAutoDecodeConversionFuncForDocServer:(CDUnknownFunctionPointerType)arg1;
+ (Class)autoDecodedClass;
@property(readonly, nonatomic) BOOL definedCategoryVerticalSpacing; // @synthesize definedCategoryVerticalSpacing=mDefinedCategoryVerticalSpacing;
@property(readonly, nonatomic) BOOL definedValueTitleParagraphStyleIndex; // @synthesize definedValueTitleParagraphStyleIndex=mDefinedValueTitleParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedDefaultTitleParagraphStyleIndex; // @synthesize definedDefaultTitleParagraphStyleIndex=mDefinedDefaultTitleParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedCategoryTitleParagraphStyleIndex; // @synthesize definedCategoryTitleParagraphStyleIndex=mDefinedCategoryTitleParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedValueTickmarkLocation; // @synthesize definedValueTickmarkLocation=mDefinedValueTickmarkLocation;
@property(readonly, nonatomic) BOOL definedCategoryTickmarkLocation; // @synthesize definedCategoryTickmarkLocation=mDefinedCategoryTickmarkLocation;
@property(readonly, nonatomic) BOOL definedValueShowMinorTickmarks; // @synthesize definedValueShowMinorTickmarks=mDefinedValueShowMinorTickmarks;
@property(readonly, nonatomic) BOOL definedCategoryShowMinorTickmarks; // @synthesize definedCategoryShowMinorTickmarks=mDefinedCategoryShowMinorTickmarks;
@property(readonly, nonatomic) BOOL definedValueShowMinorGridlines; // @synthesize definedValueShowMinorGridlines=mDefinedValueShowMinorGridlines;
@property(readonly, nonatomic) BOOL definedCategoryShowMinorGridlines; // @synthesize definedCategoryShowMinorGridlines=mDefinedCategoryShowMinorGridlines;
@property(readonly, nonatomic) BOOL definedValueShowMinimumLabel; // @synthesize definedValueShowMinimumLabel=mDefinedValueShowMinimumLabel;
@property(readonly, nonatomic) BOOL definedValueShowMajorTickmarks; // @synthesize definedValueShowMajorTickmarks=mDefinedValueShowMajorTickmarks;
@property(readonly, nonatomic) BOOL definedCategoryShowMajorTickmarks; // @synthesize definedCategoryShowMajorTickmarks=mDefinedCategoryShowMajorTickmarks;
@property(readonly, nonatomic) BOOL definedValueShowMajorGridlines; // @synthesize definedValueShowMajorGridlines=mDefinedValueShowMajorGridlines;
@property(readonly, nonatomic) BOOL definedCategoryShowMajorGridlines; // @synthesize definedCategoryShowMajorGridlines=mDefinedCategoryShowMajorGridlines;
@property(readonly, nonatomic) BOOL definedCategoryShowLastLabel; // @synthesize definedCategoryShowLastLabel=mDefinedCategoryShowLastLabel;
@property(readonly, nonatomic) BOOL definedValueShowAxis; // @synthesize definedValueShowAxis=mDefinedValueShowAxis;
@property(readonly, nonatomic) BOOL definedCategoryShowAxis; // @synthesize definedCategoryShowAxis=mDefinedCategoryShowAxis;
@property(readonly, nonatomic) BOOL definedValueMinorGridlineStroke; // @synthesize definedValueMinorGridlineStroke=mDefinedValueMinorGridlineStroke;
@property(readonly, nonatomic) BOOL definedCategoryMinorGridlineStroke; // @synthesize definedCategoryMinorGridlineStroke=mDefinedCategoryMinorGridlineStroke;
@property(readonly, nonatomic) BOOL definedValueMinorGridlineShadow; // @synthesize definedValueMinorGridlineShadow=mDefinedValueMinorGridlineShadow;
@property(readonly, nonatomic) BOOL definedCategoryMinorGridlineShadow; // @synthesize definedCategoryMinorGridlineShadow=mDefinedCategoryMinorGridlineShadow;
@property(readonly, nonatomic) BOOL definedValueMinorGridlineOpacity; // @synthesize definedValueMinorGridlineOpacity=mDefinedValueMinorGridlineOpacity;
@property(readonly, nonatomic) BOOL definedCategoryMinorGridlineOpacity; // @synthesize definedCategoryMinorGridlineOpacity=mDefinedCategoryMinorGridlineOpacity;
@property(readonly, nonatomic) BOOL definedValueMajorGridlineStroke; // @synthesize definedValueMajorGridlineStroke=mDefinedValueMajorGridlineStroke;
@property(readonly, nonatomic) BOOL definedCategoryMajorGridlineStroke; // @synthesize definedCategoryMajorGridlineStroke=mDefinedCategoryMajorGridlineStroke;
@property(readonly, nonatomic) BOOL definedValueMajorGridlineShadow; // @synthesize definedValueMajorGridlineShadow=mDefinedValueMajorGridlineShadow;
@property(readonly, nonatomic) BOOL definedCategoryMajorGridlineShadow; // @synthesize definedCategoryMajorGridlineShadow=mDefinedCategoryMajorGridlineShadow;
@property(readonly, nonatomic) BOOL definedValueMajorGridlineOpacity; // @synthesize definedValueMajorGridlineOpacity=mDefinedValueMajorGridlineOpacity;
@property(readonly, nonatomic) BOOL definedCategoryMajorGridlineOpacity; // @synthesize definedCategoryMajorGridlineOpacity=mDefinedCategoryMajorGridlineOpacity;
@property(readonly, nonatomic) BOOL definedValueLabelsOrientation; // @synthesize definedValueLabelsOrientation=mDefinedValueLabelsOrientation;
@property(readonly, nonatomic) BOOL definedDefaultLabelsOrientation; // @synthesize definedDefaultLabelsOrientation=mDefinedDefaultLabelsOrientation;
@property(readonly, nonatomic) BOOL definedCategoryLabelsOrientation; // @synthesize definedCategoryLabelsOrientation=mDefinedCategoryLabelsOrientation;
@property(readonly, nonatomic) BOOL definedValueLabelParagraphStyleIndex; // @synthesize definedValueLabelParagraphStyleIndex=mDefinedValueLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedDefaultLabelParagraphStyleIndex; // @synthesize definedDefaultLabelParagraphStyleIndex=mDefinedDefaultLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedCategoryLabelParagraphStyleIndex; // @synthesize definedCategoryLabelParagraphStyleIndex=mDefinedCategoryLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedCategoryHorizontalSpacing; // @synthesize definedCategoryHorizontalSpacing=mDefinedCategoryHorizontalSpacing;
@property(readonly, nonatomic) BOOL definedValue3dGridlineStroke; // @synthesize definedValue3dGridlineStroke=mDefinedValue3dGridlineStroke;
@property(readonly, nonatomic) BOOL definedCategory3dGridlineStroke; // @synthesize definedCategory3dGridlineStroke=mDefinedCategory3dGridlineStroke;
@property(readonly, nonatomic) BOOL definedValue3dGridlineOpacity; // @synthesize definedValue3dGridlineOpacity=mDefinedValue3dGridlineOpacity;
@property(readonly, nonatomic) BOOL definedCategory3dGridlineOpacity; // @synthesize definedCategory3dGridlineOpacity=mDefinedCategory3dGridlineOpacity;
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
- (BOOL)clearCategoryVerticalSpacing;
- (BOOL)clearValueTitleParagraphStyleIndex;
- (BOOL)clearDefaultTitleParagraphStyleIndex;
- (BOOL)clearCategoryTitleParagraphStyleIndex;
- (BOOL)clearValueTickmarkLocation;
- (BOOL)clearCategoryTickmarkLocation;
- (BOOL)clearValueShowMinorTickmarks;
- (BOOL)clearCategoryShowMinorTickmarks;
- (BOOL)clearValueShowMinorGridlines;
- (BOOL)clearCategoryShowMinorGridlines;
- (BOOL)clearValueShowMinimumLabel;
- (BOOL)clearValueShowMajorTickmarks;
- (BOOL)clearCategoryShowMajorTickmarks;
- (BOOL)clearValueShowMajorGridlines;
- (BOOL)clearCategoryShowMajorGridlines;
- (BOOL)clearCategoryShowLastLabel;
- (BOOL)clearValueShowAxis;
- (BOOL)clearCategoryShowAxis;
- (BOOL)clearValueMinorGridlineStroke;
- (BOOL)clearCategoryMinorGridlineStroke;
- (BOOL)clearValueMinorGridlineShadow;
- (BOOL)clearCategoryMinorGridlineShadow;
- (BOOL)clearValueMinorGridlineOpacity;
- (BOOL)clearCategoryMinorGridlineOpacity;
- (BOOL)clearValueMajorGridlineStroke;
- (BOOL)clearCategoryMajorGridlineStroke;
- (BOOL)clearValueMajorGridlineShadow;
- (BOOL)clearCategoryMajorGridlineShadow;
- (BOOL)clearValueMajorGridlineOpacity;
- (BOOL)clearCategoryMajorGridlineOpacity;
- (BOOL)clearValueLabelsOrientation;
- (BOOL)clearDefaultLabelsOrientation;
- (BOOL)clearCategoryLabelsOrientation;
- (BOOL)clearValueLabelParagraphStyleIndex;
- (BOOL)clearDefaultLabelParagraphStyleIndex;
- (BOOL)clearCategoryLabelParagraphStyleIndex;
- (BOOL)clearCategoryHorizontalSpacing;
- (BOOL)clearValue3dGridlineStroke;
- (BOOL)clearCategory3dGridlineStroke;
- (BOOL)clearValue3dGridlineOpacity;
- (BOOL)clearCategory3dGridlineOpacity;
- (void)setCategoryVerticalSpacing:(id)arg1;
- (id)categoryVerticalSpacing;
- (void)setValueTitleParagraphStyleIndex:(id)arg1;
- (id)valueTitleParagraphStyleIndex;
- (void)setDefaultTitleParagraphStyleIndex:(id)arg1;
- (id)defaultTitleParagraphStyleIndex;
- (void)setCategoryTitleParagraphStyleIndex:(id)arg1;
- (id)categoryTitleParagraphStyleIndex;
- (void)setValueTickmarkLocation:(id)arg1;
- (id)valueTickmarkLocation;
- (void)setCategoryTickmarkLocation:(id)arg1;
- (id)categoryTickmarkLocation;
- (void)setValueShowMinorTickmarks:(id)arg1;
- (id)valueShowMinorTickmarks;
- (void)setCategoryShowMinorTickmarks:(id)arg1;
- (id)categoryShowMinorTickmarks;
- (void)setValueShowMinorGridlines:(id)arg1;
- (id)valueShowMinorGridlines;
- (void)setCategoryShowMinorGridlines:(id)arg1;
- (id)categoryShowMinorGridlines;
- (void)setValueShowMinimumLabel:(id)arg1;
- (id)valueShowMinimumLabel;
- (void)setValueShowMajorTickmarks:(id)arg1;
- (id)valueShowMajorTickmarks;
- (void)setCategoryShowMajorTickmarks:(id)arg1;
- (id)categoryShowMajorTickmarks;
- (void)setValueShowMajorGridlines:(id)arg1;
- (id)valueShowMajorGridlines;
- (void)setCategoryShowMajorGridlines:(id)arg1;
- (id)categoryShowMajorGridlines;
- (void)setCategoryShowLastLabel:(id)arg1;
- (id)categoryShowLastLabel;
- (void)setValueShowAxis:(id)arg1;
- (id)valueShowAxis;
- (void)setCategoryShowAxis:(id)arg1;
- (id)categoryShowAxis;
- (void)setValueMinorGridlineStroke:(id)arg1;
- (id)valueMinorGridlineStroke;
- (void)setCategoryMinorGridlineStroke:(id)arg1;
- (id)categoryMinorGridlineStroke;
- (void)setValueMinorGridlineShadow:(id)arg1;
- (id)valueMinorGridlineShadow;
- (void)setCategoryMinorGridlineShadow:(id)arg1;
- (id)categoryMinorGridlineShadow;
- (void)setValueMinorGridlineOpacity:(id)arg1;
- (id)valueMinorGridlineOpacity;
- (void)setCategoryMinorGridlineOpacity:(id)arg1;
- (id)categoryMinorGridlineOpacity;
- (void)setValueMajorGridlineStroke:(id)arg1;
- (id)valueMajorGridlineStroke;
- (void)setCategoryMajorGridlineStroke:(id)arg1;
- (id)categoryMajorGridlineStroke;
- (void)setValueMajorGridlineShadow:(id)arg1;
- (id)valueMajorGridlineShadow;
- (void)setCategoryMajorGridlineShadow:(id)arg1;
- (id)categoryMajorGridlineShadow;
- (void)setValueMajorGridlineOpacity:(id)arg1;
- (id)valueMajorGridlineOpacity;
- (void)setCategoryMajorGridlineOpacity:(id)arg1;
- (id)categoryMajorGridlineOpacity;
- (void)setValueLabelsOrientation:(id)arg1;
- (id)valueLabelsOrientation;
- (void)setDefaultLabelsOrientation:(id)arg1;
- (id)defaultLabelsOrientation;
- (void)setCategoryLabelsOrientation:(id)arg1;
- (id)categoryLabelsOrientation;
- (void)setValueLabelParagraphStyleIndex:(id)arg1;
- (id)valueLabelParagraphStyleIndex;
- (void)setDefaultLabelParagraphStyleIndex:(id)arg1;
- (id)defaultLabelParagraphStyleIndex;
- (void)setCategoryLabelParagraphStyleIndex:(id)arg1;
- (id)categoryLabelParagraphStyleIndex;
- (void)setCategoryHorizontalSpacing:(id)arg1;
- (id)categoryHorizontalSpacing;
- (void)setValue3dGridlineStroke:(id)arg1;
- (id)value3dGridlineStroke;
- (void)setCategory3dGridlineStroke:(id)arg1;
- (id)category3dGridlineStroke;
- (void)setValue3dGridlineOpacity:(id)arg1;
- (id)value3dGridlineOpacity;
- (void)setCategory3dGridlineOpacity:(id)arg1;
- (id)category3dGridlineOpacity;

@end

