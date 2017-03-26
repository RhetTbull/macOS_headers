//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSKRenderingExporter-Protocol.h"

@class NSString, TSADocumentRoot, TSDBitmapRenderingQualityInfo, TSDImager, TSUProgressContext;
@protocol OS_dispatch_queue, TSARenderingExporterDelegate;

@interface TSARenderingExporter : NSObject <TSKRenderingExporter>
{
    TSADocumentRoot *mDocumentRoot;
    TSDImager *mImager;
    NSObject<OS_dispatch_queue> *mImagerAccessLock;
    NSObject<TSARenderingExporterDelegate> *mRenderingExporterDelegate;
    BOOL mIsCancelled;
    BOOL mIsQuit;
    BOOL mPaginate;
    BOOL mDoesDrawAllPages;
    TSUProgressContext *mProgressContext;
    TSDBitmapRenderingQualityInfo *mBitmapRenderingQualityInfo;
}

@property(retain) TSUProgressContext *progressContext; // @synthesize progressContext=mProgressContext;
- (BOOL)paginate;
- (void)setPaginate:(BOOL)arg1;
- (unsigned long long)pageCount;
- (double)progressForCurrentPage;
- (struct CGRect)unscaledClipRect;
- (struct CGRect)boundsRect;
- (id)bitmapRenderingQualityInfo;
- (void)performBlockWithImager:(CDUnknownBlockType)arg1;
- (BOOL)drawCurrentPageInContext:(struct CGContext *)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect)arg3 createPage:(BOOL)arg4;
- (BOOL)setInfosToCurrentPage;
- (BOOL)preparePage:(unsigned long long)arg1;
- (BOOL)incrementPage;
- (void)teardown;
- (void)setup;
- (BOOL)isQuit;
- (void)quit;
- (BOOL)isCancelled;
- (void)cancel;
- (BOOL)exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id *)arg4;
- (BOOL)exportToURL:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (BOOL)p_exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id *)arg4;
- (void)drawCurrentPageWithContext:(struct CGContext *)arg1 returnSuccess:(char *)arg2;
- (void)drawAllPagesWithContext:(struct CGContext *)arg1 returnSuccess:(char *)arg2;
- (void)waitForRecalcToFinish;
- (void)p_drawCurrentPageWithContext:(struct CGContext *)arg1 returnSuccess:(char *)arg2 createPage:(BOOL)arg3;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1 imager:(id)arg2;
- (id)p_renderingExporterDelegate;
- (id)documentRoot;
- (double)totalProgess;
- (id)currentInfos;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

