//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHChartSeriesTypeColumn.h"

@interface TSCHChartSeriesTypeStackedColumn : TSCHChartSeriesTypeColumn
{
}

- (BOOL)supportsBarGap;
- (id)elementBuilder;
- (unsigned long long)numberOfSeriesForCalculatingBarWidth:(id)arg1;
- (unsigned long long)seriesIndexForDrawing:(id)arg1;
- (double)beginDataValueForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 valueAxisID:(id)arg3;
- (double)beginValueForSeries:(unsigned long long)arg1 index:(unsigned long long)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(BOOL)arg4 valueAxis:(id)arg5;
- (id)genericToSpecificPropertyMap;
- (unsigned int)adjustLabelPosition:(unsigned int)arg1 forAxisValue:(double)arg2 intercept:(double)arg3;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg1;
- (id)userInterfaceNameForLabelPosition:(id)arg1;
- (id)legalChartLabelPositions;
- (id)init;
- (id)g_genericToSpecificPropertyMapStackedColumn;

@end

