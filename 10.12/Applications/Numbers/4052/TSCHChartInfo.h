//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "TSCHPropertyMapsGeneratedProtocol-Protocol.h"
#import "TSCHStyleOwnerCollaborationSupport-Protocol.h"
#import "TSCHStyleOwning-Protocol.h"
#import "TSCHUnretainedParent-Protocol.h"
#import "TSDMixing-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString, TSCHChartDrawableInfo, TSCHChartLayoutCache, TSCHChartMediator, TSCHChartModel, TSCHChartStylePreset, TSCHChartType, TSCHLegendModel, TSDInfoGeometry, TSKCustomFormatList, TSKDocumentRoot, TSPLazyReference, TSSStylesheet;
@protocol TSCHStyleActAlike;

@interface TSCHChartInfo : NSObject <TSCHStyleOwnerCollaborationSupport, TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwning, TSCHUnretainedParent, TSDMixing, NSCopying>
{
    TSCHChartModel *mModel;
    id <TSCHStyleActAlike> mStyle;
    id <TSCHStyleActAlike> mNonStyle;
    TSCHChartType *mChartType;
    TSCHLegendModel *mLegendModel;
    TSCHChartMediator *mChartMediator;
    TSPLazyReference *mLazyPreset;
    TSPLazyReference *mOwnedPreset;
    struct CGRect mInnerChartFrame;
    id <TSCHStyleActAlike> mLegendStyle;
    id <TSCHStyleActAlike> mLegendNonStyle;
    NSMutableArray *mValueAxisStyles;
    NSMutableArray *mCategoryAxisStyles;
    NSMutableArray *mValueAxisNonStyles;
    NSMutableArray *mCategoryAxisNonStyles;
    NSMutableArray *mThemeSeriesStyles;
    NSMutableArray *mPrivateSeriesStyles;
    NSMutableArray *mSeriesNonStyles;
    NSMutableArray *mParagraphStyles;
    NSMutableDictionary *mRefLineNonStylesMap;
    NSMutableDictionary *mRefLineStylesMap;
    id <TSCHStyleActAlike> mThemePresetRefLineStyle;
    struct CGPoint mPreviewOrigin;
    BOOL mDisplayMessageOnRepCreation;
    NSString *mMessageString;
    double mMessageDuration;
    TSDInfoGeometry *mNonInfoGeometry;
    TSCHChartDrawableInfo *mDrawableInfo;
    BOOL mNeedsCalcEngineDependentUpgrade;
    BOOL mNeedsCalcEngineDependentImport;
    BOOL mIsOlderThanSage;
    NSNumber *mHorizontalMin;
    NSNumber *mHorizontalMax;
    NSNumber *mValueMin;
    NSNumber *mValueMax;
    NSString *mValuePrefix;
    NSString *mValueSuffix;
    BOOL mValueUseSeparator;
    NSString *mHorizontalPrefix;
    NSString *mHorizontalSuffix;
    BOOL mHorizontalUseSeparator;
    NSMutableDictionary *mStyleViewProxyMap;
    NSArray *mStyleViewProxyParagraphStyleArray;
    unsigned long long mLastSeriesIndex;
    NSString *mLastAppliedFillSetLookupString;
    TSKCustomFormatList *mPasteboardCustomFormatList;
    BOOL mAppearancePreservedForPreset;
    struct CGSize _minimumChartBodySizeForTransformingGeometry;
}

+ (BOOL)groupedShadowsForChartModel:(id)arg1;
+ (id)scale3DPropertyToConstantDepthInfoChartScaleMappingsWithBarShape:(int)arg1 conversionBlock:(CDUnknownBlockType)arg2;
+ (id)p_chartTypeTo3DScalePropertyPairs;
+ (id)referenceLineStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (id)paragraphStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (id)seriesStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (id)categoryAxisStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (id)valueAxisStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (id)legendStyleIdentifierForRoleIndex:(unsigned long long)arg1;
+ (id)chartStyleIdentifierForRoleIndex:(unsigned long long)arg1;
+ (Class)classForLegendNonstyle;
+ (Class)classForLegendStyle;
+ (Class)classForAxisNonstyle;
+ (Class)classForAxisStyle;
+ (Class)classForSeriesNonstyle;
+ (Class)classForSeriesStyle;
+ (Class)classForChartNonstyle;
+ (Class)classForChartStyle;
+ (id)specificNumberFormatTypeProperties;
+ (id)specificPropertiesThatCanContainCustomFormats;
+ (id)specificPropertiesThatCanContainCustomDateFormats;
+ (id)specificPropertiesThatCanContainCustomNumberFormats;
+ (id)paragraphStylePropertiesChartsUse;
+ (id)propertiesThatInvalidateModel;
+ (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2 forStyleOwner:(id)arg3;
+ (id)adjustNumberFormatTypeValue:(id)arg1 forChartModel:(id)arg2 gridValueType:(int)arg3 hasCustomFormat:(BOOL)arg4;
+ (int)adjustNumberFormatType:(int)arg1 forChartModel:(id)arg2 gridValueType:(int)arg3 hasCustomFormat:(BOOL)arg4;
+ (struct CGSize)minimumChartBodySizeForTransformingGeometryForChart:(id)arg1;
+ (double)beginValueForStackedBarSeries:(id)arg1 index:(unsigned long long)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(BOOL)arg4 valueAxis:(id)arg5;
+ (unsigned char)styleOwnerPathType;
+ (id)p_stylesheetFromOrderedArrayOfSources:(id)arg1;
+ (id)p_currentThreadSceneAreaLayoutCache;
+ (void)setCurrentThreadSceneAreaLayoutCache:(id)arg1;
+ (id)genericParagraphStyleIndexPropertiesInUse;
+ (id)genericParagraphStyleIndexProperties;
+ (id)paragraphStyleIndexPropertiesInUse;
+ (id)paragraphStyleIndexProperties;
@property(readonly, nonatomic) struct CGSize minimumChartBodySizeForTransformingGeometry; // @synthesize minimumChartBodySizeForTransformingGeometry=_minimumChartBodySizeForTransformingGeometry;
@property(nonatomic) double informationalMessageDuration; // @synthesize informationalMessageDuration=mMessageDuration;
@property(retain, nonatomic) NSString *informationalMessageString; // @synthesize informationalMessageString=mMessageString;
@property(nonatomic) BOOL displayMessageOnRepCreation; // @synthesize displayMessageOnRepCreation=mDisplayMessageOnRepCreation;
@property(copy, nonatomic) NSString *lastAppliedFillSetLookupString; // @synthesize lastAppliedFillSetLookupString=mLastAppliedFillSetLookupString;
@property(readonly, nonatomic) TSCHChartDrawableInfo *drawableInfo; // @synthesize drawableInfo=mDrawableInfo;
@property(nonatomic) struct CGPoint previewOrigin; // @synthesize previewOrigin=mPreviewOrigin;
@property(retain, nonatomic) TSCHChartMediator *mediator; // @synthesize mediator=mChartMediator;
@property(readonly, retain, nonatomic) TSCHChartType *chartType; // @synthesize chartType=mChartType;
@property(retain, nonatomic) TSCHLegendModel *legend; // @synthesize legend=mLegendModel;
@property(retain, nonatomic) TSCHChartModel *model; // @synthesize model=mModel;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (void)performDeferredUpgradeAndImportOperations;
@property(readonly, nonatomic) BOOL wantsDeferredUpgradeOrImport;
- (void)upgradeAxisLabelFormatWithValuePrefix:(id)arg1 valueSuffix:(id)arg2 valueUseSeparator:(BOOL)arg3 horizontalPrefix:(id)arg4 horizontalSuffix:(id)arg5 horizontalUseSeparator:(BOOL)arg6;
- (void)upgradeWithHorizontalMin:(id)arg1 horizontalMax:(id)arg2 valueMin:(id)arg3 valueMax:(id)arg4;
- (struct CGRect)chartBodyBoundsForSageImportWithSageChartType:(BOOL)arg1 isSpiceDoc:(BOOL)arg2;
- (id)fillsForSeriesAndTheme;
- (id)commandToChangeAllChartFontsToFamilyName:(id)arg1;
- (void)p_breakUpFontName:(id)arg1 isBold:(char *)arg2 isItalic:(char *)arg3;
- (id)commandToScaleAllChartFontsBy:(double)arg1;
- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;
- (id)scaleAllStrokesInStyle:(id)arg1 byRatio:(double)arg2;
- (id)paragraphStyleForSelectionPath:(id)arg1;
- (int)paragraphStylePropertyForSelectionPath:(id)arg1;
- (id)styleOwnerForSelectionPath:(id)arg1;
- (int)stringPropertyForSelectionPath:(id)arg1;
- (id)stringForSelectionPath:(id)arg1;
- (id)themeChartPresetForUUID:(id)arg1;
@property(readonly, nonatomic) TSCHChartStylePreset *presetFromThemeIfNecessary;
@property(readonly, nonatomic) TSCHChartStylePreset *firstPresetFromTheme;
@property(readonly, nonatomic) NSArray *themeChartPresets;
- (void)setPreset:(id)arg1 forceOwning:(BOOL)arg2;
- (void)setPreset:(id)arg1;
@property(readonly, nonatomic) TSCHChartStylePreset *preset;
- (BOOL)shouldOwnPreset:(id)arg1;
- (void)debugVerifyPreset;
- (id)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned long long)arg2;
- (id)applyStyleSwapTuple:(id)arg1;
- (id)p_uuidForRefLineOnAxis:(id)arg1 havingNonStyle:(id)arg2;
- (BOOL)p_refLineNonStyleMapIsValid;
- (id)commandForReplacingReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)applyStyleSwapTuples:(id)arg1;
- (id)childInfos;
- (id)commandSetCategoryName:(id)arg1 forCategoryIndex:(unsigned long long)arg2;
- (id)commandSetSeriesName:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (double)sageDepthFactorForExport;
- (void)updateTitlesForExportingModel:(id)arg1;
- (BOOL)appearancePreservedForPreset;
- (void)preserveAppearanceForCurrentPresetAdoptingStylesheet:(BOOL)arg1;
- (BOOL)appearancePreservedForCurrentPreset;
- (void)chartTypeDidChangeWithDetails:(id)arg1;
- (void)modelDidInvalidateWithDetails:(id)arg1;
- (void)chartDidInvalidateWithProperties:(id)arg1;
- (void)deleteReferenceLineForAxisID:(id)arg1 uuid:(id)arg2;
- (void)addReferenceLineForAxisID:(id)arg1 nonStyle:(id)arg2 style:(id)arg3 uuid:(id)arg4;
- (void)setReferenceLineStyle:(id)arg1 forAxisID:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setReferenceLineNonStyleItem:(id)arg1 forAxisID:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)referenceLineNonStyleItemsForAxisID:(id)arg1;
- (id)referenceLineNonStyleForAxisID:(id)arg1 uuid:(id)arg2 outIndex:(unsigned long long *)arg3;
- (unsigned long long)p_refLineIndexWithUUID:(id)arg1 nonStyleItems:(id)arg2;
- (id)referenceLineNonStyleForAxisID:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)referenceLineStyleForAxisID:(id)arg1 atIndex:(unsigned long long)arg2 privateStyleOnly:(BOOL)arg3;
- (id)referenceLineStyleForAxisID:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setChartNonstyle:(id)arg1;
- (void)setSeriesNonstyle:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setCategoryAxisNonstyle:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setValueAxisNonstyle:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)categoryAxisNonstyleAtIndex:(unsigned long long)arg1;
- (id)valueAxisNonstyleAtIndex:(unsigned long long)arg1;
- (id)categoryAxisStyleAtIndex:(unsigned long long)arg1;
- (id)valueAxisStyleAtIndex:(unsigned long long)arg1;
- (unsigned long long)categoryAxisStyleCount;
- (unsigned long long)valueAxisStyleCount;
- (id)seriesNonstyleForSeriesIndex:(unsigned long long)arg1;
- (id)seriesStyleForSeriesIndex:(unsigned long long)arg1;
- (id)nonStyleForAxis:(id)arg1;
- (id)styleForAxis:(id)arg1;
- (BOOL)referenceLineStyleIsPrivate:(id)arg1;
- (unsigned long long)numberOfThemeSeriesStyles;
- (BOOL)seriesStyleIsPrivate:(id)arg1;
- (id)nonStyleForSeries:(id)arg1;
- (id)seriesStyleForSeries:(id)arg1;
- (id)legendNonStyle;
- (id)legendStyle;
- (id)newChartStylePresetByExampleWithPresetIndex:(unsigned long long)arg1 withSeriesCount:(unsigned long long)arg2 forTheme:(id)arg3;
- (id)newChartStylePresetByExampleWithPresetIndex:(unsigned long long)arg1 forTheme:(id)arg2;
- (id)masterFontNameForInspectors;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (id)swapTuplesForMutations:(id)arg1 forImport:(BOOL)arg2;
- (id)p_swapTuplesForMutations:(id)arg1;
- (id)operationPropertyNameFromGenericProperty:(int)arg1;
- (id)defaultProperties;
- (id)nonstyle;
- (id)style;
- (id)chartInfo;
- (id)valueForProperty:(int)arg1;
- (id)objectValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (BOOL)hasObjectValueForProperty:(int)arg1 value:(id *)arg2;
- (BOOL)hasFloatValueForProperty:(int)arg1 value:(float *)arg2;
- (BOOL)hasIntValueForProperty:(int)arg1 value:(int *)arg2;
- (int)defaultPropertyForGeneric:(int)arg1;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)p_genericToDefaultPropertyMap;
@property(readonly, nonatomic) TSSStylesheet *documentStylesheet;
@property(readonly, nonatomic) TSKDocumentRoot *documentRoot;
- (unsigned long long)addParagraphStyle:(id)arg1;
- (id)paragraphStyles;
- (id)paragraphStyleAtIndex:(unsigned long long)arg1;
- (int)elementKind;
@property(readonly, nonatomic) BOOL isPhantom;
- (Class)editorClass;
- (Class)layoutClass;
- (Class)repClass;
- (struct CGRect)calculateDefaultLegendPositionIfNeededWithOptionalLayout:(id)arg1;
- (void)setDefaultLegendPositionIfNeededWithOptionalLayout:(id)arg1;
- (double)p_dataSetNameAccomodationWithOptionalLayout:(id)arg1;
- (double)p_titleAccommodationWithLegendSize:(struct CGSize)arg1 optionalLayout:(id)arg2;
- (unsigned long long)defaultDataColumnCountForChartType:(id)arg1 forDocumentLocale:(id)arg2;
- (unsigned long long)defaultDataRowCountForChartType:(id)arg1 forDocumentLocale:(id)arg2;
- (id)p_getLocalizableDefaultDataDictionaryForChartType:(id)arg1 forDocumentLocale:(id)arg2;
- (BOOL)gridEqualToDefaultGrid;
- (void)setChartType:(id)arg1 andSetLegendDefaults:(BOOL)arg2 gridRowIds:(id)arg3 gridColumnIds:(id)arg4 forDocumentLocale:(id)arg5;
- (void)setInfoGeometryByUpdatingLegendGeometryAccommodatedForInitialLayoutGeometry:(id)arg1;
- (id)p_infoGeometryForGeometry:(id)arg1 isCircumscribing:(BOOL)arg2;
- (id)infoGeometryForDesiredCircumscribingGeometry:(id)arg1;
- (id)infoGeometryForDesiredPureLayoutGeometry:(id)arg1;
- (id)infoGeometryForVisiblePositioningInfoGeometry:(id)arg1;
- (id)infoGeometryForVisuallyCenteringOnUnscaledCanvasPoint:(struct CGPoint)arg1;
- (void)chartMoveToPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2;
@property(readonly, nonatomic) unsigned long long multiDataSetIndex; // @dynamic multiDataSetIndex;
- (struct CGRect)resizedLegendFrame:(struct CGRect)arg1 oldChartSize:(struct CGSize)arg2 newChartSize:(struct CGSize)arg3;
@property(readonly, nonatomic) int gridDirection;
@property(readonly, nonatomic) struct CGSize minimumChartBodySize;
- (void)setLastAppliedFillSetIdentifier:(id)arg1;
- (id)modelForDataSetIndex:(unsigned long long)arg1;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (void)setGeometry:(id)arg1 clearObjectPlaceholderFlag:(BOOL)arg2;
- (void)setGeometry:(id)arg1 omitLegendResize:(BOOL)arg2 clearObjectPlaceholderFlag:(BOOL)arg3;
- (void)setGeometry:(id)arg1 omitLegendResize:(BOOL)arg2;
- (id)context;
- (void)willModify;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 context:(id)arg2;
- (id)p_copyStyleAndNonStyleMap:(id)arg1 withZone:(struct _NSZone *)arg2 context:(id)arg3;
- (id)p_copyStyleAndNonStyleArray:(id)arg1 withZone:(struct _NSZone *)arg2 context:(id)arg3;
- (void)clearParent;
- (void)dealloc;
- (id)initWithChartType:(id)arg1 legendShowing:(id)arg2 chartBodyFrame:(id)arg3 chartAreaFrame:(id)arg4 circumscribingFrame:(id)arg5 legendFrame:(id)arg6 stylePreset:(id)arg7 privateSeriesStyles:(id)arg8 chartNonStyle:(id)arg9 legendNonStyle:(id)arg10 valueAxisNonStyles:(id)arg11 categoryAxisNonStyles:(id)arg12 seriesNonStyles:(id)arg13 refLineNonStylesMap:(id)arg14 refLineStylesMap:(id)arg15 forDocumentLocale:(id)arg16;
- (id)init;
- (id)p_init;
- (id)allStylesAndNonStylesThatCanHaveCustomNumberFormats;
- (void)updateAfterPaste;
- (void)reassignPasteboardCustomFormatKeys;
- (id)allCustomFormatKeys;
- (unsigned long long)paragraphStyleIndex:(id)arg1;
- (id)initForPresetImportWithChartType:(id)arg1;
- (id)getSeriesNonstyleForSeriesIndex:(unsigned long long)arg1;
- (id)getSeriesStyleForSeriesIndex:(unsigned long long)arg1;
- (void)p_setValuePrefix:(id)arg1 valueSuffix:(id)arg2 valueUseSeparator:(BOOL)arg3 horizontalPrefix:(id)arg4 horizontalSuffix:(id)arg5 horizontalUseSeparator:(BOOL)arg6;
- (void)p_setHorizontalMin:(id)arg1 horizontalMax:(id)arg2 valueMin:(id)arg3 valueMax:(id)arg4;
- (void)p_setNeedsCalcEngineDependentImport;
- (id)commandToApplyViewProxiesToModel;
- (void)clearViewStyleProxyForLayouts:(id)arg1;
- (void)setViewStyleProxyParagraphStyleArray:(id)arg1 layouts:(id)arg2;
- (void)addViewStyleProxyForMutationTuples:(id)arg1 layouts:(id)arg2;
- (void)p_invalidateCachesInLayouts:(id)arg1;
- (id)viewOverrideMapForStyleOwner:(id)arg1;
- (id)pasteboardCustomFormatList;
- (BOOL)isSingleCircleSpecialCase;
- (BOOL)isSingleCircleSpecialCaseOutSeries:(id *)arg1;
- (float)maximumExplosionOfAllSeriesExcept:(id)arg1;
- (float)maximumExplosion;
- (float)radiusForFrame:(struct CGRect)arg1 withMaxExplosion:(float)arg2;
- (float)minFrameDimensionForRadius:(float)arg1 withMaxExplosion:(float)arg2;
- (id)allStyleOwners;
- (unsigned long long)nonStyleIndexForStyleOwnerRef:(id)arg1;
- (id)styleOwnerRefForStyleOwner:(id)arg1;
- (id)styleOwnerForRef:(id)arg1;
- (id)styleOwnerRefForStyleOwnerPath:(id)arg1;
- (id)styleOwnerPathForSemanticTag:(id)arg1;
- (id)styleOwnerRefForSemanticTag:(id)arg1;
- (id)styleOwnerPathForRef:(id)arg1;
- (id)styleOwnerPathForStyleOwner:(id)arg1;
- (id)styleOwnerForPath:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)p_presetByAdoptingStylesheet:(id)arg1 forPreset:(id)arg2 withMapper:(id)arg3;
- (void)applyChartStyleState:(id)arg1;
- (id)fillSetRepresentingInverseOfApplyingFillSet:(id)arg1;
- (void)p_duplicatePersistableMembersOfCopiedChartUsingContext:(id)arg1;
- (void)p_setDrawableInfo:(id)arg1;
- (id)p_copyStyleArray:(id)arg1 inContext:(id)arg2 withMapper:(id)arg3;
- (id)p_copyNonStyleArray:(id)arg1 inContext:(id)arg2;
- (id)create3DSceneWithLayoutSettings:(const CDStruct_2671d966 *)arg1;
@property(nonatomic) CDStruct_2671d966 defaultLayoutSettings;
@property(readonly, nonatomic) BOOL hasSetDefaultLayoutSettings;
- (void)debugLayoutCache;
@property(readonly, nonatomic) TSCHChartLayoutCache *sceneAreaLayoutItemCache;
- (id)tuplesToApplyState:(id)arg1;
- (id)chartStyleState;
- (id)clamped3DRotationPropertyObject;
- (id)styleSwapCommandToApplyFillSetSeriesPropertyMaps:(id)arg1;
- (id)commandToApplyFillSet:(id)arg1;
- (unsigned long long)p_paragraphStyleIndexOfFirstCategoryAxisParagraphStyle;
- (void)loadFromGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2 persistentChartInfo:(id)arg3;
- (void)performUpgradeForPersistentChartInfo:(id)arg1 archiveVersion:(unsigned long long)arg2 innerChartFrame:(struct CGRect)arg3 fromCopy:(BOOL)arg4;
- (void)loadFromPreUFFArchive:(const struct ChartInfoArchive *)arg1 unarchiver:(id)arg2 persistentChartInfo:(id)arg3;
- (id)g_operationPropertyNameForGenericProperty:(int)arg1;
- (id)g_genericToDefaultPropertyMap;
- (id)gsch_themePresetRefLineStyle;
- (id)gsch_refLineStylesMap;
- (id)gsch_refLineNonStylesMap;
- (id)gsch_paragraphStyles;
- (id)gsch_seriesNonStyles;
- (id)gsch_privateSeriesStyles;
- (id)gsch_themeSeriesStyles;
- (id)gsch_categoryAxisNonStyles;
- (id)gsch_categoryAxisStyles;
- (id)gsch_valueAxisNonStyles;
- (id)gsch_valueAxisStyles;
- (id)gsch_nonstyle;
- (id)gsch_style;
- (id)p_commandToPasteStylePasteboardDataOntoEntireChart:(id)arg1 withMapper:(id)arg2;
- (id)p_commandToPasteParagraphStyle:(id)arg1 ontoSubselection:(id)arg2 withMapper:(id)arg3;
- (id)p_commandToPasteShapeStyle:(id)arg1 ontoSubselection:(id)arg2 withMapper:(id)arg3;
- (id)p_styleSwapTuplesToPasteShapeStyle:(id)arg1 ontoSubselection:(id)arg2;
- (id)p_commandToPasteStylePasteboardData:(id)arg1 ontoSubselection:(id)arg2 withMapper:(id)arg3;
- (void)p_addStyleStateToPasteboardData:(id)arg1 forSelectionPath:(id)arg2 useNativeIndexes:(BOOL)arg3;
- (id)p_chartStylePropertyMapForStyleOwner:(id)arg1 fromShapeStyle:(id)arg2 forSelectionPath:(id)arg3;
- (id)p_shapeStyleForSelectionPath:(id)arg1 context:(id)arg2;
- (id)p_chartStylePasteboardDataForEntireChart;
- (id)p_chartStylePasteboardDataForSubselection:(id)arg1;
- (void)saveToUnityArchive:(struct ChartArchive *)arg1 persistentChartInfo:(id)arg2 archiver:(id)arg3;
- (void)loadFromUnityArchive:(const struct ChartArchive *)arg1 unarchiver:(id)arg2 persistentChartInfo:(id)arg3;
- (id)p_swapTuplesForApplyingPreset:(id)arg1 preservingAppearance:(BOOL)arg2;
- (id)p_swapTuplesForApplyingPresetRemovingOverrides:(id)arg1;
- (id)swapTuplesForApplyingPreset:(id)arg1 withBehavior:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

