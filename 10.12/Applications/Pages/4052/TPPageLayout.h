//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPPageLayout.h"

#import "TPAttachmentLayoutParent-Protocol.h"
#import "TSWPColumnMetrics-Protocol.h"
#import "TSWPLayoutParent-Protocol.h"

@class NSArray, NSMutableSet, NSSet, TPBodyLayout, TPFootnoteContainerLayout, TPMarginAdjustLayout, TSURetainedPointerKeyDictionary, TSWPPadding;
@protocol NSFastEnumeration, TPMasterDrawableProvider, TSWPHeaderFooterProvider;

@interface TPPageLayout : TSWPPageLayout <TSWPLayoutParent, TSWPColumnMetrics, TPAttachmentLayoutParent>
{
    id <TSWPHeaderFooterProvider> _headerFooterProvider;
    TPMarginAdjustLayout *_marginAdjustLayout;
    TPFootnoteContainerLayout *_footnoteContainerLayout;
    unsigned long long _pageNumber;
    unsigned long long _pageCount;
    BOOL _childLayoutsValid;
    TSURetainedPointerKeyDictionary *_oldChildLayouts;
    id <TPMasterDrawableProvider> _masterDrawableProvider;
    unsigned int _contentFlags;
    int _inInvalidationClusterCount;
    BOOL _childTextLayoutsNeedInvalidationForExteriorWrap;
    BOOL _validating;
    NSMutableSet *_anchoredDrawableLayouts;
}

@property(readonly, nonatomic) TPFootnoteContainerLayout *footnoteContainerLayout; // @synthesize footnoteContainerLayout=_footnoteContainerLayout;
@property(nonatomic, getter=isValidating) BOOL validating; // @synthesize validating=_validating;
- (void)p_removeNoLongerInlineLayoutsFromBodyLayout;
- (void)p_removeInlineLayoutsFromPageLayout;
- (BOOL)p_isHeaderFooterLayout:(id)arg1;
- (void)p_sortChildLayouts;
- (void)p_populateOldChildLayoutsWithLayouts:(id)arg1;
- (void)p_insertFootnoteContainerLayout;
- (void)p_insertValidatedMarginAdjustLayout;
- (void)p_insertBodyLayout;
- (void)p_insertValidatedFloatingLayouts;
- (void)p_insertValidatedMasterLayouts;
- (id)p_existingChildLayoutForInfo:(id)arg1;
- (id)p_insertValidatedChildLayoutForInfo:(id)arg1;
- (id)p_insertChildLayoutForInfo:(id)arg1;
- (void)p_updateFromLayoutInfoProvider;
- (void)p_invalidatePageControllerForDynamicOperation;
- (id)p_orderedChildInfos;
@property(readonly, nonatomic) BOOL columnsAreLeftToRight;
- (BOOL)textIsVertical;
@property(readonly, nonatomic) BOOL shrinkTextToFit;
@property(readonly, nonatomic) BOOL alwaysStartsNewTarget;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double *)arg4 outGap:(double *)arg5;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
- (struct CGSize)adjustedInsetsForTarget:(id)arg1;
@property(readonly, nonatomic) unsigned long long pageCount;
@property(readonly, nonatomic) unsigned long long pageNumber;
- (void)evacuateOldChildLayoutCache;
- (void)validate;
- (unsigned long long)pageCountForAttachment:(id)arg1;
- (unsigned long long)pageNumberForAttachment:(id)arg1;
- (int)naturalAlignmentForTextLayout:(id)arg1;
- (double)maxAutoGrowHeightForTextLayout:(id)arg1;
- (double)maxAutoGrowWidthForTextLayout:(id)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (id)dependentsOfTextLayout:(id)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (void)wrappableChildInvalidated:(id)arg1;
- (void)endResizeWrapInvalidationCluster;
- (void)beginResizeWrapInvalidationCluster;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (void)addAttachmentLayout:(id)arg1;
- (id)existingAttachmentLayoutForInfo:(id)arg1;
- (id)layoutsCausingWrapOnTextLayoutTarget:(id)arg1 ignoreIntersection:(BOOL)arg2;
- (struct CGRect)footnoteContainerFrameWithSize:(struct CGSize)arg1;
- (void)inflateFootnotesInFootnoteContainer:(id)arg1;
- (double)heightAvailableForFootnotes;
- (void)resetLayoutsForReinflation;
- (void)rebuildChildLayoutsOnNextValidationForcingTextLayout:(BOOL)arg1;
- (void)invalidateFootnoteContainers;
- (void)invalidateFootnoteSeparatorLine;
- (void)invalidateBodyAndMarginLayouts;
- (void)invalidateHeaderFooterLayouts;
- (void)invalidateHeaderFooterLayoutsCache;
- (void)processWidowAndInflation;
@property(readonly, nonatomic) TPMarginAdjustLayout *marginAdjustLayout;
@property(readonly, nonatomic) NSSet *anchoredDrawableLayouts;
@property(readonly, nonatomic) NSArray *floatingDrawableLayouts;
- (BOOL)isRootLayoutForInspectorGeometry;
@property(readonly, nonatomic) id <NSFastEnumeration> childTextLayoutsForExteriorWrap;
- (void)invalidateSize;
- (id)dependentLayouts;
- (id)computeLayoutGeometry;
- (BOOL)allowIntersectionOfChildLayout:(id)arg1;
- (struct CGSize)maximumFrameSizeForChild:(id)arg1;
- (void)p_addLayoutIfAttached:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (void)parentDidChange;
- (void)parentWillChangeTo:(id)arg1;
- (id)pageLayout;
@property(readonly, nonatomic) unsigned long long pageIndex;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (BOOL)providesGuidesForChildLayouts;
- (BOOL)isReadyForBodyLayout;
- (id)layoutsForChildInfo:(id)arg1;
- (id)p_childLayoutInParentLayout:(id)arg1 forChildInfo:(id)arg2;
- (id)layoutForChildInfo:(id)arg1;
- (id)primaryLayoutForInfo:(id)arg1;
- (void)invalidateLayoutsForPageCountChange;
- (BOOL)hasFooters;
- (BOOL)hasHeaders;
- (BOOL)allowsHeaderFooter;
@property(readonly, nonatomic) BOOL allowsFootnotes;
@property(readonly, nonatomic) BOOL allowsBody;
@property(readonly, nonatomic) struct CGRect bodyRect;
@property(readonly, nonatomic) TPBodyLayout *bodyLayout;
@property(readonly, nonatomic) id <TPMasterDrawableProvider> masterDrawableProvider;
- (BOOL)headerFooterProviderValid;
- (id)headerFooterProvider;
- (BOOL)shouldHeaderFooterBeVisibleForPageIndex:(unsigned long long)arg1;
- (BOOL)shouldHeaderFooterBeVisible:(int)arg1;
- (BOOL)shouldProvideGuidesDuringExclusiveAlignmentOperation;
- (void)dealloc;
- (void)p_addLayoutsForInfos:(id)arg1 toArray:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) double textScaleFactor;

@end

