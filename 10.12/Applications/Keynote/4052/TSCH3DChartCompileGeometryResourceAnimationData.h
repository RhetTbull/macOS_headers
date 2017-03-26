//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DChartCompileAnimationData.h"

@class TSCH3DChartAnimationDataGeometryResource;

@interface TSCH3DChartCompileGeometryResourceAnimationData : TSCH3DChartCompileAnimationData
{
    TSCH3DChartAnimationDataGeometryResource *mCurrentData;
}

+ (void)submitToProcessor:(id)arg1 portion:(int)arg2 scene:(id)arg3 seriesIndex:(unsigned long long)arg4;
+ (id)geometryResourceAnimationDataForScene:(id)arg1 seriesIndex:(unsigned long long)arg2;
- (void)didProcessElementArraysForElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 compiler:(id)arg4;
- (void)processElementArrays;
- (struct GeometryArrays)p_cullBackfaces;
- (void)addAreaGeometryCapAttributes;
- (id)p_makeWholeBufferWithClass:(Class)arg1;
- (id)compiledGeometry;
- (BOOL)compileEntireBuffer;
- (BOOL)transformBuffers;
- (void)dealloc;

@end

