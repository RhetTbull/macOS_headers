//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCHChartInfo;

@interface TSCH3DAbstractLimitingSeriesUpgrader : NSObject
{
    TSCHChartInfo *mChartInfo;
    CDUnknownBlockType mWillModifyBlock;
}

+ (id)upgraderWithChartInfo:(id)arg1;
+ (double)depthFactorForAdjustingNumberOfSeries:(unsigned long long)arg1 chartType:(id)arg2 fromOldLimitingSeries:(unsigned long long)arg3 toNewLimitingSeries:(unsigned long long)arg4;
+ (BOOL)chartTypeUsesSeriesLimiting:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType willModifyBlock; // @synthesize willModifyBlock=mWillModifyBlock;
- (void)upgradeForSpice:(BOOL)arg1 naturalSize:(struct CGSize)arg2;
- (void)mutateInfoByAdjustingScaleFromLayoutSettings:(const CDStruct_2671d966 *)arg1 toLayoutSettings:(const CDStruct_2671d966 *)arg2;
- (id)adjustedScaleFromLayoutSettings:(const CDStruct_2671d966 *)arg1 toLayoutSettings:(const CDStruct_2671d966 *)arg2;
- (unsigned long long)numberOfSeries;
- (void)mutateInfoWithContainingViewport:(id)arg1 scene:(id)arg2;
- (id)constantDepthInfoChartScaleForInfoChartScale:(id)arg1;
- (void)mutateInfoWithMutations:(id)arg1;
- (id)configuredSceneWithLayoutSettings:(CDStruct_2671d966)arg1;
- (void)configureScene:(id)arg1;
- (CDStruct_2671d966)upgradedLayoutSettings;
- (CDStruct_2671d966)oldLayoutSettings;
- (CDStruct_2671d966)p_oldLayoutSettingsForSpice:(BOOL)arg1;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1;

@end

