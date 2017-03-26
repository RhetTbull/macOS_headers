//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHRenderer.h"

@interface TSCHChartAbstractLineElementsRenderer : TSCHRenderer
{
}

- (void)p_renderLabelsIntoContext:(struct CGContext *)arg1 seriesIndex:(unsigned long long)arg2 model:(id)arg3 modelCache:(id)arg4 bodyLayoutItem:(id)arg5 valueSet:(id)arg6;
- (void)p_renderIntoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (void)p_finishContextAfterRendering:(struct CGContext *)arg1 modelCache:(id)arg2 didEnableTransparencyLayer:(BOOL)arg3;
- (void)p_setupContextForRendering:(struct CGContext *)arg1 layerRect:(struct CGRect)arg2 modelCache:(id)arg3 shadow:(id)arg4 outDidEnableTransparencyLayer:(char *)arg5;
- (id)symbolTransformsForRenderingElements;
- (struct CGAffineTransform)p_adjustTransformForAADefeatInContext:(struct CGContext *)arg1 inTransform:(struct CGAffineTransform)arg2 forSeriesShape:(struct CGPath *)arg3 inBodyBounds:(struct CGRect)arg4;
- (id)p_findChartRootLayoutItem:(id)arg1;
- (void)p_clipOutSymbolsInContext:(struct CGContext *)arg1 withTransformArray:(struct CGAffineTransform *)arg2 withCount:(unsigned long long)arg3 forSeries:(id)arg4;
- (BOOL)useBlendModeCopyForTransparencyLayer;
- (int)chunkPlane;

@end

