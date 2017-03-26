//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSSStylePropertyChangeSet.h"

#import "GSSPAutoEncodable-Protocol.h"

@class TSDSpecFill, TSDSpecLineEnd, TSDSpecShadow, TSDSpecStroke, TSSSpecBool, TSSSpecDouble, TSSSpecInteger;

@interface TSCHChartSeriesStylePropertyChangeSet : TSSStylePropertyChangeSet <GSSPAutoEncodable>
{
    TSDSpecLineEnd *_defaultErrorBarLineEnd;
    TSDSpecLineEnd *_defaultErrorBarLineEndScatterX;
    TSDSpecShadow *_defaultErrorBarShadow;
    TSDSpecStroke *_defaultErrorBarStroke;
    TSDSpecStroke *_defaultErrorBarStrokeScatterX;
    TSDSpecFill *_area3dFill;
    TSDSpecFill *_bar3dFill;
    TSDSpecFill *_column3dFill;
    TSDSpecFill *_line3dFill;
    TSDSpecFill *_pie3dFill;
    TSDSpecFill *_areaFill;
    TSDSpecFill *_barFill;
    TSDSpecFill *_columnFill;
    TSDSpecFill *_defaultFill;
    TSDSpecFill *_mixedAreaFill;
    TSDSpecFill *_mixedColumnFill;
    TSDSpecFill *_pieFill;
    TSSSpecInteger *_areaLabelParagraphStyleIndex;
    TSSSpecInteger *_barLabelParagraphStyleIndex;
    TSSSpecInteger *_defaultLabelParagraphStyleIndex;
    TSSSpecInteger *_lineLabelParagraphStyleIndex;
    TSSSpecInteger *_mixedLabelParagraphStyleIndex;
    TSSSpecInteger *_pieLabelParagraphStyleIndex;
    TSSSpecDouble *_defaultOpacity;
    TSSSpecInteger *_areaOutsideLabelParagraphStyleIndex;
    TSSSpecInteger *_barOutsideLabelParagraphStyleIndex;
    TSSSpecInteger *_defaultOutsideLabelParagraphStyleIndex;
    TSSSpecInteger *_mixedOutsideLabelParagraphStyleIndex;
    TSSSpecInteger *_pieOutsideLabelParagraphStyleIndex;
    TSDSpecShadow *_area3dShadow;
    TSDSpecShadow *_bar3dShadow;
    TSDSpecShadow *_column3dShadow;
    TSDSpecShadow *_line3dShadow;
    TSDSpecShadow *_pie3dShadow;
    TSDSpecShadow *_areaShadow;
    TSDSpecShadow *_barShadow;
    TSDSpecShadow *_bubbleShadow;
    TSDSpecShadow *_defaultShadow;
    TSDSpecShadow *_lineShadow;
    TSDSpecShadow *_mixedAreaShadow;
    TSDSpecShadow *_mixedColumnShadow;
    TSDSpecShadow *_mixedLineShadow;
    TSDSpecShadow *_pieShadow;
    TSDSpecShadow *_scatterShadow;
    TSDSpecStroke *_areaStroke;
    TSDSpecStroke *_barStroke;
    TSDSpecStroke *_bubbleStroke;
    TSDSpecStroke *_lineStroke;
    TSDSpecStroke *_mixedAreaStroke;
    TSDSpecStroke *_mixedColumnStroke;
    TSDSpecStroke *_mixedLineStroke;
    TSDSpecStroke *_pieStroke;
    TSDSpecStroke *_scatterStroke;
    TSDSpecFill *_areaSymbolFill;
    TSDSpecFill *_bubbleSymbolFill;
    TSDSpecFill *_lineSymbolFill;
    TSDSpecFill *_mixedAreaSymbolFill;
    TSDSpecFill *_mixedLineSymbolFill;
    TSDSpecFill *_scatterSymbolFill;
    TSSSpecBool *_areaSymbolFillUseSeriesFill;
    TSSSpecBool *_lineSymbolFillUseSeriesFill;
    TSSSpecBool *_mixedAreaSymbolFillUseSeriesFill;
    TSSSpecBool *_mixedLineSymbolFillUseSeriesFill;
    TSSSpecBool *_areaSymbolFillUseSeriesStroke;
    TSSSpecBool *_bubbleSymbolFillUseSeriesStroke;
    TSSSpecBool *_lineSymbolFillUseSeriesStroke;
    TSSSpecBool *_mixedAreaSymbolFillUseSeriesStroke;
    TSSSpecBool *_mixedLineSymbolFillUseSeriesStroke;
    TSSSpecBool *_scatterSymbolFillUseSeriesStroke;
    TSSSpecDouble *_areaSymbolSize;
    TSSSpecDouble *_lineSymbolSize;
    TSSSpecDouble *_mixedAreaSymbolSize;
    TSSSpecDouble *_mixedLineSymbolSize;
    TSSSpecDouble *_scatterSymbolSize;
    TSDSpecStroke *_areaSymbolStroke;
    TSDSpecStroke *_bubbleSymbolStroke;
    TSDSpecStroke *_lineSymbolStroke;
    TSDSpecStroke *_mixedAreaSymbolStroke;
    TSDSpecStroke *_mixedLineSymbolStroke;
    TSDSpecStroke *_scatterSymbolStroke;
    TSDSpecShadow *_defaultTrendLineShadow;
    TSDSpecStroke *_defaultTrendLineStroke;
    TSSSpecDouble *_defaultTrendlineEquationOpacity;
    TSSSpecInteger *_defaultTrendlineEquationParagraphStyleIndex;
    TSSSpecDouble *_defaultTrendlineRSquaredOpacity;
    TSSSpecInteger *_defaultTrendlineRSquaredParagraphStyleIndex;
    TSSSpecInteger *_areaValueLabelPosition;
    TSSSpecInteger *_barValueLabelPosition;
    TSSSpecInteger *_bubbleValueLabelPosition;
    TSSSpecInteger *_defaultValueLabelPosition;
    TSSSpecInteger *_lineValueLabelPosition;
    TSSSpecInteger *_mixedAreaValueLabelPosition;
    TSSSpecInteger *_mixedColumnValueLabelPosition;
    TSSSpecInteger *_mixedLineValueLabelPosition;
    TSSSpecInteger *_scatterValueLabelPosition;
    TSSSpecInteger *_stackedAreaValueLabelPosition;
    TSSSpecInteger *_stackedBarValueLabelPosition;
    BOOL _definedDefaultErrorBarLineEnd;
    BOOL _definedDefaultErrorBarLineEndScatterX;
    BOOL _definedDefaultErrorBarShadow;
    BOOL _definedDefaultErrorBarStroke;
    BOOL _definedDefaultErrorBarStrokeScatterX;
    BOOL _definedArea3dFill;
    BOOL _definedBar3dFill;
    BOOL _definedColumn3dFill;
    BOOL _definedLine3dFill;
    BOOL _definedPie3dFill;
    BOOL _definedAreaFill;
    BOOL _definedBarFill;
    BOOL _definedColumnFill;
    BOOL _definedDefaultFill;
    BOOL _definedMixedAreaFill;
    BOOL _definedMixedColumnFill;
    BOOL _definedPieFill;
    BOOL _definedAreaLabelParagraphStyleIndex;
    BOOL _definedBarLabelParagraphStyleIndex;
    BOOL _definedDefaultLabelParagraphStyleIndex;
    BOOL _definedLineLabelParagraphStyleIndex;
    BOOL _definedMixedLabelParagraphStyleIndex;
    BOOL _definedPieLabelParagraphStyleIndex;
    BOOL _definedDefaultOpacity;
    BOOL _definedAreaOutsideLabelParagraphStyleIndex;
    BOOL _definedBarOutsideLabelParagraphStyleIndex;
    BOOL _definedDefaultOutsideLabelParagraphStyleIndex;
    BOOL _definedMixedOutsideLabelParagraphStyleIndex;
    BOOL _definedPieOutsideLabelParagraphStyleIndex;
    BOOL _definedArea3dShadow;
    BOOL _definedBar3dShadow;
    BOOL _definedColumn3dShadow;
    BOOL _definedLine3dShadow;
    BOOL _definedPie3dShadow;
    BOOL _definedAreaShadow;
    BOOL _definedBarShadow;
    BOOL _definedBubbleShadow;
    BOOL _definedDefaultShadow;
    BOOL _definedLineShadow;
    BOOL _definedMixedAreaShadow;
    BOOL _definedMixedColumnShadow;
    BOOL _definedMixedLineShadow;
    BOOL _definedPieShadow;
    BOOL _definedScatterShadow;
    BOOL _definedAreaStroke;
    BOOL _definedBarStroke;
    BOOL _definedBubbleStroke;
    BOOL _definedLineStroke;
    BOOL _definedMixedAreaStroke;
    BOOL _definedMixedColumnStroke;
    BOOL _definedMixedLineStroke;
    BOOL _definedPieStroke;
    BOOL _definedScatterStroke;
    BOOL _definedAreaSymbolFill;
    BOOL _definedBubbleSymbolFill;
    BOOL _definedLineSymbolFill;
    BOOL _definedMixedAreaSymbolFill;
    BOOL _definedMixedLineSymbolFill;
    BOOL _definedScatterSymbolFill;
    BOOL _definedAreaSymbolFillUseSeriesFill;
    BOOL _definedLineSymbolFillUseSeriesFill;
    BOOL _definedMixedAreaSymbolFillUseSeriesFill;
    BOOL _definedMixedLineSymbolFillUseSeriesFill;
    BOOL _definedAreaSymbolFillUseSeriesStroke;
    BOOL _definedBubbleSymbolFillUseSeriesStroke;
    BOOL _definedLineSymbolFillUseSeriesStroke;
    BOOL _definedMixedAreaSymbolFillUseSeriesStroke;
    BOOL _definedMixedLineSymbolFillUseSeriesStroke;
    BOOL _definedScatterSymbolFillUseSeriesStroke;
    BOOL _definedAreaSymbolSize;
    BOOL _definedLineSymbolSize;
    BOOL _definedMixedAreaSymbolSize;
    BOOL _definedMixedLineSymbolSize;
    BOOL _definedScatterSymbolSize;
    BOOL _definedAreaSymbolStroke;
    BOOL _definedBubbleSymbolStroke;
    BOOL _definedLineSymbolStroke;
    BOOL _definedMixedAreaSymbolStroke;
    BOOL _definedMixedLineSymbolStroke;
    BOOL _definedScatterSymbolStroke;
    BOOL _definedDefaultTrendLineShadow;
    BOOL _definedDefaultTrendLineStroke;
    BOOL _definedDefaultTrendlineEquationOpacity;
    BOOL _definedDefaultTrendlineEquationParagraphStyleIndex;
    BOOL _definedDefaultTrendlineRSquaredOpacity;
    BOOL _definedDefaultTrendlineRSquaredParagraphStyleIndex;
    BOOL _definedAreaValueLabelPosition;
    BOOL _definedBarValueLabelPosition;
    BOOL _definedBubbleValueLabelPosition;
    BOOL _definedDefaultValueLabelPosition;
    BOOL _definedLineValueLabelPosition;
    BOOL _definedMixedAreaValueLabelPosition;
    BOOL _definedMixedColumnValueLabelPosition;
    BOOL _definedMixedLineValueLabelPosition;
    BOOL _definedScatterValueLabelPosition;
    BOOL _definedStackedAreaValueLabelPosition;
    BOOL _definedStackedBarValueLabelPosition;
}

+ (id)newFromArchive:(const struct ChartSeriesStylePropertyChangeSetArchive *)arg1 unarchiver:(id)arg2;
+ (void)saveObject:(id)arg1 toArchive:(struct ChartSeriesStylePropertyChangeSetArchive *)arg2 archiver:(id)arg3;
- (void)enumerateDefinedPropertiesWithBlock:(CDUnknownBlockType)arg1;
- (void)setUnsetSpecForProperty:(int)arg1;
- (void)setSpec:(id)arg1 forProperty:(int)arg2;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (void)deallocSOS;
- (void)populateGSSPChartSeriesStylePropertyChangeSet:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (id)initChartSeriesStylePropertyChangeSetWithArchive:(const struct ChartSeriesStylePropertyChangeSetArchive *)arg1 unarchiver:(id)arg2;
- (void)saveChartSeriesStylePropertyChangeSetToArchive:(struct ChartSeriesStylePropertyChangeSetArchive *)arg1 archiver:(id)arg2;

@end

