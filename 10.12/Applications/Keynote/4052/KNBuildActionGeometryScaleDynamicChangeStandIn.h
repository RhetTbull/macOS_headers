//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNBuildActionGeometryTrackerBasedDynamicChangeStandIn.h"

@class TSDLayout, TSDLayoutGeometryDynamicSizeChangeStandIn;

@interface KNBuildActionGeometryScaleDynamicChangeStandIn : KNBuildActionGeometryTrackerBasedDynamicChangeStandIn
{
    TSDLayoutGeometryDynamicSizeChangeStandIn *mGhostLayoutGeometryDynamicChangeStandIn;
    TSDLayout *mGhostLayout;
}

- (id)ghostLayoutGeometryDynamicChangeStandIn;
@property(nonatomic) double actionScaledHeight;
@property(nonatomic) double actionScaledWidth;
@property(nonatomic) double actionScale;
- (void)dealloc;
- (id)initWithBuild:(id)arg1 interactiveCanvasController:(id)arg2 ghostLayoutProxy:(id)arg3 resizeTracker:(id)arg4 keyPath:(id)arg5;

@end

