//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DChartAreaSceneObject.h"

@interface TSCH3DChartStackedAreaSceneObject : TSCH3DChartAreaSceneObject
{
}

+ (float)depthLimitFactorForSeriesCount:(long long)arg1 maxLimitingSeries:(long long)arg2;
+ (BOOL)supportsChartSeriesDepthOffset;
+ (float)chartSeriesDepth;
+ (float)chartSeriesPolygonOffset;
+ (id)chartSeriesType;
- (void)sortElements:(vector_cd7372eb *)arg1 pipeline:(id)arg2;
- (float)depthForScene:(id)arg1;
- (BOOL)transparencyDepthMask;
- (id)areaClipPlaneEffect;

@end

