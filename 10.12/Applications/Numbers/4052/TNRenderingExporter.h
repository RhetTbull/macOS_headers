//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSARenderingExporter.h"

@class NSMutableArray, TNPageController, TNPdfHyperlinkController;

@interface TNRenderingExporter : TSARenderingExporter
{
    unsigned long long mSheetIndex;
    unsigned long long mPageIndex;
    unsigned long long mTotalPagesCount;
    vector_88016b54 mSheetPageCountArray;
    vector_88016b54 mSheetPageStartArray;
    TNPageController *mPageController;
    TNPdfHyperlinkController *mHyperlinkController;
    NSMutableArray *mCanvasBasedSheets;
    BOOL _renderingAllSheets;
}

@property(nonatomic, getter=isRenderingAllSheets) BOOL renderingAllSheets; // @synthesize renderingAllSheets=_renderingAllSheets;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)quickLookSheets;
- (long long)pageIndexFromQuickLookSheet:(id)arg1;
- (BOOL)isPageInPortraitOrientation:(unsigned long long)arg1;
- (struct CGRect)p_boundsRectForFirstPage;
- (BOOL)p_isActiveSheetForm;
- (id)p_canvasBasedSheets;
- (double)totalProgess;
- (void)drawCurrentPageWithContext:(struct CGContext *)arg1 returnSuccess:(char *)arg2;
- (void)drawAllPagesWithContext:(struct CGContext *)arg1 returnSuccess:(char *)arg2;
- (id)p_activeSheet;
- (void)teardown;
- (void)setup;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1;
- (id)pageController;
- (vector_88016b54)p_pageStartArray;
- (vector_88016b54)p_pageCountArray;
- (double)progressForCurrentPage;
- (BOOL)drawCurrentPageInContext:(struct CGContext *)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect)arg3 createPage:(BOOL)arg4;
- (BOOL)incrementPage;
- (BOOL)preparePage:(unsigned long long)arg1;
- (void)setSheetIndex:(unsigned long long)arg1 andPageIndex:(unsigned long long)arg2;
- (unsigned long long)inSheetPageIndexForPage:(unsigned long long)arg1;
- (unsigned long long)sheetIndexForPage:(unsigned long long)arg1;
- (unsigned long long)numberOfCanvasBasedSheets;
- (unsigned long long)pageCount;
- (id)currentInfos;
- (struct CGRect)unscaledClipRect;
- (struct CGRect)boundsRect;

@end

