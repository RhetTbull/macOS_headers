//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSCH3DChartScene : NSObject
{
    struct ChartSceneInfo mSceneInfo;
}

+ (void)addObjectsToSceneWithSceneInfo:(const struct ChartSceneInfo *)arg1;
+ (BOOL)supportsValueAxisLabelAlignmentCaching;
- (void)addAllObjectsToScene;
- (void)addSeriesObjectsToScene;
- (void)addObjectsToScene;
- (void)addAllLabelsToScene;
- (void)addLabelsToScene;
- (void)addChartTitlesToScene;
- (void)adjustSceneSettings;
- (const CDStruct_2671d966 *)layoutSettings;
- (id)seriesType;
- (id)chartType;
- (id)chartInfo;
- (id)scene;
- (id)initWithSceneInfo:(const struct ChartSceneInfo *)arg1;

@end

