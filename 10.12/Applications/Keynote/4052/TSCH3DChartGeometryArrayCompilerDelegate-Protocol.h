//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TSCH3DChartElementSceneObject, TSCH3DChartGeometryArrayCompiler, TSCH3DChartModelEnumerator, TSCH3DGeometryElementArrays, TSCH3DScene, TSCH3DSceneRenderPipeline;

@protocol TSCH3DChartGeometryArrayCompilerDelegate <NSObject>
- (void)didCompileScene:(TSCH3DScene *)arg1 compiler:(TSCH3DChartGeometryArrayCompiler *)arg2;
- (void)didProcessElementArraysForElements:(TSCH3DChartModelEnumerator *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2 pipeline:(TSCH3DSceneRenderPipeline *)arg3 compiler:(TSCH3DChartGeometryArrayCompiler *)arg4;
- (void)addElementArrays:(TSCH3DGeometryElementArrays *)arg1 compiler:(TSCH3DChartGeometryArrayCompiler *)arg2;
- (BOOL)compileEntireBuffer;
- (BOOL)transformBuffers;
@end

