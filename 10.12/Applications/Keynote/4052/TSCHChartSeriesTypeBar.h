//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHChartSeriesType.h"

@interface TSCHChartSeriesTypeBar : TSCHChartSeriesType
{
}

- (id)supportedValueLabelsAxisCombinations;
- (id)axisTypesForValueLabels;
- (id)elementBuilder;
- (BOOL)chunkedBuildsIncludeInterceptValues;
- (id)genericToSpecificPropertyMap;
- (unsigned int)adjustLabelPosition:(unsigned int)arg1 forAxisValue:(double)arg2 intercept:(double)arg3;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg1;
- (id)userInterfaceNameForLabelPosition:(id)arg1;
- (id)legalChartLabelPositions;
- (BOOL)isVertical;
- (BOOL)supportsBarGap;
- (BOOL)supportsSetGap;
- (BOOL)useInBarGapCalculations;
- (unsigned long long)valueDimensions;
- (id)init;
- (int)fillPropertyType;
- (id)fillPropertyTypeName;
- (id)g_genericToSpecificPropertyMapBar;

@end

