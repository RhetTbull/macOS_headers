//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPMessageBase.h"

@class GSSPFontFeatures, NSString, TSDShadow, TSUColor;

@interface GSSPCharacterStyleProperties : GSSPMessageBase
{
    double mBaselineShift;
    int mCapitalization;
    NSString *mCompatibilityFontName;
    NSString *mEmphasisMarks;
    BOOL mBold;
    BOOL mItalic;
    TSUColor *mFontColor;
    GSSPFontFeatures *mFontFeatures;
    NSString *mFontName;
    double mFontSize;
    double mFontSizeDelta;
    double mKerning;
    NSString *mLanguage;
    int mLigatures;
    double mOutline;
    TSUColor *mOutlineColor;
    TSDShadow *mTextShadow;
    TSUColor *mStrikethruColor;
    int mStrikethru;
    double mStrikethruWidth;
    int mSuperscript;
    TSUColor *mTextBackground;
    double mTracking;
    TSUColor *mUnderlineColor;
    int mUnderline;
    double mUnderlineWidth;
    BOOL mWordStrikethru;
    BOOL mWordUnderline;
    int mWritingDirection;
    BOOL mDefinedBaselineShift;
    BOOL mDefinedCapitalization;
    BOOL mDefinedCompatibilityFontName;
    BOOL mDefinedEmphasisMarks;
    BOOL mDefinedBold;
    BOOL mDefinedItalic;
    BOOL mDefinedFontColor;
    BOOL mDefinedFontFeatures;
    BOOL mDefinedFontName;
    BOOL mDefinedFontSize;
    BOOL mDefinedFontSizeDelta;
    BOOL mDefinedKerning;
    BOOL mDefinedLanguage;
    BOOL mDefinedLigatures;
    BOOL mDefinedOutline;
    BOOL mDefinedOutlineColor;
    BOOL mDefinedTextShadow;
    BOOL mDefinedStrikethruColor;
    BOOL mDefinedStrikethru;
    BOOL mDefinedStrikethruWidth;
    BOOL mDefinedSuperscript;
    BOOL mDefinedTextBackground;
    BOOL mDefinedTracking;
    BOOL mDefinedUnderlineColor;
    BOOL mDefinedUnderline;
    BOOL mDefinedUnderlineWidth;
    BOOL mDefinedWordStrikethru;
    BOOL mDefinedWordUnderline;
    BOOL mDefinedWritingDirection;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
@property(readonly, nonatomic) BOOL definedWritingDirection; // @synthesize definedWritingDirection=mDefinedWritingDirection;
@property(readonly, nonatomic) BOOL definedWordUnderline; // @synthesize definedWordUnderline=mDefinedWordUnderline;
@property(readonly, nonatomic) BOOL definedWordStrikethru; // @synthesize definedWordStrikethru=mDefinedWordStrikethru;
@property(readonly, nonatomic) BOOL definedUnderlineWidth; // @synthesize definedUnderlineWidth=mDefinedUnderlineWidth;
@property(readonly, nonatomic) BOOL definedUnderline; // @synthesize definedUnderline=mDefinedUnderline;
@property(readonly, nonatomic) BOOL definedUnderlineColor; // @synthesize definedUnderlineColor=mDefinedUnderlineColor;
@property(readonly, nonatomic) BOOL definedTracking; // @synthesize definedTracking=mDefinedTracking;
@property(readonly, nonatomic) BOOL definedTextBackground; // @synthesize definedTextBackground=mDefinedTextBackground;
@property(readonly, nonatomic) BOOL definedSuperscript; // @synthesize definedSuperscript=mDefinedSuperscript;
@property(readonly, nonatomic) BOOL definedStrikethruWidth; // @synthesize definedStrikethruWidth=mDefinedStrikethruWidth;
@property(readonly, nonatomic) BOOL definedStrikethru; // @synthesize definedStrikethru=mDefinedStrikethru;
@property(readonly, nonatomic) BOOL definedStrikethruColor; // @synthesize definedStrikethruColor=mDefinedStrikethruColor;
@property(readonly, nonatomic) BOOL definedTextShadow; // @synthesize definedTextShadow=mDefinedTextShadow;
@property(readonly, nonatomic) BOOL definedOutlineColor; // @synthesize definedOutlineColor=mDefinedOutlineColor;
@property(readonly, nonatomic) BOOL definedOutline; // @synthesize definedOutline=mDefinedOutline;
@property(readonly, nonatomic) BOOL definedLigatures; // @synthesize definedLigatures=mDefinedLigatures;
@property(readonly, nonatomic) BOOL definedLanguage; // @synthesize definedLanguage=mDefinedLanguage;
@property(readonly, nonatomic) BOOL definedKerning; // @synthesize definedKerning=mDefinedKerning;
@property(readonly, nonatomic) BOOL definedFontSizeDelta; // @synthesize definedFontSizeDelta=mDefinedFontSizeDelta;
@property(readonly, nonatomic) BOOL definedFontSize; // @synthesize definedFontSize=mDefinedFontSize;
@property(readonly, nonatomic) BOOL definedFontName; // @synthesize definedFontName=mDefinedFontName;
@property(readonly, nonatomic) BOOL definedFontFeatures; // @synthesize definedFontFeatures=mDefinedFontFeatures;
@property(readonly, nonatomic) BOOL definedFontColor; // @synthesize definedFontColor=mDefinedFontColor;
@property(readonly, nonatomic) BOOL definedItalic; // @synthesize definedItalic=mDefinedItalic;
@property(readonly, nonatomic) BOOL definedBold; // @synthesize definedBold=mDefinedBold;
@property(readonly, nonatomic) BOOL definedEmphasisMarks; // @synthesize definedEmphasisMarks=mDefinedEmphasisMarks;
@property(readonly, nonatomic) BOOL definedCompatibilityFontName; // @synthesize definedCompatibilityFontName=mDefinedCompatibilityFontName;
@property(readonly, nonatomic) BOOL definedCapitalization; // @synthesize definedCapitalization=mDefinedCapitalization;
@property(readonly, nonatomic) BOOL definedBaselineShift; // @synthesize definedBaselineShift=mDefinedBaselineShift;
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
- (BOOL)clearWritingDirection;
- (BOOL)clearWordUnderline;
- (BOOL)clearWordStrikethru;
- (BOOL)clearUnderlineWidth;
- (BOOL)clearUnderline;
- (BOOL)clearUnderlineColor;
- (BOOL)clearTracking;
- (BOOL)clearTextBackground;
- (BOOL)clearSuperscript;
- (BOOL)clearStrikethruWidth;
- (BOOL)clearStrikethru;
- (BOOL)clearStrikethruColor;
- (BOOL)clearTextShadow;
- (BOOL)clearOutlineColor;
- (BOOL)clearOutline;
- (BOOL)clearLigatures;
- (BOOL)clearLanguage;
- (BOOL)clearKerning;
- (BOOL)clearFontSizeDelta;
- (BOOL)clearFontSize;
- (BOOL)clearFontName;
- (BOOL)clearFontFeatures;
- (BOOL)clearFontColor;
- (BOOL)clearItalic;
- (BOOL)clearBold;
- (BOOL)clearEmphasisMarks;
- (BOOL)clearCompatibilityFontName;
- (BOOL)clearCapitalization;
- (BOOL)clearBaselineShift;
- (void)setWritingDirection:(int)arg1;
- (int)writingDirection;
- (void)setWordUnderline:(BOOL)arg1;
- (BOOL)wordUnderline;
- (void)setWordStrikethru:(BOOL)arg1;
- (BOOL)wordStrikethru;
- (void)setUnderlineWidth:(double)arg1;
- (double)underlineWidth;
- (void)setUnderline:(int)arg1;
- (int)underline;
- (void)setUnderlineColor:(id)arg1;
- (id)underlineColor;
- (void)setTracking:(double)arg1;
- (double)tracking;
- (void)setTextBackground:(id)arg1;
- (id)textBackground;
- (void)setSuperscript:(int)arg1;
- (int)superscript;
- (void)setStrikethruWidth:(double)arg1;
- (double)strikethruWidth;
- (void)setStrikethru:(int)arg1;
- (int)strikethru;
- (void)setStrikethruColor:(id)arg1;
- (id)strikethruColor;
- (void)setTextShadow:(id)arg1;
- (id)textShadow;
- (void)setOutlineColor:(id)arg1;
- (id)outlineColor;
- (void)setOutline:(double)arg1;
- (double)outline;
- (void)setLigatures:(int)arg1;
- (int)ligatures;
- (void)setLanguage:(id)arg1;
- (id)language;
- (void)setKerning:(double)arg1;
- (double)kerning;
- (void)setFontSizeDelta:(double)arg1;
- (double)fontSizeDelta;
- (void)setFontSize:(double)arg1;
- (double)fontSize;
- (void)setFontName:(id)arg1;
- (id)fontName;
- (void)setFontFeatures:(id)arg1;
- (id)fontFeatures;
- (void)setFontColor:(id)arg1;
- (id)fontColor;
- (void)setItalic:(BOOL)arg1;
- (BOOL)italic;
- (void)setBold:(BOOL)arg1;
- (BOOL)bold;
- (void)setEmphasisMarks:(id)arg1;
- (id)emphasisMarks;
- (void)setCompatibilityFontName:(id)arg1;
- (id)compatibilityFontName;
- (void)setCapitalization:(int)arg1;
- (int)capitalization;
- (void)setBaselineShift:(double)arg1;
- (double)baselineShift;

@end

