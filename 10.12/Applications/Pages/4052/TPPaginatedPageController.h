//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TPPageController.h"

#import "TSKChangeSourceObserver-Protocol.h"

@class NSString, TPTextWrapController;

@interface TPPaginatedPageController : TPPageController <TSKChangeSourceObserver>
{
    TPTextWrapController *_wrapController;
}

- (_Bool)p_couldBeFirstPageIndex:(unsigned long long)arg1 forPartitionedAttachmentCharIndex:(unsigned long long)arg2;
- (unsigned long long)p_backupPageIndexForCharIndex:(unsigned long long)arg1;
- (struct _NSRange)p_pageRangeAffectedByInfo:(id)arg1;
- (void)p_rebuildPageLayoutsContainingDrawableUUIDs:(id)arg1;
- (void)p_performWithCachedPageLayouts:(CDUnknownBlockType)arg1;
- (void)p_rebuildCachedLayoutChildrenFromStartPage:(unsigned long long)arg1 toEndPage:(unsigned long long)arg2 setNeedsLayout:(BOOL)arg3;
- (void)preprocessChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)processHeaderFooterPropertyChanged;
- (void)processSectionChanged:(id)arg1;
- (id)textWrapper;
- (struct CGSize)canvasSizeToFitAllPages;
- (unsigned long long)calculatePageIndexFromCanvasPoint:(struct CGPoint)arg1;
- (unsigned long long)pageIndexFromCanvasPoint:(struct CGPoint)arg1;
- (struct CGRect)pageRectForPageIndex:(unsigned long long)arg1;
- (struct CGPoint)pageOriginForPageIndex:(unsigned long long)arg1;
- (Class)p_pageInfoClass;
- (struct CGSize)pageSize;
- (BOOL)isPaginated;
- (void)d_toggleWrapAnimation;
- (void)dealloc;
- (void)teardown;
- (id)initWithDocumentRoot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

