//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPMessageBase.h"

@class TSDFill, TSDLineEnd, TSDShadow, TSDStroke;

@interface GSSPChartSeriesStyleProperties : GSSPMessageBase
{
    TSDLineEnd *mDefaultErrorBarLineEnd;
    TSDLineEnd *mDefaultErrorBarLineEndScatterX;
    TSDShadow *mDefaultErrorBarShadow;
    TSDStroke *mDefaultErrorBarStroke;
    TSDStroke *mDefaultErrorBarStrokeScatterX;
    TSDFill *mArea3dFill;
    TSDFill *mBar3dFill;
    TSDFill *mColumn3dFill;
    TSDFill *mLine3dFill;
    TSDFill *mPie3dFill;
    TSDFill *mAreaFill;
    TSDFill *mBarFill;
    TSDFill *mColumnFill;
    TSDFill *mDefaultFill;
    TSDFill *mMixedAreaFill;
    TSDFill *mMixedColumnFill;
    TSDFill *mPieFill;
    int mAreaLabelParagraphStyleIndex;
    int mBarLabelParagraphStyleIndex;
    int mDefaultLabelParagraphStyleIndex;
    int mLineLabelParagraphStyleIndex;
    int mMixedLabelParagraphStyleIndex;
    int mPieLabelParagraphStyleIndex;
    double mDefaultOpacity;
    int mAreaOutsideLabelParagraphStyleIndex;
    int mBarOutsideLabelParagraphStyleIndex;
    int mDefaultOutsideLabelParagraphStyleIndex;
    int mMixedOutsideLabelParagraphStyleIndex;
    int mPieOutsideLabelParagraphStyleIndex;
    TSDShadow *mArea3dShadow;
    TSDShadow *mBar3dShadow;
    TSDShadow *mColumn3dShadow;
    TSDShadow *mLine3dShadow;
    TSDShadow *mPie3dShadow;
    TSDShadow *mAreaShadow;
    TSDShadow *mBarShadow;
    TSDShadow *mBubbleShadow;
    TSDShadow *mDefaultShadow;
    TSDShadow *mLineShadow;
    TSDShadow *mMixedAreaShadow;
    TSDShadow *mMixedColumnShadow;
    TSDShadow *mMixedLineShadow;
    TSDShadow *mPieShadow;
    TSDShadow *mScatterShadow;
    TSDStroke *mAreaStroke;
    TSDStroke *mBarStroke;
    TSDStroke *mBubbleStroke;
    TSDStroke *mLineStroke;
    TSDStroke *mMixedAreaStroke;
    TSDStroke *mMixedColumnStroke;
    TSDStroke *mMixedLineStroke;
    TSDStroke *mPieStroke;
    TSDStroke *mScatterStroke;
    TSDFill *mAreaSymbolFill;
    TSDFill *mBubbleSymbolFill;
    TSDFill *mLineSymbolFill;
    TSDFill *mMixedAreaSymbolFill;
    TSDFill *mMixedLineSymbolFill;
    TSDFill *mScatterSymbolFill;
    BOOL mAreaSymbolFillUseSeriesFill;
    BOOL mLineSymbolFillUseSeriesFill;
    BOOL mMixedAreaSymbolFillUseSeriesFill;
    BOOL mMixedLineSymbolFillUseSeriesFill;
    BOOL mAreaSymbolFillUseSeriesStroke;
    BOOL mBubbleSymbolFillUseSeriesStroke;
    BOOL mLineSymbolFillUseSeriesStroke;
    BOOL mMixedAreaSymbolFillUseSeriesStroke;
    BOOL mMixedLineSymbolFillUseSeriesStroke;
    BOOL mScatterSymbolFillUseSeriesStroke;
    double mAreaSymbolSize;
    double mLineSymbolSize;
    double mMixedAreaSymbolSize;
    double mMixedLineSymbolSize;
    double mScatterSymbolSize;
    TSDStroke *mAreaSymbolStroke;
    TSDStroke *mBubbleSymbolStroke;
    TSDStroke *mLineSymbolStroke;
    TSDStroke *mMixedAreaSymbolStroke;
    TSDStroke *mMixedLineSymbolStroke;
    TSDStroke *mScatterSymbolStroke;
    TSDShadow *mDefaultTrendLineShadow;
    TSDStroke *mDefaultTrendLineStroke;
    double mDefaultTrendlineEquationOpacity;
    int mDefaultTrendlineEquationParagraphStyleIndex;
    double mDefaultTrendlineRSquaredOpacity;
    int mDefaultTrendlineRSquaredParagraphStyleIndex;
    int mAreaValueLabelPosition;
    int mBarValueLabelPosition;
    unsigned int mBubbleValueLabelPosition;
    unsigned int mDefaultValueLabelPosition;
    int mLineValueLabelPosition;
    int mMixedAreaValueLabelPosition;
    int mMixedColumnValueLabelPosition;
    int mMixedLineValueLabelPosition;
    int mScatterValueLabelPosition;
    int mStackedAreaValueLabelPosition;
    int mStackedBarValueLabelPosition;
    BOOL mDefinedDefaultErrorBarLineEnd;
    BOOL mDefinedDefaultErrorBarLineEndScatterX;
    BOOL mDefinedDefaultErrorBarShadow;
    BOOL mDefinedDefaultErrorBarStroke;
    BOOL mDefinedDefaultErrorBarStrokeScatterX;
    BOOL mDefinedArea3dFill;
    BOOL mDefinedBar3dFill;
    BOOL mDefinedColumn3dFill;
    BOOL mDefinedLine3dFill;
    BOOL mDefinedPie3dFill;
    BOOL mDefinedAreaFill;
    BOOL mDefinedBarFill;
    BOOL mDefinedColumnFill;
    BOOL mDefinedDefaultFill;
    BOOL mDefinedMixedAreaFill;
    BOOL mDefinedMixedColumnFill;
    BOOL mDefinedPieFill;
    BOOL mDefinedAreaLabelParagraphStyleIndex;
    BOOL mDefinedBarLabelParagraphStyleIndex;
    BOOL mDefinedDefaultLabelParagraphStyleIndex;
    BOOL mDefinedLineLabelParagraphStyleIndex;
    BOOL mDefinedMixedLabelParagraphStyleIndex;
    BOOL mDefinedPieLabelParagraphStyleIndex;
    BOOL mDefinedDefaultOpacity;
    BOOL mDefinedAreaOutsideLabelParagraphStyleIndex;
    BOOL mDefinedBarOutsideLabelParagraphStyleIndex;
    BOOL mDefinedDefaultOutsideLabelParagraphStyleIndex;
    BOOL mDefinedMixedOutsideLabelParagraphStyleIndex;
    BOOL mDefinedPieOutsideLabelParagraphStyleIndex;
    BOOL mDefinedArea3dShadow;
    BOOL mDefinedBar3dShadow;
    BOOL mDefinedColumn3dShadow;
    BOOL mDefinedLine3dShadow;
    BOOL mDefinedPie3dShadow;
    BOOL mDefinedAreaShadow;
    BOOL mDefinedBarShadow;
    BOOL mDefinedBubbleShadow;
    BOOL mDefinedDefaultShadow;
    BOOL mDefinedLineShadow;
    BOOL mDefinedMixedAreaShadow;
    BOOL mDefinedMixedColumnShadow;
    BOOL mDefinedMixedLineShadow;
    BOOL mDefinedPieShadow;
    BOOL mDefinedScatterShadow;
    BOOL mDefinedAreaStroke;
    BOOL mDefinedBarStroke;
    BOOL mDefinedBubbleStroke;
    BOOL mDefinedLineStroke;
    BOOL mDefinedMixedAreaStroke;
    BOOL mDefinedMixedColumnStroke;
    BOOL mDefinedMixedLineStroke;
    BOOL mDefinedPieStroke;
    BOOL mDefinedScatterStroke;
    BOOL mDefinedAreaSymbolFill;
    BOOL mDefinedBubbleSymbolFill;
    BOOL mDefinedLineSymbolFill;
    BOOL mDefinedMixedAreaSymbolFill;
    BOOL mDefinedMixedLineSymbolFill;
    BOOL mDefinedScatterSymbolFill;
    BOOL mDefinedAreaSymbolFillUseSeriesFill;
    BOOL mDefinedLineSymbolFillUseSeriesFill;
    BOOL mDefinedMixedAreaSymbolFillUseSeriesFill;
    BOOL mDefinedMixedLineSymbolFillUseSeriesFill;
    BOOL mDefinedAreaSymbolFillUseSeriesStroke;
    BOOL mDefinedBubbleSymbolFillUseSeriesStroke;
    BOOL mDefinedLineSymbolFillUseSeriesStroke;
    BOOL mDefinedMixedAreaSymbolFillUseSeriesStroke;
    BOOL mDefinedMixedLineSymbolFillUseSeriesStroke;
    BOOL mDefinedScatterSymbolFillUseSeriesStroke;
    BOOL mDefinedAreaSymbolSize;
    BOOL mDefinedLineSymbolSize;
    BOOL mDefinedMixedAreaSymbolSize;
    BOOL mDefinedMixedLineSymbolSize;
    BOOL mDefinedScatterSymbolSize;
    BOOL mDefinedAreaSymbolStroke;
    BOOL mDefinedBubbleSymbolStroke;
    BOOL mDefinedLineSymbolStroke;
    BOOL mDefinedMixedAreaSymbolStroke;
    BOOL mDefinedMixedLineSymbolStroke;
    BOOL mDefinedScatterSymbolStroke;
    BOOL mDefinedDefaultTrendLineShadow;
    BOOL mDefinedDefaultTrendLineStroke;
    BOOL mDefinedDefaultTrendlineEquationOpacity;
    BOOL mDefinedDefaultTrendlineEquationParagraphStyleIndex;
    BOOL mDefinedDefaultTrendlineRSquaredOpacity;
    BOOL mDefinedDefaultTrendlineRSquaredParagraphStyleIndex;
    BOOL mDefinedAreaValueLabelPosition;
    BOOL mDefinedBarValueLabelPosition;
    BOOL mDefinedBubbleValueLabelPosition;
    BOOL mDefinedDefaultValueLabelPosition;
    BOOL mDefinedLineValueLabelPosition;
    BOOL mDefinedMixedAreaValueLabelPosition;
    BOOL mDefinedMixedColumnValueLabelPosition;
    BOOL mDefinedMixedLineValueLabelPosition;
    BOOL mDefinedScatterValueLabelPosition;
    BOOL mDefinedStackedAreaValueLabelPosition;
    BOOL mDefinedStackedBarValueLabelPosition;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
@property(readonly, nonatomic) BOOL definedStackedBarValueLabelPosition; // @synthesize definedStackedBarValueLabelPosition=mDefinedStackedBarValueLabelPosition;
@property(readonly, nonatomic) BOOL definedStackedAreaValueLabelPosition; // @synthesize definedStackedAreaValueLabelPosition=mDefinedStackedAreaValueLabelPosition;
@property(readonly, nonatomic) BOOL definedScatterValueLabelPosition; // @synthesize definedScatterValueLabelPosition=mDefinedScatterValueLabelPosition;
@property(readonly, nonatomic) BOOL definedMixedLineValueLabelPosition; // @synthesize definedMixedLineValueLabelPosition=mDefinedMixedLineValueLabelPosition;
@property(readonly, nonatomic) BOOL definedMixedColumnValueLabelPosition; // @synthesize definedMixedColumnValueLabelPosition=mDefinedMixedColumnValueLabelPosition;
@property(readonly, nonatomic) BOOL definedMixedAreaValueLabelPosition; // @synthesize definedMixedAreaValueLabelPosition=mDefinedMixedAreaValueLabelPosition;
@property(readonly, nonatomic) BOOL definedLineValueLabelPosition; // @synthesize definedLineValueLabelPosition=mDefinedLineValueLabelPosition;
@property(readonly, nonatomic) BOOL definedDefaultValueLabelPosition; // @synthesize definedDefaultValueLabelPosition=mDefinedDefaultValueLabelPosition;
@property(readonly, nonatomic) BOOL definedBubbleValueLabelPosition; // @synthesize definedBubbleValueLabelPosition=mDefinedBubbleValueLabelPosition;
@property(readonly, nonatomic) BOOL definedBarValueLabelPosition; // @synthesize definedBarValueLabelPosition=mDefinedBarValueLabelPosition;
@property(readonly, nonatomic) BOOL definedAreaValueLabelPosition; // @synthesize definedAreaValueLabelPosition=mDefinedAreaValueLabelPosition;
@property(readonly, nonatomic) BOOL definedDefaultTrendlineRSquaredParagraphStyleIndex; // @synthesize definedDefaultTrendlineRSquaredParagraphStyleIndex=mDefinedDefaultTrendlineRSquaredParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedDefaultTrendlineRSquaredOpacity; // @synthesize definedDefaultTrendlineRSquaredOpacity=mDefinedDefaultTrendlineRSquaredOpacity;
@property(readonly, nonatomic) BOOL definedDefaultTrendlineEquationParagraphStyleIndex; // @synthesize definedDefaultTrendlineEquationParagraphStyleIndex=mDefinedDefaultTrendlineEquationParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedDefaultTrendlineEquationOpacity; // @synthesize definedDefaultTrendlineEquationOpacity=mDefinedDefaultTrendlineEquationOpacity;
@property(readonly, nonatomic) BOOL definedDefaultTrendLineStroke; // @synthesize definedDefaultTrendLineStroke=mDefinedDefaultTrendLineStroke;
@property(readonly, nonatomic) BOOL definedDefaultTrendLineShadow; // @synthesize definedDefaultTrendLineShadow=mDefinedDefaultTrendLineShadow;
@property(readonly, nonatomic) BOOL definedScatterSymbolStroke; // @synthesize definedScatterSymbolStroke=mDefinedScatterSymbolStroke;
@property(readonly, nonatomic) BOOL definedMixedLineSymbolStroke; // @synthesize definedMixedLineSymbolStroke=mDefinedMixedLineSymbolStroke;
@property(readonly, nonatomic) BOOL definedMixedAreaSymbolStroke; // @synthesize definedMixedAreaSymbolStroke=mDefinedMixedAreaSymbolStroke;
@property(readonly, nonatomic) BOOL definedLineSymbolStroke; // @synthesize definedLineSymbolStroke=mDefinedLineSymbolStroke;
@property(readonly, nonatomic) BOOL definedBubbleSymbolStroke; // @synthesize definedBubbleSymbolStroke=mDefinedBubbleSymbolStroke;
@property(readonly, nonatomic) BOOL definedAreaSymbolStroke; // @synthesize definedAreaSymbolStroke=mDefinedAreaSymbolStroke;
@property(readonly, nonatomic) BOOL definedScatterSymbolSize; // @synthesize definedScatterSymbolSize=mDefinedScatterSymbolSize;
@property(readonly, nonatomic) BOOL definedMixedLineSymbolSize; // @synthesize definedMixedLineSymbolSize=mDefinedMixedLineSymbolSize;
@property(readonly, nonatomic) BOOL definedMixedAreaSymbolSize; // @synthesize definedMixedAreaSymbolSize=mDefinedMixedAreaSymbolSize;
@property(readonly, nonatomic) BOOL definedLineSymbolSize; // @synthesize definedLineSymbolSize=mDefinedLineSymbolSize;
@property(readonly, nonatomic) BOOL definedAreaSymbolSize; // @synthesize definedAreaSymbolSize=mDefinedAreaSymbolSize;
@property(readonly, nonatomic) BOOL definedScatterSymbolFillUseSeriesStroke; // @synthesize definedScatterSymbolFillUseSeriesStroke=mDefinedScatterSymbolFillUseSeriesStroke;
@property(readonly, nonatomic) BOOL definedMixedLineSymbolFillUseSeriesStroke; // @synthesize definedMixedLineSymbolFillUseSeriesStroke=mDefinedMixedLineSymbolFillUseSeriesStroke;
@property(readonly, nonatomic) BOOL definedMixedAreaSymbolFillUseSeriesStroke; // @synthesize definedMixedAreaSymbolFillUseSeriesStroke=mDefinedMixedAreaSymbolFillUseSeriesStroke;
@property(readonly, nonatomic) BOOL definedLineSymbolFillUseSeriesStroke; // @synthesize definedLineSymbolFillUseSeriesStroke=mDefinedLineSymbolFillUseSeriesStroke;
@property(readonly, nonatomic) BOOL definedBubbleSymbolFillUseSeriesStroke; // @synthesize definedBubbleSymbolFillUseSeriesStroke=mDefinedBubbleSymbolFillUseSeriesStroke;
@property(readonly, nonatomic) BOOL definedAreaSymbolFillUseSeriesStroke; // @synthesize definedAreaSymbolFillUseSeriesStroke=mDefinedAreaSymbolFillUseSeriesStroke;
@property(readonly, nonatomic) BOOL definedMixedLineSymbolFillUseSeriesFill; // @synthesize definedMixedLineSymbolFillUseSeriesFill=mDefinedMixedLineSymbolFillUseSeriesFill;
@property(readonly, nonatomic) BOOL definedMixedAreaSymbolFillUseSeriesFill; // @synthesize definedMixedAreaSymbolFillUseSeriesFill=mDefinedMixedAreaSymbolFillUseSeriesFill;
@property(readonly, nonatomic) BOOL definedLineSymbolFillUseSeriesFill; // @synthesize definedLineSymbolFillUseSeriesFill=mDefinedLineSymbolFillUseSeriesFill;
@property(readonly, nonatomic) BOOL definedAreaSymbolFillUseSeriesFill; // @synthesize definedAreaSymbolFillUseSeriesFill=mDefinedAreaSymbolFillUseSeriesFill;
@property(readonly, nonatomic) BOOL definedScatterSymbolFill; // @synthesize definedScatterSymbolFill=mDefinedScatterSymbolFill;
@property(readonly, nonatomic) BOOL definedMixedLineSymbolFill; // @synthesize definedMixedLineSymbolFill=mDefinedMixedLineSymbolFill;
@property(readonly, nonatomic) BOOL definedMixedAreaSymbolFill; // @synthesize definedMixedAreaSymbolFill=mDefinedMixedAreaSymbolFill;
@property(readonly, nonatomic) BOOL definedLineSymbolFill; // @synthesize definedLineSymbolFill=mDefinedLineSymbolFill;
@property(readonly, nonatomic) BOOL definedBubbleSymbolFill; // @synthesize definedBubbleSymbolFill=mDefinedBubbleSymbolFill;
@property(readonly, nonatomic) BOOL definedAreaSymbolFill; // @synthesize definedAreaSymbolFill=mDefinedAreaSymbolFill;
@property(readonly, nonatomic) BOOL definedScatterStroke; // @synthesize definedScatterStroke=mDefinedScatterStroke;
@property(readonly, nonatomic) BOOL definedPieStroke; // @synthesize definedPieStroke=mDefinedPieStroke;
@property(readonly, nonatomic) BOOL definedMixedLineStroke; // @synthesize definedMixedLineStroke=mDefinedMixedLineStroke;
@property(readonly, nonatomic) BOOL definedMixedColumnStroke; // @synthesize definedMixedColumnStroke=mDefinedMixedColumnStroke;
@property(readonly, nonatomic) BOOL definedMixedAreaStroke; // @synthesize definedMixedAreaStroke=mDefinedMixedAreaStroke;
@property(readonly, nonatomic) BOOL definedLineStroke; // @synthesize definedLineStroke=mDefinedLineStroke;
@property(readonly, nonatomic) BOOL definedBubbleStroke; // @synthesize definedBubbleStroke=mDefinedBubbleStroke;
@property(readonly, nonatomic) BOOL definedBarStroke; // @synthesize definedBarStroke=mDefinedBarStroke;
@property(readonly, nonatomic) BOOL definedAreaStroke; // @synthesize definedAreaStroke=mDefinedAreaStroke;
@property(readonly, nonatomic) BOOL definedScatterShadow; // @synthesize definedScatterShadow=mDefinedScatterShadow;
@property(readonly, nonatomic) BOOL definedPieShadow; // @synthesize definedPieShadow=mDefinedPieShadow;
@property(readonly, nonatomic) BOOL definedMixedLineShadow; // @synthesize definedMixedLineShadow=mDefinedMixedLineShadow;
@property(readonly, nonatomic) BOOL definedMixedColumnShadow; // @synthesize definedMixedColumnShadow=mDefinedMixedColumnShadow;
@property(readonly, nonatomic) BOOL definedMixedAreaShadow; // @synthesize definedMixedAreaShadow=mDefinedMixedAreaShadow;
@property(readonly, nonatomic) BOOL definedLineShadow; // @synthesize definedLineShadow=mDefinedLineShadow;
@property(readonly, nonatomic) BOOL definedDefaultShadow; // @synthesize definedDefaultShadow=mDefinedDefaultShadow;
@property(readonly, nonatomic) BOOL definedBubbleShadow; // @synthesize definedBubbleShadow=mDefinedBubbleShadow;
@property(readonly, nonatomic) BOOL definedBarShadow; // @synthesize definedBarShadow=mDefinedBarShadow;
@property(readonly, nonatomic) BOOL definedAreaShadow; // @synthesize definedAreaShadow=mDefinedAreaShadow;
@property(readonly, nonatomic) BOOL definedPie3dShadow; // @synthesize definedPie3dShadow=mDefinedPie3dShadow;
@property(readonly, nonatomic) BOOL definedLine3dShadow; // @synthesize definedLine3dShadow=mDefinedLine3dShadow;
@property(readonly, nonatomic) BOOL definedColumn3dShadow; // @synthesize definedColumn3dShadow=mDefinedColumn3dShadow;
@property(readonly, nonatomic) BOOL definedBar3dShadow; // @synthesize definedBar3dShadow=mDefinedBar3dShadow;
@property(readonly, nonatomic) BOOL definedArea3dShadow; // @synthesize definedArea3dShadow=mDefinedArea3dShadow;
@property(readonly, nonatomic) BOOL definedPieOutsideLabelParagraphStyleIndex; // @synthesize definedPieOutsideLabelParagraphStyleIndex=mDefinedPieOutsideLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedMixedOutsideLabelParagraphStyleIndex; // @synthesize definedMixedOutsideLabelParagraphStyleIndex=mDefinedMixedOutsideLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedDefaultOutsideLabelParagraphStyleIndex; // @synthesize definedDefaultOutsideLabelParagraphStyleIndex=mDefinedDefaultOutsideLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedBarOutsideLabelParagraphStyleIndex; // @synthesize definedBarOutsideLabelParagraphStyleIndex=mDefinedBarOutsideLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedAreaOutsideLabelParagraphStyleIndex; // @synthesize definedAreaOutsideLabelParagraphStyleIndex=mDefinedAreaOutsideLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedDefaultOpacity; // @synthesize definedDefaultOpacity=mDefinedDefaultOpacity;
@property(readonly, nonatomic) BOOL definedPieLabelParagraphStyleIndex; // @synthesize definedPieLabelParagraphStyleIndex=mDefinedPieLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedMixedLabelParagraphStyleIndex; // @synthesize definedMixedLabelParagraphStyleIndex=mDefinedMixedLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedLineLabelParagraphStyleIndex; // @synthesize definedLineLabelParagraphStyleIndex=mDefinedLineLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedDefaultLabelParagraphStyleIndex; // @synthesize definedDefaultLabelParagraphStyleIndex=mDefinedDefaultLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedBarLabelParagraphStyleIndex; // @synthesize definedBarLabelParagraphStyleIndex=mDefinedBarLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedAreaLabelParagraphStyleIndex; // @synthesize definedAreaLabelParagraphStyleIndex=mDefinedAreaLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedPieFill; // @synthesize definedPieFill=mDefinedPieFill;
@property(readonly, nonatomic) BOOL definedMixedColumnFill; // @synthesize definedMixedColumnFill=mDefinedMixedColumnFill;
@property(readonly, nonatomic) BOOL definedMixedAreaFill; // @synthesize definedMixedAreaFill=mDefinedMixedAreaFill;
@property(readonly, nonatomic) BOOL definedDefaultFill; // @synthesize definedDefaultFill=mDefinedDefaultFill;
@property(readonly, nonatomic) BOOL definedColumnFill; // @synthesize definedColumnFill=mDefinedColumnFill;
@property(readonly, nonatomic) BOOL definedBarFill; // @synthesize definedBarFill=mDefinedBarFill;
@property(readonly, nonatomic) BOOL definedAreaFill; // @synthesize definedAreaFill=mDefinedAreaFill;
@property(readonly, nonatomic) BOOL definedPie3dFill; // @synthesize definedPie3dFill=mDefinedPie3dFill;
@property(readonly, nonatomic) BOOL definedLine3dFill; // @synthesize definedLine3dFill=mDefinedLine3dFill;
@property(readonly, nonatomic) BOOL definedColumn3dFill; // @synthesize definedColumn3dFill=mDefinedColumn3dFill;
@property(readonly, nonatomic) BOOL definedBar3dFill; // @synthesize definedBar3dFill=mDefinedBar3dFill;
@property(readonly, nonatomic) BOOL definedArea3dFill; // @synthesize definedArea3dFill=mDefinedArea3dFill;
@property(readonly, nonatomic) BOOL definedDefaultErrorBarStrokeScatterX; // @synthesize definedDefaultErrorBarStrokeScatterX=mDefinedDefaultErrorBarStrokeScatterX;
@property(readonly, nonatomic) BOOL definedDefaultErrorBarStroke; // @synthesize definedDefaultErrorBarStroke=mDefinedDefaultErrorBarStroke;
@property(readonly, nonatomic) BOOL definedDefaultErrorBarShadow; // @synthesize definedDefaultErrorBarShadow=mDefinedDefaultErrorBarShadow;
@property(readonly, nonatomic) BOOL definedDefaultErrorBarLineEndScatterX; // @synthesize definedDefaultErrorBarLineEndScatterX=mDefinedDefaultErrorBarLineEndScatterX;
@property(readonly, nonatomic) BOOL definedDefaultErrorBarLineEnd; // @synthesize definedDefaultErrorBarLineEnd=mDefinedDefaultErrorBarLineEnd;
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
- (BOOL)clearStackedBarValueLabelPosition;
- (BOOL)clearStackedAreaValueLabelPosition;
- (BOOL)clearScatterValueLabelPosition;
- (BOOL)clearMixedLineValueLabelPosition;
- (BOOL)clearMixedColumnValueLabelPosition;
- (BOOL)clearMixedAreaValueLabelPosition;
- (BOOL)clearLineValueLabelPosition;
- (BOOL)clearDefaultValueLabelPosition;
- (BOOL)clearBubbleValueLabelPosition;
- (BOOL)clearBarValueLabelPosition;
- (BOOL)clearAreaValueLabelPosition;
- (BOOL)clearDefaultTrendlineRSquaredParagraphStyleIndex;
- (BOOL)clearDefaultTrendlineRSquaredOpacity;
- (BOOL)clearDefaultTrendlineEquationParagraphStyleIndex;
- (BOOL)clearDefaultTrendlineEquationOpacity;
- (BOOL)clearDefaultTrendLineStroke;
- (BOOL)clearDefaultTrendLineShadow;
- (BOOL)clearScatterSymbolStroke;
- (BOOL)clearMixedLineSymbolStroke;
- (BOOL)clearMixedAreaSymbolStroke;
- (BOOL)clearLineSymbolStroke;
- (BOOL)clearBubbleSymbolStroke;
- (BOOL)clearAreaSymbolStroke;
- (BOOL)clearScatterSymbolSize;
- (BOOL)clearMixedLineSymbolSize;
- (BOOL)clearMixedAreaSymbolSize;
- (BOOL)clearLineSymbolSize;
- (BOOL)clearAreaSymbolSize;
- (BOOL)clearScatterSymbolFillUseSeriesStroke;
- (BOOL)clearMixedLineSymbolFillUseSeriesStroke;
- (BOOL)clearMixedAreaSymbolFillUseSeriesStroke;
- (BOOL)clearLineSymbolFillUseSeriesStroke;
- (BOOL)clearBubbleSymbolFillUseSeriesStroke;
- (BOOL)clearAreaSymbolFillUseSeriesStroke;
- (BOOL)clearMixedLineSymbolFillUseSeriesFill;
- (BOOL)clearMixedAreaSymbolFillUseSeriesFill;
- (BOOL)clearLineSymbolFillUseSeriesFill;
- (BOOL)clearAreaSymbolFillUseSeriesFill;
- (BOOL)clearScatterSymbolFill;
- (BOOL)clearMixedLineSymbolFill;
- (BOOL)clearMixedAreaSymbolFill;
- (BOOL)clearLineSymbolFill;
- (BOOL)clearBubbleSymbolFill;
- (BOOL)clearAreaSymbolFill;
- (BOOL)clearScatterStroke;
- (BOOL)clearPieStroke;
- (BOOL)clearMixedLineStroke;
- (BOOL)clearMixedColumnStroke;
- (BOOL)clearMixedAreaStroke;
- (BOOL)clearLineStroke;
- (BOOL)clearBubbleStroke;
- (BOOL)clearBarStroke;
- (BOOL)clearAreaStroke;
- (BOOL)clearScatterShadow;
- (BOOL)clearPieShadow;
- (BOOL)clearMixedLineShadow;
- (BOOL)clearMixedColumnShadow;
- (BOOL)clearMixedAreaShadow;
- (BOOL)clearLineShadow;
- (BOOL)clearDefaultShadow;
- (BOOL)clearBubbleShadow;
- (BOOL)clearBarShadow;
- (BOOL)clearAreaShadow;
- (BOOL)clearPie3dShadow;
- (BOOL)clearLine3dShadow;
- (BOOL)clearColumn3dShadow;
- (BOOL)clearBar3dShadow;
- (BOOL)clearArea3dShadow;
- (BOOL)clearPieOutsideLabelParagraphStyleIndex;
- (BOOL)clearMixedOutsideLabelParagraphStyleIndex;
- (BOOL)clearDefaultOutsideLabelParagraphStyleIndex;
- (BOOL)clearBarOutsideLabelParagraphStyleIndex;
- (BOOL)clearAreaOutsideLabelParagraphStyleIndex;
- (BOOL)clearDefaultOpacity;
- (BOOL)clearPieLabelParagraphStyleIndex;
- (BOOL)clearMixedLabelParagraphStyleIndex;
- (BOOL)clearLineLabelParagraphStyleIndex;
- (BOOL)clearDefaultLabelParagraphStyleIndex;
- (BOOL)clearBarLabelParagraphStyleIndex;
- (BOOL)clearAreaLabelParagraphStyleIndex;
- (BOOL)clearPieFill;
- (BOOL)clearMixedColumnFill;
- (BOOL)clearMixedAreaFill;
- (BOOL)clearDefaultFill;
- (BOOL)clearColumnFill;
- (BOOL)clearBarFill;
- (BOOL)clearAreaFill;
- (BOOL)clearPie3dFill;
- (BOOL)clearLine3dFill;
- (BOOL)clearColumn3dFill;
- (BOOL)clearBar3dFill;
- (BOOL)clearArea3dFill;
- (BOOL)clearDefaultErrorBarStrokeScatterX;
- (BOOL)clearDefaultErrorBarStroke;
- (BOOL)clearDefaultErrorBarShadow;
- (BOOL)clearDefaultErrorBarLineEndScatterX;
- (BOOL)clearDefaultErrorBarLineEnd;
- (void)setStackedBarValueLabelPosition:(int)arg1;
- (int)stackedBarValueLabelPosition;
- (void)setStackedAreaValueLabelPosition:(int)arg1;
- (int)stackedAreaValueLabelPosition;
- (void)setScatterValueLabelPosition:(int)arg1;
- (int)scatterValueLabelPosition;
- (void)setMixedLineValueLabelPosition:(int)arg1;
- (int)mixedLineValueLabelPosition;
- (void)setMixedColumnValueLabelPosition:(int)arg1;
- (int)mixedColumnValueLabelPosition;
- (void)setMixedAreaValueLabelPosition:(int)arg1;
- (int)mixedAreaValueLabelPosition;
- (void)setLineValueLabelPosition:(int)arg1;
- (int)lineValueLabelPosition;
- (void)setDefaultValueLabelPosition:(unsigned int)arg1;
- (unsigned int)defaultValueLabelPosition;
- (void)setBubbleValueLabelPosition:(unsigned int)arg1;
- (unsigned int)bubbleValueLabelPosition;
- (void)setBarValueLabelPosition:(int)arg1;
- (int)barValueLabelPosition;
- (void)setAreaValueLabelPosition:(int)arg1;
- (int)areaValueLabelPosition;
- (void)setDefaultTrendlineRSquaredParagraphStyleIndex:(int)arg1;
- (int)defaultTrendlineRSquaredParagraphStyleIndex;
- (void)setDefaultTrendlineRSquaredOpacity:(double)arg1;
- (double)defaultTrendlineRSquaredOpacity;
- (void)setDefaultTrendlineEquationParagraphStyleIndex:(int)arg1;
- (int)defaultTrendlineEquationParagraphStyleIndex;
- (void)setDefaultTrendlineEquationOpacity:(double)arg1;
- (double)defaultTrendlineEquationOpacity;
- (void)setDefaultTrendLineStroke:(id)arg1;
- (id)defaultTrendLineStroke;
- (void)setDefaultTrendLineShadow:(id)arg1;
- (id)defaultTrendLineShadow;
- (void)setScatterSymbolStroke:(id)arg1;
- (id)scatterSymbolStroke;
- (void)setMixedLineSymbolStroke:(id)arg1;
- (id)mixedLineSymbolStroke;
- (void)setMixedAreaSymbolStroke:(id)arg1;
- (id)mixedAreaSymbolStroke;
- (void)setLineSymbolStroke:(id)arg1;
- (id)lineSymbolStroke;
- (void)setBubbleSymbolStroke:(id)arg1;
- (id)bubbleSymbolStroke;
- (void)setAreaSymbolStroke:(id)arg1;
- (id)areaSymbolStroke;
- (void)setScatterSymbolSize:(double)arg1;
- (double)scatterSymbolSize;
- (void)setMixedLineSymbolSize:(double)arg1;
- (double)mixedLineSymbolSize;
- (void)setMixedAreaSymbolSize:(double)arg1;
- (double)mixedAreaSymbolSize;
- (void)setLineSymbolSize:(double)arg1;
- (double)lineSymbolSize;
- (void)setAreaSymbolSize:(double)arg1;
- (double)areaSymbolSize;
- (void)setScatterSymbolFillUseSeriesStroke:(BOOL)arg1;
- (BOOL)scatterSymbolFillUseSeriesStroke;
- (void)setMixedLineSymbolFillUseSeriesStroke:(BOOL)arg1;
- (BOOL)mixedLineSymbolFillUseSeriesStroke;
- (void)setMixedAreaSymbolFillUseSeriesStroke:(BOOL)arg1;
- (BOOL)mixedAreaSymbolFillUseSeriesStroke;
- (void)setLineSymbolFillUseSeriesStroke:(BOOL)arg1;
- (BOOL)lineSymbolFillUseSeriesStroke;
- (void)setBubbleSymbolFillUseSeriesStroke:(BOOL)arg1;
- (BOOL)bubbleSymbolFillUseSeriesStroke;
- (void)setAreaSymbolFillUseSeriesStroke:(BOOL)arg1;
- (BOOL)areaSymbolFillUseSeriesStroke;
- (void)setMixedLineSymbolFillUseSeriesFill:(BOOL)arg1;
- (BOOL)mixedLineSymbolFillUseSeriesFill;
- (void)setMixedAreaSymbolFillUseSeriesFill:(BOOL)arg1;
- (BOOL)mixedAreaSymbolFillUseSeriesFill;
- (void)setLineSymbolFillUseSeriesFill:(BOOL)arg1;
- (BOOL)lineSymbolFillUseSeriesFill;
- (void)setAreaSymbolFillUseSeriesFill:(BOOL)arg1;
- (BOOL)areaSymbolFillUseSeriesFill;
- (void)setScatterSymbolFill:(id)arg1;
- (id)scatterSymbolFill;
- (void)setMixedLineSymbolFill:(id)arg1;
- (id)mixedLineSymbolFill;
- (void)setMixedAreaSymbolFill:(id)arg1;
- (id)mixedAreaSymbolFill;
- (void)setLineSymbolFill:(id)arg1;
- (id)lineSymbolFill;
- (void)setBubbleSymbolFill:(id)arg1;
- (id)bubbleSymbolFill;
- (void)setAreaSymbolFill:(id)arg1;
- (id)areaSymbolFill;
- (void)setScatterStroke:(id)arg1;
- (id)scatterStroke;
- (void)setPieStroke:(id)arg1;
- (id)pieStroke;
- (void)setMixedLineStroke:(id)arg1;
- (id)mixedLineStroke;
- (void)setMixedColumnStroke:(id)arg1;
- (id)mixedColumnStroke;
- (void)setMixedAreaStroke:(id)arg1;
- (id)mixedAreaStroke;
- (void)setLineStroke:(id)arg1;
- (id)lineStroke;
- (void)setBubbleStroke:(id)arg1;
- (id)bubbleStroke;
- (void)setBarStroke:(id)arg1;
- (id)barStroke;
- (void)setAreaStroke:(id)arg1;
- (id)areaStroke;
- (void)setScatterShadow:(id)arg1;
- (id)scatterShadow;
- (void)setPieShadow:(id)arg1;
- (id)pieShadow;
- (void)setMixedLineShadow:(id)arg1;
- (id)mixedLineShadow;
- (void)setMixedColumnShadow:(id)arg1;
- (id)mixedColumnShadow;
- (void)setMixedAreaShadow:(id)arg1;
- (id)mixedAreaShadow;
- (void)setLineShadow:(id)arg1;
- (id)lineShadow;
- (void)setDefaultShadow:(id)arg1;
- (id)defaultShadow;
- (void)setBubbleShadow:(id)arg1;
- (id)bubbleShadow;
- (void)setBarShadow:(id)arg1;
- (id)barShadow;
- (void)setAreaShadow:(id)arg1;
- (id)areaShadow;
- (void)setPie3dShadow:(id)arg1;
- (id)pie3dShadow;
- (void)setLine3dShadow:(id)arg1;
- (id)line3dShadow;
- (void)setColumn3dShadow:(id)arg1;
- (id)column3dShadow;
- (void)setBar3dShadow:(id)arg1;
- (id)bar3dShadow;
- (void)setArea3dShadow:(id)arg1;
- (id)area3dShadow;
- (void)setPieOutsideLabelParagraphStyleIndex:(int)arg1;
- (int)pieOutsideLabelParagraphStyleIndex;
- (void)setMixedOutsideLabelParagraphStyleIndex:(int)arg1;
- (int)mixedOutsideLabelParagraphStyleIndex;
- (void)setDefaultOutsideLabelParagraphStyleIndex:(int)arg1;
- (int)defaultOutsideLabelParagraphStyleIndex;
- (void)setBarOutsideLabelParagraphStyleIndex:(int)arg1;
- (int)barOutsideLabelParagraphStyleIndex;
- (void)setAreaOutsideLabelParagraphStyleIndex:(int)arg1;
- (int)areaOutsideLabelParagraphStyleIndex;
- (void)setDefaultOpacity:(double)arg1;
- (double)defaultOpacity;
- (void)setPieLabelParagraphStyleIndex:(int)arg1;
- (int)pieLabelParagraphStyleIndex;
- (void)setMixedLabelParagraphStyleIndex:(int)arg1;
- (int)mixedLabelParagraphStyleIndex;
- (void)setLineLabelParagraphStyleIndex:(int)arg1;
- (int)lineLabelParagraphStyleIndex;
- (void)setDefaultLabelParagraphStyleIndex:(int)arg1;
- (int)defaultLabelParagraphStyleIndex;
- (void)setBarLabelParagraphStyleIndex:(int)arg1;
- (int)barLabelParagraphStyleIndex;
- (void)setAreaLabelParagraphStyleIndex:(int)arg1;
- (int)areaLabelParagraphStyleIndex;
- (void)setPieFill:(id)arg1;
- (id)pieFill;
- (void)setMixedColumnFill:(id)arg1;
- (id)mixedColumnFill;
- (void)setMixedAreaFill:(id)arg1;
- (id)mixedAreaFill;
- (void)setDefaultFill:(id)arg1;
- (id)defaultFill;
- (void)setColumnFill:(id)arg1;
- (id)columnFill;
- (void)setBarFill:(id)arg1;
- (id)barFill;
- (void)setAreaFill:(id)arg1;
- (id)areaFill;
- (void)setPie3dFill:(id)arg1;
- (id)pie3dFill;
- (void)setLine3dFill:(id)arg1;
- (id)line3dFill;
- (void)setColumn3dFill:(id)arg1;
- (id)column3dFill;
- (void)setBar3dFill:(id)arg1;
- (id)bar3dFill;
- (void)setArea3dFill:(id)arg1;
- (id)area3dFill;
- (void)setDefaultErrorBarStrokeScatterX:(id)arg1;
- (id)defaultErrorBarStrokeScatterX;
- (void)setDefaultErrorBarStroke:(id)arg1;
- (id)defaultErrorBarStroke;
- (void)setDefaultErrorBarShadow:(id)arg1;
- (id)defaultErrorBarShadow;
- (void)setDefaultErrorBarLineEndScatterX:(id)arg1;
- (id)defaultErrorBarLineEndScatterX;
- (void)setDefaultErrorBarLineEnd:(id)arg1;
- (id)defaultErrorBarLineEnd;

@end

