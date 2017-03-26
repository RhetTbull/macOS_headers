//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSCHSupportsRendering-Protocol.h"

@class NSArray, NSString, TSCHChartInfo, TSCHChartLayout;

@interface TSCHChartNonRep : NSObject <TSCHSupportsRendering>
{
    TSCHChartInfo *mChartInfo;
    NSArray *mRenderers;
    TSCHChartLayout *mChartLayout;
}

@property(retain, nonatomic) TSCHChartLayout *chartLayout; // @synthesize chartLayout=mChartLayout;
@property(retain, nonatomic) TSCHChartInfo *chartInfo; // @synthesize chartInfo=mChartInfo;
- (void)drawInContext:(struct CGContext *)arg1;
- (BOOL)requireSeparateLabelLayer;
- (BOOL)renderTrendLinesForSeriesIndex:(unsigned long long)arg1;
- (struct CGRect)outerShadowFrame;
- (struct CGRect)convertNaturalRectToLayerRelative:(struct CGRect)arg1;
- (struct CGRect)convertUnscaledToBoundsRect:(struct CGRect)arg1;
- (void)didDrawInLayer:(id)arg1 context:(struct CGContext *)arg2;
- (void)setupForDrawingInLayer:(id)arg1 context:(struct CGContext *)arg2;
- (BOOL)shouldShowLegendHighlight;
- (BOOL)renderElementsShadowOnly;
- (BOOL)renderElementsWithoutShadows;
- (BOOL)renderLabels;
- (BOOL)renderReferenceLines;
- (BOOL)renderGrid;
- (BOOL)renderElements;
- (id)renderValueIndexSetForSeries:(unsigned long long)arg1;
- (id)renderSeriesIndexSet;
- (BOOL)isDrawingIntoPDF;
- (BOOL)is2DRepFor3DChartRep;
- (BOOL)forceRenderBlankBackground;
- (id)commandController;
- (double)viewScale;
- (id)geometry;
- (BOOL)shadowsEnabled;
- (void)clearRenderers;
- (id)renderers;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

