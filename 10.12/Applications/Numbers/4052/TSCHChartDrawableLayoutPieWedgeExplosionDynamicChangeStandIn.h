//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHLayoutTrackerBasedDynamicChangeStandIn.h"

@class TSCHPieWedgeExplosionValues;

@interface TSCHChartDrawableLayoutPieWedgeExplosionDynamicChangeStandIn : TSCHLayoutTrackerBasedDynamicChangeStandIn
{
    TSCHPieWedgeExplosionValues *mPieWedgeExplosions;
}

- (void)protected_chartDrawableLayoutPropertyValueDidChange;
- (void)p_updatePieWedgeExplosions;
- (id)pieWedgeExplosions;
- (void)updateTrackerWithValue:(id)arg1 forKeyPath:(id)arg2;
- (id)dynamicChangeKeys;
- (id)pieWedgeExplosionTracker;
- (void)dealloc;

@end

