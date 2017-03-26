//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHChartBodyLayoutItem.h"

@class TSCHPieBodyLayoutItemPathCache;

@interface TSCHChartPieBodyLayoutItem : TSCHChartBodyLayoutItem
{
    TSCHPieBodyLayoutItemPathCache *mPathCache;
}

@property(retain) TSCHPieBodyLayoutItemPathCache *p_pathCache; // @synthesize p_pathCache=mPathCache;
- (id)pathCacheForSeries:(unsigned long long)arg1;
- (id)knobsOfElementForSeries:(unsigned long long)arg1;
- (struct CGPath *)pathOfElementForSeries:(unsigned long long)arg1 outWedgeCenterPoint:(struct CGPoint *)arg2;
- (struct CGAffineTransform)transformForRenderingElementForSeries:(unsigned long long)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3;
- (struct CGAffineTransform)transformForRenderingLabelForSeries:(unsigned long long)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3;
- (id)renderersWithRep:(id)arg1;
- (struct CGRect)calcDrawingRect;
- (struct CGRect)calcOverhangRect;
- (struct CGSize)overhangSizeForBodySize:(struct CGSize)arg1;
- (struct CGSize)bodySizeForOverhangSize:(struct CGSize)arg1;
- (void)p_collectMaxRatio:(double *)arg1 maxLabelOverhang:(double *)arg2 maxWedgeExplosion:(float *)arg3 maxComboExplosion:(float *)arg4;
- (void)setLayoutSize:(struct CGSize)arg1;
- (void)dealloc;

@end

