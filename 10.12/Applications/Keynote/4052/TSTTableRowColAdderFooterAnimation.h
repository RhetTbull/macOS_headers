//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTableAnimationTask.h"

@class CALayer;

@interface TSTTableRowColAdderFooterAnimation : TSTTableAnimationTask
{
    CALayer *mLayer;
    id mFooterKnobTrackerRock;
}

- (void)finishAnimation:(id)arg1;
- (id)getLayer;
- (BOOL)hasLayer;
- (void)animationDidStopWorker:(id)arg1 finished:(BOOL)arg2;
- (void)teardown;
- (void)dealloc;
- (void)p_releaseAndClearLayers;
- (id)initWithDirector:(id)arg1 observer:(id)arg2 tableRep:(id)arg3 layer:(id)arg4;

@end

