//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CHBSeries : NSObject
{
}

+ (struct XlChartDataSeries *)xlChartDataSeriesFrom:(id)arg1 forGroup:(unsigned int)arg2 state:(id)arg3;
+ (void)addXlChartAuxSeriesFrom:(id)arg1 to:(struct __CFArray *)arg2 state:(id)arg3;
+ (void)writeLinkData:(struct XlChartDataSeries *)arg1 ofType:(int)arg2 state:(id)arg3;
+ (void)writeCustomLabels:(struct XlChartDataSeries *)arg1 state:(id)arg2;
+ (void)writeWithState:(struct XlChartDataSeries *)arg1 state:(id)arg2;
+ (id)chdSeriesWithState:(id)arg1;
+ (id)readFrom:(struct XlChartDataSeries *)arg1 state:(id)arg2;
+ (void)resolveSeriesStyle:(id)arg1 state:(id)arg2;
+ (struct XlChartSeriesFormat *)xlChartDefaultSeriesFormatFrom:(id)arg1 state:(id)arg2;
+ (void)readXlChartSeriesFormat:(struct XlChartDataSeries *)arg1 chdSeries:(id)arg2 state:(id)arg3;
+ (Class)chdSeriesClassWithState:(id)arg1;
+ (id)getCHDSeriesFromSeriesID:(int)arg1 state:(id)arg2;

@end

