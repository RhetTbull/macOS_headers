//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DChartType.h"

@interface TSCHChartTypePie3D : TSCH3DChartType
{
}

- (BOOL)approximatesTitleAccommodationUsingLegendSize;
- (id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(struct CGSize)arg3 imageScale:(double)arg4 swatchFrame:(struct CGRect)arg5 documentRoot:(id)arg6 shouldCache:(char *)arg7;
- (id)categoryLabelPositioner;
- (id)valueLabelPositioner;
- (id)animationDeliveryStylesForFilter:(id)arg1;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsBevels;
- (id)defaultSeriesType:(unsigned long long)arg1;
- (id)userInterfaceName;
- (id)animationFilters;
- (id)init;
- (long long)inspectorPopUpTag;
- (id)titlePositionerWithInfo:(id)arg1 scene:(id)arg2;
- (struct TSCH3DChartRotationLimit)rotation3DLimit;
- (void)setupPresetImageChart:(id)arg1;
- (struct CGRect)adjustChartFrame:(struct CGRect)arg1 forPresetImageTarget:(int)arg2;
- (id)cascadeTimeSliceWithChartInfo:(id)arg1 renderSeriesProvider:(id)arg2 animationClass:(Class)arg3;
- (id)timeSliceWithChartInfo:(id)arg1 renderSeriesProvider:(id)arg2 animationClass:(Class)arg3 deliveryStyle:(unsigned long long)arg4;

@end

