//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDDrawableEditorProxy.h"

#import "TSKChangeSourceObserver-Protocol.h"

@class NSArray, NSCache, NSSet, NSString, TSCHChartEditor, TSCHChartEditorAxisGroup, TSCHChartSeriesPropertyVendor;

@interface TSCHChartEditorProxy : TSDDrawableEditorProxy <TSKChangeSourceObserver>
{
    NSArray *mSelectedSeriesPropertyVendors;
    NSArray *mAllSeriesPropertyVendors;
    NSArray *mChartParagraphStyleProxyControllerArray;
    NSArray *mSelectedLegendProxyArray;
    NSArray *mSelectedErrorBarSeriesPropertyVendors;
    NSArray *mChartPresetsArray;
    NSArray *mSelectedReferenceLinesProxyArray;
    TSCHChartEditorAxisGroup *mInspectorSelectedTabAxisGroup;
    NSArray *mInspectorSelectedAxisProxies;
    NSCache *mChartInspectorVisibilityCache;
    BOOL mIsGoingAway;
}

+ (id)p_visibilityProperties;
+ (id)p_allProperties;
+ (id)keyPathsForValuesAffectingChartParagraphStyleProxyControllerArray;
+ (id)keyPathsForValuesAffectingTextContainerProxies;
+ (id)keyPathsForValuesAffectingParagraphSelectionProxies;
+ (id)keyPathsForValuesAffectingCharacterSelectionProxies;
+ (id)keyPathsForValuesAffectingChartEditor;
+ (id)keyPathsForValuesAffectingChartSeriesShowShowSeriesAsInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowPieLabelDistanceFromCenterInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowValueLabelsPositionInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowValueLabelsPercentInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowValueLabelsDurationInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowValueLabelsDateTimeInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowValueLabelsPrefixSuffixInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowValueLabelsScientificInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowValueLabelsAccuracyInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowValueLabelsCurrencyInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowValueLabelsDecimalsInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowValueLabelsDataFormatInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowValueLabelsInspector;
+ (id)keyPathsForValuesAffectingChartSeriesValueLabelsSeriesNameEnabled;
+ (id)keyPathsForValuesAffectingChartSeriesValueLabelsEnabled;
+ (id)keyPathsForValuesAffectingChartSeriesShowAdvancedScatterInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowAdvancedInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowBubbleOptionsInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowLineConnectionCheckboxInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowAllSeriesLineConnectionInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowLineConnectionInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowShadowKindInspector;
+ (id)keyPathsForValuesAffectingChartSeriesConnectionLineShowStrokeInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowSymbolStrokeInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowStrokeInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowFillInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowAllSeriesDataSymbolInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowDataSymbolInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowPlotOnAxisInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowSeriesTypeInspector;
+ (id)keyPathsForValuesAffectingChartShowCategoryAxisPlotToEdgesOption;
+ (id)keyPathsForValuesAffectingChartShowCategoryAxisLabelsAngleInspector;
+ (id)keyPathsForValuesAffectingChartShowCategoryAxisLabelsInspector;
+ (id)keyPathsForValuesAffectingChartShowCategoryAxisLabelsOrLabelsAngleInspector;
+ (id)keyPathsForValuesAffectingChartAxisShowValueLabelsMinimumValueInspector;
+ (id)keyPathsForValuesAffectingChartAxisShowValueLabels3DPositionInspector;
+ (id)keyPathsForValuesAffectingChartAxisShowValueLabelsAngleInspector;
+ (id)keyPathsForValuesAffectingChartAxisShowValueLabelsPercentInspector;
+ (id)keyPathsForValuesAffectingChartAxisShowValueLabelsDurationInspector;
+ (id)keyPathsForValuesAffectingChartAxisShowValueLabelsDateTimeInspector;
+ (id)keyPathsForValuesAffectingChartAxisShowValueLabelsPrefixSuffixInspector;
+ (id)keyPathsForValuesAffectingChartAxisShowValueLabelsScientificInspector;
+ (id)keyPathsForValuesAffectingChartAxisShowValueLabelsAccuracyInspector;
+ (id)keyPathsForValuesAffectingChartAxisShowValueLabelsCurrencyInspector;
+ (id)keyPathsForValuesAffectingChartAxisShowValueLabelsDecimalsInspector;
+ (id)keyPathsForValuesAffectingChartAxisShowValueLabelsCustomFormatInspector;
+ (id)keyPathsForValuesAffectingChartAxisShowValueLabelsDataFormatInspector;
+ (id)keyPathsForValuesAffectingChartAxisValueLabelsEnabled;
+ (id)keyPathsForValuesAffectingChartAxisShowValueLabelsInspector;
+ (id)keyPathsForValuesAffectingChartShowValueAxisScaleDecadesInspector;
+ (id)keyPathsForValuesAffectingChartShowValueAxisScaleMinorInspector;
+ (id)keyPathsForValuesAffectingChartShowValueAxisScaleMajorMinorInspector;
+ (id)keyPathsForValuesAffectingChartShowValueAxisScaleMinMaxInspector;
+ (id)keyPathsForValuesAffectingChartShowValueAxisScaleNoMenuInspector;
+ (id)keyPathsForValuesAffectingChartShowValueAxisScaleMenuInspector;
+ (id)keyPathsForValuesAffectingChartShowAxisReferenceLineInspector;
+ (id)keyPathsForValuesAffectingChartShowIfHasStackedPercentValueAxis;
+ (id)keyPathsForValuesAffectingChartShowAxisOptionsSeriesNamesInspector;
+ (id)keyPathsForValuesAffectingChartShowAxisOptionsLineInspector;
+ (id)keyPathsForValuesAffectingChartShowAxisMinorTickmarksInspector;
+ (id)keyPathsForValuesAffectingChartShowAxisTickmarksInspector;
+ (id)keyPathsForValuesAffectingChartShowCategoryAxisGridlinesInspector;
+ (id)keyPathsForValuesAffectingChartShowValueAxisGridlinesInspector;
+ (id)keyPathsForValuesAffectingChartShowCategoryAxisOptionsInspector;
+ (id)keyPathsForValuesAffectingChartShowValueAxisOptionsInspector;
+ (id)keyPathsForValuesAffectingChartEnablePercentageIfValueLabelsSupportPercentNumberFormatting;
+ (id)keyPathsForValuesAffectingChartShowMultiDataControlType;
+ (id)keyPathsForValuesAffectingChartShowIfHasAnyHorizontalCharts;
+ (id)keyPathsForValuesAffectingChartShowMinorGridlinesInspector;
+ (id)keyPathsForValuesAffectingChartShowGridlineShadowsInspector;
+ (id)keyPathsForValuesAffectingChartShowBackgroundFillInspector;
+ (id)keyPathsForValuesAffectingChartShow3DBevelInspector;
+ (id)keyPathsForValuesAffectingChartShowShadowOffsetInspector;
+ (id)keyPathsForValuesAffectingChartShowExtraShadowOptionsInspector;
+ (id)keyPathsForValuesAffectingChartShowShadowKindInspector;
+ (id)keyPathsForValuesAffectingChartShow3DSceneInspector;
+ (id)keyPathsForValuesAffectingChartShowBarShapeInspector;
+ (id)keyPathsForValuesAffectingChartShow3DDepthSliderInspector;
+ (id)keyPathsForValuesAffectingChartShow3DLineAreaFormatInspector;
+ (id)keyPathsForValuesAffectingP_chartShow3DSceneInspectorSettings;
+ (id)keyPathsForValuesAffectingChartSeriesShowStaticDataFormatLabelsAxisInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowValueLabelsAxisInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowValueLabelsCustomFormatInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowValueLabelsDataPointNameInspector;
+ (id)keyPathsForValuesAffectingChartSeriesShowValueLabelsSeriesNameInspector;
+ (id)keyPathsForValuesAffectingChartSeriesDataShowPieExplosion;
+ (id)keyPathsForValuesAffectingChartShowBorderStrokeInspector;
+ (id)keyPathsForValuesAffectingChartShowBarColSetGapInspector;
+ (id)keyPathsForValuesAffectingChartShowBarColGapInspector;
+ (id)keyPathsForValuesAffectingChartShowBarGapInspectors;
+ (id)keyPathsForValuesAffectingChartShowFillSetInspector;
+ (id)keyPathsForValuesAffectingChartShowFontInspector;
+ (id)keyPathsForValuesAffectingChartShowBorderInspector;
+ (id)keyPathsForValuesAffectingChartShowTitleLegendInspector;
+ (id)keyPathsForValuesAffectingChartShowChartInteractiveOptionsInspector;
+ (id)keyPathsForValuesAffectingChartShowChartOptionsInspector;
+ (id)keyPathsForValuesAffectingChartShowChartTypeInspector;
+ (id)keyPathsForValuesAffectingChartShowSwatchInspector;
+ (id)keyPathsForValuesAffectingChartShowIfRequiresAxisOrdinal;
+ (id)keyPathsForValuesAffectingChartShowIfSupportsTrendLines;
+ (id)keyPathsForValuesAffectingChartShowIfSupportsErrorBarsScatterX;
+ (id)keyPathsForValuesAffectingChartShowIfSupportsErrorBars;
+ (id)keyPathsForValuesAffectingChartShowIfHasMediator;
+ (id)keyPathsForValuesAffectingChartShowNever;
+ (id)keyPathsForValuesAffectingChartShowAlways;
+ (id)keyPathsForValuesAffectingChartAllSeriesIndices;
+ (id)keyPathsForValuesAffectingChartSeriesValueLabelPositions;
+ (id)keyPathsForValuesAffectingChartErrorBarSettings;
+ (id)keyPathsForValuesAffectingChartTrendlineTypes;
+ (id)keyPathsForValuesAffectingChartSharedValueLabelsNumberFormatAccuracyOptions;
+ (id)keyPathsForValuesAffectingChartSharedValueLabelsNumberFormatCurrencyOptions;
+ (id)keyPathsForValuesAffectingChartDataSymbolShapes;
+ (id)keyPathsForValuesAffectingChartShadowKinds;
+ (id)keyPathsForValuesAffectingChartNegativeNumberStyles;
+ (id)keyPathsForValuesAffectingChartDataSetNameLocations;
+ (id)keyPathsForValuesAffectingChartMultiDataControlTypes;
+ (id)keyPathsForValuesAffectingChartSeriesValueLabelsAxes;
+ (id)keyPathsForValuesAffectingChartValueLabelFormats;
+ (id)keyPathsForValuesAffectingChartValueAxes;
+ (id)keyPathsForValuesAffectingChartValueAxis3DLabelPositionOptions;
+ (id)keyPathsForValuesAffectingChartValueAxisScaleOptions;
+ (id)keyPathsForValuesAffectingChartConnectingLineOptions;
+ (id)keyPathsForValuesAffectingChart3DLightingPackageOptions;
+ (id)keyPathsForValuesAffectingChartBarShapes;
+ (id)keyPathsForValuesAffectingChartPresets;
+ (id)keyPathsForValuesAffectingChartSeriesTypes;
+ (id)keyPathsForValuesAffectingChartTypes;
+ (id)keyPathsForValuesAffectingChartInspectorSelectedAxisProxies;
+ (id)keyPathsForValuesAffectingChartInspectorSelectedTabAxisGroup;
+ (id)keyPathsForValuesAffectingChartInspectorTabAxisGroups;
+ (id)keyPathsForValuesAffectingChartInspectorVisibilityCache;
+ (id)keyPathsForValuesAffectingChartMaxNumberOfSeries;
+ (id)keyPathsForValuesAffectingChartMaxNumberOfValues;
+ (id)keyPathsForValuesAffectingChartSelectedReferenceLinesProxyArray;
+ (id)keyPathsForValuesAffectingChartSelectedErrorBarSeriesPropertyVendor;
+ (id)keyPathsForValuesAffectingChartSelectedErrorBarSeriesPropertyVendors;
+ (id)keyPathsForValuesAffectingChartSelectedLegendProxyArray;
+ (id)keyPathsForValuesAffectingChartSelectedSeriesPropertyVendor;
+ (id)keyPathsForValuesAffectingChartSelectedSeriesPropertyVendors;
+ (id)keyPathsForValuesAffectingChartAllSeriesPropertyVendor;
+ (id)keyPathsForValuesAffectingChartAllSeriesPropertyVendors;
+ (id)keyPathsForValuesAffectingChartAnySelected;
+ (id)keyPathsForValuesAffectingChartLayouts;
+ (id)keyPathsForValuesAffectingCharts;
+ (id)keyPathsForValuesAffectingChartObservableChartType;
+ (id)keyPathsForValuesAffectingCategoryAxisTabSelected;
+ (id)keyPathsForValuesAffectingValueAxisTabSelected;
+ (void)initialize;
- (void)invalidateCachedValuesForKeyPaths:(id)arg1;
@property(readonly, nonatomic) id chartParagraphStyleProxyControllerArray;
@property(readonly, nonatomic) id textContainerProxies;
@property(readonly, nonatomic) id paragraphSelectionProxies;
@property(readonly, nonatomic) id characterSelectionProxies;
- (id)p_referenceLineValueLabelSelectionPairs;
- (id)p_referenceLineLabelSelectionPairs;
- (id)p_trendlineR2LabelsSelectionPairs;
- (id)p_trendlineEquationLabelsSelectionPairs;
- (id)p_axisLabelsPairs;
- (id)p_axisLabelsSelectionPairs;
- (id)p_axisTitlePairs;
- (id)p_axisTitleSelectionPairs;
- (id)p_seriesValueLabelsPairs;
- (id)p_seriesValueLabelsSelectionPairs;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_stopChangeSourceObserving:(id)arg1;
- (void)p_startChangeSourceObserving:(id)arg1;
- (BOOL)p_chartSeriesShowValueLabelsInspectorForNumberFormat:(int)arg1;
- (BOOL)p_chartSeriesShowValueLabelsInspectorForNumberFormatSet:(id)arg1;
- (BOOL)p_chartAxisShowValueLabelsInspectorForNumberFormat:(int)arg1;
- (BOOL)p_chartAxisShowValueLabelsInspectorForNumberFormatSet:(id)arg1;
- (void)p_invalidateReferenceLines;
- (void)p_invalidateInspectorSelectionAxisProxies;
- (void)p_invalidateAxes;
- (void)p_invalidatePresets;
- (void)p_invalidateParagraphStyleProxyControllerArray;
- (void)p_invalidateSeriesPropertyVendors;
- (void)p_invalidateSeries;
- (void)p_invalidateLegend;
- (void)p_invalidateErrorBars;
- (void)p_invalidateAllPostingNotification:(BOOL)arg1;
- (void)p_invalidateAll;
@property(readonly, nonatomic) TSCHChartEditor *chartEditor;
@property(readonly, nonatomic) BOOL chartSeriesShowShowSeriesAsInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowPieLabelDistanceFromCenterInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowValueLabelsPositionInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowValueLabelsPercentInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowValueLabelsDurationInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowValueLabelsDateTimeInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowValueLabelsPrefixSuffixInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowValueLabelsScientificInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowValueLabelsAccuracyInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowValueLabelsCurrencyInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowValueLabelsDecimalsInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowValueLabelsDataFormatInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowValueLabelsInspector;
- (BOOL)p_anySupportsValueLabels;
@property(readonly, nonatomic) BOOL chartSeriesValueLabelsSeriesNameEnabled;
@property(readonly, nonatomic) BOOL chartSeriesValueLabelsEnabled;
@property(readonly, nonatomic) BOOL chartSeriesShowAdvancedScatterInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowAdvancedInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowBubbleOptionsInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowLineConnectionCheckboxInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowAllSeriesLineConnectionInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowLineConnectionInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowShadowKindInspector;
@property(readonly, nonatomic) BOOL chartSeriesConnectionLineShowStrokeInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowSymbolStrokeInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowStrokeInspector;
- (BOOL)p_chartSeriesShowStrokeInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowFillInspector;
- (BOOL)p_chartHasSeriesTypeSupportingPropertyKey:(id)arg1 onlySelectedSeries:(BOOL)arg2;
- (BOOL)p_chartHasSeriesTypeSupportingPropertyKey:(id)arg1;
@property(readonly, nonatomic) BOOL chartSeriesShowAllSeriesDataSymbolInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowDataSymbolInspector;
- (BOOL)p_chartSeriesShowDataSymbolInspectorOnlySelectedSeries:(BOOL)arg1;
@property(readonly, nonatomic) BOOL chartSeriesShowPlotOnAxisInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowSeriesTypeInspector;
@property(readonly, nonatomic) BOOL chartShowCategoryAxisPlotToEdgesOption;
@property(readonly, nonatomic) BOOL chartShowCategoryAxisLabelsAngleInspector;
@property(readonly, nonatomic) BOOL chartShowCategoryAxisLabelsInspector;
@property(readonly, nonatomic) BOOL chartShowCategoryAxisLabelsOrLabelsAngleInspector;
@property(readonly, nonatomic) BOOL chartAxisShowValueLabelsMinimumValueInspector;
@property(readonly, nonatomic) BOOL chartAxisShowValueLabels3DPositionInspector;
@property(readonly, nonatomic) BOOL chartAxisShowValueLabelsAngleInspector;
@property(readonly, nonatomic) BOOL chartAxisShowValueLabelsPercentInspector;
@property(readonly, nonatomic) BOOL chartAxisShowValueLabelsDurationInspector;
@property(readonly, nonatomic) BOOL chartAxisShowValueLabelsDateTimeInspector;
@property(readonly, nonatomic) BOOL chartAxisShowValueLabelsPrefixSuffixInspector;
@property(readonly, nonatomic) BOOL chartAxisShowValueLabelsScientificInspector;
@property(readonly, nonatomic) BOOL chartAxisShowValueLabelsAccuracyInspector;
@property(readonly, nonatomic) BOOL chartAxisShowValueLabelsCurrencyInspector;
@property(readonly, nonatomic) BOOL chartAxisShowValueLabelsDecimalsInspector;
@property(readonly, nonatomic) BOOL chartAxisShowValueLabelsCustomFormatInspector;
@property(readonly, nonatomic) BOOL chartAxisShowValueLabelsDataFormatInspector;
@property(readonly, nonatomic) BOOL chartAxisValueLabelsEnabled;
@property(readonly, nonatomic) BOOL chartAxisShowValueLabelsInspector;
@property(readonly, nonatomic) BOOL chartShowValueAxisScaleDecadesInspector;
@property(readonly, nonatomic) BOOL chartShowValueAxisScaleMinorInspector;
@property(readonly, nonatomic) BOOL chartShowValueAxisScaleMajorMinorInspector;
@property(readonly, nonatomic) BOOL chartShowValueAxisScaleMinMaxInspector;
@property(readonly, nonatomic) BOOL chartShowValueAxisScaleNoMenuInspector;
@property(readonly, nonatomic) BOOL chartShowValueAxisScaleMenuInspector;
@property(readonly, nonatomic) BOOL chartShowAxisReferenceLineInspector;
@property(readonly, nonatomic) BOOL chartShowIfHasStackedPercentValueAxis;
@property(readonly, nonatomic) BOOL chartShowAxisOptionsSeriesNamesInspector;
@property(readonly, nonatomic) BOOL chartShowAxisOptionsLineInspector;
@property(readonly, nonatomic) BOOL chartShowAxisMinorTickmarksInspector;
@property(readonly, nonatomic) BOOL chartShowAxisTickmarksInspector;
@property(readonly, nonatomic) BOOL chartShowCategoryAxisGridlinesInspector;
@property(readonly, nonatomic) BOOL chartShowValueAxisGridlinesInspector;
@property(readonly, nonatomic) BOOL chartShowCategoryAxisOptionsInspector;
@property(readonly, nonatomic) BOOL chartShowValueAxisOptionsInspector;
@property(readonly, nonatomic) BOOL chartEnablePercentageIfValueLabelsSupportPercentNumberFormatting;
@property(readonly, nonatomic) BOOL chartShowMultiDataControlType;
@property(readonly, nonatomic) BOOL chartShowIfHasAnyHorizontalCharts;
@property(readonly, nonatomic) BOOL chartShowMinorGridlinesInspector;
@property(readonly, nonatomic) BOOL chartShowGridlineShadowsInspector;
@property(readonly, nonatomic) BOOL chartShowBackgroundFillInspector;
@property(readonly, nonatomic) BOOL chartShow3DBevelInspector;
@property(readonly, nonatomic) BOOL chartShowShadowOffsetInspector;
@property(readonly, nonatomic) BOOL chartShowExtraShadowOptionsInspector;
- (BOOL)p_allChartSeriesTypesSupportsPropertyKey:(id)arg1;
- (BOOL)p_chartTypeSupportsPropertyKey:(id)arg1;
@property(readonly, nonatomic) BOOL chartShowShadowKindInspector;
- (BOOL)p_allHaveSameChartShowShadowInspectorSettingsForKey:(id)arg1;
- (id)p_chartShowShadowInspectorSettings;
@property(readonly, nonatomic) BOOL chartShow3DSceneInspector;
@property(readonly, nonatomic) BOOL chartShowBarShapeInspector;
@property(readonly, nonatomic) BOOL chartShow3DDepthSliderInspector;
@property(readonly, nonatomic) BOOL chartShow3DLineAreaFormatInspector;
- (BOOL)p_hasChartShow3DSceneInspectorSettingsForKey:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *p_chartShow3DSceneInspectorSettings;
@property(readonly, nonatomic) BOOL chartSeriesShowStaticDataFormatLabelsAxisInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowValueLabelsAxisInspector;
- (BOOL)chartSeriesShowValueLabelsSeriesNameAndNotDataPointNameInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowValueLabelsCustomFormatInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowValueLabelsDataPointNameInspector;
@property(readonly, nonatomic) BOOL chartSeriesShowValueLabelsSeriesNameInspector;
@property(readonly, nonatomic) BOOL chartSeriesDataShowPieExplosion;
@property(readonly, nonatomic) BOOL chartShowBorderStrokeInspector;
@property(readonly, nonatomic) BOOL chartShowBarColSetGapInspector;
@property(readonly, nonatomic) BOOL chartShowBarColGapInspector;
- (BOOL)p_allHaveSameChartShowBarGapInspectorSettingsForKey:(id)arg1;
@property(readonly, nonatomic) BOOL chartShowBarGapInspectors;
- (BOOL)p_hasChartSettings:(id)arg1 forKey:(id)arg2;
- (BOOL)p_allHaveSameChartSettings:(id)arg1 forKey:(id)arg2;
- (id)p_chartShowBarGapInspectorSettings;
@property(readonly, nonatomic) BOOL chartShowFillSetInspector;
@property(readonly, nonatomic) BOOL chartShowFontInspector;
@property(readonly, nonatomic) BOOL chartShowBorderInspector;
@property(readonly, nonatomic) BOOL chartShowTitleLegendInspector;
@property(readonly, nonatomic) BOOL chartShowChartInteractiveOptionsInspector;
@property(readonly, nonatomic) BOOL chartShowChartOptionsInspector;
@property(readonly, nonatomic) BOOL chartShowChartTypeInspector;
@property(readonly, nonatomic) BOOL chartShowSwatchInspector;
- (BOOL)p_showValueLabelsCustomFormatInspectorForProxies:(id)arg1;
@property(readonly, nonatomic) BOOL chartShowIfRequiresAxisOrdinal;
@property(readonly, nonatomic) BOOL chartShowIfSupportsTrendLines;
@property(readonly, nonatomic) BOOL chartShowIfSupportsErrorBarsScatterX;
@property(readonly, nonatomic) BOOL chartShowIfSupportsErrorBars;
@property(readonly, nonatomic) BOOL chartShowIfHasMediator;
@property(readonly, nonatomic) BOOL chartShowNever;
@property(readonly, nonatomic) BOOL chartShowAlways;
@property(readonly, nonatomic) id chartAllSeriesIndices;
@property(readonly, nonatomic) id chartSeriesValueLabelPositions;
@property(readonly, nonatomic) id chartErrorBarSettings;
@property(readonly, nonatomic) id chartTrendlineTypes;
@property(readonly, nonatomic) id chartSharedValueLabelsNumberFormatAccuracyOptions;
@property(readonly, nonatomic) id chartSharedValueLabelsNumberFormatCurrencyOptions;
@property(readonly, nonatomic) id chartDataSymbolShapes;
@property(readonly, nonatomic) id chartShadowKinds;
@property(readonly, nonatomic) id chartNegativeNumberStyles;
@property(readonly, nonatomic) id chartDataSetNameLocations;
@property(readonly, nonatomic) id chartMultiDataControlTypes;
@property(readonly, nonatomic) id chartSeriesValueLabelsAxes;
@property(readonly, nonatomic) id chartValueLabelFormats;
@property(readonly, nonatomic) id chartValueAxes;
@property(readonly, nonatomic) id chartValueAxis3DLabelPositionOptions;
@property(readonly, nonatomic) id chartValueAxisScaleOptions;
@property(readonly, nonatomic) id chartConnectingLineOptions;
@property(readonly, nonatomic) id chart3DLightingPackageOptions;
@property(readonly, nonatomic) id chartBarShapes;
@property(readonly, nonatomic) id chartPresets;
@property(readonly, nonatomic) id chartSeriesTypes;
@property(readonly, nonatomic) id chartTypes;
@property(readonly, retain, nonatomic) NSArray *chartInspectorSelectedAxisProxies;
@property(copy, nonatomic) TSCHChartEditorAxisGroup *chartInspectorSelectedTabAxisGroup;
@property(readonly, retain, nonatomic) NSArray *chartInspectorTabAxisGroups;
@property(retain, nonatomic) NSCache *chartInspectorVisibilityCache;
@property(readonly, nonatomic) unsigned long long chartMaxNumberOfSeries;
@property(readonly, nonatomic) unsigned long long chartMaxNumberOfValues;
@property(readonly, nonatomic) NSArray *chartSelectedReferenceLinesProxyArray;
- (id)p_selectedReferenceLinesDictionary;
@property(readonly, nonatomic) TSCHChartSeriesPropertyVendor *chartSelectedErrorBarSeriesPropertyVendor;
@property(readonly, nonatomic) NSArray *chartSelectedErrorBarSeriesPropertyVendors;
@property(readonly, nonatomic) NSArray *chartSelectedLegendProxyArray;
@property(readonly, nonatomic) TSCHChartSeriesPropertyVendor *chartSelectedSeriesPropertyVendor;
@property(readonly, nonatomic) NSArray *chartSelectedSeriesPropertyVendors;
- (id)p_selectedSeriesOrSeriesObjectsIndexesByInfo;
- (id)p_selectedSeriesOrSeriesObjectsIndexesByInfoOutProxyClass:(Class *)arg1;
@property(readonly, nonatomic) TSCHChartSeriesPropertyVendor *chartAllSeriesPropertyVendor;
@property(readonly, nonatomic) NSArray *chartAllSeriesPropertyVendors;
@property(readonly, nonatomic) BOOL chartAnySelected;
@property(readonly, nonatomic) id chartLayouts;
@property(readonly, nonatomic) id charts;
- (void)p_willResignCurrentEditor:(id)arg1;
@property(readonly, nonatomic) id chartObservableChartType;
@property(readonly, nonatomic) BOOL categoryAxisTabSelected;
@property(readonly, nonatomic) BOOL valueAxisTabSelected;
- (void)teardown;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 documentRoot:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

