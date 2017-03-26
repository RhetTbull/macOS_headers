//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDLayout.h"

#import "TSWPLayoutOwner-Protocol.h"
#import "TSWPLayoutTarget-Protocol.h"

@class NSMutableArray, NSString, TSDCanvas, TSPObject, TSUBezierPath, TSWPLayoutManager, TSWPStorage;
@protocol TSDHint, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPLayoutParent, TSWPOffscreenColumn;

@interface TSWPLayout : TSDLayout <TSWPLayoutTarget, TSWPLayoutOwner>
{
    TSWPLayoutManager *_layoutManager;
    NSMutableArray *_columns;
    BOOL _textLayoutValid;
    TSWPStorage *_storage;
    unsigned long long _lastLayoutMgrChangeCount;
    TSDLayout<TSWPLayoutParent> *_wpLayoutParent;
    BOOL _optimizeSegmentationOfEmptyLines;
}

@property(nonatomic) BOOL optimizeSegmentationOfEmptyLines; // @synthesize optimizeSegmentationOfEmptyLines=_optimizeSegmentationOfEmptyLines;
@property(readonly, retain, nonatomic) NSMutableArray *columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) BOOL shouldWrapAroundExternalDrawables;
- (id)textColorOverride;
@property(readonly, nonatomic) TSUBezierPath *interiorClippingPath;
- (id)styleProvider;
- (struct CGRect)p_rectInRootForSelectionPath:(id)arg1 useParagraphModeRects:(BOOL)arg2;
- (struct CGRect)p_rectForSelectionPath:(id)arg1 useParagraphModeRects:(BOOL)arg2;
- (BOOL)selectionMustBeEntirelyOnscreenToCountAsVisibleInSelectionPath:(id)arg1;
- (double)viewScaleForZoomingToSelectionPath:(id)arg1 targetPointSize:(double)arg2;
- (struct CGRect)rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)arg1;
- (struct CGRect)rectInRootOfAutoZoomContextOfSelectionPath:(id)arg1;
- (struct CGRect)rectInRootForSelectionPath:(id)arg1;
- (id)textWrapper;
- (void)didLayoutWithLayoutManager:(id)arg1;
- (void)didLayoutChangingDirtyRanges;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (void)layoutManagerNeedsLayout:(id)arg1;
@property(readonly, nonatomic) BOOL layoutIsValid;
- (BOOL)isLayoutOffscreen;
@property(readonly, nonatomic) struct CGRect maskRect;
@property(readonly, nonatomic) BOOL textIsVertical;
@property(readonly, nonatomic) unsigned long long pageCount;
@property(readonly, nonatomic) unsigned long long pageNumber;
- (id)p_firstAncestorRespondingToSelector:(SEL)arg1;
@property(readonly, nonatomic) double maxAnchorY;
- (id)currentAnchoredDrawableLayouts;
- (id)currentInlineDrawableLayouts;
- (void)addAttachmentLayout:(id)arg1;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (id)validatedLayoutForInlineDrawable:(id)arg1;
@property(readonly, nonatomic) TSDCanvas *canvas;
- (struct CGRect)targetRectForCanvasRect:(struct CGRect)arg1;
- (void)setNeedsDisplayInTargetRect:(struct CGRect)arg1;
@property(readonly, nonatomic) BOOL wantsLineFragments;
@property(readonly, nonatomic) int naturalDirection;
@property(readonly, nonatomic) int naturalAlignment;
@property(readonly, nonatomic) int verticalAlignment;
@property(readonly, nonatomic) unsigned int autosizeFlags;
@property(readonly, nonatomic) struct CGPoint anchorPoint;
@property(readonly, nonatomic) struct CGPoint position;
@property(readonly, nonatomic) struct CGSize currentSize;
@property(readonly, nonatomic) struct CGSize maxSize;
@property(readonly, nonatomic) struct CGSize minSize;
- (BOOL)isLastTarget;
@property(readonly, nonatomic) id <TSWPFootnoteMarkProvider> footnoteMarkProvider;
@property(readonly, nonatomic) id <TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer;
@property(readonly, nonatomic) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property(readonly, retain, nonatomic) id <TSWPOffscreenColumn> nextTargetFirstColumn;
@property(readonly, nonatomic) const struct TSWPTopicNumberHints *nextTargetTopicNumbers;
@property(readonly, nonatomic) const struct TSWPTopicNumberHints *previousTargetTopicNumbers;
@property(readonly, retain, nonatomic) id <TSWPOffscreenColumn> previousTargetLastColumn;
- (id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;
- (void)layoutSearchForAnnotationWithHitBlock:(CDUnknownBlockType)arg1;
- (void)layoutSearchForSpellingErrorsWithHitBlock:(CDUnknownBlockType)arg1 stop:(char *)arg2;
- (void)layoutSearchForString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(CDUnknownBlockType)arg3;
- (struct CGPoint)activityLineUnscaledEndPointForSearchReference:(id)arg1;
- (struct CGPoint)calculatePointFromSearchReference:(id)arg1;
- (struct CGRect)p_protectedRectWithinLayoutForSelectionRect:(struct CGRect)arg1;
- (struct CGRect)boundsForCollaboratorHUDForSelectionPath:(id)arg1;
- (void)wrappableChildInvalidated:(id)arg1;
- (void)parentDidChange;
- (void)p_clearOutLayoutManager;
- (void)parentWillChangeTo:(id)arg1;
- (id)p_wpLayoutParent;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (void)willBeAddedToLayoutController:(id)arg1;
- (BOOL)shouldProvideSizingGuides;
- (BOOL)shouldDisplayGuides;
- (struct CGSize)maximumFrameSizeForChild:(id)arg1;
- (Class)repClassOverride;
- (void)invalidateParentForAutosizing;
- (BOOL)invalidateForPageCountChange;
- (void)invalidateForFootnoteNumberingChange;
- (void)invalidateForcingFullReLayOut;
- (void)p_invalidateTextLayout;
- (void)invalidateTextLayout;
- (void *)initialLayoutState;
- (id)computeLayoutGeometry;
- (struct CGPoint)capturedInfoPositionForAttachment;
- (void)validate;
- (void)p_validateTextLayout;
- (void)validateTextLayoutForcibly;
- (id)reliedOnLayouts;
- (id)dependentLayouts;
- (BOOL)p_parentAutosizes;
- (void)invalidateInlineSize;
- (void)invalidateSize;
@property(readonly, nonatomic) BOOL isInstructional;
- (BOOL)caresAboutStorageChanges;
@property(readonly, nonatomic) BOOL textLayoutValid;
@property(readonly, nonatomic) TSWPLayoutManager *layoutManager;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 storage:(id)arg2 frame:(struct CGRect)arg3;
- (id)initWithInfo:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *anchoredDrawablesForRelayout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct __CFLocale *hyphenationLocale;
@property(readonly, nonatomic) TSDLayout *parentLayoutForInlineAttachments;
@property(readonly, nonatomic) BOOL shouldHyphenate;
@property(readonly) Class superclass;

@end

