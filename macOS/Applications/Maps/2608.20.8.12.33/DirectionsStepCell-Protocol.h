//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GEOComposedRouteStep, Route, UIView;

@protocol DirectionsStepCell <NSObject>
+ (double)heightForWidth:(double)arg1 route:(Route *)arg2 step:(GEOComposedRouteStep *)arg3 idiom:(long long)arg4;
+ (unsigned long long)signViewIconSize;
+ (CDStruct_afa449f9)cellMetricsForIdiom:(long long)arg1;
@property(retain, nonatomic) UIView *trailingView;
@property(nonatomic) BOOL isSelectedRow;
- (void)setIsDimmedStep:(BOOL)arg1;
- (void)setRoute:(Route *)arg1 step:(GEOComposedRouteStep *)arg2 stepIndex:(unsigned long long)arg3 alignToLeftEdgeIfNoManeuverSign:(BOOL)arg4 size:(long long)arg5;
@end

