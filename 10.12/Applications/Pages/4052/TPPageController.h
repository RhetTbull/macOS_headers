//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TPLayoutStateConsumer-Protocol.h"
#import "TPLayoutStateProvider-Protocol.h"
#import "TPPageLayoutInfoProvider-Protocol.h"
#import "TSWPLayoutOwner-Protocol.h"

@class NSDate, NSMutableArray, NSString, TPDocumentRoot, TPFootnoteLayoutController, TPPageLayoutState, TPSearchCanvasDelegate, TSUMutablePointerSet, TSWPLayoutManager, TSWPLayoutMetricsCache;

@interface TPPageController : NSObject <TPPageLayoutInfoProvider, TSWPLayoutOwner, TPLayoutStateConsumer, TPLayoutStateProvider>
{
    TPDocumentRoot *_documentRoot;
    TSWPLayoutManager *_bodyLayoutManager;
    TPSearchCanvasDelegate *_offscreenSearchDelegate;
    TPFootnoteLayoutController *_footnoteLayoutController;
    NSMutableArray *_sectionHints;
    struct multimap<unsigned long, TPPageLayout *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, TPPageLayout *>>> _pageLayoutCache;
    TPPageLayoutState *_layoutState;
    BOOL _checkedForBackUp;
    NSMutableArray *_pageGeneratorStack;
    BOOL _handleBackgroundLayoutScheduled;
    int _bgLayoutStatus;
    NSDate *_bgLayoutStartDate;
    unsigned long long _lastKnownPageCount;
    unsigned long long _completePageCount;
    BOOL _shouldUpdatePageCount;
    unsigned long long _didLayOutPageIndex;
    unsigned long long _currentPageBeingLaidOut;
    TSUMutablePointerSet *_layoutObservers;
    struct TSWPDirtyRangeVector _dirtyRanges;
    TSWPLayoutMetricsCache *_bodyLayoutMetricsCache;
    // Error parsing type: Ai, name: _backgroundLayoutEnabled
    // Error parsing type: Ai, name: _backgroundLayoutSuspendCount
    // Error parsing type: Ai, name: _isScrolling
    // Error parsing type: Ai, name: _isZooming
    BOOL _isObservingNotifications;
}

@property(readonly, nonatomic) unsigned long long pageCount; // @synthesize pageCount=_lastKnownPageCount;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)p_backgroundLayoutReadEntry;
- (void)p_layoutNextPageOnce;
- (void)p_cancelBGLayout;
- (void)p_scheduleImmediateBGLayout;
- (void)p_scheduleBGLayout;
- (void)p_setBackgroundLayoutStartDate:(id)arg1;
- (void)p_updateBackgroundLayoutStartDate;
- (BOOL)p_isBackgroundLayoutActive;
- (void)p_handleBGLayoutStatusChange;
- (void)p_handleBackgroundLayout;
- (void)p_handleBackgroundLayoutMainThreadEntry;
- (void)p_notifyObserversDidInvalidate;
- (void)p_notifyObserversDidLayoutWhileSyncing:(BOOL)arg1;
- (void)p_notifyObserversWillLayoutWhileSyncing:(BOOL)arg1;
- (unsigned long long)p_textPageIndexPrecedingPageIndex:(unsigned long long)arg1;
- (unsigned long long)p_lastValidTextPageIndex;
- (id)p_lastValidTextPageHint;
- (id)p_lastValidPageHint;
- (id)p_textPageHintFollowingPageIndexPath:(id)arg1;
- (id)p_textPageHintPrecedingPageIndexPath:(id)arg1;
- (id)p_textPageHintPrecedingPageIndex:(unsigned long long)arg1;
- (id)p_pageHintPrecedingPageIndexPath:(id)arg1;
- (id)p_pageHintForPageIndexPath:(id)arg1;
- (id)p_sectionHintForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 allowAfterLayoutPoint:(BOOL)arg3;
- (id)p_pageHintForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 allowAfterLayoutPoint:(BOOL)arg3;
- (id)p_pageIndexPathForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 allowAfterLayoutPoint:(BOOL)arg3;
- (void)p_updatePageCount;
- (void)p_didLayout;
- (void)p_advanceSectionIndex;
- (void)p_removeFinishedPageGenerators;
- (void)p_syncFromNextPageWithDirtyRanges:(const struct TSWPDirtyRangeVector *)arg1 pageTextRange:(const struct _NSRange *)arg2;
- (void)p_resetPageGenerators;
- (void)p_preparePageHintForNextPage;
- (void)p_prepareSectionHintForNextPage;
- (void)p_prepareLayoutStateForNextPage;
- (void)p_updateNonTextHintAtPageIndexPath:(id)arg1;
- (void)p_updateTextHintAtPageIndexPath:(id)arg1 withTarget:(id)arg2;
- (void)p_removeDeletedFootnotesOnPageLayout:(id)arg1;
- (void)p_layoutFootnotesIntoPageLayout:(id)arg1;
- (void)p_layoutTextIntoPageLayout:(id)arg1 outDidSync:(char *)arg2;
- (void)p_layoutIntoPageLayout:(id)arg1 outDidSync:(char *)arg2;
- (void)p_layoutNextPageForLayoutController:(id)arg1 dirtyRange:(const struct TSWPDirtyRangeVector *)arg2;
- (void)p_layoutThroughPageIndex:(unsigned long long)arg1 forLayoutController:(id)arg2 clearOffscreenInfos:(BOOL)arg3;
- (void)p_checkForBackUp;
- (void)p_processWidowsAndInflationForLayoutController:(id)arg1;
- (unsigned long long)p_pageIndexForFootnoteIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 searchAfterLayoutPoint:(BOOL)arg3;
- (unsigned long long)p_pageIndexForAnchoredCharIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 searchAfterLayoutPoint:(BOOL)arg3;
- (unsigned long long)p_pageIndexContainingIndex:(unsigned long long)arg1 ofType:(int)arg2;
- (struct _NSRange)p_footnoteLayoutRangeForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 allowAfterLayoutPoint:(BOOL)arg3;
- (struct _NSRange)p_anchoredRangeForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 allowAfterLayoutPoint:(BOOL)arg3;
- (struct _NSRange)p_bodyRangeForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 allowAfterLayoutPoint:(BOOL)arg3;
- (unsigned long long)p_pageIndexForCharIndex:(unsigned long long)arg1 caretAffinity:(int)arg2 forceLayout:(BOOL)arg3 searchAfterLayoutPoint:(BOOL)arg4;
- (id)p_pageInfoForPageAtIndex:(unsigned long long)arg1;
- (void)p_withPageLayoutAtIndex:(unsigned long long)arg1 preferredLayoutController:(id)arg2 executeBlock:(CDUnknownBlockType)arg3;
- (id)p_cachedPageLayoutForPageIndex:(unsigned long long)arg1 preferredLayoutController:(id)arg2;
- (void)p_removePageLayoutFromCache:(id)arg1;
- (void)p_insertPageLayoutIntoCache:(id)arg1;
- (unsigned long long)p_layoutEndFootnoteIndex;
- (unsigned long long)p_layoutEndCharIndex;
- (BOOL)p_isBodyLayoutComplete;
- (BOOL)p_isLayoutComplete;
- (void)p_destroyBodyLayoutState;
- (void)p_forceRestartLayoutAndResetMetricsCache:(BOOL)arg1;
- (void)p_invalidatePageIndex:(unsigned long long)arg1;
- (void)p_setNeedsLayoutOnPageIndex:(unsigned long long)arg1;
- (void)p_setNeedsLayoutFromSectionIndexToEnd:(unsigned long long)arg1;
- (void)p_hasBodyChanged:(id)arg1;
- (void)didScroll:(id)arg1;
- (void)willScroll:(id)arg1;
- (void)didZoom:(id)arg1;
- (void)willZoom:(id)arg1;
- (id)sectionHintsForArchivedLayoutState:(id)arg1;
- (unsigned long long)bodyLengthForArchivedLayoutState:(id)arg1;
- (unsigned long long)lastPageCountForArchivedLayoutState:(id)arg1;
- (unsigned long long)documentPageIndexForArchivedLayoutState:(id)arg1;
- (unsigned long long)sectionPageIndexForArchivedLayoutState:(id)arg1;
- (unsigned long long)sectionIndexForArchivedLayoutState:(id)arg1;
- (BOOL)archivedLayoutState:(id)arg1 setSectionHints:(id)arg2;
- (BOOL)archivedLayoutState:(id)arg1 setBodyLength:(unsigned long long)arg2;
- (void)archivedLayoutState:(id)arg1 setLastPageCount:(unsigned long long)arg2;
- (void)archivedLayoutState:(id)arg1 setDocumentPageIndex:(unsigned long long)arg2;
- (void)archivedLayoutState:(id)arg1 setSectionPageIndex:(unsigned long long)arg2;
- (void)archivedLayoutState:(id)arg1 setSectionIndex:(unsigned long long)arg2;
- (id)metricsCacheForStorage:(id)arg1;
- (void)didLayoutChangingDirtyRanges;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (id)textWrapper;
- (void)layoutManagerNeedsLayout:(id)arg1;
- (BOOL)caresAboutStorageChanges;
- (id)pageInfosForInfo:(id)arg1 withSelectionPath:(id)arg2;
- (id)p_pageInfosForBodySelection:(id)arg1;
- (void)removeLayoutObserver:(id)arg1;
- (void)addLayoutObserver:(id)arg1;
- (struct CGPoint)positionForPositionerForDrawable:(id)arg1;
- (BOOL)okToAnchorDrawables:(id)arg1 toPageIndex:(unsigned long long)arg2;
- (BOOL)okToAnchorDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2;
- (BOOL)p_canAnchorDrawable:(id)arg1 toPageLayout:(id)arg2;
- (id)footnoteLayoutController;
@property(readonly, nonatomic) unsigned long long firstPageIndexNeedingLayout;
- (BOOL)isLayoutInProgress;
- (BOOL)isLayoutComplete;
- (BOOL)isLayoutCompleteThroughPageIndex:(unsigned long long)arg1;
- (double)footerHeight;
- (double)headerHeight;
- (void)accquireLockAndPerformAction:(CDUnknownBlockType)arg1;
- (void)withPageLayoutAtIndex:(unsigned long long)arg1 preferredLayoutController:(id)arg2 executeBlock:(CDUnknownBlockType)arg3;
- (void)withPageLayoutAtIndex:(unsigned long long)arg1 executeBlock:(CDUnknownBlockType)arg2;
- (id)pageIndicesForPartitionableAttachmentAtBodyCharIndex:(unsigned long long)arg1 selectionPath:(id)arg2 forceLayout:(BOOL)arg3;
- (id)pageInfoForPageIndex:(unsigned long long)arg1;
- (BOOL)pageIndexIsFirstPageOfSection:(unsigned long long)arg1;
- (struct _NSRange)sectionPageRangeForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 outEndIsValid:(char *)arg3;
- (unsigned long long)sectionPageIndexForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2;
- (struct _NSRange)sectionBodyRangeForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2;
- (unsigned long long)sectionIndexForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2;
- (struct _NSRange)documentPageRangeOfSectionIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2;
- (unsigned long long)pageIndexForFootnoteIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2;
- (unsigned long long)pageIndexForAnchoredAttachment:(id)arg1 forceLayout:(BOOL)arg2;
- (unsigned long long)pageIndexForAnchoredCharIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2;
- (unsigned long long)pageIndexForCharIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2;
- (BOOL)pageAtIndexHasBody:(unsigned long long)arg1;
- (BOOL)pageEndsWithPaginatedAttachment:(unsigned long long)arg1;
- (BOOL)pageBeginsWithPaginatedAttachment:(unsigned long long)arg1;
- (struct _NSRange)footnoteLayoutRangeForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2;
- (id)anchoredDrawablesOnPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2;
- (struct _NSRange)anchoredRangeForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2;
- (struct _NSRange)bodyRangeForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2;
- (struct _NSRange)validPageRangeForSelection:(id)arg1;
- (struct _NSRange)pageRangeForSelection:(id)arg1 outEndIsValid:(char *)arg2;
- (void)layoutThroughPageIndex:(unsigned long long)arg1 forLayoutController:(id)arg2;
- (void)layoutThroughPageIndex:(unsigned long long)arg1;
- (void)scheduleImmediateBackgroundLayout;
- (void)resumeBackgroundLayout;
- (void)resumeBackgroundLayoutWithStartDate:(id)arg1;
- (id)suspendBackgroundLayout;
@property(nonatomic) BOOL backgroundLayoutEnabled;
- (void)dealloc;
- (void)teardown;
- (void)setupListenersForInteractiveCanvasController;
- (id)initWithDocumentRoot:(id)arg1;
- (void)i_setNeedsDynamicLayoutForLayoutController:(id)arg1 onPageIndex:(unsigned long long)arg2;
- (BOOL)i_shouldLayoutBodyVertically;
- (void)i_unregisterPageLayout:(id)arg1;
- (void)i_registerPageLayout:(id)arg1;
- (void)i_inflateFootnotesInFootnoteContainer:(id)arg1;
- (void)i_inflateColumnsInBodyLayout:(id)arg1;
- (id)i_firstChildHintAfterPageIndex:(unsigned long long)arg1;
- (id)i_columnAfterPageIndex:(unsigned long long)arg1;
- (const struct TSWPTopicNumberHints *)i_topicHintsAfterPageIndex:(unsigned long long)arg1;
- (const struct TSWPTopicNumberHints *)i_topicHintsPriorToPageIndex:(unsigned long long)arg1;
- (id)i_columnPriorToPageIndex:(unsigned long long)arg1;
- (void)i_trimPageAtIndex:(unsigned long long)arg1 toCharIndex:(unsigned long long)arg2 removeFootnoteReferenceCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4;
- (id)i_pageHintForPageIndex:(unsigned long long)arg1;
- (void)d_timeLayout;
- (struct _NSRange)p_rangeOfContinuousSectionsAtPageIndex:(unsigned long long)arg1 startPage:(unsigned long long *)arg2;
- (id)p_pageMasterForPageIndex:(unsigned long long)arg1 inSection:(id)arg2 sectionHint:(id)arg3;
- (id)p_sectionAtSectionIndex:(unsigned long long)arg1;
- (BOOL)isSectionInfo:(id)arg1 onPage:(unsigned long long)arg2;
- (int)contentFlagsForPageIndex:(unsigned long long)arg1;
- (unsigned long long)pageCountForPageIndex:(unsigned long long)arg1;
- (unsigned long long)pageNumberForPageIndex:(unsigned long long)arg1;
- (id)masterDrawableProviderForPageIndex:(unsigned long long)arg1;
- (BOOL)shouldHeaderFooterBeVisibleForPageIndex:(unsigned long long)arg1;
- (id)headerFooterProviderForPageIndex:(unsigned long long)arg1;
- (BOOL)canProvideNumberingInfoForPageIndex:(unsigned long long)arg1;
- (BOOL)canProvideInfoForPageIndex:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

