//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHLineElementBuilder.h"

@interface TSCHAreaElementBuilder : TSCHLineElementBuilder
{
}

- (BOOL)p_addBottomStroke:(CDStruct_e0d92598 *)arg1 toPath:(struct CGPath *)arg2 seriesIndex:(unsigned long long)arg3 valuesStart:(unsigned long long)arg4 valuesEnd:(unsigned long long)arg5 withPointsArray:(CDStruct_f3053fc7 *)arg6 withCount:(unsigned long long)arg7;
- (void)p_addTopStroke:(CDStruct_e0d92598 *)arg1 toPath:(struct CGPath *)arg2 withPointsArray:(CDStruct_f3053fc7 *)arg3 withCount:(unsigned long long)arg4 lineType:(int)arg5;
- (CDStruct_f3053fc7 *)p_createPointArrayForSeries:(id)arg1 inAreaFrame:(struct CGRect)arg2 valueStart:(long long)arg3 valueEnd:(long long)arg4 outCount:(unsigned long long *)arg5;
- (BOOL)needsSeparateHitTestingPaths;

@end

